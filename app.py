import streamlit as st
import yfinance as yf
import pandas as pd
import ta


#page setting
st.set_page_config(page_title="40BeLow", layout="wide")
st.title("40BeLow")


#RSI
rsi_threshold = st.slider("RSI < ", 10, 50, 40)

def get_sp500_table():
    url = "https://en.wikipedia.org/wiki/List_of_S%26P_500_companies"
    tables = pd.read_html(url)
    for table in tables:
        if 'Symbol' in table.columns:
            return table
    raise ValueError("no list")

def fix_ticker(ticker):
    return ticker.replace('.', '-')

sp500 = get_sp500_table()
tickers = [fix_ticker(t) for t in sp500['Symbol'].tolist()]


#data importing
@st.cache_data
def get_rsi_data(tickers, period="6month", interval="1day"):
    results = []
    for ticker in tickers:
        try:
            data = yf.download(ticker, period=period, interval=interval, progress=False)
            if data.empty:
                continue
            data['RSI'] = ta.momentum.RSIIndicator(data['Close'], window=14).rsi()
            latest_rsi = data['RSI'].iloc[-1]
            latest_price = data['Close'].iloc[-1]
            results.append({
                'ticker': ticker,
                'RSI': round(latest_rsi, 2),
                'price': round(latest_price, 2)
            })
        except:
            continue
    return pd.DataFrame(results)

with st.spinner("Loading..."):
    df = get_rsi_data(tickers)


#filtering
filtered_df = df[df['RSI'] <= rsi_threshold].sort_values(by='RSI')


#searching
search = st.text_input("search ticker").upper()
if search:
    filtered_df = filtered_df[filtered_df['티커'].str.contains(search)]

st.subheader(f"Under {rsi_threshold}")
st.dataframe(filtered_df, use_container_width=True)
st.caption("data from Yahoo Finance")