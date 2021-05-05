import plotly.graph_objects as go #pip3 install plotly==4.14.3 


# This program gives you key possiblities for a ceasar encrypted text

cipher_text = "TEBKFKQEBZLROPBLCERJXKBSBKQP"
all_freq = {}
i_amount = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25]
char_freq = [0.080, 0.015, 0.030, 0.040, 0.130, 0.020, 0.015, 0.060, 0.065, 0.005, 0.005, 0.035, 0.030, 0.070, 0.080, 0.020, 0.002, 0.065, 0.060, 0.090, 0.030, 0.010, 0.015, 0.005, 0.020, 0.002]
count = 0;
phi_values = []
value = 0
  
for i in cipher_text:
  count += 1
  if i in all_freq:
      all_freq[i] += 1
  else:
      all_freq[i] = 1

for i in i_amount:
  for key in all_freq:
    value += (all_freq[key]/count)*char_freq[((ord(key) - ord('A')) - i)]

  phi_values.append(value)
  value = 0


fig = go.Figure(data=[go.Table(header=dict(values=['i', 'phi(i)']),
                 cells=dict(values=[i_amount, phi_values]))
                     ])
fig.show()