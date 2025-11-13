// 函数: sub_141cdffa0
// 地址: 0x141cdffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(arg2)
uint64_t i

if (arg2 s>= 0 && r8_1.d s< *(arg1 + 0x30))
    void* rax = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax != 0)
        r9_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8_1.d)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r8_1.d & 0x1f))
        uint64_t* rcx_4 = (r8_1 << 5) + *(arg1 + 0x28)
        i = *rcx_4
        
        for (int64_t r8 = i + (sx.q(rcx_4[1].d) << 2); i != r8; i += 4)
            if (*(*(arg1 + 0x60) + sx.q(*i) * 0x18 + 0x10) s> 0)
                goto label_141ce001b
        
        i.b = 1
        return i

label_141ce001b:
i.b = 0
return i
