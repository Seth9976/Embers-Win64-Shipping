// 函数: sub_14282b1a8
// 地址: 0x14282b1a8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char result = sub_14282b12c(arg1)

if (result != 0)
    void* var_b8 = *(arg1 + 8)
    int32_t var_b0_1 = *(arg1 + 0x10)
    int64_t rbx_1 = *(arg1 + 0x110)
    void var_a8
    sub_14282b108(&var_a8, &var_b8, rbx_1)
    
    if (rbx_1 == 0)
        void* rax_3 = sub_142827e20(arg1, *(arg1 + 0x10), 0)
        void* var_90_1 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) = 2
            int32_t* rax_4 = *(rax_3 + 0x10)
            int32_t* var_88_1 = rax_4
            *rax_4 = 2
    
    int32_t var_78 = 0
    int32_t var_74_1 = 0xe
    int64_t var_70_1 = *(arg1 + 8)
    int32_t var_68_1 = *(arg1 + 0x10)
    int64_t var_50_1 = 0
    int64_t var_48_1 = 0xf
    char var_60_1 = 0
    int64_t* var_40
    __builtin_memset(&var_40, 0, 0x1c)
    sub_142826d60(arg1 + 0x58, &var_78)
    int64_t* rcx_3 = var_40
    
    if (rcx_3 != 0)
        int128_t var_38
        sub_140688f70(rcx_3, var_38.q)
        int64_t* rcx_4 = var_40
        sub_14058ba50(rcx_4, (var_38:8.q - rcx_4) & 0xffffffffffffffe0)
        int64_t var_40_1
        __builtin_memset(&var_40_1, 0, 0x18)
    
    if (var_48_1 u>= 0x10)
        sub_14058ba50(var_60_1.q, var_48_1 + 1)
    
    var_b8 = arg1 + 0x58
    int32_t* rcx_6 =
        *(*(arg1 + 0x60) + (((*(arg1 + 0x68) - 1) & (*(arg1 + 0x78) - 1 + *(arg1 + 0x70))) << 3))
    int32_t* var_80_1 = rcx_6
    *rcx_6 = 2
    result = sub_14282b068(arg1 + 0x88, &var_a8)

__security_check_cookie(rax_1 ^ &var_d8)
return result
