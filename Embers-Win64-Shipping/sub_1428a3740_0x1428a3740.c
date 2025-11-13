// 函数: sub_1428a3740
// 地址: 0x1428a3740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428ae8e0(arg1, 0xffffffff, 0)
sub_1428ae8e0(arg2, 0xffffffff, 0)
int32_t result = memcmp(&arg1[0x24], &arg2[0x24], 0x14)

if (result != 0)
    return result

if (*(arg1 + 0x7c) != result || *(arg2 + 0x7c) != result)
    return 0

int64_t rcx_2 = sx.q(arg1[0xf].d)
int32_t temp0 = arg2[0xf].d

if (rcx_2.d s< temp0)
    return 0xffffffff

if (rcx_2.d s<= temp0)
    return memcmp(arg1[0xe], arg2[0xe], rcx_2) __tailcall

return 1
