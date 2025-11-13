// 函数: sub_142371210
// 地址: 0x142371210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)

if (data_143f593a4 != 0)
    int32_t rdi_1 = arg1[6].d
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t r14_1 = sx.q(rdi_2) << 3
        int64_t r15_1 = r14_1
        int32_t temp1_1
        
        do
            result = arg1[5]
            void* rsi_1 = *(r14_1 + result)
            
            if (rsi_1 != 0)
                void* rax_1 = sub_1425a1a30()
                void* rdx_1 = *(rsi_1 + 0x10)
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s<= *(rdx_1 + 0x38))
                    result = *(rdx_1 + 0x30)
                
                if (rax_2.d s> *(rdx_1 + 0x38) || *(result + (rax_2 << 3)) != rax_1 + 0x30
                        || *(rsi_1 + 0x38) != arg1)
                    int32_t rdx_2 = arg1[6].d
                    int32_t rax_5 = rdx_2 - rdi_2 - 1
                    
                    if (rax_5 s>= 1)
                        rax_5 = 1
                    
                    if (rax_5 != 0)
                        int64_t rcx_1 = arg1[5]
                        memcpy(rcx_1 + r15_1, rcx_1 + (sx.q(rdx_2 - rax_5) << 3), rax_5 << 3)
                        rdx_2 = arg1[6].d
                    
                    arg1[6].d = rdx_2 - 1
                    result = sub_1405c53d0(&arg1[5])
            
            r15_1 -= 8
            r14_1 -= 8
            temp1_1 = rdi_2
            rdi_2 -= 1
        while (temp1_1 - 1 s>= 0)

void* rcx_4 = data_143f5b298

if (rcx_4 != 0)
    result = sub_1423dcff0(rcx_4)
    
    if (result != 0)
        return sub_141e834a0(result, arg1) __tailcall

return result
