// 函数: sub_141012f40
// 地址: 0x141012f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
uint64_t r14 = zx.q(arg2)
EnterCriticalSection(&arg1[6])

if (arg1[5].b == 0)
    arg5 = sub_141025aa0(arg1)
    arg1[5].b = 1

uint32_t r8 = r14.d

if (rbp.d != 0 && modu.dp.d(0:(*(arg1 + 0x74)), rbp.d) != 0)
    r8 = (r14 + rbp).d

int32_t rcx_2 = *(arg1 + 0x74)
uint64_t rflags
int32_t temp0_3
temp0_3, rflags =
    _bit_scan_reverse(((zx.q(divu.dp.d(0:(rcx_2 - 1 + r8), rcx_2)) << 1) + -ffffffffffffffff).d)
int32_t rax_7 = sub_141013640(arg1, temp0_3, arg5)
int32_t r8_1 = *(arg1 + 0x74)
int32_t r9_1 = r8_1 << temp0_3.b
int32_t rcx_5 = 0
int32_t r8_2 = r8_1 * rax_7

if (rbp.d != 0 && modu.dp.d(0:r8_2, rbp.d) != 0)
    rcx_5 = divu.dp.q(0:(zx.q(r8_2) - 1 + rbp), rbp) * rbp.d - r8_2

arg1[0xb].d += r9_1
*(arg1 + 0x5c) += rcx_5
*(arg1 + 0xbc) += r9_1
uint64_t result = zx.q(arg1[0xb].d)

if (result.d u> *(arg1 + 0x64))
    *(arg1 + 0x64) = result.d

*(arg4 + 0x2c) = temp0_3
*(arg4 + 0x28) = rax_7
*(arg4 + 8) = 2
*(arg4 + 0x20) = arg1
*(arg4 + 0x61) = 0
*(arg4 + 0x58) = r14

if (*(arg1 + 0x7c) == 1)
    uint64_t r14_1 = zx.q(rcx_5 + r8_2)
    *(arg4 + 0x50) = r14_1
    sub_14105ac70(arg4, arg1[0x11])
    *(arg4 + 0x48) = *(arg1[0x11] + 0x108) + r14_1
    result = zx.q(*(arg1 + 0x2c))
    
    if (result.d == 2)
        result = *(arg1[0x11] + 0x110) + r14_1
        *(arg4 + 0x40) = result
    else if (result.d == 4)
        result = zx.q(*4 - 2)
        
        if (result.d u<= 1)
            result = *(arg1[0x11] + 0x110) + r14_1
            *(arg4 + 0x40) = result

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(&arg1[6])
