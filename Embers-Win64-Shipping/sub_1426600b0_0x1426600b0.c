// 函数: sub_1426600b0
// 地址: 0x1426600b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x90)
int64_t result = sx.q(*(arg1 + 0x98))

for (void* r14 = &i[result]; i != r14; i = &i[1])
    int64_t* rbx_1 = *i
    
    if (rbx_1 != 0)
        void* const rax_6
        
        if ((*(rbx_1 + 0x5c) & 8) == 0)
            int32_t rax = *(rbx_1 + 0xc)
            
            if (rax s>= data_143e1d9b4)
                rax_6 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax)
                uint32_t rdx_1 = zx.d(temp0_1)
                int32_t rax_2 = temp1_1 + rdx_1
                rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
        
        if ((*(rbx_1 + 0x5c) & 8) != 0 || ((*(rax_6 + 8) u>> 0x1d).b & 1) != 0)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            int64_t rax_8 = *rbx_1
            
            if (arg3 != 0)
                (*(rax_8 + 0x740))(rbx_1, arg2)
            else
                void* rax_9 = (*(rax_8 + 0x150))(rbx_1)
                int64_t* rdi_1
                
                if (rax_9 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = *(rax_9 + 0x120)
                    
                    if (rdi_1 == 0)
                        rdi_1 = nullptr
                    else
                        void* rax_10 = sub_14269bba0()
                        void* rdx_3 = rdi_1[2]
                        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                        
                        if (rax_11.d s> *(rdx_3 + 0x38)
                                || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                            rdi_1 = nullptr
                
                int32_t rax_13 = sub_14265c0d0(rdi_1, rbx_1)
                int64_t r9_1 = *rbx_1
                (*(r9_1 + 0x738))(rbx_1, arg2, zx.q(rax_13), r9_1)
            
            result = (*(*rbx_1 + 0x748))(rbx_1)

return result
