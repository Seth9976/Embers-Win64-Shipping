// 函数: sub_141025f90
// 地址: 0x141025f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
uint64_t r12 = zx.q(arg2)
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x25)
int32_t rbx = var_30 + 0x25

if (rbx s> 0)
    sub_140594770(&var_38)

int64_t rbp = var_38
UnDecorator::getReferenceType(rbp, u"Default Buffer Multi Buddy Allocator", 0x4a)
int64_t* rax = j_sub_140a82f30(0x98)
void** rdi = rax

if (r12.d == 2)
    if (rax != 0)
        int32_t rcx_3 = *(arg1 + 0xc)
        *rax = r14
        rax[1].d = *(r14 + 0x10)
        *(rax + 0xc) = rcx_3
        rax[2].d = 0x800000
        *(rax + 0x14) = arg3
        rax[3] = 0
        rax[4].d = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&rax[3], rbx, 0)
            memcpy(rdi[3], rbp, rbx * 2)
        else
            *(rax + 0x24) = 0
        
        rdi[5].b = 0
        *(rdi + 0x2c) = 1
        InitializeCriticalSection(&rdi[6])
        SetCriticalSectionSpinCount(&rdi[6], 0xfa0)
        rdi[0xe].d = 0
        *(rdi + 0x7c) = 0x10000
        goto label_141026135
    
    rdi = nullptr
else if (rdi == 0)
    rdi = nullptr
else
    int32_t rax_1 = *(arg1 + 0xc)
    *rdi = r14
    rdi[1].d = *(r14 + 0x10)
    *(rdi + 0xc) = rax_1
    rdi[2].d = 0x800000
    *(rdi + 0x14) = arg3
    rdi[3] = 0
    rdi[4].d = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&rdi[3], rbx, 0)
        memcpy(rdi[3], rbp, rbx * 2)
    else
        *(rdi + 0x24) = 0
    
    rdi[5].b = 0
    *(rdi + 0x2c) = 1
    InitializeCriticalSection(&rdi[6])
    SetCriticalSectionSpinCount(&rdi[6], 0xfa0)
    rdi[0xe].d = 1
    *(rdi + 0x7c) = 0x10
label_141026135:
    __builtin_memset(&rdi[0xb], 0, 0x14)
    *(rdi + 0x74) = 0xc0
    rdi[0xf].d = 0x1000000
    rdi[0x11] = 0
    rdi[0x12] = 0

void** result = j_sub_140a82f30(0x18)
void** result_1 = result

if (result == 0)
    result_1 = nullptr
else
    *result = r14
    result[1].d = rdi[1].d
    *(result + 0xc) = *(rdi + 0xc)
    result[2] = rdi

arg1[r12 + 2] = result_1

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
