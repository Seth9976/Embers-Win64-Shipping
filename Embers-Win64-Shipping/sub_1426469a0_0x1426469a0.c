// 函数: sub_1426469a0
// 地址: 0x1426469a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143453e48
DeleteCriticalSection(&arg1[5])
int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_143453df0
int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t rax_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
