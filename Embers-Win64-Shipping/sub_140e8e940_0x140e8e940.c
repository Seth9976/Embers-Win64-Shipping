// 函数: sub_140e8e940
// 地址: 0x140e8e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 1
*arg1 = 0
int128_t zmm0 = *arg3
*(arg1 + 8) = 0
arg1[4] = 0
int64_t* rbx = arg2[1]
int64_t rbp = *arg2

if (rbx != 0)
    rbx[1].d += 1

void*** rax = sub_1405978f0(0x38, &arg1[2])

if (rax != 0)
    *rax = &data_142edb390
    rax[1] = rbp
    rax[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax + 0x18) = zmm0
    rax[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
