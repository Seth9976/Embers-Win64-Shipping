// 函数: sub_141295890
// 地址: 0x141295890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t i = 0
int32_t var_2a4 = arg7

if ((not.b(arg5) & 1) != 0)
    void* rcx = *(arg2 + 0x88)
    int64_t* rcx_1
    int128_t var_118
    
    if (rcx == 0)
        rcx_1 = &var_118
        __builtin_memcpy(&var_118, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        int128_t var_d8
        __builtin_memset(&var_d8, 0, 0x20)
        data_142d3f660
        int128_t var_b8
        __builtin_memcpy(&var_b8, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        int64_t var_78_1 = 0
        int32_t var_68_1 = 0
    else
        rcx_1 = sub_1422e4ff0(rcx, &var_118)
    int128_t var_238_1 = *rcx_1
    int128_t var_228_1 = *(rcx_1 + 0x10)
    int128_t var_218_1 = *(rcx_1 + 0x20)
    int128_t var_208_1 = *(rcx_1 + 0x30)
    int128_t var_1f8_1 = *(rcx_1 + 0x40)
    int128_t var_1e8_1 = *(rcx_1 + 0x50)
    int128_t var_1d8_1 = *(rcx_1 + 0x60)
    int128_t var_1c8_1 = *(rcx_1 + 0x70)
    int128_t var_1b8_1 = *(rcx_1 + 0x80)
    int128_t var_1a8_1 = *(rcx_1 + 0x90)
    int128_t var_198_1 = *(rcx_1 + 0xa0)
    int32_t var_188_1 = (*(rcx_1 + 0xb0)).d
    int128_t var_178_1 = *(rcx_1 + 0xc0)
    int64_t r13
    
    if (arg4 == 0 || (*(*(arg4 + 0x20) + 0x138) & 8) != 0 || data_143f552a6 == 0)
        r13.b = 0
    else
        r13.b = 1
    
    char rax_6
    
    if (arg4 != 0)
        int64_t* rcx_2 = *(arg4 + 0x20)
        rax_6 = (*(*rcx_2 + 0x98))(rcx_2)
    
    int64_t r12
    
    if (arg4 == 0 || rax_6 == 0 || arg6 == 0 || data_143f552a8 == 0)
        r12.b = 0
    else
        r12.b = 1
    
    char rax_7
    
    if (r13.b != 0)
        rax_7 = sub_1412c75b0(arg4)
    
    char r15_1
    
    if (r13.b == 0 || rax_7 == 0 || arg6 == 0)
        r15_1 = 0
    else
        r15_1 = 1
    
    char var_2a8_1
    
    if (arg3 == 0)
        var_2a8_1 = 0
    else if (*(arg3 + 0x32) - 1 u> 1 && (*(arg3 + 0x38) & 0x40) == 0)
        if (*(arg3 + 0x33) == 2 && (*(arg3 + 0x39) & 1) != 0)
            goto label_141295aaa
        
        var_2a8_1 = 0
    else if ((*(arg3 + 0x39) & 1) == 0)
        var_2a8_1 = 0
    else
    label_141295aaa:
        var_2a8_1 = 1
        
        if (*(arg3 + 0x40) == 0)
            var_2a8_1 = 0
    
    char rax_10
    
    if (arg1 != 0)
        rax_10 = sub_1413ebdc0(arg1 + 0x12c0)
    
    void* r14
    
    if (arg1 == 0 || rax_10 == 0 || data_143f552a4 == 0)
        r14.b = 0
    else
        r14.b = 1
    
    void* rax_11
    
    if (arg1 != 0 && *(arg1 + 0x1148) s> 0)
        rax_11 = sub_14122ca50()
    
    if (arg1 == 0 || *(arg1 + 0x1148) s<= 0 || rax_11.b == 0)
        rax_11.b = 0
    else
        rax_11.b = 1
    
    if (var_188_1 == 2 && data_143f552a4 != 0 && data_143f552a3 != 0)
        void* rcx_7 = *(arg2 + 0x88)
        int128_t* rax_12
        int128_t var_168
        
        if (rcx_7 == 0)
            var_168 = zx.o(0)
            int128_t var_138
            __builtin_memset(&var_138, 0, 0x14)
            void var_147
            void* rax_13 = &var_147
            
            do
                i += 4
                *(rax_13 - 1) = 0
                rax_13 += 4
            while (i u< 4)
            
            rax_12 = &var_168
        else
            rax_12 = sub_1422e5a50(rcx_7, &var_168)
        int32_t var_248_1 = rax_12[4].d
        
        if (r13.b != 0)
            if (sub_1412c75b0(arg4) == 0 || r15_1 == 0)
                i = 0x14
            else
                i = 0x15
        else if (r12.b == 0)
            if (var_248_1 != 2 || data_143f552a7 == 0)
                i = 0xa
            else
                i = 0xd
        else if (var_248_1 != 2)
            i = 0xa
        else if (sub_1412c75b0(arg4) == 0 || data_143f552a7 == 0)
            i = 0xa
        else
            i = 0xe
    else if ((r14.b != 0 || rax_11.b != 0) && var_2a8_1 != 0)
        if (r13.b == 0)
            i = 0xf
            
            if (r12.b != 0)
                i = 0x12
        else
            char rax_16
            
            if (arg4 != 0)
                rax_16 = sub_1412c75b0(arg4)
            
            if (arg4 == 0 || rax_16 == 0 || r15_1 == 0)
                i = 0x10
            else
                i = 0x11
    else if (r15_1 != 0)
        i = 0x13
    else if (r12.b != 0 && data_143f552a6 != 0)
        i = 0x13

__security_check_cookie(rax_1 ^ &var_2c8)
return zx.q(i)
