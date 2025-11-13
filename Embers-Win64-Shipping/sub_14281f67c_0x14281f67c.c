// 函数: sub_14281f67c
// 地址: 0x14281f67c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 8)
int64_t rsi = *(arg1 + 0x10)
int32_t rbx = 0

while (true)
    if (rdi == rsi)
        return zx.q(rbx)
    
    int64_t zmm1 = arg2[1].q
    int128_t var_28 = *arg2
    
    if (zmm1.d + rbx s< 0)
        int64_t var_18_3 = 0
    else
        int64_t var_18_2 = zmm1 + sx.q(rbx)
    
    int32_t rax_2 = sub_14281f52c(rdi, &var_28)
    
    if (rax_2 == 0xffffffff)
        break
    
    rbx += rax_2
    rdi = &rdi[8]

return 0xffffffff
