// 函数: sub_14284d320
// 地址: 0x14284d320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x30)

if (arg2 u< rcx)
    int32_t rax_1 = *(arg1 + 0x44)
    int64_t r10_1 = 0
    
    if (rax_1 s>= 2)
        if (rax_1 s<= 3)
            if (arg4 == 0 && arg3 u< *(arg1 + 0x28))
                return (rcx * arg3 + arg2) * 0x30 + *(arg1 + 0x48)
        else if (rax_1 == 4 && arg3 == 0)
            uint64_t rcx_1 = *(arg1 + 0x20)
            
            if (arg2 != 0)
                int64_t i
                
                do
                    r10_1 += rcx_1
                    uint64_t rax_3 = rcx_1 u>> 1
                    
                    if (rcx_1 u<= 1)
                        rax_3 = rcx_1
                    
                    rcx_1 = rax_3
                    i = arg2
                    arg2 -= 1
                while (i != 1)
            
            if (arg4 u< rcx_1)
                return (r10_1 + arg4) * 0x30 + *(arg1 + 0x48)

return 0
