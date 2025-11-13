// 函数: sub_1406691e0
// 地址: 0x1406691e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int32_t rcx = rax
uint32_t r12 = zx.d(arg2)

if (rax == 2 || rax == 4)
    goto label_140669238

if (rax == 0xc)
    if (rcx - 8 u<= 3)
        goto label_14066925c
    
    sub_14067f880(*(arg1 + 8))
    sub_14067fc50(*(arg1 + 8), *(arg1 + 0x24))
else
    int64_t* rcx_1 = *(arg1 + 8)
    int16_t arg_10 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_10, 2)
    rcx = *(arg1 + 0x20)
label_140669238:
    
    if (rcx == 4 || rcx - 8 u<= 3)
    label_14066925c:
        int64_t* rcx_4 = *(arg1 + 8)
        arg_10 = 0x20
        (*(*rcx_4 + 0x150))(rcx_4, &arg_10, 2)
    else
        sub_14067f880(*(arg1 + 8))
        sub_14067fc50(*(arg1 + 8), *(arg1 + 0x24))

wchar16 const* const r14 = u"false"

if (r12.b != 0)
    r14 = u"true"

int32_t r15 = 0
int32_t rax_4 = 0
int16_t* var_38 = nullptr
int16_t* rbp = nullptr
int32_t var_30 = 0
int32_t rsi = 0
int32_t var_2c = 0

if (*r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_4 = var_2c
        rsi = var_30
        rbp = var_38
    
    rsi += rbx_1.d + 1
    
    if (rsi s> rax_4)
        sub_140594770(&var_38)
        rbp = var_38
    
    UnDecorator::getReferenceType(rbp, r14, (rbx_1.d + 1) * 2)

int64_t* rcx_8 = *(arg1 + 8)
int16_t* const rdx_6

if (rsi == 0)
    rdx_6 = &data_142d40450
else
    r15 = rsi - 1
    rdx_6 = rbp

(*(*rcx_8 + 0x150))(rcx_8, rdx_6, sx.q(r15) * 2)

if (rbp != 0)
    sub_140a74f90(rbp)

*(arg1 + 0x20) = (r12 ^ 1) + 9
return (r12 ^ 1) + 9
