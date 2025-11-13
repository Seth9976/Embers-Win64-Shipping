// 函数: sub_142862cb0
// 地址: 0x142862cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint32_t count = sub_1428916c0(sub_14285b130(arg1))
int32_t rbp = 0
void* const r14 = 0x36c

if (*(arg1 + 0x38) != arg2)
    r14 = 0x32c

void* r14_1 = r14 + arg1
int64_t rax_3
int64_t* r15

if (arg2 == 0)
    r15 = *(arg1 + 0x430)
    sub_14285b840(arg1 + 0x800)
    rax_3 = 0x438
else
    r15 = *(arg1 + 0x460)
    *(arg1 + 0x7c) = 1
    sub_14285b850(arg1 + 0x800)
    rax_3 = 0x468

void var_88

if (sub_142861600(arg1, arg2, sub_14285b130(arg1), *(*(arg1 + 0xa8) + 0x278), r14_1, 0, 
        "traffic upd", 0xb, &var_88, arg1 + rax_3, r15) != 0)
    memcpy(r14_1, &var_88, count)
    *(arg1 + 0x7c) = 0
    rbp = 1

sub_1428b8960(&var_88, 0x40)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbp)
