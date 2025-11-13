// 函数: sub_1425c4db0
// 地址: 0x1425c4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int32_t r8 = rax
int16_t arg_10

if (rax != 2 && rax != 4 && rax != 0xc)
    int64_t* rcx = *(arg1 + 8)
    arg_10 = 0x2c
    (*(*rcx + 0x150))(rcx, &arg_10, 2)
    r8 = *(arg1 + 0x20)

if (r8 == 4 || r8 - 8 u<= 3)
    int64_t* rcx_3 = *(arg1 + 8)
    arg_10 = 0x20
    (*(*rcx_3 + 0x150))(rcx_3, &arg_10, 2)
else
    sub_1425c9240(*(arg1 + 8))
    sub_1425ca100(*(arg1 + 8), *(arg1 + 0x24))

wchar16 const* const r14 = u"false"

if (arg2 != 0)
    r14 = u"true"

int32_t rbp = 0
int16_t* r15 = nullptr
int64_t var_30 = 0
int32_t rax_4 = 0
int16_t* var_38 = nullptr
uint64_t rbx = -1

if (*r14 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r14[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rdi_1.d + 1)
        rax_4 = var_30:4.d
        rbp = var_30.d
        r15 = var_38
    
    rbp += rdi_1.d + 1
    var_30.d = rbp
    
    if (rbp s> rax_4)
        sub_140594770(&var_38)
        rbp = var_30.d
        r15 = var_38
    
    UnDecorator::getReferenceType(r15, r14, (rdi_1.d + 1) * 2)

int64_t* r10 = *(arg1 + 8)
int32_t rdx_6
int16_t* const r9

if (rbp == 0)
    rdx_6 = 0
    r9 = &data_142d40450
else
    rdx_6 = rbp - 1
    r9 = r15

if (r9 == 0)
    rbx = 0
else
    if (rdx_6 s> 0 && r9[sx.q(rdx_6) - 1] == 0)
        rdx_6 -= 1
    
    if (rdx_6 != 0xffffffff)
        rbx = zx.q(rdx_6)
    else
        do
            rbx += 1
        while (r9[rbx] != 0)

(*(*r10 + 0x150))(r10, r9, sx.q(rbx.d) * 2)

if (r15 != 0)
    sub_140a74f90(r15)

*(arg1 + 0x20) = (zx.d(arg2) ^ 1) + 9
return (zx.d(arg2) ^ 1) + 9
