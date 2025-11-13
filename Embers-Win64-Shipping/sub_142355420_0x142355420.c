// 函数: sub_142355420
// 地址: 0x142355420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int32_t rbx = *(arg1[1] + 0x10)
int32_t rax_2 = (**rcx)(rcx)
int32_t rax_5
int32_t rbx_1

if (rax_2 == rbx)
    int64_t* rcx_1 = *arg1
    rbx_1 = *(arg1[1] + 0x14)
    rax_5 = (*(*rcx_1 + 8))(rcx_1)

if (rax_2 != rbx || rax_5 != rbx_1)
    void* rax_6 = arg1[1]
    void* rdx_1 = *arg1
    int32_t rax_7 = *(rax_6 + 0x10)
    *(rdx_1 + 0x34) = *(rax_6 + 0x14)
    *(rdx_1 + 0x30) = rax_7
    sub_1419ba620(rdx_1 + 0x20)

int64_t* rcx_5 = *arg1 + 0x10
int64_t result = (*(*rcx_5 + 0x28))(rcx_5, arg1[1])
int64_t* rbx_2 = arg1[1]

if (rbx_2 == 0)
    return result

int64_t rcx_6 = *rbx_2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return j_sub_140a74f90(rbx_2)
