// 函数: sub_140b36740
// 地址: 0x140b36740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

int64_t* rcx = rbx[5]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = rbx[2]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *rbx

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return j_sub_140a74f90(rbx) __tailcall
