# Black-Scholes option pricing

I implement the pricing of a Call/Put/Digital option.

To generate random numbers from a Gaussian distribution we use the Box-Muller transformation.\
Let $U_1$ and $U_2$ independent samples from the uniform distribution in [0,1]. Let
$$Z_1 = R \cos \theta = \sqrt{-2\ln U_1} \cos (2\pi U_2),$$
$$Z_2 = R \sin \theta = \sqrt{-2\ln U_1} \sin (2\pi U_2),$$
then, $Z_1$ and $Z_2$ are independent and will follow a standard normal distribution.



