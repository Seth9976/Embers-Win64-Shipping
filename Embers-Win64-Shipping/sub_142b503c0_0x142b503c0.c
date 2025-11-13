// 函数: sub_142b503c0
// 地址: 0x142b503c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
sub_142a479b0(&var_108, arg3)
int32_t rbx = 0
int16_t* rdi = nullptr
int32_t var_fc
int32_t r8 = var_fc
int16_t var_100
int16_t rcx_1 = var_100

while (true)
    int32_t rax_3
    
    if (rcx_1 s< 0)
        rax_3 = r8
    else
        rax_3 = sx.d(rcx_1) s>> 5
    
    if (rbx s>= rax_3)
        break
    
    int32_t rax_5
    
    if (rcx_1 s< 0)
        rax_5 = r8
    else
        rax_5 = sx.d(rcx_1) s>> 5
    
    if (rbx u< rax_5)
        void var_fe
        void* rax_6 = &var_fe
        void* var_f0
        
        if ((rcx_1.b & 2) == 0)
            rax_6 = var_f0
        
        if (*(rdi + rax_6) == 0x2f)
            sub_142a4a800(&var_108, rbx, 0x3a)
            r8 = var_fc
            rcx_1 = var_100
    
    rbx += 1
    rdi = &rdi[1]

if (rcx_1 s>= 0)
    r8 = sx.d(rcx_1) s>> 5

int32_t var_120 = 0
char var_c8[0x90]
sub_142a49990(&var_108, 0, r8, &var_c8, 0x81)
int32_t var_118 = 0
__builtin_memset(&arg1[1], 0, 0x30)
arg1[7] = 0
sub_142a61e60(arg2, &var_c8, arg1, &var_118)
int32_t rax_7 = var_118

if (rax_7 s<= 0)
    *arg4 = rax_7

sub_142a47ff0(&var_108)
__security_check_cookie(rax_1 ^ &var_148)
return &icu_64::UObject::`vftable'
