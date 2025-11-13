// 函数: sub_141ca6ff0
// 地址: 0x141ca6ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_1e8
sub_140b4c2a0(&var_1e8)
var_1e8 = &data_1432102a8
int64_t var_158 = 0
int64_t var_150 = 0
void var_140
sub_140cd3be0(&var_140)
void** const rax = var_1e8
int64_t rdx
rdx.b = 1
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
int64_t var_148 = 0
rax[0x14](&var_1e8, rdx)
int64_t rdx_1
rdx_1.b = 1
var_1e8[0x1b](&var_1e8, rdx_1)
int64_t* var_1f8
int64_t* rax_3 = (*(*arg2 + 0x10))(arg2, &var_1f8)

if (&var_158 != rax_3)
    int64_t rcx_5 = var_158
    
    if (rcx_5 != 0)
        arg4 = sub_140a74f90(rcx_5)
    
    var_158 = *rax_3
    *rax_3 = 0
    var_150.d = rax_3[1].d
    var_150:4.d = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t* rcx_7 = var_1f8

if (rcx_7 != 0)
    arg4 = sub_140a74f90(rcx_7)

sub_141ca7af0(&var_1e8, nullptr, arg4)
sub_141ca8a50(&var_1e8, arg3)
sub_141ca8410(&var_1e8, arg3)
var_1f8 = nullptr
int32_t i_2 = 0
sub_141ca9170(&var_1e8, arg3, &var_1f8)
int32_t i_1 = i_2
int64_t* rsi = var_1f8
int64_t* rbx_2 = rsi

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_12 = *rbx_2
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

var_1e8 = &data_1432102a8

if (arg2 != 0)
    (**arg2)(arg2, 1)

int64_t rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140b977c0(&var_140)
int64_t rcx_17 = var_158

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return sub_140b4cb40(&var_1e8)
