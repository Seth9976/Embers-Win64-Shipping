// 函数: sub_14226aa70
// 地址: 0x14226aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t i = 0

if (*(arg1 + 0x2678) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* result = *(r14_1 + *(arg1 + 0x2670))
        
        if (result != 0)
            int32_t rax_2 = *(result + 0xc)
            void* const rax_6
            
            if (rax_2 s>= data_143e1d9b4)
                rax_6 = nullptr
            else
                uint32_t rdx = zx.d(rax_2.w)
                
                if (rax_2 s< 0)
                    rax_2 += 0xffff
                    rdx -= 0x10000
                
                rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
            
            if (((*(rax_6 + 8) u>> 0x1d).b & 1) == 0)
                int64_t rdi_1 = *(result + 0x10)
                int64_t* rax_12
                
                if (arg2 == 0)
                    rax_12 = nullptr
                else
                    void* rax_9 = sub_1424a20d0()
                    
                    if (rax_9 == 0)
                        rax_12 = nullptr
                    else
                        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                        
                        if (rax_10.d s> arg2[7].d || *(arg2[6] + (rax_10 << 3)) != rax_9 + 0x30)
                            rax_12 = nullptr
                        else
                            rax_12 = arg2
                
                if (rdi_1 == rax_12)
                    return result
                
                if (sub_14226a9a0(result + 0x2c8, &arg_10) != 0xffffffff)
                    return result
                
                int64_t arg_8 = *(result + 0x10)
                int64_t* rdi_2
                
                if (arg2 == 0)
                    rdi_2 = nullptr
                else
                    void* rax_15 = sub_1424a20d0()
                    
                    if (rax_15 == 0)
                        rdi_2 = nullptr
                    else
                        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                        
                        if (rax_16.d s> arg2[7].d || *(arg2[6] + (rax_16 << 3)) != rax_15 + 0x30)
                            rdi_2 = nullptr
                        else
                            rdi_2 = arg2
                
                void* rcx_6 = rdi_2[0x23]
                
                if (rcx_6 == 0)
                    (*(*rdi_2 + 0x390))(rdi_2)
                    rcx_6 = rdi_2[0x23]
                
                if (sub_14226a9a0(rcx_6 + 0x2c8, &arg_8) != 0xffffffff)
                    return result
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x2678))

return 0
