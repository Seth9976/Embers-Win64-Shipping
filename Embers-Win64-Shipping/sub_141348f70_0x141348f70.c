// 函数: sub_141348f70
// 地址: 0x141348f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_88
char* var_78 = &var_88
int32_t var_70 = 0
void*** (* var_80)() = j_sub_140597fc0
char rbp = 0
var_88 = 0
void*** (* rax_3)() = sub_14081d830(0x100, sub_140a756e0(&var_80, &data_143958018) + 0x10, 1, 0)
void*** (* rdi)() = rax_3
int64_t (* var_68)(int64_t arg1, int64_t* arg2, int64_t* arg3)
void*** var_58
void** const var_48

if (rax_3 == 0)
    rdi = nullptr
else
    var_58 = nullptr
    var_48 = &data_142d42d18
    var_68 = sub_1413502b0
    *(rdi + 8) = 0
    *(rdi + 0x10) = 0
    *(rdi + 0x18) = 0
    *(rdi + 0x20) = 1
    __builtin_memset(rdi + 0x28, 0, 0x18)
    *(rdi + 0x60) = u"UnknownTexture"
    *(rdi + 0x40) = 1
    *(rdi + 0x48) = 1
    *(rdi + 0x4c) = 0
    *(rdi + 0x54) = 0
    *(rdi + 0x58) = 0
    *(rdi + 0x68) = 1
    *(rdi + 0x6a) = 0
    *(rdi + 0x70) = 0
    *(rdi + 0x78) = 0
    __builtin_memset(rdi + 0x80, 0, 0x38)
    *rdi = &data_142f5b060
    *(rdi + 0xc0) = var_68
    *(rdi + 0xd0) = 0
    
    if (*(rdi + 0xc0) != 0)
        void*** rcx_1 = &var_48
        
        if (var_58 != 0)
            rcx_1 = var_58
        
        (**rcx_1)(rcx_1)
    
    rbp = 1

int64_t* rbx = *(arg1 + 8)
int64_t rsi = sx.q(rbx[1].d)
int32_t rax_7 = (rsi + 1).d
rbx[1].d = rax_7

if (rax_7 s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

*(*rbx + (rsi << 3)) = rdi

if ((rbp & 1) != 0 && var_68 != 0)
    void** const* rcx_3 = &var_48
    
    if (var_58 != 0)
        rcx_3 = var_58
    
    (*rcx_3)[2](rcx_3)

int64_t result = (*(*rdi + 0x18))(rdi, 0, arg1 + 0x28)
var_80 = rdi
var_78.d = 0
*(arg1 + 0x28) = var_80.o
__security_check_cookie(rax_1 ^ &var_a8)
return result
