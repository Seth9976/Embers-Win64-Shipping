// 函数: sub_141ec4bb0
// 地址: 0x141ec4bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
void* rcx

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    rcx = *(arg1 + 0x20)
else
    rcx = nullptr

void* rcx_1 = *(rcx + 0x250)
int64_t var_18
wchar16 const* const rdx_2
uint32_t r8

if (rcx_1 == 0)
    var_18 = 0
    int32_t var_10_2 = 0
    sub_1405947f0(&var_18, 0x14)
    int32_t rax_4 = var_10_2 + 0x14
    var_10_2 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_18)
    
    r8 = 0x28
    rdx_2 = u"No APawn* possessed"
else if (*(rcx_1 + 0x59) s>= 0)
    sub_141dd7d00(rcx_1, 1)
    var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0xd)
    int32_t rax_3 = var_10_1 + 0xd
    var_10_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_18)
    
    r8 = 0x1a
    rdx_2 = u"God Mode off"
else
    sub_141dd7d00(rcx_1, 0)
    var_18 = 0
    int32_t var_10 = 0
    sub_1405947f0(&var_18, 0xc)
    int32_t rax_2 = var_10 + 0xc
    var_10 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_18)
    
    r8 = 0x18
    rdx_2 = u"God mode on"

UnDecorator::getReferenceType(var_18, rdx_2, r8)

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    rbx = *(arg1 + 0x20)

int64_t result = sub_1425692d0(rbx, &var_18, 0, zx.o(0))
int64_t rcx_10 = var_18

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
