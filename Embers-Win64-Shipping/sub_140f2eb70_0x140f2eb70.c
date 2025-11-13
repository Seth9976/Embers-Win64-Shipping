// 函数: sub_140f2eb70
// 地址: 0x140f2eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
char* rdi_1 = *(arg1 + 0x2c8) + 0x1a8
int32_t arg_8

if (*(rdi_1 + 0x10) != 0)
    int64_t* rcx = *(rdi_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rdi_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rdi_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *rdi_1 = arg_8.b

if (*rdi_1 == data_1439ae51d)
    *arg2 = data_143dbb1f0
    return arg2

if (*(arg1 + 0x300) != 0)
    int64_t* rcx_2 = *(arg1 + 0x2f8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        if (*(arg1 + 0x300) != 0)
            r14 = *(arg1 + 0x2f8)
        
        uint128_t var_68
        (*(*r14 + 0x48))(r14, &var_68)
        *(arg1 + 0x2e0) = var_68

int128_t zmm6 = *(arg1 + 0x2e8)
int128_t zmm9 = *(arg1 + 0x2e0)
int128_t zmm8 = *(arg1 + 0x2ec)
int128_t zmm7 = *(arg1 + 0x2e4)
void arg_20
int64_t* rax_9 = sub_140e13cf0(*(arg1 + 0x2c8), &arg_20)
int64_t zmm0_1 = *(arg1 + 0x410)
zmm9.d = zmm9.d f+ zmm6.d
zmm8.d = zmm8.d f+ zmm7.d
zmm9.d = zmm9.d f+ *rax_9
zmm8.d = zmm8.d f+ *(rax_9 + 4)
arg_8 = zmm9.d
int32_t arg_c = zmm8.d

if (not(zmm0_1.d f<= 0f) && not(zmm0_1.d f< zmm9.d))
    arg_8 = zmm0_1.d

zmm0_1 = *(arg1 + 0x414)

if (not(zmm0_1.d f<= 0f) && not(zmm0_1.d f> zmm8.d))
    arg_c = zmm0_1.d

*arg2 = arg_8.q
return arg2
