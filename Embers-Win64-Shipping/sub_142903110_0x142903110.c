// 函数: sub_142903110
// 地址: 0x142903110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t result = zx.q(arg1[6])
uint64_t r8 = zx.q(arg1[7])
uint64_t r10 = zx.q(arg1[8])
int32_t rbx = arg1[3]
int32_t r9 = *arg1
uint64_t rdx = zx.q(arg1[5])
int32_t rsi = arg1[1]
int32_t rdi = arg1[2]
int32_t r13 = arg1[4]
int32_t r14_2 = (r8.d u>> 2) + r8.d
int32_t rbp_2 = (result.d u>> 2) + result.d
int32_t r15_2 = (r10.d u>> 2) + r10.d
int32_t arg_18 = rbx
int32_t r10_1

if (arg3 u< 0x10)
    r10_1 = r9
else
    void* rcx_1 = arg2 + 6
    r10_1 = r9
    uint64_t result_1 = result
    uint64_t i_1 = arg3 u>> 4
    uint64_t i
    
    do
        uint64_t rbx_8 = (
            ((zx.q(*(rcx_1 - 3)) << 8 | zx.q(*(rcx_1 - 4))) << 8 | zx.q(*(rcx_1 - 5))) << 8
            | zx.q(*(rcx_1 - 6))) + zx.q(r10_1)
        uint64_t r9_9 = (((zx.q(*(rcx_1 + 1)) << 8 | zx.q(*rcx_1)) << 8 | zx.q(*(rcx_1 - 1))) << 8
            | zx.q(*(rcx_1 - 2))) + (rbx_8 u>> 0x20) + zx.q(rsi)
        uint64_t r11_1 = zx.q(r9_9.d)
        uint64_t r8_9 = (
            ((zx.q(*(rcx_1 + 5)) << 8 | zx.q(*(rcx_1 + 4))) << 8 | zx.q(*(rcx_1 + 3))) << 8
            | zx.q(*(rcx_1 + 2))) + (r9_9 u>> 0x20) + zx.q(rdi)
        uint64_t r10_2 = zx.q(r8_9.d)
        uint64_t rdx_9 = (
            ((zx.q(*(rcx_1 + 9)) << 8 | zx.q(*(rcx_1 + 8))) << 8 | zx.q(*(rcx_1 + 7))) << 8
            | zx.q(*(rcx_1 + 6))) + (r8_9 u>> 0x20) + zx.q(arg_18)
        uint64_t r8_10 = zx.q(rdx_9.d)
        int32_t r13_1 = r13 + (rdx_9 u>> 0x20).d + arg4
        uint64_t rdx_10 = zx.q(rbx_8.d)
        int64_t rsi_5 =
            rdx * rdx_10 + zx.q(rbp_2) * r8_10 + zx.q(r14_2) * r10_2 + zx.q(r15_2) * r11_1
        int64_t rdi_7 = zx.q(r13_1 * rbp_2) + result_1 * rdx_10 + zx.q(r8_10.d) * zx.q(r14_2)
            + rdx * r11_1 + zx.q(r10_2.d) * zx.q(r15_2) + (rsi_5 u>> 0x20)
        int64_t rbx_16 = zx.q(r13_1 * r14_2) + rdx * r10_2 + zx.q(r8_10.d) * zx.q(r15_2)
            + r8 * rdx_10 + result_1 * r11_1 + (rdi_7 u>> 0x20)
        int64_t r9_18 = zx.q(r13_1 * r15_2) + rdx * r8_10 + result_1 * r10_2 + r10 * rdx_10
            + r8 * r11_1 + (rbx_16 u>> 0x20)
        int32_t r13_3 = r13_1 * rdx.d + (r9_18 u>> 0x20).d
        int32_t rdx_13 = (r13_3 u>> 2) + (r13_3 & 0xfffffffc)
        r10_1 = rsi_5.d + rdx_13
        result = zx.q(rdx_13) ^ zx.q(r10_1)
        rsi = ((((rsi_5.d ^ rdx_13) | result.d) ^ r10_1) u>> 0x1f) + rdi_7.d
        rdi = (((rdi_7.d | rsi) ^ rsi) u>> 0x1f) + rbx_16.d
        rbx = (((rbx_16.d | rdi) ^ rdi) u>> 0x1f) + r9_18.d
        arg_18 = rbx
        r13 = (((rbx | r9_18.d) ^ rbx) u>> 0x1f) + (r13_3 & 3)
        rcx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[3] = rbx
*arg1 = r10_1
arg1[1] = rsi
arg1[2] = rdi
arg1[4] = r13
return result
