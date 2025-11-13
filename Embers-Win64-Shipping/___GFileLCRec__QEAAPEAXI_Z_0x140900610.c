// 函数: ??_GFileLCRec@@QEAAPEAXI@Z
// 地址: 0x140900610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[6]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[4]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[3]

if (rcx_2 != 0)
    int32_t rax_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, 1)

*arg1 = &data_142d4cb20

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
