// 函数: sub_1429630d0
// 地址: 0x1429630d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0xd0)
void var_d8
int64_t rax_2 = __security_cookie ^ &var_d8
char* rbx_1 = arg2
int64_t i_1 = ((arg3 - 1) u>> 3) + 1
int64_t i

do
    uint32_t rax_3 = zx.d(rbx_1[1])
    uint32_t rdi_1 = zx.d(*rbx_1)
    rbx_1[4]
    rbx_1 = &rbx_1[8]
    uint32_t rdi_4 = rdi_1 | rax_3 << 8 | zx.d(rbx_1[-6]) << 0x10 | zx.d(rbx_1[-5]) << 0x18
    rbx_1[-3]
    uint32_t var_b8 = rdi_4
    rbx_1[-2]
    uint32_t var_b0 = rdi_4
    rbx_1[-1]
    *(arg1 + 0xc) &= 0xdf
    *(arg1 + 0x14) &= 0xbf
    *(arg1 + 0xc) |= 0x40
    *(arg1 + 0x14) |= 0x20
    sub_1428fcf60(arg1 + 0xc)
    int32_t var_a8[0x20]
    sub_1428fc900(arg1 + 0xc, &var_a8)
    sub_1428f9590(&var_b0, &var_a8, 1)
    sub_1428fcf60(arg1 + 0x14)
    sub_1428fc900(arg1 + 0x14, &var_a8)
    sub_1428f9590(&var_b8, &var_a8, 1)
    uint32_t r8_1 = var_b8 ^ rdi_4
    uint32_t rdi_5 = rdi_4 ^ var_b0
    uint32_t rdx_5 = 0
    uint32_t rsi_5 = 0
    *(arg1 + 0xc) = rdi_5.b
    *(arg1 + 0xd) = (rdi_5 u>> 8).b
    *(arg1 + 0xe) = (rdi_5 u>> 0x10).b
    *(arg1 + 0xf) = (rdi_5 u>> 0x18).b
    *(arg1 + 0x10) = rdx_5.b
    *(arg1 + 0x11) = (rdx_5 u>> 8).b
    *(arg1 + 0x12) = (rdx_5 u>> 0x10).b
    *(arg1 + 0x13) = (rdx_5 u>> 0x18).b
    *(arg1 + 0x14) = r8_1.b
    *(arg1 + 0x15) = (r8_1 u>> 8).b
    *(arg1 + 0x16) = (r8_1 u>> 0x10).b
    *(arg1 + 0x17) = (r8_1 u>> 0x18).b
    *(arg1 + 0x18) = rsi_5.b
    *(arg1 + 0x19) = (rsi_5 u>> 8).b
    *(arg1 + 0x1a) = (rsi_5 u>> 0x10).b
    *(arg1 + 0x1b) = (rsi_5 u>> 0x18).b
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_2 ^ &var_d8)
