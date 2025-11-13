// 函数: sub_141305470
// 地址: 0x141305470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char var_98
char* var_88 = &var_98
int32_t var_94 = 0
void*** (* var_90)() = j_sub_140597fc0
char rbp = 0
var_98 = 0
void*** rax_3 = sub_14081d830(0x100, sub_140a756e0(&var_90, &data_143958018) + 0x10, 1, 0)
void*** rbx = rax_3
int64_t (* var_78)(int64_t arg1, int64_t* arg2, int64_t* arg3)
void*** var_68
void** const var_58

if (rax_3 == 0)
    rbx = nullptr
else
    var_68 = nullptr
    var_58 = &data_142d42d18
    var_78 = sub_14130ebf0
    rbx[1].d = 0
    rbx[2] = 0
    rbx[3].d = 0
    rbx[4] = 1
    __builtin_memset(&rbx[5], 0, 0x18)
    rbx[0xc] = u"UnknownTexture"
    rbx[8] = 1
    rbx[9].w = 1
    *(rbx + 0x4c) = 0
    *(rbx + 0x54) = 0
    rbx[0xb].w = 0
    rbx[0xd].w = 1
    *(rbx + 0x6a) = 0
    rbx[0xe] = 0
    rbx[0xf].d = 0
    __builtin_memset(&rbx[0x10], 0, 0x38)
    *rbx = &data_142f5aeb0
    rbx[0x18] = var_78
    rbx[0x1a] = 0
    
    if (rbx[0x18] != 0)
        void** const* rcx_1 = &var_58
        
        if (var_68 != 0)
            rcx_1 = var_68
        
        (**rcx_1)(rcx_1)
    
    rbp = 1

int64_t rsi = sx.q(arg2[1].d)
int32_t rax_7 = (rsi + 1).d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = rbx

if ((rbp & 1) != 0 && var_78 != 0)
    void** const* rcx_3 = &var_58
    
    if (var_68 != 0)
        rcx_3 = var_68
    
    void** const rdx_4 = *rcx_3
    rdx_4[2](rcx_3, rdx_4)

*arg1 = rbx
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
