// 函数: sub_141962930
// 地址: 0x141962930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x1c) == 0
int32_t result = 0x43000d48
*arg1 = &data_143000d48

if (not(cond:0))
    int32_t i = 0
    
    if (arg1[3].d s> 0)
        int64_t r15_1 = 0
        
        do
            int32_t* rdi_2 = arg1[2] + r15_1
            int32_t rcx = *rdi_2
            
            if (rcx == 0 || rcx == 1 || rcx == 2 || rcx == 3)
                int64_t* rbx_1 = *(rdi_2 + 8)
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    if (rbx_1[2].b == 0)
                        result = 0
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            result = *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_1 = sub_140a20af0()
                            uint64_t rdx_1 = zx.q(rax_1)
                            void* const rax_2
                            
                            if (rax_1 != 0)
                                rax_2 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                            else
                                rax_2 = nullptr
                            
                            *(rax_2 + 8) = rbx_1
                            result = sub_1405a42f0(&data_143f02390, rdx_1.d)
                    else
                        result = (**rbx_1)(rbx_1, 1)
                
                int64_t* rbx_2 = *(rdi_2 + 0x10)
                
                if (rbx_2 != 0)
                    result = rbx_2[1].d
                    rbx_2[1].d -= 1
                    
                    if (result == 1)
                        if (rbx_2[2].b == 0)
                            result = 0
                            bool z_2
                            
                            if (0 == *(rbx_2 + 0xc))
                                *(rbx_2 + 0xc) = 1
                                z_2 = true
                            else
                                result = *(rbx_2 + 0xc)
                                z_2 = false
                            
                            if (z_2)
                                int32_t rax_7 = sub_140a20af0()
                                uint64_t rdx_2 = zx.q(rax_7)
                                void* const rax_8
                                
                                if (rax_7 != 0)
                                    rax_8 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                                else
                                    rax_8 = nullptr
                                
                                *(rax_8 + 8) = rbx_2
                                result = sub_1405a42f0(&data_143f02390, rdx_2.d)
                        else
                            result = (**rbx_2)(rbx_2, 1)
            
            i += 1
            r15_1 += 0x20
        while (i s< arg1[3].d)

return result
