// 函数: sub_14100d9f0
// 地址: 0x14100d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[0x27b]
int64_t i = 0x180
void* r14 = nullptr

do
    int64_t* rbx_1 = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_1
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_1 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
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
                    int32_t rax_2 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_2)
                    void* const rax_3
                    
                    if (rax_2 != 0)
                        rax_3 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_3 = nullptr
                    
                    *(rax_3 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)
while (i != 0)

int64_t* rbx_2 = arg1[0xf3]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        char rax_8
        
        if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_8 = sub_1405949a0()
        
        if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
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
                int32_t rax_9 = sub_140a20af0()
                uint64_t rdx_2 = zx.q(rax_9)
                void* const rax_10
                
                if (rax_9 != 0)
                    rax_10 =
                        *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                else
                    rax_10 = nullptr
                
                *(rax_10 + 8) = rbx_2
                sub_1405a42f0(&data_143f02390, rdx_2.d)

int64_t* rbx_3 = *arg1

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

char rax_15

if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
    rax_15 = sub_1405949a0()

if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
    (**rbx_3)(rbx_3, 1)
    return 

bool z_3

if (0 == *(rbx_3 + 0xc))
    *(rbx_3 + 0xc) = 1
    z_3 = true
else
    *(rbx_3 + 0xc)
    z_3 = false

if (not(z_3))
    return 

int32_t rax_16 = sub_140a20af0()

if (rax_16 != 0)
    r14 = *((zx.q(rax_16) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_16) & 0x3fff) * 0x18

*(r14 + 8) = rbx_3
sub_1405a42f0(&data_143f02390, rax_16)
