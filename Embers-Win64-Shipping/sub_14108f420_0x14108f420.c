// 函数: sub_14108f420
// 地址: 0x14108f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_4 = (*(*arg7 + 0x1d8))(arg7)
int64_t r8 = *arg7
int16_t var_108
(*(r8 + 0x1e8))(arg7, &var_108, r8)
void* var_158
int64_t var_150
int64_t* var_148
int32_t var_140
char var_138
int32_t* var_130
int64_t* var_128
int32_t var_120
int32_t var_118
void* rcx_4
void* rdx_2
int64_t r8_2
int32_t r9
int32_t var_104

if (arg10 == 0 || *(arg8 + 0xb0) != 2)
    void* rcx_5
    
    if (arg9 == 0)
    label_14108f635:
        var_104 = 6
        rcx_5 = arg2 + 0x88
        
        if (arg9 == 0)
            var_104 = 4
    else if (arg10 == 0 || arg11 == 0 || arg5 == 0)
        *(arg1 + 0x10)
        
        if (sub_14122ca50() == 0 || arg12 == 0 || arg5 == 0)
            goto label_14108f635
        
        void* rcx_7 = *(*(arg5 + 0x110) + 0x68)
        
        if (*(arg5 + 0x40) == 0)
            rcx_5 = arg2 + 0x88
            var_104 = 4
        else if (rcx_7 == 0 || *(rcx_7 + 0x30) s< 0 || *(rcx_7 + 0x34) s< 0 || *(rcx_7 + 0x38) s< 0)
            if (*(arg5 + 0x32) - 1 u> 1)
                rcx_5 = arg2 + 0x88
                var_104 = 4
            else
                var_104 = 8
                rcx_5 = arg2 + 0x88
        else if (*(rcx_7 + 0x3c) s> 0 || *(arg5 + 0x32) - 1 u<= 1)
            var_104 = 8
            rcx_5 = arg2 + 0x88
        else
            rcx_5 = arg2 + 0x88
            var_104 = 4
    else
        var_104 = 9
        rcx_5 = arg2 + 0x88
    
    r9 = arg4
    var_118 = arg14
    r8_2 = arg3
    rdx_2 = arg2
    var_120 = arg13
    var_128 = rcx_5
    rcx_4 = arg1
    var_130 = &var_104
    var_138 = var_108.b
    var_140 = rax_4
    var_148 = arg7
    var_150 = arg6
    var_158 = arg5
else
    void* rcx_3 = *(arg2 + 0x88)
    int128_t* rax_6
    int128_t var_98
    
    if (rcx_3 == 0 || arg9 == 0)
        void var_77
        void* rax_7 = &var_77
        var_98 = zx.o(0)
        int32_t i = 0
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x14)
        
        do
            i += 4
            *(rax_7 - 1) = 0
            rax_7 += 4
        while (i u< 4)
        
        rax_6 = &var_98
    else
        *(arg1 + 0x10)
        rax_6 = sub_1422e5a50(rcx_3, &var_98)
    r9 = arg4
    r8_2 = arg3
    rdx_2 = arg2
    var_118 = arg14
    rcx_4 = arg1
    var_120 = arg13
    var_128 = arg2 + 0x88
    var_130 = &var_104
    var_138 = var_108.b
    var_140 = rax_4
    var_148 = arg7
    var_150 = arg6
    var_158 = arg5
    
    if (rax_6[4].d != 2)
        var_104 = 5
    else
        var_104 = 7
int64_t result = sub_14107eb00(rcx_4, rdx_2, r8_2, r9, var_158, var_150, var_148, var_140, var_138, 
    var_130, var_128, var_120, var_118)
__security_check_cookie(rax_1 ^ &var_178)
return result
