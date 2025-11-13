// 函数: sub_141eddef0
// 地址: 0x141eddef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = nullptr
void var_58
void* rax_5
int128_t zmm1

if (*(arg1 + 0x5f8) == 0)
label_141eddf70:
    int128_t var_88
    rax_5 = &var_88
    zmm1 = arg3[1]
    var_88 = *arg3
    int128_t var_68_1 = arg3[2]
    int128_t var_78_1 = zmm1
else
    int64_t* rcx = *(arg1 + 0x5f0)
    
    if (rcx == 0)
        goto label_141eddf70
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141eddf70
    
    int64_t* rcx_1
    
    if (*(arg1 + 0x5f8) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x5f0)
    
    (*(*rcx_1 + 0x48))(rcx_1, &var_58, arg3, arg1)
    rax_5 = &var_58

void* rcx_2 = *(arg1 + 0x148)
zmm1 = *(rax_5 + 0x10)
int128_t var_e8 = *rax_5
int128_t var_c8 = *(rax_5 + 0x20)
int128_t var_d8 = zmm1
int128_t var_b8
sub_141f37870(*(rcx_2 + 0x280), &var_b8, &var_e8)
void* rax_9

if (*(arg1 + 0x608) == 0)
label_141ede024:
    rax_9 = &var_e8
    var_e8 = var_b8
    int128_t var_98
    int128_t var_c8_1 = var_98
    int128_t var_a8
    int128_t var_d8_1 = var_a8
else
    int64_t* rcx_4 = *(arg1 + 0x600)
    
    if (rcx_4 == 0)
        goto label_141ede024
    
    if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
        goto label_141ede024
    
    if (*(arg1 + 0x608) != 0)
        rdi = *(arg1 + 0x600)
    
    (*(*rdi + 0x48))(rdi, &var_58, &var_b8, arg1)
    rax_9 = &var_58

int128_t zmm1_1 = *(rax_9 + 0x10)
*arg2 = *rax_9
int128_t zmm0_1 = *(rax_9 + 0x20)
arg2[1] = zmm1_1
arg2[2] = zmm0_1
__security_check_cookie(rax_1 ^ &var_108)
return arg2
