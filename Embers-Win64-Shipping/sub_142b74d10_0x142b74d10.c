// 函数: sub_142b74d10
// 地址: 0x142b74d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x60))
*(**(arg1 + 0x50) + sx.q(arg2) * 0x10 + 0xc) = result.d
int32_t r8 = *(arg1 + 0x60)
int64_t* rcx = *(arg1 + 0x50)

if (*arg7 s<= 0)
    if (rcx[1].d s<= r8)
        result = sub_142b77260(rcx, r8 * 2, r8)
    
    if (rcx[1].d s> r8 || result != 0)
        int64_t rax_1 = sx.q(*(arg1 + 0x60))
        *(arg1 + 0x60) = rax_1.d + 1
        int32_t* rcx_3 = (rax_1 << 4) + **(arg1 + 0x50)
        rcx_3[2].w = arg5
        result = zx.q(arg6)
        *(rcx_3 + 0xa) = result.w
        *rcx_3 = arg3
        rcx_3[1] = arg4
        rcx_3[3] = 0
    else
        *arg7 = 7

return result
