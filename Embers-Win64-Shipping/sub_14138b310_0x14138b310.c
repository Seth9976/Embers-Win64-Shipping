// 函数: sub_14138b310
// 地址: 0x14138b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char rbp = 0
char var_f8
char* var_e8 = &var_f8
void*** (* var_f0)() = j_sub_140597fc0
int32_t var_f4 = 0
var_f8 = 0
int64_t* rax_3
int128_t zmm6
rax_3, zmm6 = sub_14081d830(0x110, sub_140a756e0(&var_f0, &data_143958018) + 0x10, 1, 0)
int64_t* rbx = rax_3
int64_t (* var_a8)(int64_t* arg1, int64_t* arg2, void** arg3)
void*** var_98
void var_88

if (rax_3 == 0)
    rbx = nullptr
else
    int128_t var_48_1 = zmm6
    zmm6 = *arg6
    int64_t r9
    int64_t var_d8_1 = r9
    int64_t var_bc_1 = arg8
    void*** rax_5 = sub_140a82f30(0x38, 8)
    *rax_5 = &data_142ec17a8
    *(rax_5 + 8) = arg3.o
    *(rax_5 + 0x18) = zmm6
    int128_t zmm0_2
    zmm0_2.d = arg5.d
    *(rax_5 + 0x28) = zmm0_2
    var_98 = rax_5
    int64_t (* rax_6)(int64_t* arg1, int64_t* arg2, void** arg3) = var_a8
    
    if (rax_5 != -8)
        rax_6 = sub_141396a40
    
    var_a8 = rax_6
    rbx[1].d = 0
    rbx[2] = 0
    rbx[3].d = 0
    rbx[4] = 0
    rbx[5].d = 0
    rbx[6] = 1
    __builtin_memset(&rbx[7], 0, 0x18)
    rbx[0xe] = u"UnknownTexture"
    rbx[0xa] = 1
    rbx[0xb].w = 1
    *(rbx + 0x5c) = 0
    *(rbx + 0x64) = 0
    rbx[0xd].w = 0
    rbx[0xf].w = 1
    *(rbx + 0x7a) = 0
    rbx[0x10] = 0
    rbx[0x11].d = 0
    __builtin_memset(&rbx[0x12], 0, 0x38)
    *rbx = &data_142f6c690
    rbx[0x1a] = var_a8
    rbx[0x1c] = 0
    
    if (rbx[0x1a] != 0)
        void*** rcx_2 = &var_88
        
        if (var_98 != 0)
            rcx_2 = var_98
        
        (**rcx_2)(rcx_2)
    
    rbp = 1

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_10 = (rsi_1 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_1 << 3)) = rbx

if ((rbp & 1) != 0 && var_a8 != 0)
    void*** rcx_4 = &var_88
    
    if (var_98 != 0)
        rcx_4 = var_98
    
    (*rcx_4)[2](rcx_4)

int64_t r9_1 = *rbx
(*(r9_1 + 0x18))(rbx, 0, arg4, r9_1)

if (*arg7 != 0)
    int64_t r9_2 = *rbx
    (*(r9_2 + 0x18))(rbx, 1, arg7, r9_2)

*arg1 = rbx
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_118)
return arg1
