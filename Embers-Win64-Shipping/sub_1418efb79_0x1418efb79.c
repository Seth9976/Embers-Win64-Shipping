// 函数: sub_1418efb79
// 地址: 0x1418efb79
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_1 = *(arg4 - 0x59) + arg2
int32_t rax = sub_1418bfb90(1, rdi_1 + 0x10, rdi_1 + 0x18)
int32_t rcx = *(arg4 + 0x6f)
*(arg4 - 0x61) |= rax
int32_t rax_3 = sub_1418bfb90(rcx, rdi_1 + 0x14, rdi_1 + 0x1c) | *(arg4 - 0x5d) | *(arg4 + 0x7f)
int32_t r9_1 = *(arg4 - 0x69) + 1
int64_t r8_3 = *(arg4 - 0x39) + 8
*(arg4 - 0x61) |= *(arg4 + 0x77)
*(arg4 - 0x5d) = rax_3
*arg9 = *(arg4 - 0x21)
int64_t* r15 = *(arg4 - 0x29)
*(arg4 - 0x69) = r9_1
*(arg4 - 0x39) = r8_3

if (r9_1 s>= *(arg7 + 0x58))
    void* r14 = *(arg4 + 0x67)
    
    if (*(arg4 - 0x51) s> arg3.d || *(arg4 - 0x41) s> arg3.d)
        sub_1418c1fc0(arg4 - 0x61, *(arg4 - 9))
    
    int64_t rcx_3 = *(arg4 - 0x49)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(arg4 - 0x59)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void* rbx = *(r14 + 0x240)
    
    if (*(rbx + 0x78) != 0)
        sub_1418c86c0(rbx, 0, 0)
    
    uint64_t result = *(rbx + 0x70)
    
    if (*(result + 0x2c) == 1 && *(r14 + 0x150) != 0)
        result = sub_1418c21f0(r14)
        void* rcx_7 = *(r14 + 0x240)
        *(r14 + 0x150) = 0
        
        if (*(rcx_7 + 0x78) != 0)
            return sub_1418c86c0(rcx_7, 0, 0)
    
    return result

int32_t rcx_8 = *(arg7 + 0x98)
*(arg4 + 0x77) = arg3.d
*(arg4 + 0x7f) = arg3.d

if (rcx_8 == 1)
    *(arg4 + 0x7f) = arg6
    *(arg4 + 0x77) = arg5
else if (rcx_8 == 3)
    *(arg4 + 0x7f) = arg8
    *(arg4 + 0x77) = arg5

void* rax_5 = *(arg7 + 0x50)
void* rcx_10 = arg7 + 8

if (rax_5 != 0)
    rcx_10 = rax_5

int64_t* rcx_11 = *(rcx_10 + r8_3)
void* rax_7 = (*(*rcx_11 + 0x48))(rcx_11)
*(arg4 + 0x6f) = arg3.d
int64_t rax_8 = *(rax_7 + 0x18)
*(arg4 - 0x19) = rax_8
*(arg4 + 0xf) = rax_8
sub_140865c40(r15, arg4 + 7, rax_8)
int64_t rcx_13 = sx.q(*(arg4 + 7))
int64_t rdx_5

if (rcx_13.d == 0xffffffff)
    rdx_5 = arg3
else
    rdx_5 = *r15 + rcx_13 * 0x18

int64_t r15_2 = rdx_5 + 8

if (rdx_5 == 0)
    r15_2 = arg3

if (r15_2 == 0)
    sub_1418ca3c0(*(arg4 - 0x29), arg4 + 0xf, arg4 + 0x6f)
    *(arg4 - 0x19) = *(rax_7 + 0x18)

int32_t rax_12 = *(rax_7 + 0x78)
*(arg4 + 0x6f) = rax_12
*(arg4 - 0x21) = sbb.d(rax_12, rax_12, (rax_12.b & 6) != 0) + 5
*(arg4 + 0xb) = *(rax_7 + 0x70)
int64_t rdi_4 = sx.q(*(arg4 - 0x51))
*(arg4 + 0xf) = *(rax_7 + 0x58)
int32_t rax_17 = (rdi_4 + 1).d
*(arg4 - 0x51) = rax_17

if (rax_17 s> *(arg4 - 0x4d))
    sub_140775520(arg4 - 0x59)

int64_t rdx_8 = rdi_4 * 0x48
__builtin_memset(*(arg4 - 0x59) + rdx_8, 0, 0x48)
int32_t* rax_19 = *(arg4 - 0x59)
*(rax_19 + rdx_8 + 0x28) = *(arg4 - 0x19)
rax_19[rdi_4 * 0x12 + 0xc] = *(arg4 + 0x6f)
rax_19[rdi_4 * 0x12 + 0xe] = *(arg4 + 0xb)
rax_19[rdi_4 * 0x12 + 0x10] = *(arg4 + 0xf)
rax_19[rdi_4 * 0x12] = 0x2d
*(rax_19 + rdx_8 + 0x20) = -1
jump(&__dos_header.e_magic[zx.q(*((sx.q(*(arg4 - 0x21)) << 2) + 0x1418f0004))])
