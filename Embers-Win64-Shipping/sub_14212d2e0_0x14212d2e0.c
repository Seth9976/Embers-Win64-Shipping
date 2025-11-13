// 函数: sub_14212d2e0
// 地址: 0x14212d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x18c) & 8) != 0)
    int64_t* rax_1 = sub_142006940()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x158))(rax_1, arg1, r8_1)
    *(arg1 + 0x18c) &= 0xf7

*(arg1 + 0x188) += 1
void* rdi_1 = arg1 + 0x10
int64_t i_1 = 4
void* rsi = rdi_1
int32_t result
int64_t i

do
    *(rdi_1 + 0x48) = 0
    *(rdi_1 + 0x50) = 0
    result = sub_1421305d0(rsi)
    
    if (arg2 != 0)
        int64_t* rbx_1 = *rdi_1
        *rdi_1 = 0
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                char rax_2
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
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
                        int32_t rax_3 = sub_140a20af0()
                        uint64_t rdx_1 = zx.q(rax_3)
                        void* const rax_4
                        
                        if (rax_3 != 0)
                            rax_4 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                                + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                        else
                            rax_4 = nullptr
                        
                        *(rax_4 + 8) = rbx_1
                        result = sub_1405a42f0(&data_143f02390, rdx_1.d)
    
    rsi += 0x58
    rdi_1 += 0x58
    i = i_1
    i_1 -= 1
while (i != 1)
return result
