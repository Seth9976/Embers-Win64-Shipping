// 函数: sub_140668ff0
// 地址: 0x140668ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
uint32_t r12 = zx.d(arg3)
int16_t arg_18

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_18 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_18, 2)

sub_14067f880(arg1[1])
int32_t i_2 = *(arg1 + 0x24)
int64_t* rsi = arg1[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_2 = *rsi
        arg_18 = 9
        (*(rax_2 + 0x150))(rsi, &arg_18, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_5 = arg1[1]
arg_18 = 0x3a
(*(*rcx_5 + 0x150))(rcx_5, &arg_18, 2)
int64_t* rcx_6 = arg1[1]
arg_18 = 0x20
(*(*rcx_6 + 0x150))(rcx_6, &arg_18, 2)
wchar16 const* const r14 = u"false"

if (r12.b != 0)
    r14 = u"true"

int32_t r15 = 0
int32_t rax_6 = 0
int16_t* var_38 = nullptr
int16_t* rbp_1 = nullptr
int32_t var_30 = 0
int32_t rsi_1 = 0
int32_t var_2c = 0

if (*r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_6 = var_2c
        rsi_1 = var_30
        rbp_1 = var_38
    
    rsi_1 += rbx_1.d + 1
    
    if (rsi_1 s> rax_6)
        sub_140594770(&var_38)
        rbp_1 = var_38
    
    UnDecorator::getReferenceType(rbp_1, r14, (rbx_1.d + 1) * 2)

int64_t* rcx_10 = arg1[1]
int16_t* const rdx_8

if (rsi_1 == 0)
    rdx_8 = &data_142d40450
else
    r15 = rsi_1 - 1
    rdx_8 = rbp_1

(*(*rcx_10 + 0x150))(rcx_10, rdx_8, sx.q(r15) * 2)

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

arg1[4].d = (r12 ^ 1) + 9
return (r12 ^ 1) + 9
