// 函数: sub_140a8f160
// 地址: 0x140a8f160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (*(arg1 + 0x250) == 0)
    int64_t* rax_12 = sub_140b0a2c0(&arg_8, 0x7b2, 1, 1, 0, 0, 0, 0)
    int64_t rcx_17 = *arg2 - *rax_12
    int64_t rax_13
    int64_t rdx_17
    rdx_17:rax_13 = muls.dp.q(-0x29406b2a1a85bd43, rcx_17)
    return (rdx_17 + rcx_17) s>> 0x17 u>> 0x3f

int32_t arg_18
int32_t arg_20
sub_140b19130(arg2, &arg_20, &arg_8, &arg_18)
int64_t rdi = *arg2
EnterCriticalSection(arg1 + 0x258)
int64_t temp0 = divs.dp.q(sx.o(rdi), 0x861c46800)
sub_142a6bfa0(*(arg1 + 0x250), arg_20, arg_8 - 1, arg_18, temp0.d - (temp0 s/ 0x18 * 0x18).d, 
    (rdi s/ 0x23c34600 s% 0x3c).d, (rdi s/ 0x989680 s% 0x3c).d)
int64_t* rcx_13 = *(arg1 + 0x250)
int32_t var_38[0x4]
var_38[0] = 0
int64_t result
int128_t zmm0
zmm0, result = sub_142a6a540(rcx_13, &var_38)

if (arg1 != -0x258)
    result = LeaveCriticalSection(arg1 + 0x258)

return result
