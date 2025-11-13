// 函数: sub_1420f6560
// 地址: 0x1420f6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_da8
int64_t rax_1 = __security_cookie ^ &var_da8
int128_t var_cc8
__builtin_memset(&var_cc8, 0, 0x38)
int128_t zmm0 = data_143dbb1e0
int128_t var_c80 = zmm0
int128_t var_c70 = zmm0
int32_t var_c90 = 0xffffffff
int128_t var_c60 = data_14399f5c0
int64_t var_c88 = 0
int32_t var_b8c = 0xbf800000
int32_t var_c48 = 0x42c80000
int64_t var_c50 = 0
int64_t var_c40
__builtin_memset(&var_c40, 0, 0x2c)
int32_t var_c14 = 0x80
int32_t var_c10 = 0xffffffff
int32_t var_c0c = 0
int64_t var_c00 = 0
int32_t var_bf8 = 0
char var_ba0 = 0
int64_t var_b98 = -1
int32_t var_b90 = 0x3f800000
int64_t var_b88 = 0
int32_t var_b80 = 0
int16_t var_b7c = 0x100
int32_t var_b78 = 0x42b40000
int32_t var_b74 = 0x42b40000
void var_d58
int64_t* var_bf0
int64_t* result

if (sub_1420f6bc0(arg1, &var_d58, arg7, arg8, 0x42c80000, arg5, arg6, arg9) != 0)
    int128_t var_b68 = zx.o(0)
    int128_t var_b58
    __builtin_memcpy(&var_b58, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb4\x42\x00\x00\xb4\x42\x00\x00\x00\x44\x00\x00\x00\x"
    "00\x00\x00\x00\x4a\xab\xaa\xaa\x3f", 
        0x20)
    char var_b34_1 = 0
    int32_t var_b30_1 = 0
    void var_b28
    sub_1422d7fd0(&var_b28)
    int64_t var_5e8_1 = 0
    char var_5a8_1 = 0
    (*(*arg1 + 0x268))(arg1, &var_b68, zx.q(arg9))
    int32_t rax_7 = var_b68:8.d
    int128_t zmm1_1 = var_b58:0xc.d
    *arg3 = var_b68.q
    arg3[1].d = rax_7
    int32_t rax_8 = var_b58:4.d
    *arg4 = var_b68:0xc.q
    arg4[1].d = rax_8
    int64_t* rcx_2 = arg1[6]
    int32_t var_b78_1 = var_b58:8.d.d
    int32_t var_b38
    var_b7c:1.b = (((var_b38 & 0xfffffffe) | 2) u>> 1).b & 1
    int32_t var_b74_1 = zmm1_1.d
    int128_t var_ca8
    var_ca8.q = arg2
    
    if (rcx_2[0x62].b != 0)
        sub_142261520(rcx_2, arg3, &var_c40)
    else
        if (var_ba0 != 0)
            char var_ba0_1 = 0
            int32_t var_ba8_1 = 0
            int64_t var_bb0
            
            if (var_bb0 != 0)
                sub_140a74f90(var_bb0)
            
            int64_t var_be8
            var_be8.d = 0
            
            if (var_be8:4.d != 0)
                sub_140638cc0(&var_bf0, 0)
            
            int32_t var_bc0_1 = 0xffffffff
            int32_t var_bbc_1 = 0
            int64_t var_be0
            sub_14059a8e0(&var_be0, 0)
            int64_t var_bd0
            
            if (var_bd0 != 0)
                sub_140a74f90(var_bd0)
            
            rcx_2 = var_bf0
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
        
        __builtin_memset(&var_bf0, 0, 0x2c)
        int32_t var_bc4_1 = 0x80
        int32_t var_bc0_2 = 0xffffffff
        int32_t var_bbc_2 = 0
        int64_t var_bb0_1 = 0
        int32_t var_ba8_2 = 0
        char var_ba0_2 = 1
    
    int32_t var_ccc
    int64_t zmm0_1 = var_ccc
    zmm0_1.d f- 1f
    rcx_2.b = zmm0_1.d f< 1f
    sub_14230d3d0(rcx_2.b, &arg2[5])
    int64_t* rax_11 = j_sub_140a82f30(0x15a0)
    
    if (rax_11 == 0)
        result = nullptr
    else
        result = sub_1422d8af0(rax_11, &var_d58)
    
    result[0xc6] = *arg3
    result[0xc7].d = arg3[1].d
    *(result + 0x63c) = *arg4
    *(result + 0x644) = arg4[1].d
    uint128_t var_5d8
    
    if (&var_5d8 != &result[0xce])
        if (result[0xd4].b != 0)
            result[0xd4].b = 0
        
        if (var_5a8_1 != 0)
            *(result + 0x670) = var_5d8
            int128_t var_5c8
            *(result + 0x680) = var_5c8
            uint128_t var_5b8
            *(result + 0x690) = var_5b8
            result[0xd4].b = 1
    
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_16 = (rsi_1 + 1).d
    arg2[1].d = rax_16
    
    if (rax_16 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_1 << 3)) = result
    int32_t rax_18 = arg3[1].d
    uint64_t var_d68 = *arg3
    int32_t var_d60_1 = rax_18
    sub_1422f5770(result, &var_d68)
    int64_t rcx_10 = *(arg1[6] + 0x2b8)
    int64_t* var_d78
    
    if (rcx_10 != 0)
        sub_14226bd00(rcx_10, &var_d68, &var_d78)
        int64_t* rax_20 = var_d78
        int32_t i = 0
        
        if (rax_20[1].d s> 0)
            float (* r14_1)[0x4] = nullptr
            
            do
                sub_1422ebf00(result, sx.q(i) * 0x540 + *var_d68, *(r14_1 + *rax_20))
                rax_20 = var_d78
                r14_1 = &(*r14_1)[1]
                i += 1
            while (i s< rax_20[1].d)
    
    sub_1422ebf00(result, &var_b28, var_b30_1)
    int64_t* rcx_14 = *(arg1[6] + 0x2b8)
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x728))(rcx_14, &result[0x1bc])
    
    if (*(data_143f5b298 + 0xaf8) != 0)
        void var_598
        sub_1422d7fd0(&var_598)
        var_d78.d = 0x3f800000
        int64_t* rcx_16 = *(data_143f5b298 + 0xaf8)
        
        if ((*(*rcx_16 + 0xd0))(rcx_16, &var_598, zx.q(arg9), &var_d78) != 0)
            sub_1422ebf00(result, &var_598, var_d78.d)
        
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
    
    sub_1422e2840(result)
    int32_t i_1 = 0
    
    if (arg2[0xd].d s> 0)
        int64_t* rsi_2 = nullptr
        
        do
            int64_t* rcx_20 = *(rsi_2 + arg2[0xc])
            (*(*rcx_20 + 0x10))(rcx_20, arg2, result)
            i_1 += 1
            rsi_2 = &rsi_2[2]
        while (i_1 s< arg2[0xd].d)
    
    char var_5a8_2 = 0
    int64_t var_5f8
    
    if (var_5f8 != 0)
        sub_140a74f90(var_5f8)
else
    result = nullptr

sub_1413c3330(&var_bf0)
int32_t var_bf8_1 = 0

if (var_c00 != 0)
    sub_140a74f90(var_c00)

int64_t var_c38
var_c38.d = 0
int32_t var_c10_1 = 0xffffffff
int32_t var_c0c_1 = 0
int64_t var_c30
sub_14059a8e0(&var_c30, 0)
int64_t var_c20

if (var_c20 != 0)
    sub_140a74f90(var_c20)

int64_t rcx_27 = var_c40

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_da8)
return result
