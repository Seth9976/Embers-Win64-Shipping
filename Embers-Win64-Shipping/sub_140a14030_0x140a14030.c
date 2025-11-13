// 函数: sub_140a14030
// 地址: 0x140a14030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
bool cond:0_1

if (arg2 == 0)
    cond:0_1 = *(arg1 + 0x9c) != arg3
    *(arg1 + 0x9c) = arg3
label_140a14064:
    rax.b = cond:0_1
    
    if (rax.b != 0)
        rax = *(arg1 + 0x98)
        
        if (rax == 3)
            (*(*(arg1 - 8) + 0x40))(arg1 - 8, arg1 + 0xa8)
            rax = *(arg1 + 0x98)
        
        if (rax != 0)
            int64_t rax_2 = sx.q(*(arg1 + 0x9c))
            
            if (rax_2.d != 0xffffffff)
                void* rsi_1 = *(*(arg1 + 0x58) + (rax_2 << 3))
                int64_t arg_20
                char* rax_4 = sub_142a37ef0(rsi_1, &arg_20)
                void* r14_1 = *(arg1 + 0x40)
                int32_t rax_5 = sub_140bc8890(rsi_1)
                int32_t rbx_1 = int.d(sub_142a38630(rsi_1))
                sub_140a13150(r14_1, sub_141b25240(rsi_1), rbx_1, rax_5, rax_4, arg_20)
            
            int64_t rax_9 = sx.q(*(arg1 + 0xa0))
            
            if (rax_9.d != 0xffffffff)
                sub_140a13270(*(arg1 + 0x38), sub_141b25240(*(*(arg1 + 0x48) + (rax_9 << 3))))
            
            rax_9.b = 1
            return rax_9
else if (arg2 == 6)
    cond:0_1 = *(arg1 + 0xa0) != arg3
    *(arg1 + 0xa0) = arg3
    goto label_140a14064
rax.b = 1
return rax
