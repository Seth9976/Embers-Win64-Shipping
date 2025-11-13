// 函数: sub_1425c4b90
// 地址: 0x1425c4b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_18

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_18 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_18, 2)

sub_1425c9240(arg1[1])
int32_t i_2 = *(arg1 + 0x24)
int64_t* rdi = arg1[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_2 = *rdi
        arg_18 = 9
        (*(rax_2 + 0x150))(rdi, &arg_18, 2)
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
wchar16 const* const r15 = u"false"

if (arg3 != 0)
    r15 = u"true"

int32_t rbp_1 = 0
int16_t* r14 = nullptr
int64_t var_30 = 0
int32_t rax_6 = 0
int16_t* var_38 = nullptr
uint64_t rdi_1 = -1

if (*r15 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r15[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_6 = var_30:4.d
        rbp_1 = var_30.d
        r14 = var_38
    
    rbp_1 += rbx_1.d + 1
    var_30.d = rbp_1
    
    if (rbp_1 s> rax_6)
        sub_140594770(&var_38)
        rbp_1 = var_30.d
        r14 = var_38
    
    UnDecorator::getReferenceType(r14, r15, (rbx_1.d + 1) * 2)

int64_t* r10 = arg1[1]
int32_t rdx_8
int16_t* const r9

if (rbp_1 == 0)
    rdx_8 = 0
    r9 = &data_142d40450
else
    rdx_8 = rbp_1 - 1
    r9 = r14

if (r9 == 0)
    rdi_1 = 0
else
    if (rdx_8 s> 0 && r9[sx.q(rdx_8) - 1] == 0)
        rdx_8 -= 1
    
    if (rdx_8 != 0xffffffff)
        rdi_1 = zx.q(rdx_8)
    else
        do
            rdi_1 += 1
        while (r9[rdi_1] != 0)

(*(*r10 + 0x150))(r10, r9, sx.q(rdi_1.d) * 2)

if (r14 != 0)
    sub_140a74f90(r14)

arg1[4].d = (zx.d(arg3) ^ 1) + 9
return (zx.d(arg3) ^ 1) + 9
