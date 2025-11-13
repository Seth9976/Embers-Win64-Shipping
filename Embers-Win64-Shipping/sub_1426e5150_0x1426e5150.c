// 函数: sub_1426e5150
// 地址: 0x1426e5150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0xb8)

if (rcx != 0)
    sub_1426c1d20(rcx, arg1)

void* rdx_1 = arg1[0xd]
int32_t result = arg1[0x13].d

if (rdx_1 != 0 && test_bit(result, 0xc))
    *(rdx_1 + 0x250)
    result = sub_1427307a0(arg1, rdx_1)
else if (test_bit(result, 0xb))
    result = sub_142730760(arg1, arg1[0xe])

int32_t rcx_3 = arg1[0x13].d

if ((rcx_3 & 0x6000) != 0)
    result = rcx_3 & 6
    
    if (result.b != 6 && (rcx_3.b & 0x18) == 0)
        arg1[0xb].b &= 0xfb

return result
