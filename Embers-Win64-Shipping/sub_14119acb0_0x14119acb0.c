// 函数: sub_14119acb0
// 地址: 0x14119acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(arg1 + 0xc)
uint64_t rdx = zx.q(arg1[1].d)
int32_t r8_1 = r9_1 - rdx.d
int64_t result = sx.q(r8_1) << 4
int32_t r8_2

if (result u< 0x4000)
    result = zx.q(r9_1 * 2)
    
    if ((rdx * 3).d s>= result.d || (r8_1 s<= 0x40 && rdx.d != 0))
        r8_2 = r9_1
    else
        r8_2 = rdx.d
else if (r8_1 s> 0x40 || rdx.d == 0)
    r8_2 = rdx.d
else
    r8_2 = r9_1

if (r8_2 == r9_1)
    return result

*(arg1 + 0xc) = r8_2
return sub_140839170(arg1, rdx.d, r8_2, 0x10) __tailcall
