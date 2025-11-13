// 函数: sub_1408f33b0
// 地址: 0x1408f33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
EnterCriticalSection(arg1 + 0x20)
void* rax = *(arg1 + 0x48)
uint64_t var_38
uint64_t var_28
uint64_t* rcx_1
int32_t rdi_2

if (rax == 0)
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0xa)
    int32_t rax_1 = var_30_1 + 0xa
    var_30_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"No Socket", 0x14)
    rcx_1 = &var_38
    rdi_2 = 2
else
    int32_t rdi_1 = *(rax + 0x18)
    int64_t rbp_1 = *(rax + 0x10)
    var_28 = 0
    int32_t var_20_1 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_28, rdi_1, 0)
        memcpy(var_28, rbp_1, rdi_1 * 2)
        rcx_1 = &var_28
        rdi_2 = 1
    else
        rcx_1 = &var_28
        int32_t var_1c_1 = 0
        rdi_2 = 1

*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
int32_t rax_4 = *(rcx_1 + 0xc)
rcx_1[1] = 0
*(arg2 + 0xc) = rax_4

if ((rdi_2.b & 2) != 0)
    uint64_t rcx_7 = var_38
    rdi_2 &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rdi_2.b & 1) != 0)
    uint64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return arg2
