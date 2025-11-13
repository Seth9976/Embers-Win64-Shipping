// 函数: sub_140f1bf10
// 地址: 0x140f1bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg4[1].d)
int32_t rdx = 1
float zmm3 = arg2 * 0.5f
float zmm4 = arg1 * 0.5f

if (rcx.d s> 1)
    int32_t zmm2 = arg3:4.d
    int32_t* rax_2 = *arg4 + 8
    int64_t rcx_1 = 1
    arg2 = *rax_2
    
    do
        arg1 = rax_2[-2] f* rax_2[2] + arg2
        
        if (not(arg2 <= arg1))
            arg1 = arg2
        
        arg2 = rax_2[5]
        
        if (not(zmm2 f<= arg1 - zmm3 + zmm4) && zmm2 f< arg2 + zmm3 - zmm4)
            return zx.q(rdx - 1)
        
        rdx += 1
        rcx_1 += 1
        rax_2 = &rax_2[5]
    while (rcx_1 s< rcx)

return 0xffffffff
