// 函数: sub_1410177f0
// 地址: 0x1410177f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 0x250) + 8))(arg1 + 0x250)
*(arg1 + 0x3b79) = 0
memset(arg1 + 0x3560, 0, 0x300)
int32_t result = 0
void* r14 = arg1 + 0x3860
*(arg1 + 0x3b60) = 0
*(arg1 + 0x3b68) = 0

for (int32_t i = 0; i u< 6; )
    int32_t j = 0
    void* rdi_1 = r14
    
    do
        int64_t* rbx_1 = *rdi_1
        *rdi_1 = 0
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                char rax_1
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_1 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                    result = (**rbx_1)(rbx_1, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_2 = sub_140a20af0()
                        uint64_t rdx_1 = zx.q(rax_2)
                        void* const rax_3
                        
                        if (rax_2 != 0)
                            rax_3 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                                + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                        else
                            rax_3 = nullptr
                        
                        *(rax_3 + 8) = rbx_1
                        result = sub_1405a42f0(&data_143f02390, rdx_1.d)
        
        j += 1
        rdi_1 += 8
    while (j u< 0x10)
    
    i += 1
    r14 -= -0x80

if (*(arg1 + 0x136) == 0)
    result = 0
    __builtin_memset(arg1 + 0x3508, 0, 0x54)
    *(arg1 + 0x3b6c) = 0x22
    *(arg1 + 0x3b7a) = 0

return result
