// 函数: sub_1405df680
// 地址: 0x1405df680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[1]

if (rcx != 0)
    sub_140a74f90(rcx)

void* rbx_1 = *arg1

if (rbx_1 == 0)
    return 

int32_t temp0_1 = *(rbx_1 + 0x44)
*(rbx_1 + 0x44) -= 1

if (temp0_1 != 1)
    return 

if ((*(rbx_1 + 0x4c) & 1) != 0)
    void* rax_1 = *(rbx_1 + 0x28)
    sub_1405e3820(zx.q(*(rax_1 + 0x58)) * 0x50 + &data_143cd84b0, rax_1 + 0x70)
    *(rbx_1 + 0x4c) &= 0xfffffffe

*(rbx_1 + 0x48) = 1
return sub_141997870(rbx_1 + 0x38) __tailcall
