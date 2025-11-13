// 函数: sub_14093c3b0
// 地址: 0x14093c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t rax = *arg4
int128_t zmm0 = *arg3

if (rbx != 0)
    rbx[1].d += 1

arg1[1] = arg2
*arg1 = &data_142e22e98
*(arg1 + 0x10) = zmm0
arg1[4] = rax
arg1[5] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg1[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_142e22ef0
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
