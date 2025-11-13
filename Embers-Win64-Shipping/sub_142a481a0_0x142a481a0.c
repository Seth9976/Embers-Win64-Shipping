// 函数: sub_142a481a0
// 地址: 0x142a481a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_98 = 0
int16_t rax_2 = *(arg2 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg2 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

int16_t rcx = *(arg3 + 8)
int32_t rcx_2

if (rcx s< 0)
    rcx_2 = *(arg3 + 0xc)
else
    rcx_2 = sx.d(rcx) s>> 5

int32_t rax_6 = rax_4 + 1 + rcx_2
struct icu_64::UObject::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 0
char var_80_1
void* var_70

if (rax_6 s> 0x1b)
    int32_t* rax_8
    void* rbx_2
    
    if (rax_6 s<= 0x7ffffff5)
        rbx_2 = ((sx.q(rax_6 + 1) << 1) + 0x13) & 0xfffffffffffffff0
        rax_8 = sub_142a7dd00(rbx_2)
    
    if (rax_6 s> 0x7ffffff5 || rax_8 == 0)
        var_80_1 = 1
        var_70 = nullptr
        int32_t var_78_2 = 0
    else
        *rax_8 = 1
        var_70 = &rax_8[1]
        uint32_t var_78_1 = ((rbx_2 - 4) u>> 1).d
        var_80_1 = 4
else
    var_80_1 = 2

void* rax_11 = sub_142a48500(sub_142a48500(&var_88, arg2), arg3)
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
sub_142a48aa0(arg1, rax_11, 0)
var_88 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}

if ((var_80_1 & 4) != 0)
    int32_t rcx_8 = *(var_70 - 4)
    *(var_70 - 4) -= 1
    
    if (rcx_8 == 1)
        sub_142a7dcd0(var_70 - 4)

var_88 = &icu_64::Replaceable::`vftable'{for `icu_64::UObject'}
sub_142a47900(&var_88)
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
