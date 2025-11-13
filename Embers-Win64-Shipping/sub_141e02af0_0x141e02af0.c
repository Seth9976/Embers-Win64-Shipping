// 函数: sub_141e02af0
// 地址: 0x141e02af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141e01bc0(*(arg1 + 0x10))

if (rax != 0)
    int64_t rdx = *rax
    int64_t* rax_1 = (*(rdx + 0x40))(rax, rdx)
    int64_t* i = *rax_1
    
    for (void* r14_1 = &i[sx.q(rax_1[1].d)]; i != r14_1; i = &i[1])
        void* result = *(sx.q(*(*i + 0x4c)) + arg1 + 0x30)
        
        if (result != 0)
            int32_t rax_4 = *(result + 0xc)
            void* const rax_10
            
            if (rax_4 s>= data_143e1d9b4)
                rax_10 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_4)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_6 = temp1_1 + rdx_2
                rax_10 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
            
            if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_13 = sub_14245f6d0()
                void* rbp_1 = *(result + 0x10)
                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                
                if (rax_14.d s<= *(rbp_1 + 0x38)
                        && *(*(rbp_1 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
                    void* const rax_19
                    
                    if (arg2 == 0)
                        rax_19 = nullptr
                    else
                        void* rax_16 = sub_14245f6d0()
                        
                        if (rax_16 == 0)
                            rax_19 = nullptr
                        else
                            int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                            
                            if (rax_17.d s> *(arg2 + 0x38)
                                    || *(*(arg2 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                rax_19 = nullptr
                            else
                                rax_19 = arg2
                    
                    if (rbp_1 == rax_19)
                        return result

return nullptr
