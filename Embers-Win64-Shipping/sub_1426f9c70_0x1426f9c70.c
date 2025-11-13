// 函数: sub_1426f9c70
// 地址: 0x1426f9c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 4).b & 1) != 0)
    void* rbx_1 = *(arg1 + 0x10)
    int64_t* r14_1 = data_143f72220
    int64_t* rdi_1 = r14_1
    void* rbp_1 = &r14_1[sx.q(data_143f72228)]
    
    if (r14_1 != rbp_1)
        do
            int64_t rsi_1
            
            if (*rdi_1 == 0)
                rsi_1 = 0
            else
                void* rax_3 = sub_14273b6f0()
                
                if (rax_3 == 0)
                    rsi_1 = 0
                else
                    rsi_1 = *rdi_1
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rsi_1 + 0x38)
                            || *(*(rsi_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rsi_1 = 0
            
            void* const rax_9
            
            if (rbx_1 == 0)
                rax_9 = nullptr
            else
                void* rax_6 = sub_14273b6f0()
                
                if (rax_6 == 0)
                    rax_9 = nullptr
                else
                    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                    
                    if (rax_7.d s> *(rbx_1 + 0x38)
                            || *(*(rbx_1 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        rax_9 = nullptr
                    else
                        rax_9 = rbx_1
            
            if (rsi_1 == rax_9)
                int32_t rdi_3 = ((rdi_1 - r14_1) s>> 3).d
                
                if (rdi_3 != 0xffffffff)
                    int32_t rcx_2 = data_143f72228
                    int32_t rax_12 = rcx_2 - rdi_3 - 1
                    
                    if (rax_12 s>= 1)
                        rax_12 = 1
                    
                    if (rax_12 != 0)
                        int64_t rcx_4 = data_143f72220
                        memcpy(rcx_4 + (sx.q(rdi_3) << 3), rcx_4 + (sx.q(rcx_2 - rax_12) << 3), 
                            rax_12 << 3)
                        rcx_2 = data_143f72228
                    
                    data_143f72228 = rcx_2 - 1
                    sub_1405c53d0(&data_143f72220)
                
                break
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 != rbp_1)

return sub_140cdba30(arg1) __tailcall
