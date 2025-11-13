// 函数: sub_142a35d50
// 地址: 0x142a35d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x68)

if (rbx == 0)
    *(arg1 + 0x68) = 0
    return 

int64_t rcx = *rbx

if (rcx != 0)
    j_sub_140a74f90(rcx)

int64_t rcx_1 = rbx[1]

if (rcx_1 != 0)
    j_sub_140a74f90(rcx_1)

int64_t rcx_2 = rbx[2]

if (rcx_2 != 0)
    j_sub_140a74f90(rcx_2)

int64_t rcx_3 = rbx[3]

if (rcx_3 != 0)
    j_sub_140a74f90(rcx_3)

j_sub_140a74f90(rbx)
*(arg1 + 0x68) = 0
