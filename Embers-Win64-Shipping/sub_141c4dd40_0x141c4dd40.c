// 函数: sub_141c4dd40
// 地址: 0x141c4dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
*arg1 = &data_143209ec8
__builtin_memset(&arg1[2], 0, 0x28)
int64_t rax = j_sub_140a82f30(0x18)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x18)

arg1[9] = rax
arg1[8] = rax
arg1[0xa].d = 0
arg1[0xb] = arg3
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].d = arg4
*(arg1 + 0x74) = *(arg2 + 0xc)
arg1[0xf].d = *(arg2 + 0x40)
*(arg1 + 0x7c) = *(arg3 + 0x270)
arg1[0x10] = 0
arg1[0x11] = 0
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
InitializeCriticalSection(&arg1[0x17])
SetCriticalSectionSpinCount(&arg1[0x17], 0xfa0)
int32_t rcx_6 = zx.d(arg5) << 3 | (arg1[0x1c].d & 0xfffffff0)
void*** arg_10 = arg1
int32_t rcx_7 = rcx_6 & 0xffffffef
arg1[0x1c].d = rcx_7
int32_t rdx_4 = ((zx.d(*(arg3 + 0x16d)) << 5 ^ rcx_7) & 0x20) ^ rcx_7
arg1[0x1c].d = rdx_4
arg1[0x1c].d = ((zx.d(*(arg3 + 0x16d)) & 4) | zx.d(arg6) << 3) << 4 | (rdx_4 & 0xffffff3f)
sub_142357f10(arg3, &arg_10)
uint64_t** i = nullptr
int32_t r14_1 = *(arg1 + 0x74) << 0xd

do
    void*** rax_8 = j_sub_140a82f30(0x28)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        rax_8[1].d = 1
        *(rax_8 + 0xc) = 1
        *rax_8 = &data_14320ad50
        __builtin_memset(&rax_8[2], 0, 0x18)
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    int64_t rbp_1 = sx.q(arg1[6].d)
    int32_t rax_9 = (rbp_1 + 1).d
    arg1[6].d = rax_9
    
    if (rax_9 s> *(arg1 + 0x34))
        sub_1405a4f90(&arg1[5])
    
    void** rax_12 = &arg1[5][rbp_1 * 2]
    *rax_12 = &rax_8[2]
    rax_12[1] = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t rax_15 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*rax_8)[1](rax_8, 1)
    
    uint64_t* rcx_17 = *(i + arg1[5])
    rcx_17[1].d = 0
    
    if (r14_1 s> *(rcx_17 + 0xc))
        sub_140775b10(rcx_17, r14_1)
    
    void* rcx_18 = *(i + arg1[5])
    *(rcx_18 + 0x14) |= 1
    void* rcx_19 = *(i + arg1[5])
    i = &i[2]
    *(rcx_19 + 0x10) = 0
while (i s< 0x30)

return arg1
