# Black-Scholes option pricing

We implement the pricing of a Call/Put/Digital option in C++.

To generate random numbers from a Gaussian distribution we use the Box-Muller transformation.\
Let $u$ and $v$ independent samples from the uniform distribution in [-1,1]. Let
$$s = u^2 + v^2,$$
then if $0 < s < 1$ and we set
$$Z_1 = u  \sqrt{\frac{-2\ln s}{s}},$$
$$Z_2 = v  \sqrt{\frac{-2\ln s}{s}},$$
$Z_1$ and $Z_2$ are independent and will follow a standard normal distribution N(0,1).

To model the stock price we use the Black-Scholes model
$$dS_t = \mu S_t dt + \sigma S dW_t.$$



