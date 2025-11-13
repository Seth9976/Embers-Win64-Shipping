// 函数: sub_142826b8c
// 地址: 0x142826b8c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 8)
int64_t rsi = *(arg1 + 0x10)
int32_t rbx = 0

while (true)
    if (rdi == rsi)
        return zx.q(rbx)
    
    int128_t zmm0 = *arg2
    int64_t rcx = zmm0.q
    int128_t var_18 = zmm0
    
    if (rcx.d + rbx s< 0)
        var_18.q = 0
    else
        var_18.q = rcx + sx.q(rbx)
    
    int32_t rax_3 = sub_14282694c(rdi, &var_18)
    
    if (rax_3 == 0xffffffff)
        break
    
    rbx += rax_3
    rdi = &rdi[8]

return 0xffffffff
