// 函数: sub_141b4c490
// 地址: 0x141b4c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d1550(&arg1[0x2c])
int64_t rdi = arg1[0x2a]

if (rdi != 0)
    j_sub_140a74f90(rdi)

int64_t* rdi_1 = arg1[0x29]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x27]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[0x25]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp7_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t i_1 = 4
void* rsi = &arg1[0x24]
int64_t i

do
    rsi -= 0x40
    sub_140ddfd20(rsi)
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[3] = &data_142d5a090
*arg1 = &data_14306c228
int64_t* rcx_10 = arg1[2]

if (rcx_10 != 0)
    int32_t rax_7 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (rax_7 == 1 && rcx_10 != 0)
        (*(*rcx_10 + 8))(rcx_10, zx.q((i_1 + 1).d))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
