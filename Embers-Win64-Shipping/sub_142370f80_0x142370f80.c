// 函数: sub_142370f80
// 地址: 0x142370f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)

if (data_143f5b298 != 0)
    int32_t rax = *(arg1 + 0xc)
    void* const rax_6
    
    if (rax s>= data_143e1d9b4)
        rax_6 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_6 + 8) u>> 0x1e)
    
    if ((result.b & 1) == 0 && arg1[6].d s>= 2)
        result = sub_140cd85e0(arg1[4])
        int32_t rbx_1 = arg1[6].d
        int32_t rbx_2 = rbx_1 - 1
        
        if (rbx_1 - 1 s>= 0)
            int64_t r14_1 = sx.q(rbx_2) << 3
            int64_t r12_1 = r14_1
            int64_t r15_2 = sx.q(rbx_2 + 1) << 3
            int32_t temp3_1
            
            do
                result = arg1[5]
                void* rsi_1 = *(r14_1 + result)
                
                if (rsi_1 != 0)
                    void* rax_10 = sub_1425a2090()
                    void* rdx_4 = *(rsi_1 + 0x10)
                    result = sx.q(*(rax_10 + 0x38))
                    
                    if (result.d s<= *(rdx_4 + 0x38))
                        uint64_t result_1 = result
                        result = *(rdx_4 + 0x30)
                        
                        if (*(result + (result_1 << 3)) == rax_10 + 0x30)
                            result = *(rsi_1 + 0x70)
                            
                            if (result != 0)
                                uint32_t rcx_5 = zx.d(*(result + 0x16d))
                                result = data_143f5b298
                                
                                if ((((rcx_5 u>> 5).b ^ (*(result + 0x8e4)).b) & 1) != 0)
                                    int32_t rax_11 = arg1[6].d
                                    int32_t rcx_9 = rax_11 - rbx_2
                                    
                                    if (rcx_9 != 1)
                                        int64_t rax_12 = arg1[5]
                                        memmove(r12_1 + rax_12, r15_2 + rax_12, (rcx_9 - 1) << 3)
                                        rax_11 = arg1[6].d
                                    
                                    arg1[6].d = rax_11 - 1
                                    result = sub_1405c53d0(&arg1[5])
                
                r15_2 -= 8
                r12_1 -= 8
                r14_1 -= 8
                temp3_1 = rbx_2
                rbx_2 -= 1
            while (temp3_1 - 1 s>= 0)

return result
