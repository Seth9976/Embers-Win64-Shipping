// 函数: sub_142ac0440
// 地址: 0x142ac0440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t rbx

if (arg3 == 0)
    rbx.b = 0
else if (arg3 != 1)
    rbx.b = 1
else
    rbx = zx.q(*(arg2 + 0xd2))

int16_t rcx = *(arg2 + 0x4a)
int16_t rdx = *(arg2 + 0x4c)

if (rcx == 0xffff)
    *(arg1 + 0x48) = 0xffffffff
    *(arg1 + 0x4c) = 0
else
    *(arg1 + 0x48) = sx.d(arg2[9].w)
    *(arg1 + 0x4c) = 1

if (rdx == 0xffff)
    *(arg1 + 0x2f0) = 0xffffffff
else
    *(arg1 + 0x2f0) = sx.d(rcx)

int32_t rbp
int32_t r14

if (arg2[0xc].d != 0 || *(arg2 + 0x6c) s<= 0)
    r14 = arg2[0xb].d
    
    if (r14 != 0 || *(arg2 + 0x64) != 0)
        rbp = *(arg2 + 0x64)
    else
        r14 = 1
        rbp = 0
else
    r14 = 0
    rbp = sub_142a92b60(1, *(arg2 + 0x64))

if (*(arg2 + 0x5c) s<= 0)
    if (std::ios_base::good(&arg2[0x10]) == 0)
        if (rbx.b != 0)
            goto label_142ac0587
        
        *(arg1 + 0x64) = rbp
        *(arg1 + 0x54) = *(arg2 + 0x6c)
        *(arg1 + 0x2e0) = sub_142ab5010(&arg2[0x10])
    else if (rbx.b != 0)
    label_142ac0587:
        *(arg1 + 0x64) = 0xffffffff
        *(arg1 + 0x54) = 0xffffffff
        *(arg1 + 0x2e0) = 0
    else
        *(arg1 + 0x64) = rbp
        *(arg1 + 0x54) = *(arg2 + 0x6c)
        *(arg1 + 0x2e0) = 0
    
    *(arg1 + 0x5c) = 0xffffffff
    *(arg1 + 0x70) = 0xffffffff
else
    *(arg1 + 0x64) = 0xffffffff
    *(arg1 + 0x54) = 0xffffffff
    *(arg1 + 0x2e0) = 0
    *(arg1 + 0x70) = *(arg2 + 0x5c)
    *(arg1 + 0x5c) = *(arg2 + 0x54) + *(arg2 + 0x5c)

if (arg2[0xe].b == 0 || *(arg2 + 0x6c) != 0)
    *(arg1 + 0x41) = 0
else
    *(arg1 + 0x41) = 1

if (*(arg2 + 0xcc) s<= 0)
    *(arg1 + 0x42) = 0
    *(arg1 + 0x60) = 0xffffffff
    *(arg1 + 0x6c) = r14
    *(arg1 + 0x58) = 0xffffffff
else
    *(arg1 + 0x42) = arg2[0x19].b
    *(arg1 + 0x60) = *(arg2 + 0xcc)
    
    if (*(arg2 + 0x5c) != 0)
        *(arg1 + 0x6c) = 1
        *(arg1 + 0x58) = 0xffffffff
    else
        *(arg1 + 0x6c) = arg2[0xb].d
        *(arg1 + 0x58) = arg2[0xc].d

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
(*(*arg2 + 0x18))(arg2, &var_88, 0x100)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
(*(*arg2 + 0x18))(arg2, &var_c8, 0)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108

if (arg2[0xf].b == 0)
    *(arg1 + 0x44) = 0xffffffff
    sub_142a4ab40(arg1 + 0x188)
    *(arg1 + 0x180) = 1
else
    *(arg1 + 0x44) = sub_142abb900(&var_c8, arg4) + sub_142abb900(&var_88, arg4) + *(arg2 + 0x74)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
    (*(*arg2 + 0x18))(arg2, &var_148, 0x400)
    int32_t var_13c
    int32_t r9 = var_13c
    int16_t var_140
    int32_t rcx_11
    
    if (var_140 s< 0)
        rcx_11 = r9
    else
        rcx_11 = sx.d(var_140) s>> 5
    
    if (rcx_11 != 1)
        int32_t rcx_14
        
        if (var_140 s< 0)
            rcx_14 = r9
        else
            rcx_14 = sx.d(var_140) s>> 5
        
        if (rcx_14 != 2)
            if (var_140 s>= 0)
                r9 = sx.d(var_140) s>> 5
            
            sub_142a48050(arg1 + 0x188, 
                Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(
                    &var_108, &var_148, 1, r9 - 2))
            sub_142a47ff0(&var_108)
        else
            if (var_140 s>= 0)
                r9 = sx.d(var_140) s>> 5
            
            if (r9 == 0)
                sub_142a48100(arg1 + 0x188, &var_148)
            else
                void var_13e
                void* rax_21 = &var_13e
                void* var_130
                
                if ((var_140.b & 2) == 0)
                    rax_21 = var_130
                
                if (*rax_21 != 0x27)
                    sub_142a48100(arg1 + 0x188, &var_148)
                else
                    sub_142a66950(arg1 + 0x188, &data_143655a58, 0xffffffff)
    else
        sub_142a48100(arg1 + 0x188, &var_148)
    
    *(arg1 + 0x184) = *(arg2 + 0x7c)
    *(arg1 + 0x180) = 0
    sub_142a47ff0(&var_148)

sub_142a48100(arg1 + 0x220, &var_88)
sub_142a48100(arg1 + 0x2a0, &var_c8)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_28

if (arg2[0x36].b == 0)
    sub_142a4ab40(arg1 + 0xc0)
    rcx_28 = sub_142a4ab40(arg1 + 0x140)
else
    sub_142a48050(arg1 + 0xc0, (*(*arg2 + 0x18))(arg2, &var_108, 0x300))
    sub_142a47ff0(&var_108)
    sub_142a48050(arg1 + 0x140, (*(*arg2 + 0x18))(arg2, &var_108, 0x200))
    rcx_28 = &var_108
    sub_142a47ff0(rcx_28)

if (arg2[0x1a].b == 0)
    *(arg1 + 0x50) = sbb.d(rcx_28.d, rcx_28.d, *(arg2 + 0xd1) != 0) & 3
else
    *(arg1 + 0x50) = 2

sub_142a47ff0(&var_c8)
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_178)
return &icu_64::UObject::`vftable'
