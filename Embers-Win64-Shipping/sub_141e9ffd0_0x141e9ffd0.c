// 函数: sub_141e9ffd0
// 地址: 0x141e9ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
void* var_18 = __security_cookie ^ &var_c8
void* result

if (arg1 == 0)
    result.b = 0
else
    int32_t r9_1 = *(arg2 + 0xa0)
    int128_t var_38
    int128_t* r8 = &var_38
    int128_t zmm0 = *(arg2 + 0x88)
    int64_t (* rcx)(int64_t* arg1, int64_t* arg2) = *(arg2 + 0x78)
    int64_t rax_1 = *(arg2 + 0x80)
    int64_t zmm1 = *(arg2 + 0x98)
    int32_t var_20_1 = r9_1
    r9_1.b = not.b(r9_1.b)
    int64_t (* var_50)(int64_t* arg1, int64_t* arg2) = rcx
    int64_t var_48_1 = rax_1
    int64_t var_28_1 = zmm1
    int64_t* var_40_1 = arg1
    var_38 = zmm0
    int64_t (* var_98)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
    int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
    
    if ((r9_1.b & 1) != 0)
        int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = rcx
        int64_t (** var_90_2)(int64_t* arg1, int64_t* arg2) = &var_68
        var_88 = rcx
        var_98 = sub_140cf2f50
        int64_t (** var_58_1)(int64_t* arg1, int64_t* arg2) = &var_88
        int64_t (* var_60)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
        result = sub_141e9f920(arg1, arg3, r8, &var_60, &var_98)
        
        if (result == 0)
            result.b = 0
        else
            void* rax_5 = result - *arg1
            var_98 = &var_50
            var_90_2:4.d = 1
            var_90_2.d = (divs.dp.q(sx.o(rax_5), sx.q(var_38:0xc.d))).d
            sub_140ceed90(&var_50, &var_98)
            result.b = 1
    else
        int64_t (* var_78)(int64_t* arg1, int64_t* arg2) = rcx
        int64_t* var_90_1 = &var_78
        int64_t (* var_70)(int64_t* arg1, int64_t* arg2) = rcx
        var_98 = sub_140cf2f50
        int64_t* var_80_1 = &var_70
        var_88 = sub_140cf2f40
        result = sub_141e9f810(arg1, arg3, r8, &var_88, &var_98)
        
        if (result == 0)
            result.b = 0
        else
            void* rcx_2 = *arg1
            
            if ((rcx_2.b & 1) != 0)
                rcx_2 = (rcx_2 s>> 1) + arg1
            
            var_80_1:4.d = 1
            int64_t rcx_4 = sx.q(var_38:0xc.d)
            var_88 = &var_50
            var_80_1.d = (divs.dp.q(sx.o(result - rcx_2), rcx_4)).d
            sub_140ceed90(&var_50, &var_88)
            result.b = 1

__security_check_cookie(var_18 ^ &var_c8)
return result
