// 函数: sub_142b42df0
// 地址: 0x142b42df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int16_t* rax_2 = data_144016b68
void* rbx = nullptr
int64_t var_90 = 0
int16_t* var_88 = rax_2
int32_t var_78 = 0xffffffff
void* var_98
int64_t* var_70 = &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = sub_142b46920(arg1, &var_58)
char rcx = (rax_3[1].w).b

if ((rcx & 0x11) == 0)
    rbx = rax_3 + 0xa
    
    if ((rcx & 2) == 0)
        rbx = rax_3[3]

var_98 = rbx
int32_t rax_4 = sub_142b467c0(arg1)
int32_t rax_5 = sub_142b10630(&var_90, var_98, rax_4)
sub_142a47ff0(&var_58)
int32_t rbx_1

if (rax_5 - 2 u> 1)
    rbx_1.b = 0
else
    uint32_t rcx_4 = zx.d(*rax_2)
    int32_t rcx_5
    
    if (test_bit(rcx_4, 0xf))
        rcx_5 = rcx_4 & 0x7fff
        
        if (rcx_5 u>= 0x4000)
            if (rcx_5 u>= 0x7fff)
                goto label_142b42efe
            
            rcx_5 = (rcx_5 - 0x4000) << 0x10 | zx.d(rax_2[1])
    else if (rcx_4 u< 0x4040)
        rcx_5 = (rcx_4 u>> 6) - 1
    else if (rcx_4 u>= 0x7fc0)
    label_142b42efe:
        rcx_5 = zx.d(rax_2[1]) << 0x10 | zx.d(rax_2[2])
    else
        rcx_5 = ((rcx_4 & 0x7fc0) - 0x4040) << 0xa | zx.d(rax_2[1])
    
    int32_t rax_9 = sub_142b44bf0(rcx_5)
    
    if (rax_9 == 7)
        rbx_1.b = 0
    else
        int32_t* rax_10 = sub_142b4a6a0(arg2, &var_70, rax_9)
        *arg2 = *rax_10
        arg2[1].d = rax_10[2]
        rbx_1.b = 1

sub_142a97dd0(&var_90)
__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rbx_1.b)
