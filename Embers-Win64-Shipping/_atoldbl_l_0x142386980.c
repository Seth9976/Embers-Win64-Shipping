// 函数: _atoldbl_l
// 地址: 0x142386980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*(arg1 + 0x60) = 0
int64_t var_58 = 0
int128_t var_38
int128_t var_28
int128_t zmm0
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (arg1 + 0x70 != &var_58)
    zmm5 = *(arg1 + 0x70)
    zmm2 = *(arg1 + 0x80)
    zmm3 = *(arg1 + 0x90)
    zmm4 = *(arg1 + 0xa0)
    *(arg1 + 0x70) = var_58.o
    zmm0 = var_38
    *(arg1 + 0x80) = nullptr.o
    *(arg1 + 0x90) = zmm0
    *(arg1 + 0xa0) = var_28
    var_58.o = zmm5
    int128_t* var_48
    var_48.o = zmm2
    var_38 = zmm3
    var_28 = zmm4
    
    if (zmm5.q != 0)
        int128_t* rcx = &var_38
        
        if (var_48 != 0)
            rcx = var_48
        
        (*(*rcx + 0x10))(rcx)

*(arg1 + 0xb0) = 0
int64_t* result = &var_58
var_58 = 0

if (arg1 + 0xc0 != &var_58)
    zmm5 = *(arg1 + 0xc0)
    zmm2 = *(arg1 + 0xd0)
    zmm3 = *(arg1 + 0xe0)
    zmm4 = *(arg1 + 0xf0)
    result = zmm5.q
    var_58.o = zmm5
    *(arg1 + 0xc0) = var_58.o
    zmm0 = var_38
    *(arg1 + 0xd0) = nullptr.o
    *(arg1 + 0xe0) = zmm0
    *(arg1 + 0xf0) = var_28
    int128_t* var_48_1
    var_48_1.o = zmm2
    var_38 = zmm3
    int128_t var_28_1 = zmm4
    
    if (result != 0)
        int128_t* rcx_1 = &var_38
        
        if (var_48_1 != 0)
            rcx_1 = var_48_1
        
        result = (*(*rcx_1 + 0x10))(rcx_1)

__security_check_cookie(rax_1 ^ &var_78)
return result
