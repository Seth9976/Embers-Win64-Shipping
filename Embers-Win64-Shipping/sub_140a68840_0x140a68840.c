// 函数: sub_140a68840
// 地址: 0x140a68840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e62058
sub_140a6f250(arg1)
int64_t rdi = arg1[5]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rdi)

int64_t rdi_1 = arg1[3]

if (rdi_1 != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    (*(*rcx_1 + 0x30))(rcx_1, rdi_1)

int64_t rdi_2 = arg1[1]

if (rdi_2 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rdi_2)

*arg1 = &data_142e61488

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
