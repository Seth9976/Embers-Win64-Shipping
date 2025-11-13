// 函数: sub_1427a6c80
// 地址: 0x1427a6c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg2 = 0
arg2[1] = 0

if (*(arg1 + 0x38) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x30)
        int16_t* rdx
        
        if (arg3[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg3
        
        int16_t* const rcx
        
        if (*(rax_1 + r14_1 + 0x10) == 0)
            rcx = &data_142d40450
        else
            rcx = *(rax_1 + r14_1 + 8)
        
        if (sub_140a54510(rcx, rdx) == 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int64_t r15_1 = *(arg1 + 0x30)
            int32_t rax_3 = (rsi_1 + 1).d
            arg2[1].d = rax_3
            
            if (rax_3 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_1 << 3)) = *(r14_1 + r15_1)
        
        i += 1
        r14_1 = &r14_1[6]
    while (i s< *(arg1 + 0x38))

return arg2
