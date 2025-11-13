// 函数: sub_141860680
// 地址: 0x141860680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7ef0
arg1[5] = 0
arg1[6] = 0
__builtin_memset(&arg1[7], 0, 0x1c)
arg1[9] = 0
arg1[0xa] = 0
__builtin_memset(&arg1[1], 0, 0x2c)
void* rcx = &arg1[3]
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[7].d = 0xffffffff
arg1[0xb] = 0
arg1[0xb] = *arg2
*arg2 = 0
arg1[0xc].d = arg2[1].d
*(arg1 + 0x64) = *(arg2 + 0xc)
arg2[1] = 0
InitializeCriticalSection(&arg1[0xd])
SetCriticalSectionSpinCount(&arg1[0xd], 0xfa0)
int32_t rbx = arg1[0xc].d

if (rbx s> arg1[2].d - *(arg1 + 0x3c))
    sub_140f5bc50(&arg1[1], rbx)
    int32_t rax_8
    
    if (rbx u< 4)
        rax_8 = 1
    else
        uint32_t rbx_1 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t var_28_1 = temp0_1
        int32_t rcx_4
        
        if (rbx_1 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_1
        
        int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        int32_t var_24_1 = temp0_2
        
        if (rcx_6 == 0)
            rax_8 = 1
        else
            rax_8 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_2.b)))
    
    int32_t rcx_9 = arg1[0xa].d
    
    if (rcx_9 == 0 || rcx_9 s< rax_8)
        arg1[0xa].d = rax_8
        sub_141845760(&arg1[1])

int128_t* rbx_3 = arg1[0xb]
uint64_t rax_9 = sx.q(arg1[0xc].d)
void* rdi_2 = &rbx_3[rax_9]

if (rbx_3 != rdi_2)
    do
        int32_t* rax_11 = sub_14185c600(&arg1[1], sub_140a6b260(rbx_3, 0x10), rbx_3)
        *rax_11 += 1
        rbx_3 = &rbx_3[1]
    while (rbx_3 != rdi_2)
    
    rax_9 = zx.q(arg1[0xc].d)

int128_t* r9_2 = arg1[0xb]
int32_t r8_4 = (rax_9 - 1).d
int32_t temp0_3
int32_t temp1
temp0_3:temp1 = sx.q(rax_9.d)
int32_t i_2 = (temp1 - temp0_3) s>> 1

if (i_2 s> 0)
    int128_t* rcx_13 = r9_2
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int128_t* rax_16 = &r9_2[sx.q(r8_4)]
        
        if (rcx_13 != rax_16)
            int128_t zmm1 = *rcx_13
            *rcx_13 = *rax_16
            *rax_16 = zmm1
        
        rcx_13 = &rcx_13[1]
        r8_4 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rcx_14 = *arg2

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
