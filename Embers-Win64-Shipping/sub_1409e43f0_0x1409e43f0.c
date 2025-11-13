// 函数: sub_1409e43f0
// 地址: 0x1409e43f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const r14 = u"false"

if (*(arg1 + 0x1b) != 0)
    r14 = u"true"

int16_t* rsi = nullptr
int32_t rax_1 = 0
int16_t* var_58 = nullptr
int32_t rdx = 0
int32_t var_4c = 0
int16_t* r13 = nullptr
int32_t var_50 = 0
int64_t rdi = -1
int32_t r15_1

if (*r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        rax_1 = var_4c
        rdx = var_50
        r13 = var_58
    
    r15_1 = rbx_1.d + 1 + rdx
    
    if (r15_1 s> rax_1)
        sub_140594770(&var_58)
        r13 = var_58
    
    UnDecorator::getReferenceType(r13, r14, (rbx_1.d + 1) * 2)

int16_t* arg_18

if (*r14 == 0 || r15_1 == 0)
    arg_18 = &data_142d40450
else
    arg_18 = r13

wchar16 const* const r14_1 = u"false"
int32_t rdx_3 = 0
var_58 = nullptr
int16_t* r12 = nullptr
int32_t var_50_2 = 0

if (*(arg1 + 0x19) != 0)
    r14_1 = u"true"

int32_t rax_3 = 0
int32_t var_4c_1 = 0
int16_t* const r14_2
int32_t r15_2

if (*r14_1 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (r14_1[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_3.d + 1)
        rax_3 = var_4c_1
        rdx_3 = var_50_2
        r12 = var_58
    
    r15_2 = rbx_3.d + 1 + rdx_3
    
    if (r15_2 s> rax_3)
        sub_140594770(&var_58)
        r12 = var_58
    
    UnDecorator::getReferenceType(r12, r14_1, (rbx_3.d + 1) * 2)
    r14_2 = r12

if (*r14_1 == 0 || r15_2 == 0)
    r14_2 = &data_142d40450

wchar16 const* const r15_3 = u"false"
int32_t rdx_6 = 0
var_58 = nullptr
int32_t var_50_4 = 0

if (*(arg1 + 0x18) != 0)
    r15_3 = u"true"

int32_t rax_5 = 0
int32_t var_4c_2 = 0
int32_t rbx_5

if (*r15_3 != 0)
    do
        rdi += 1
    while (r15_3[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi.d + 1)
        rax_5 = var_4c_2
        rdx_6 = var_50_4
        rsi = var_58
    
    rbx_5 = rdi.d + 1 + rdx_6
    
    if (rbx_5 s> rax_5)
        sub_140594770(&var_58)
        rsi = var_58
    
    UnDecorator::getReferenceType(rsi, r15_3, (rdi.d + 1) * 2)

int16_t* const rdi_2

if (*r15_3 == 0 || rbx_5 == 0)
    rdi_2 = &data_142d40450
else
    rdi_2 = &data_142d40450

int64_t var_48
int64_t* rax_6 = sub_1409935e0(&var_48, arg1 + 8)

if (rax_6[1].d != 0)
    rdi_2 = *rax_6

int16_t* var_60 = arg_18
int16_t* const var_68 = r14_2
sub_140a2e390(arg2, u"Delete Polygons [PolygonIDsToDelete:%s, %s, %s]", rdi_2)
int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (rsi != 0)
    sub_140a74f90(rsi)

if (r12 != 0)
    sub_140a74f90(r12)

if (r13 != 0)
    sub_140a74f90(r13)

return arg2
