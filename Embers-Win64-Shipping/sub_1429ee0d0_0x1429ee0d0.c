// 函数: sub_1429ee0d0
// 地址: 0x1429ee0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t rbx = zx.d(arg4[5])
uint32_t r8 = zx.d(arg4[4])
int64_t* rbp = arg1
uint64_t rcx = zx.q(arg4[3])
uint32_t r11 = zx.d(arg4[6])
uint64_t r9 = zx.q(arg4[2])
uint32_t rdx = zx.d(arg4[1])
var_68 = ((zx.d(arg4[7]) + rbx + ((r11 + 1) << 1)) u>> 2).b
uint8_t var_67 = ((r8 + ((rbx + 1) << 1) + r11) u>> 2).b
uint8_t var_66 = (((rcx + (zx.q(r8 + 1) << 1)).d + rbx) u>> 2).b
uint64_t r8_2 = zx.q(arg3[-1])
uint8_t var_65 = (((r9 + (rcx << 1)).d + r8 + 2) u>> 2).b
uint64_t rcx_1 = zx.q(*arg4)
uint8_t var_64 = (((rcx + 2).d + (r9 << 1).d + rdx) u>> 2).b
uint64_t r9_1 = zx.q(arg3[4])
uint8_t var_63 = (((rcx_1 + (zx.q(rdx + 1) << 1)).d + r9.d) u>> 2).b
uint64_t rdx_1 = zx.q(*arg3)
uint8_t var_62 = ((rdx + 2 + (rcx_1 << 1).d + r8_2.d) u>> 2).b
uint64_t rcx_2 = zx.q(arg3[1])
uint8_t var_61 = (((rcx_1 + 2).d + (r8_2 << 1).d + rdx_1.d) u>> 2).b
uint64_t r8_4 = zx.q(arg3[2])
uint8_t var_60 = (((rcx_2 + (rdx_1 << 1)).d + r8_2.d + 2) u>> 2).b
uint32_t rdx_3 = zx.d(arg3[3])
uint8_t var_5f = (((r8_4 + (rcx_2 << 1)).d + rdx_1.d + 2) u>> 2).b
uint32_t rcx_4 = zx.d(arg3[5])
uint8_t var_5e = ((rdx_3 + (r8_4 << 1).d + rcx_2.d + 2) u>> 2).b
uint8_t var_5d = (((r9_1 + (zx.q(rdx_3 + 1) << 1)).d + r8_4.d) u>> 2).b
uint32_t rdx_5 = zx.d(arg3[6])
uint8_t var_5c = ((rcx_4 + (r9_1 << 1).d + rdx_3 + 2) u>> 2).b
uint8_t var_5b = ((rdx_5 + ((rcx_4 + 1) << 1) + r9_1.d) u>> 2).b
int64_t i_1 = 8
uint8_t var_5a = ((rcx_4 + zx.d(arg3[7]) + ((rdx_5 + 1) << 1)) u>> 2).b
uint8_t* result = &var_61
int64_t i

do
    int64_t zmm0 = *result
    result = &result[-1]
    *rbp = zmm0
    rbp += arg2
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_68)
return result
