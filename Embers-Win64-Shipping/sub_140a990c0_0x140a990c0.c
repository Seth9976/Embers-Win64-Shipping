// 函数: sub_140a990c0
// 地址: 0x140a990c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx_1 = *(arg1 + 0x28)

if (rbx_1 == 0)
    return 

int32_t rax = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rax != 1 || rbx_1 == 0)
    return 

if ((*(rbx_1 + 0x19) & rax.b) != 0)
    sub_140a74f90(*rbx_1)

int64_t* rcx_2 = rbx_1[2]

if (rcx_2 != 0)
    sub_140abfb60(rcx_2)

return j_sub_140a74f90(rbx_1) __tailcall
