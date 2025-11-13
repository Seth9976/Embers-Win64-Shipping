// 函数: sub_142640560
// 地址: 0x142640560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t* rbx = arg4[1]
int64_t rsi = *arg4

if (rbx != 0)
    rbx[1].d += 1

*arg1 = &data_143457a88
sub_140d3a3a0(&arg1[1], arg2)
*(arg1 + 0x10) = zmm0
arg1[4] = rsi
arg1[5] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg1[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_143457ae0
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1
