// 函数: sub_1406bfd50
// 地址: 0x1406bfd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xc)
int64_t rdx = sx.q(arg1[1].d)
int32_t r9_1 = r8 - rdx.d
int64_t result = sx.q(r9_1) << 3

if (result u>= 0x4000)
label_1406bfd81:
    
    if (r9_1 s> 0x40 || rdx.d == 0)
        if (rdx.d s> 0)
            result = sub_140a846a0(rdx << 3, 0)
            r8 = *(arg1 + 0xc)
            rdx = result u>> 3
        
        if (rdx.d != r8)
            *(arg1 + 0xc) = rdx.d
            int64_t rcx_3 = *arg1
            
            if (rcx_3 != 0 || rdx.d != 0)
                result = sub_140a84c80(rcx_3, sx.q(rdx.d) << 3, 0)
                *arg1 = result
else
    result = zx.q(r8 * 2)
    
    if ((rdx * 3).d s< result.d)
        goto label_1406bfd81

return result
