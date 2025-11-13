// 函数: sub_142334da0
// 地址: 0x142334da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) = arg2
*(arg1 + 0xa8) = 0

if (*(arg1 + 0xac) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0xa0, 0)

int32_t result = *(arg1 + 0xbc)
*(arg1 + 0xb8) = 0

if (result s< 0 && result != 0)
    result = sub_1405c5570(arg1 + 0xb0, 0)

if (arg3 != 0)
    int64_t rbx_2 = sx.q(arg3[1].d)
    
    if (rbx_2.d != 0)
        int32_t rax = *(arg1 + 0xa8)
        int32_t rdx = rax + rbx_2.d
        
        if (rdx s> *(arg1 + 0xac))
            sub_1405dadb0(arg1 + 0xa0, rdx)
            rax = *(arg1 + 0xa8)
        
        result = memcpy(*(arg1 + 0xa0) + (sx.q(rax) << 2), *arg3, (rbx_2 << 2).d)
        *(arg1 + 0xa8) += rbx_2.d
else if (arg4 != 0)
    int64_t rdi_1 = sx.q(arg4[1].d)
    
    if (rdi_1.d != 0)
        int32_t rax_2 = *(arg1 + 0xb8)
        int32_t rdx_2 = rax_2 + rdi_1.d
        
        if (rdx_2 s> *(arg1 + 0xbc))
            sub_1405c5570(arg1 + 0xb0, rdx_2)
            rax_2 = *(arg1 + 0xb8)
        
        result = memcpy(*(arg1 + 0xb0) + (sx.q(rax_2) << 3), *arg4, (rdi_1 << 3).d)
        *(arg1 + 0xb8) += rdi_1.d

return result
