// 函数: sub_140a20c40
// 地址: 0x140a20c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t var_18 = __security_cookie ^ &var_58
int32_t r9 = 0x10
int32_t r8 = arg2
int64_t* rcx = &var_18
uint64_t rdx_2

do
    rcx -= 2
    r9 -= 1
    rdx_2 = zx.q(r8 s/ 0xa)
    int64_t rax_6 = sx.q(r8 - (rdx_2 * 5).d * 2)
    r8 = rdx_2.d
    *rcx = (*u"0123456789")[rax_6]
while (rdx_2.d != 0)
int16_t var_38[0x10]

if ((arg2 u>> 0x1f).b != 0)
    r9 -= 1
    var_38[sx.q(r9)] = 0x2d

int64_t result = sub_140a20ba0(arg1, &var_38[sx.q(r9)], 0x10 - r9)
__security_check_cookie(var_18 ^ &var_58)
return result
