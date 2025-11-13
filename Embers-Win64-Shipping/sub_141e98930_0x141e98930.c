// 函数: sub_141e98930
// 地址: 0x141e98930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d23dc0(arg2, 0x30)

if (result.b == 0)
    int32_t rax = *(arg2 + 0xc)
    int64_t rbx_1 = 0
    void* const rax_6
    
    if (rax s>= data_143e1d9b4)
        rax_6 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_6 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0 && arg1 != 0)
        void* rax_8 = sub_14247bf70()
        void* rdx_3 = *(arg1 + 0x10)
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
            void* rax_12 = sub_140bdf670()
            void* rdx_5 = *(arg1 + 0x10)
            result = sx.q(*(rax_12 + 0x38))
            
            if (result.d s<= *(rdx_5 + 0x38))
                uint64_t result_1 = result
                result = *(rdx_5 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_12 + 0x30)
                    void** i = *(arg1 + 0x280)
                    result = sx.q(*(arg1 + 0x288))
                    
                    for (void* rbp_1 = &i[result]; i != rbp_1; i = &i[1])
                        void* rdi_2 = *i
                        
                        if (rdi_2 != 0)
                            void* rax_13 = sub_1425b5d50()
                            void* rdx_6 = *(rdi_2 + 0x10)
                            result = sx.q(*(rax_13 + 0x38))
                            
                            if (result.d s<= *(rdx_6 + 0x38))
                                uint64_t result_2 = result
                                result = *(rdx_6 + 0x30)
                                
                                if (*(result + (result_2 << 3)) == rax_13 + 0x30)
                                    result = sub_141e99060(arg2, rdi_2)
        else
            int64_t* rdi_1 = *(arg1 + 0x258)
            result = &rdi_1[sx.q(*(arg1 + 0x260))]
            uint64_t r14_2 = sx.q(*(arg1 + 0x260)) << 3 u>> 3
            
            if (rdi_1 u> result)
                r14_2 = 0
            
            if (r14_2 != 0)
                do
                    void* rdx_4 = *rdi_1
                    
                    if (rdx_4 != 0)
                        result = sub_141e99060(arg2, rdx_4)
                    
                    rdi_1 = &rdi_1[1]
                    rbx_1 += 1
                while (rbx_1 != r14_2)

return result
