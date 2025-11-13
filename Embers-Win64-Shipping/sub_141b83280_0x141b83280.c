// 函数: sub_141b83280
// 地址: 0x141b83280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
sub_141f2e780(arg1, arg2)
*arg1 = &data_143081320
arg1[5] = &data_143081888
__builtin_memset(&arg1[0x3e], 0, 0x28)
*(arg1 + 0x21c) = 0x43fa0000
arg1[0x44].w = 0x100
*(arg1 + 0x222) = 0
*(arg1 + 0x224) = data_14399f5f0
void var_178
sub_140d94220(&arg1[0x47], sub_140d947e0(&var_178))
void var_28
sub_140596d80(&var_28)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void var_170
sub_140d94d20(&var_170)
arg1[0x4b].w &= 0xfe00
void* rcx_6 = &arg1[0x4e]
arg1[0x4c] = 0
arg1[0x4d] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_5 = *(rcx_6 + 0x10)

if (rax_5 != 0)
    rcx_6 = rax_5

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x52].d = 0xffffffff
*(arg1 + 0x294) = 0
arg1[0x54] = 0
arg1[0x55].d = 0
arg1[0x62].d = 0xffffffff
*(arg1 + 0x314) = 0
arg1[0x63].d = 0xffffffff
*(arg1 + 0x31c) = 0
arg1[0x64].d = 0xffffffff
__builtin_memset(arg1 + 0x324, 0, 0x14)
memset(&arg1[0x56], 0, 0x88)
arg1[0x57].d = 0x3f800000
arg1[0x76].d = 0xffffffff
*(arg1 + 0x3b4) = 0
arg1[0x77].d = 0xffffffff
*(arg1 + 0x3bc) = 0
arg1[0x78].d = 0xffffffff
__builtin_memset(arg1 + 0x3c4, 0, 0x14)
memset(&arg1[0x6a], 0, 0x88)
arg1[0x6b].d = 0x3f800000
*(arg1 + 0x3a) |= 3
*(arg1 + 0x89) |= 0x80
arg1[0x43].b = 3
__security_check_cookie(rax_1 ^ &var_198)
return arg1
