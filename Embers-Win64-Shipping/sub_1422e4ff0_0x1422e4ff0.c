// 函数: sub_1422e4ff0
// 地址: 0x1422e4ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108

if (*(arg1 + 8) == 0)
    int64_t* rcx = *(arg1 + 0x10)
    int128_t* rcx_1
    int128_t var_e8
    
    if (rcx == 0)
        rcx_1 = &var_e8
        __builtin_memcpy(&var_e8, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        int128_t var_a8
        __builtin_memset(&var_a8, 0, 0x20)
        data_142d3f660
        int128_t var_88
        __builtin_memcpy(&var_88, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        int64_t var_48_1 = 0
        int32_t var_38_1 = 0
    else
        rcx_1 = (*(*rcx + 0x20))(rcx, &var_e8)
    *arg2 = *rcx_1
    *(arg2 + 0x10) = rcx_1[1]
    *(arg2 + 0x20) = rcx_1[2]
    *(arg2 + 0x30) = rcx_1[3]
    *(arg2 + 0x40) = rcx_1[4]
    *(arg2 + 0x50) = rcx_1[5]
    *(arg2 + 0x60) = rcx_1[6]
    *(arg2 + 0x70) = rcx_1[7]
    *(arg2 + 0x80) = rcx_1[8]
    *(arg2 + 0x90) = rcx_1[9]
    *(arg2 + 0xa0) = rcx_1[0xa]
    *(arg2 + 0xb0) = rcx_1[0xb]
    *(arg2 + 0xc0) = rcx_1[0xc]
else
    *(arg2 + 0xc) = 0x3f800000
    *arg2 = 0
    arg2[1].d = 0
    *(arg2 + 0x14) = 0
    *(arg2 + 0x1c) = 0x3f800000
    *(arg2 + 0x24) = 0
    *(arg2 + 0x2c) = 0x3f800000
    *(arg2 + 0x34) = 0
    *(arg2 + 0x3c) = 0x3f800000
    __builtin_memset(&arg2[8], 0, 0x2c)
    *(arg2 + 0x6c) = 0x3f800000
    *(arg2 + 0x74) = 0
    *(arg2 + 0x7c) = 0x3f800000
    *(arg2 + 0x84) = 0
    *(arg2 + 0x8c) = 0x3f800000
    *(arg2 + 0x94) = 0
    *(arg2 + 0x9c) = 0x3f800000
    arg2[0x14] = 0
    arg2[0x16].d = 1

__security_check_cookie(rax_1 ^ &var_108)
return arg2
