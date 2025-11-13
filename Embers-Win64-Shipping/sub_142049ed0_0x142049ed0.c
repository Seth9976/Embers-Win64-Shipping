// 函数: sub_142049ed0
// 地址: 0x142049ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = 2
void* rsi = &arg1[8]

for (int64_t i = 2; i != 0; )
    int64_t* rbx_1 = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_4 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_4)
                    void* const rax_5
                    
                    if (rax_4 != 0)
                        rax_5 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_5 = nullptr
                    
                    *(rax_5 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)

int64_t i_1 = 2
void* rsi_1 = &arg1[6]

do
    int64_t* rbx_2 = *(rsi_1 - 8)
    rsi_1 -= 8
    i_1 -= 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_11
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_11 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_13 = sub_140a20af0()
                    uint64_t rdx_2 = zx.q(rax_13)
                    void* const rax_14
                    
                    if (rax_13 != 0)
                        rax_14 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                    else
                        rax_14 = nullptr
                    
                    *(rax_14 + 8) = rbx_2
                    sub_1405a42f0(&data_143f02390, rdx_2.d)
while (i_1 != 0)

void* rdi = &arg1[4]

do
    int64_t* rbx_3 = *(rdi - 8)
    rdi -= 8
    i_2 -= 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_20
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_20 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_3
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_3 = true
                else
                    *(rbx_3 + 0xc)
                    z_3 = false
                
                if (z_3)
                    int32_t rax_22 = sub_140a20af0()
                    uint64_t rdx_3 = zx.q(rax_22)
                    void* const rax_23
                    
                    if (rax_22 != 0)
                        rax_23 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                    else
                        rax_23 = nullptr
                    
                    *(rax_23 + 8) = rbx_3
                    sub_1405a42f0(&data_143f02390, rdx_3.d)
while (i_2 != 0)

return sub_1419948a0(arg1) __tailcall
