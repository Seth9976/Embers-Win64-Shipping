// 函数: sub_140689bc0
// 地址: 0x140689bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = arg3

if (arg3 != 0)
    do
        int32_t rsi_1 = i[3]
        int32_t r10_1 = 0
        
        if (rsi_1 != 0)
            uint64_t rdi_1 = zx.q(*i)
            
            do
                int64_t rax_1 = 0
                char* r8 = arg1
                
                if (rdi_1.d != 0)
                    do
                        char rcx = *r8
                        r8 = &r8[1]
                        
                        if (rcx != (zx.q(r10_1) + *(i + 0x10))[rax_1])
                            break
                        
                        rax_1 += 1
                    while (rax_1 u< rdi_1)
                
                if (r8 == arg2)
                    return arg2
                
                r10_1 += rdi_1.d
            while (r10_1 u< rsi_1)
        
        i = *(i + 0x18)
    while (i != 0)

return arg1
