// 函数: sub_141e8f560
// 地址: 0x141e8f560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t (* r9)(int64_t* arg1, int64_t* arg2) = arg2[3]
int64_t (* r10)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = arg2[4]
char rax_2 = not.b(*(arg1 + 0x30))
int64_t r11 = arg2[2]
void** rbx = *(arg1 + 0x10)
int64_t (* rsi)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = arg2[1]
void* r8 = *arg2
int64_t (* var_f0)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = r10
int64_t var_e8 = r11
int64_t (* var_108)(int64_t* arg1, int64_t* arg2) = r9
int64_t (* var_110)(int64_t* arg1, int64_t* arg2) = r9
uint64_t result
int64_t (* var_128)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
int64_t (* var_118)(int64_t* arg1, int64_t* arg2)
int64_t (* var_100)(int64_t* arg1, int64_t* arg2)
int64_t (* var_e0)(int64_t* arg1, int64_t* arg2)
int64_t (* var_d0)(void* arg1, int64_t* arg2)
int64_t (* var_a0)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0)
void* const var_68
int128_t zmm0
int64_t zmm1

if ((rax_2 & 1) != 0)
    var_e0 = r9
    var_68 = &data_140d19280
    var_118 = r9
    int64_t* var_60_1 = &var_108
    var_128 = r10
    void* const var_58_1 = &data_140d19280
    int64_t (* var_d8_2)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = rsi
    zmm0 = *(r8 + 0x18)
    int64_t (** var_50_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_128
    zmm1 = *(r8 + 0x28)
    void* const* var_f8_1 = &var_68
    var_100 = sub_140d19310
    var_a0 = sub_140d19220
    int64_t (** var_98_1)(int64_t* arg1, int64_t* arg2) = &var_e0
    int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = sub_140d19220
    int64_t* var_88_1 = &var_f0
    int64_t (** var_c8_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = &var_a0
    var_d0 = sub_140d192b0
    int64_t (* var_c0)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
    int64_t* var_b8_1 = &var_110
    int64_t (* var_b0)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
    int64_t (** var_a8_1)(int64_t* arg1, int64_t* arg2) = &var_118
    int64_t (** var_138_1)(int64_t* arg1, int64_t* arg2) = &var_100
    int128_t var_48_1 = zmm0
    int64_t var_38_1 = zmm1
    int128_t var_80_1 = zmm0
    int64_t var_70_1 = zmm1
    result = sub_140d16fd0(rbx, rsi, r8 + 0x1c, &var_b0, &var_c0, &var_d0)
else
    var_68 = &data_140d19280
    var_118 = r10
    int64_t* var_60 = &var_d0
    var_d0 = r9
    void* const var_58 = &data_140d19280
    int64_t* var_50 = &var_118
    var_a0 = sub_140d19220
    int64_t* var_98 = &var_100
    var_100 = r9
    int64_t (* var_f8)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = rsi
    zmm0 = *(r8 + 0x18)
    int64_t (* var_90)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = sub_140d19220
    zmm1 = *(r8 + 0x28)
    int64_t* var_88 = &var_f0
    int128_t var_48 = zmm0
    var_128 = rsi
    int64_t var_38 = zmm1
    int128_t var_80 = zmm0
    int64_t var_70 = zmm1
    int32_t rax_3 = sub_140cf2f40(&var_110, &var_128)
    int32_t rax_4
    
    if (rbx[1].d != *(rbx + 0x24))
        int64_t* var_120_1 = &var_108
        var_128 = sub_140cf2f50
        rax_4 = sub_140cfe9c0(rbx, rsi, r8 + 0x1c, rax_3, &var_128)
    
    if (rbx[1].d == *(rbx + 0x24) || rax_4 == 0xffffffff)
        int64_t* var_d8_1 = &var_110
        var_128 = sub_140d192b0
        int64_t (** var_120_2)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = &var_a0
        var_e0 = sub_140cf2f40
        result = sub_140cf17b0(rbx, r8 + 0x1c, &var_e0, rax_3, &var_128)
    else
        void* rcx_3 = *rbx
        
        if ((rcx_3.b & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + rbx
        
        void* rbx_2 = sx.q(*(r8 + 0x2c) * rax_4) + rcx_3
        var_128 = rbx_2
        sub_140d19310(&var_68, &var_128)
        var_128 = rbx_2
        result = sub_140d192b0(&var_a0, &var_128)
__security_check_cookie(rax_1 ^ &var_168)
return result
