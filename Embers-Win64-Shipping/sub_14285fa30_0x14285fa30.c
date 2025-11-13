// 函数: sub_14285fa30
// 地址: 0x14285fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x120)
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rax_2 = *(arg1 + 0xa8)
void* rbx = arg1
int64_t* var_120
__builtin_memset(&var_120, 0, 0x18)
int64_t* rdi = nullptr
int64_t var_128 = 0
char* rsi = nullptr
void* rbp = *(rax_2 + 0x2d8)
void* rax_3

if (rbp != 0)
    rax_3 = *(rax_2 + 0x2e0)

int64_t result
int32_t var_130_1
int32_t r9_1

if (rbp == 0 || rax_3 == 0)
    var_130_1 = 0xe9
label_14285fd3f:
    r9_1 = 0x44
label_14285fd55:
    sub_142856580(arg1, 0x50, 0x1f0, r9_1, "ssl\statem\statem_lib.c", var_130_1)
label_14285fd66:
    sub_1428a6780(rsi)
    sub_142891ea0(rdi)
    result = 0
else
    int32_t* r14_1 = *(rax_3 + 8)
    int32_t* var_110
    int32_t rax_4
    
    if (r14_1 != 0)
        rax_4 = sub_1428654d0(rbp, &var_110)
    
    if (r14_1 == 0 || rax_4 == 0)
        var_130_1 = 0xf0
        arg1 = rbx
        goto label_14285fd3f
    
    int64_t* rax_5 = sub_142891ee0()
    rdi = rax_5
    arg1 = rbx
    
    if (rax_5 == 0)
        var_130_1 = 0xf7
        r9_1 = 0x41
        goto label_14285fd55
    
    int64_t var_118
    int64_t var_108
    void var_f8
    int32_t rax_6
    int512_t zmm1_1
    rax_6, zmm1_1 = sub_14285e150(arg1, &var_f8, &var_108, &var_118)
    
    if (rax_6 == 0)
        goto label_14285fd66
    
    int32_t rax_8
    
    if ((*(*(*(rbx + 8) + 0xc0) + 0x60) & 2) != 0)
        rax_8 = sub_142873b60(arg2, zx.d(*(rbp + 8)), 2)
    
    if ((*(*(*(rbx + 8) + 0xc0) + 0x60) & 2) != 0 && rax_8 == 0)
        var_130_1 = 0x103
        arg1 = rbx
        goto label_14285fd3f
    
    int64_t rcx_4 = sx.q(sub_142896de0(r14_1))
    var_128 = rcx_4
    char* rax_10 = sub_1428a6730(rcx_4)
    rsi = rax_10
    
    if (rax_10 == 0)
        var_130_1 = 0x10a
        r9_1 = (&rax_10[0x41]).d
        arg1 = rbx
        goto label_14285fd55
    
    if (sub_1428932d0(rdi, &var_120, var_110, nullptr, r14_1) s<= 0)
        var_130_1 = 0x110
        r9_1 = 6
        arg1 = rbx
        goto label_14285fd55
    
    int32_t rax_12
    int32_t rax_13
    
    if (*(rbp + 0x14) == 0x390)
        rax_12 = sub_1428973a0(var_120, 0xffffffff, 0x1001, 6, 0)
        
        if (rax_12 s> 0)
            rax_13 = sub_1428973a0(var_120, 0x18, 0x1002, 0xffffffff, 0)
    
    if (*(rbp + 0x14) == 0x390 && (rax_12 s<= 0 || rax_13 s<= 0))
        var_130_1 = 0x119
        r9_1 = 6
        arg1 = rbx
        goto label_14285fd55
    
    if (*rbx != 0x300)
        int64_t var_138_4 = var_118
        
        if (sub_142893060(rdi, rsi, &var_128, var_108, zmm1_1, arg3) s<= 0)
            var_130_1 = 0x12a
            r9_1 = 6
            arg1 = rbx
            goto label_14285fd55
    else
        if (sub_142891c10(rdi, var_108, var_118) s<= 0)
        label_14285fc69:
            var_130_1 = 0x125
            r9_1 = 6
            arg1 = rbx
            goto label_14285fd55
        
        *(*(rbx + 0x508) + 8)
        
        if (sub_142891e60(rdi) == 0)
            goto label_14285fc69
        
        if (sub_1428930f0(rdi, rsi, &var_128, zmm1_1, arg3) s<= 0)
            goto label_14285fc69
    
    int32_t rax_20 = *(rbp + 0x14)
    
    if (rax_20 == 0x32b || rax_20 - 0x3d3 u<= 1)
        sub_1428a75c0(rsi, nullptr, var_128)
    
    arg1 = rbx
    
    if (sub_142874080(arg2, rsi, var_128, 2) == 0)
        var_130_1 = 0x13b
        goto label_14285fd3f
    
    if (sub_1428821e0(arg1, 0) == 0)
        goto label_14285fd66
    
    sub_1428a6780(rsi)
    sub_142891ea0(rdi)
    result = 1
__security_check_cookie(rax_1 ^ &var_158)
return result
