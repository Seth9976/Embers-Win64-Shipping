// 函数: sub_1427a3540
// 地址: 0x1427a3540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_140d19010(arg3, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_88 = 0
void* result = sub_140d2dfc0(sub_1427c53e0(), arg3, 0, 0, 0, 0, 0, 0, 0)
void* rbx_1 = nullptr

if (arg1 != 0)
    int64_t rdx_1 = *arg1
    void* rax_3 = (*(rdx_1 + 8))(arg1, rdx_1)
    void* rax_4 = sub_140d41340()
    void* rdx_2 = *(rax_3 + 0x10)
    int64_t rcx_3 = sx.q(*(rax_4 + 0x38))
    
    if (rcx_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rcx_3 << 3)) == rax_4 + 0x30)
        rbx_1 = rax_3

*(result + 0x48) = rbx_1
void* rax_7

if (rbx_1 == 0)
    rax_7 = nullptr
else
    rax_7 = sub_140d21950(rbx_1, sub_1427ba960())

*(result + 0x50) = rax_7
int64_t rax_8 = *arg2
int64_t var_78 = rax_8
int128_t* var_68 = nullptr

if (rax_8 != 0)
    void* rax_9 = arg2[2]
    void* rcx_5 = &arg2[4]
    
    if (rax_9 != 0)
        rcx_5 = rax_9
    
    (**rcx_5)(rcx_5, &var_68)

int128_t var_58
int128_t var_48
int128_t zmm0_1
int128_t zmm1_1
int128_t zmm2_1
int128_t zmm3_1
int128_t zmm4_1
int128_t zmm5_1

if (result + 0x60 != &var_78)
    zmm2_1 = *(result + 0x60)
    zmm3_1 = *(result + 0x70)
    zmm4_1 = *(result + 0x80)
    zmm5_1 = *(result + 0x90)
    zmm1_1 = var_68.o
    *(result + 0x60) = var_78.o
    zmm0_1 = var_58
    *(result + 0x70) = zmm1_1
    *(result + 0x80) = zmm0_1
    *(result + 0x90) = var_48
    var_78.o = zmm2_1
    var_68.o = zmm3_1
    var_58 = zmm4_1
    var_48 = zmm5_1

if (var_78 != 0)
    int128_t* rax_11 = var_68
    int128_t* rcx_6 = &var_58
    
    if (rax_11 != 0)
        rcx_6 = rax_11
    
    (*(*rcx_6 + 0x10))(rcx_6)

int64_t rax_13 = arg2[8]
var_78 = rax_13
var_68 = nullptr

if (rax_13 != 0)
    void* rax_14 = arg2[0xa]
    void* rcx_7 = &arg2[0xc]
    
    if (rax_14 != 0)
        rcx_7 = rax_14
    
    (**rcx_7)(rcx_7, &var_68)

if (result + 0xa0 != &var_78)
    zmm2_1 = *(result + 0xa0)
    zmm3_1 = *(result + 0xb0)
    zmm4_1 = *(result + 0xc0)
    zmm5_1 = *(result + 0xd0)
    zmm1_1 = var_68.o
    *(result + 0xa0) = var_78.o
    zmm0_1 = var_58
    *(result + 0xb0) = zmm1_1
    *(result + 0xc0) = zmm0_1
    *(result + 0xd0) = var_48
    var_78.o = zmm2_1
    var_68.o = zmm3_1
    var_58 = zmm4_1
    int128_t var_48_1 = zmm5_1

if (var_78 != 0)
    int128_t* rax_16 = var_68
    int128_t* rcx_8 = &var_58
    
    if (rax_16 != 0)
        rcx_8 = rax_16
    
    (*(*rcx_8 + 0x10))(rcx_8)

if (arg2[8] != 0)
    void* rax_18 = arg2[0xa]
    void* rcx_9 = &arg2[0xc]
    
    if (rax_18 != 0)
        rcx_9 = rax_18
    
    (*(*rcx_9 + 0x10))(rcx_9)

if (*arg2 != 0)
    void* rax_20 = arg2[2]
    void* rcx_10 = &arg2[4]
    
    if (rax_20 != 0)
        rcx_10 = rax_20
    
    (*(*rcx_10 + 0x10))(rcx_10)

__security_check_cookie(rax_1 ^ &var_d8)
return result
