// 函数: sub_141b84800
// 地址: 0x141b84800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140638c50(&arg1[2], 0)

int32_t rax = *(arg1 + 0xc)
arg1[1].d = 0

if (rax s< 0 && rax != 0)
    sub_140638c50(arg1, 0)

sub_141bdc410(&arg1[6])
arg1[0xf].d = 0
int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

void* result = sub_141b83c60(&arg1[6])
int64_t rcx_5 = arg1[2]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg1

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
