// 函数: sub_1419004b0
// 地址: 0x1419004b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x70)
void*** rbx = rax
void* const rdi_1

if (rax == 0)
    rdi_1 = nullptr
    rbx = nullptr
else
    int64_t rcx = *(arg1 + 0x58)
    rdi_1 = nullptr
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = rcx
    *rbx = &data_142ff1c10
    __builtin_memset(&rbx[4], 0, 0x24)
    rbx[9].d = 0
    __builtin_memset(&rbx[0xa], 0, 0x1c)
    *(rbx + 0x6c) = 0xffffffff

int64_t* rsi = rbx[4]
rbx[4] = arg3

if (arg3 != 0)
    *(arg3 + 8) += 1

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        char rax_2
        
        if (rsi[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rsi[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rsi)(rsi, 1)
        else
            bool z_1
            
            if (0 == *(rsi + 0xc))
                *(rsi + 0xc) = 1
                z_1 = true
            else
                *(rsi + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_4 = sub_140a20af0()
                
                if (rax_4 != 0)
                    rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_4) u>> 0xe << 3))
                        + (zx.q(rax_4) & 0x3fff) * 0x18
                
                *(rdi_1 + 8) = rsi
                sub_1405a42f0(&data_143f02390, rax_4)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
