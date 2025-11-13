// 函数: sub_1409e4220
// 地址: 0x1409e4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rsi = u"false"

if (*(arg1 + 0x18) != 0)
    rsi = u"true"

int16_t* rdi = nullptr
int32_t rax = 0
int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t var_2c = 0
int16_t* const r15 = &data_142d40450
int32_t var_30 = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax = var_2c
        rdx = var_30
        rdi = var_38
    
    if (rdx + rbx_1.d + 1 s> rax)
        sub_140594770(&var_38)
        rdi = var_38
    
    UnDecorator::getReferenceType(rdi, rsi, (rbx_1.d + 1) * 2)

int64_t var_28
int16_t** rax_1 = sub_1409935e0(&var_28, arg1 + 8)

if (rax_1[1].d != 0)
    r15 = *rax_1

sub_140a2e390(arg2, u"Delete Edges [EdgeIDsToDelete:%s, bDeleteOrphanedVertices:%s]", r15)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
