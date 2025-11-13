// 函数: sub_142b85980
// 地址: 0x142b85980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
int32_t rbx =
    arg4 + sub_142b3fb40(arg2, arg4, sub_142aaf870(*(*(arg1 + 0x10) + 0x18), &var_88, 0xb), 3, arg5)
sub_142a47ff0(&var_88)
int32_t rax_4 = *(arg1 + 8)

if (rax_4 s>= 0)
label_142b85a43:
    void* rcx_7 = *(arg1 + 0x10)
    
    if (*(*(rcx_7 + 0x10) + 4) == 1)
        rbx += sub_142b3fb40(arg2, rbx, sub_142aaf870(*(rcx_7 + 0x18), &var_88, 7), 4, arg5)
        sub_142a47ff0(&var_88)
else
    void* rcx_4 = *(arg1 + 0x10)
    
    if (*(*(rcx_4 + 0x10) + 4) != 2)
        rbx += sub_142b3fb40(arg2, rbx, sub_142aaf870(*(rcx_4 + 0x18), &var_88, 6), 4, arg5)
        sub_142a47ff0(&var_88)
    else if (rax_4 s>= 0)
        goto label_142b85a43

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 8))
int32_t rcx_13 = (temp1 ^ temp0) - temp0
int32_t rdi = 0

while (true)
    void* r9_3 = *(arg1 + 0x10)
    
    if (rdi s>= sx.d(*(*(r9_3 + 0x10) + 2)) && rcx_13 s<= 0)
        __security_check_cookie(rax_1 ^ &var_c8)
        return zx.q(rbx - arg4)
    
    int32_t rsi_3 = rcx_13 s/ 0xa
    rcx_13.b -= rsi_3.b * 0xa
    void* r8_4 = *(r9_3 + 0x18)
    int32_t r10_2 = rbx - rdi
    int32_t rax_16 = *(r8_4 + 0x748)
    int32_t rax_17
    
    if (rax_16 == 0xffffffff)
        int32_t rdx_11 = sx.d(rcx_13.b)
        void* r8_7
        
        if (rdx_11 - 1 u<= 8)
            r8_7 = r8_4 + 8 + (sx.q(rdx_11 + 0x11) << 6)
        else
            r8_7 = r8_4 + 0x108
        
        r9_3.b = 5
        rax_17 = sub_142b3fb40(arg2, r10_2, r8_7, r9_3.b, arg5)
    else
        r9_3.b = 5
        rax_17 = sub_142b3fd70(arg2, r10_2, sx.d(rcx_13.b) + rax_16, r9_3.b, arg5)
    
    rbx += rax_17
    rdi += 1
    rcx_13 = rsi_3
