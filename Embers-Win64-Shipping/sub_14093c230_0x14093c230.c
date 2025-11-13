// 函数: sub_14093c230
// 地址: 0x14093c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_18

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_18 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_18, 2)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_3 = arg1[1]
arg_18 = 0x3a
(*(*rcx_3 + 0x150))(rcx_3, &arg_18, 2)
wchar16 const* const rbp = u"false"

if (arg3 != 0)
    rbp = u"true"

int32_t r15 = 0
int32_t rax_4 = 0
int16_t* var_38 = nullptr
int16_t* rsi = nullptr
int32_t var_30 = 0
int32_t rdi = 0
int32_t var_2c = 0

if (*rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_4 = var_2c
        rdi = var_30
        rsi = var_38
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax_4)
        sub_140594770(&var_38)
        rsi = var_38
    
    UnDecorator::getReferenceType(rsi, rbp, (rbx_1.d + 1) * 2)

int64_t* rcx_7 = arg1[1]
int16_t* const rdx_6

if (rdi == 0)
    rdx_6 = &data_142d40450
else
    r15 = rdi - 1
    rdx_6 = rsi

(*(*rcx_7 + 0x150))(rcx_7, rdx_6, sx.q(r15) * 2)

if (rsi != 0)
    sub_140a74f90(rsi)

arg1[4].d = (zx.d(arg3) ^ 1) + 9
return (zx.d(arg3) ^ 1) + 9
