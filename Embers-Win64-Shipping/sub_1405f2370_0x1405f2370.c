// 函数: sub_1405f2370
// 地址: 0x1405f2370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t var_68 = -2
char r14 = 0
int32_t arg_8 = 0
int64_t var_50
wchar16 const* const rdi

if (arg2 != data_14395f9a0)
    wchar16** rax_1 = sub_140b489f0(&arg_10, &var_50)
    r14 = 1
    arg_8 = 1
    
    if (rax_1[1].d == 0)
        rdi = &data_142d40450
    else
        rdi = *rax_1
else
    rdi = u"<current>"

int64_t rsi = 0
int64_t var_60 = 0
int32_t rdx_1 = 0
int32_t var_58 = 0
int32_t rcx_1 = 0
int32_t var_54 = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_60, rbx_1.d + 1)
        rcx_1 = var_54
        rdx_1 = var_58
        rsi = var_60
    
    int32_t rax_2 = rdx_1 + rbx_1.d + 1
    int32_t var_58_1 = rax_2
    
    if (rax_2 s> rcx_1)
        sub_140594770(&var_60)
        rsi = var_60
    
    UnDecorator::getReferenceType(rsi, rdi, (rbx_1.d + 1) * 2)

if ((r14 & 1) != 0)
    int64_t rcx_5 = var_50
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int16_t var_40

if ((**(arg1 + 8))(arg1 + 8, 4) != 0)
    int64_t* rax_7 = (*(*(arg1 + 8) + 0x30))(arg1 + 8, &arg_8)
    int64_t rcx_8 = arg_10
    
    if (rcx_8 == *rax_7)
        arg_10 = data_14395f9a0
        var_40 = 0
    else if (rcx_8 != data_14395f9a0)
        var_40 = 0x14
        int64_t var_38_1 = rcx_8
    else
        var_40 = 0
else
    arg_10 = data_14395f9a0
    var_40 = 0

int64_t* rcx_9 = *(arg1 + 0x60)
int64_t* rbx_3

if ((*(*rcx_9 + 0x48))(rcx_9, 0, &var_40) s>= 0)
    *(arg1 + 0x78) = 1
    rbx_3.b = 1
else
    rbx_3.b = 0

if (rsi != 0)
    sub_140a74f90(rsi)

return zx.q(rbx_3.b)
