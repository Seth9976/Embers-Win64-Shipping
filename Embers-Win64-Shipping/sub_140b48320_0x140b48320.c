// 函数: sub_140b48320
// 地址: 0x140b48320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int16_t* const rcx = &data_142d40450
int32_t r10 = rax - 1

if (rax == 0)
    r10 = 0

wchar16* r8

if (rax == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 - 1

if (rax_1 == 0)
    rdx = 0

if (rax_1 != 0)
    rcx = *arg1

return sub_140b2b5b0(rcx, rdx, r8, r10, arg3, 0)
