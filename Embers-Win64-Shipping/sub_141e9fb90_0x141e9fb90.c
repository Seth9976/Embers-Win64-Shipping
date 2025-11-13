// 函数: sub_141e9fb90
// 地址: 0x141e9fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
void* var_20 = __security_cookie ^ &var_d8
void* result

if (arg1 == 0)
    result.b = 0
else
    int32_t r9 = *(arg2 + 0xa0)
    int128_t var_40
    int128_t* r8 = &var_40
    int64_t (* rdx)(int64_t* arg1, int64_t* arg2) = *(arg2 + 0x78)
    int32_t var_28_1 = r9
    r9.b = not.b(r9.b)
    int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) = rdx
    int64_t var_50_1 = *(arg2 + 0x80)
    int64_t var_30_1 = *(arg2 + 0x98)
    void** var_48_1 = arg1
    var_40 = *(arg2 + 0x88)
    int64_t (* var_a8)(int64_t* arg1, int64_t* arg2)
    int64_t (* var_98)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
    
    if ((r9.b & 1) != 0)
        var_a8 = rdx
        int64_t (** var_70_1)(int64_t* arg1, int64_t* arg2) = &var_a8
        var_98 = rdx
        int64_t (* var_78)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
        int64_t (** var_60_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_98
        int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
        result = sub_141e9f920(arg1, arg3, r8, &var_68, &var_78)
    else
        int64_t (* var_88)(int64_t* arg1, int64_t* arg2) = rdx
        int64_t* var_90_1 = &var_88
        int64_t (* var_80)(int64_t* arg1, int64_t* arg2) = rdx
        var_98 = sub_140cf2f50
        int64_t* var_a0_1 = &var_80
        var_a8 = sub_140cf2f40
        result = sub_141e9f810(arg1, arg3, r8, &var_a8, &var_98)
    
    if (arg4 == 0)
        result.b = result != 0
    else
        int64_t* rcx = *(arg2 + 0x80)
        
        if (result != 0)
            (*(*rcx + 0xd8))(rcx, arg4, result)
            result.b = result != 0
        else if (not(test_bit(zx.q(rcx[8].d), 9)))
            (*(*rcx + 0xf0))(rcx, arg4)
            result.b = result != 0
        else
            memset(arg4, 0, sx.q(*(rcx + 0x3c) * rcx[7].d))
            result.b = result != 0

__security_check_cookie(var_20 ^ &var_d8)
return result
