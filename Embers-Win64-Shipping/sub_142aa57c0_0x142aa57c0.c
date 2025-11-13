// 函数: sub_142aa57c0
// 地址: 0x142aa57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)

if (*arg4 s> 0)
    return 

if (rbx.d s< 0)
    *arg4 = 1
    return 

if (arg2 == 0 && rbx.d s> 0)
    *arg4 = 1
    return 

if (rbx.d == 1 && *arg2 == 0x67)
    rbx = 0

void* rbp_1 = *(arg1 + 0x10)
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax

if (rbx.d == *(rbp_1 + 0x48))
    rax = memcmp(arg2, *(rbp_1 + 0x40), sx.q((rbx << 2).d))

if (rbx.d == *(rbp_1 + 0x48) && rax.d == 0)
    return 

void* r12_1 = (*(arg1 + 0x18))[4]

if (rbx.d != 1 || *arg2 != 0xffffffff)
    rax = sub_142aa1030(arg1 + 0x10)
    
    if (rax != 0)
        sub_142b27540(rax, *(arg1 + 8), arg2, rbx.d, arg4)
        rax[0xa].d = sub_142b21a80(*(arg1 + 8), rax, rax + 0x54, 0x180).d
    else
        *arg4 = 7
else if (rbp_1 != r12_1)
    rax = sub_142aa1030(arg1 + 0x10)
    
    if (rax == 0)
        *arg4 = 7
    else
        sub_142b27190(rax, r12_1, arg4)
        rax[0xa].d = sub_142b21a80(*(arg1 + 8), rax, rax + 0x54, 0x180).d
