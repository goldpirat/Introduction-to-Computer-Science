divisors :: Int -> [Int]
divisors n = [d | d <- [1..n], n `mod` d == 0]
