// 函数: sub_1422b83a0
// 地址: 0x1422b83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143317fc8
int64_t rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdi = arg1[0xb]

if (rdi != 0)
    int64_t rcx_3 = rdi[2]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rdi
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    j_sub_140a74f90(rdi)

sub_1422b5180(&arg1[9])
int64_t rcx_7 = arg1[7]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[5]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_9 = arg1[3]

if (rcx_9 != 0)
    int32_t temp0_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

*arg1 = &data_142d44d70
void* rcx_10 = data_143e1a338

if (rcx_10 != 0 && arg1[1].b != 0)
    sub_140bb6e00(rcx_10, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
