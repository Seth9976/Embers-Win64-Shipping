// 函数: ??1DepFile@@QEAA@XZ
// 地址: 0x1420f3e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[4]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[2]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[1]

if (rcx_2 != 0)
    rcx_2[3].d -= 1
    
    if (rcx_2[3].d == 1)
        (*(*rcx_2 + 0x38))(rcx_2)

int64_t* rcx_3 = *arg1

if (rcx_3 == 0)
    return 

int32_t temp1_1 = *(rcx_3 + 0x1c)
*(rcx_3 + 0x1c) -= 1

if (temp1_1 == 1)
    jump(*(*rcx_3 + 0x40))
