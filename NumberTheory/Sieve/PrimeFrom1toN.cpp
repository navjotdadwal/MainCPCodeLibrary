vector<bool> is_prime(N+1, true);
void precompute()
{
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    if (is_prime[i] && (long long)i * i < N) {
        for (int j = i * i; j < N; j += i)
            is_prime[j] = false;
    }
  }  
}
