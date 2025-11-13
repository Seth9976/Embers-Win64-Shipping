// 函数: sub_142885970
// 地址: 0x142885970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9_6 = zx.q(*arg1) << 0x38 | zx.q(arg1[1]) << 0x30 | zx.q(arg1[2]) << 0x28
    | zx.q(arg1[3]) << 0x20 | zx.q(arg1[4]) << 0x18 | zx.q(arg1[5]) << 0x10 | zx.q(arg1[6]) << 8
    | zx.q(arg1[7])
uint64_t r8_8 = zx.q(*arg2) << 0x38 | zx.q(arg2[1]) << 0x30 | zx.q(arg2[2]) << 0x28
    | zx.q(arg2[3]) << 0x20 | zx.q(arg2[4]) << 0x18 | zx.q(arg2[5]) << 0x10 | zx.q(arg2[6]) << 8
    | zx.q(arg2[7])
uint64_t result = r9_6 - r8_8
bool cond:0 = r8_8 u<= r9_6

if (r8_8 u>= r9_6)
    goto label_142885a2e

if (result s< 0)
    return 0x80

cond:0 = r8_8 u<= r9_6
label_142885a2e:

if (cond:0 || result s<= 0)
    if (result s> 0x80)
        return 0x80
    
    if (result s>= -0x80)
        return result

return 0xffffff80
