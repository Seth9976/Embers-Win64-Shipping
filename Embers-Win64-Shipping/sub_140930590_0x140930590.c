// 函数: sub_140930590
// 地址: 0x140930590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int64_t rdi = -1
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r9 = var_2c
        rdx = var_30
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

int64_t* r14_1 = *(arg1 + 8)
char r13 = *arg3
int32_t rcx_3 = r14_1[4].d
int16_t arg_8

if (((rcx_3 - 2) & 0xfffffff5) != 0 || rcx_3 == 0xa)
    int64_t* rcx_4 = r14_1[1]
    arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)

(*(*r14_1 + 0x10))(r14_1, &var_38)
int64_t* rcx_6 = r14_1[1]
arg_8 = 0x3a
(*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
int16_t* var_48 = nullptr
int32_t rbx_3 = 0
wchar16 const* const r15_1 = u"false"
int32_t var_40 = 0

if (r13 != 0)
    r15_1 = u"true"

int16_t* rsi_1 = nullptr
int32_t rax_6 = 0
int32_t var_3c = 0

if (*r15_1 != 0)
    do
        rdi += 1
    while (r15_1[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi.d + 1)
        rax_6 = var_3c
        rbx_3 = var_40
        rsi_1 = var_48
    
    rbx_3 += rdi.d + 1
    
    if (rbx_3 s> rax_6)
        sub_140594770(&var_48)
        rsi_1 = var_48
    
    UnDecorator::getReferenceType(rsi_1, r15_1, (rdi.d + 1) * 2)

int64_t* rcx_10 = r14_1[1]
int16_t* const rdx_9

if (rbx_3 == 0)
    rdx_9 = &data_142d40450
else
    r12 = rbx_3 - 1
    rdx_9 = rsi_1

int32_t rax_8 = (*(*rcx_10 + 0x150))(rcx_10, rdx_9, sx.q(r12) * 2)

if (rsi_1 != 0)
    rax_8 = sub_140a74f90(rsi_1)

int32_t result = sbb.d(rax_8, rax_8, r13 != 0) + 0xa
r14_1[4].d = result
int64_t rcx_12 = var_38

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
