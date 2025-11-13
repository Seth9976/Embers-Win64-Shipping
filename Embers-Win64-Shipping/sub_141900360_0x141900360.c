// 函数: sub_141900360
// 地址: 0x141900360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x70)
void*** rbx = rax
void* const rsi_1

if (rax == 0)
    rsi_1 = nullptr
    rbx = nullptr
else
    int64_t rcx = *(arg1 + 0x58)
    *rbx = &data_142d3ff08
    rsi_1 = nullptr
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = rcx
    *rbx = &data_142ff1c10
    __builtin_memset(&rbx[4], 0, 0x24)
    rbx[9].d = 0
    __builtin_memset(&rbx[0xa], 0, 0x18)
    *(rbx + 0x6c) = 0xffffffff

rbx[0xd].d = zx.d(arg4)
int64_t* rdi_1 = rbx[0xb]
rbx[0xb] = arg3

if (arg3 != 0)
    *(arg3 + 8) += 1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        char rax_3
        
        if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_3 = sub_1405949a0()
        
        if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
            (**rdi_1)(rdi_1, 1)
        else
            bool z_1
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_1 = true
            else
                *(rdi_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_5 = sub_140a20af0()
                
                if (rax_5 != 0)
                    rsi_1 = *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3))
                        + (zx.q(rax_5) & 0x3fff) * 0x18
                
                *(rsi_1 + 8) = rdi_1
                sub_1405a42f0(&data_143f02390, rax_5)

*arg2 = rbx
rbx[1].d += 1
return arg2
