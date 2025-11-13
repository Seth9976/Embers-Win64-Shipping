// 函数: sub_142227610
// 地址: 0x142227610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = data_143f3a640
int32_t i = 0
*arg1 = result
int32_t rsi = 1
arg1[1] = data_143f3a650

while (i s>= 0)
    if (i s>= *(arg1 + 0x28))
        break
    
    int64_t r14_1 = sx.q(i) * 0xc
    int64_t* rbp_2 = arg1[2].q + r14_1
    void* rax_2
    rax_2, result = sub_141ec4150()
    int32_t rax_3 = sub_141eca540(rax_2, rbp_2)
    
    if (rax_3 == 0xffffffff)
        int32_t rcx_3 = *(arg1 + 0x28)
        int32_t rax_5 = rcx_3 - i
        
        if (rax_5 != 1)
            int64_t r9_1 = arg1[2].q
            memmove(r14_1 + r9_1, r9_1 + sx.q(rsi) * 0xc, (rax_5 - 1) * 0xc)
            rcx_3 = *(arg1 + 0x28)
        
        *(arg1 + 0x28) = rcx_3 - 1
        result = sub_140775970(&arg1[2])
    else
        sub_14227a280(arg1, rax_3, zx.d(rbp_2[1].b))
        i += 1
        rsi += 1

return result
