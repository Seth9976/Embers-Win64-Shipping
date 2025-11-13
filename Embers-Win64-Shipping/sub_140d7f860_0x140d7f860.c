// 函数: sub_140d7f860
// 地址: 0x140d7f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xb0)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1] = 0
    rax[2] = 0
    *rbx = &data_142ec00f8
    rbx[3] = &data_142ec0220
    char rax_1 = *(rbx + 0xa4)
    rbx[5] = 0
    rbx[7] = 2
    *(rbx + 0xa4) = (rax_1 & 0xf2) | 2
    rbx[0x14].d = 0x3f800000
    rbx[0x15].d = 0x3f800000
    *(rbx + 0xac) = 0
    __builtin_memset(&rbx[8], 0, 0x2c)
    __builtin_memset(&rbx[0xe], 0, 0x28)
    *(rbx + 0x6c) = 0x2c

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1
    int64_t* rbx_1 = rax_2
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
