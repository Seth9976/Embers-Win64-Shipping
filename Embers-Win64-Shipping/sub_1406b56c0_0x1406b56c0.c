// 函数: sub_1406b56c0
// 地址: 0x1406b56c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
*arg1 = &data_142d8d9a0
arg1[1] = &data_142d8da68
arg1[2] = &data_142d8da80
arg1[3] = arg2
arg1[4] = 0
arg1[5] = 0
int64_t* rax = j_sub_140a82f30(0x50)
int64_t* arg_10 = rax

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[2] = 0
    rax[4] = 0

arg1[7] = rax
arg1[6] = rax
int64_t* rax_1 = j_sub_140a82f30(0x810)
int64_t* rbx = rax_1
arg_10 = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d8e040
    sub_1406b5800(&rbx[2])

arg1[8] = &rbx[2]
int64_t* rbx_1 = rbx
arg1[9] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rbx

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xb] = 0
arg1[0xa] = 0
arg1[0xc].b = 1
return arg1
