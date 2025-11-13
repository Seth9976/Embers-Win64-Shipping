// 函数: sub_1405ee290
// 地址: 0x1405ee290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &data_142d5f438
arg1[1] = &data_142d5f460
arg1[2] = &data_142d5f4a8
arg1[3] = &data_142d5f510
sub_1405ec390(&arg1[0x17])
int64_t* rdi = arg1[0x14]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg1[0xb]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rcx_6 = arg1[9]

if (rcx_6 != 0)
    (*(*rcx_6 + 0x10))(rcx_6)

DeleteCriticalSection(&arg1[4])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
