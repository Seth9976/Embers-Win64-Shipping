// 函数: sub_141c2dd20
// 地址: 0x141c2dd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[2] = 0
arg1[5] = 0
arg1[0xb] = arg3 - 1
arg1[8] = 0x3f800000
arg1[9] = arg3
arg1[0xa] = arg4
int32_t rcx = arg5
arg1[0xc] = rcx
__builtin_memset(&arg1[0xe], 0, 0x50)
arg1[3] = arg6
arg1[7].b = 0
arg1[1] = arg2
arg1[4] = 0
arg1[6] = 0
int32_t rdi = arg1[0xc]

if (arg1[0xb] s<= rcx)
    rcx = arg1[0xb]

if (rdi s> rcx)
    int32_t rax_2 = rcx & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    rdi = rcx - rax_2
    arg1[0xc] = rdi

uint64_t rbp = zx.q(arg1[9])
int32_t* rax_5 = j_sub_140a82f30(0x48)
int32_t* rdi_2

if (rax_5 == 0)
    rdi_2 = nullptr
else
    rdi_2 = sub_141c2da10(rax_5, rdi + (rbp << 1).d, zx.q(rdi + rbp.d), 0x10, 0x10)

void arg_8

if (&arg1[0x1e] != &arg_8)
    int32_t* rbp_1 = *(arg1 + 0x78)
    *(arg1 + 0x78) = rdi_2
    
    if (rbp_1 != 0)
        sub_140a74f90(*(rbp_1 + 0x10))
        *(rbp_1 + 0x10) = 0
        sub_140a74f90(*(rbp_1 + 0x18))
        *(rbp_1 + 0x18) = 0
        j_sub_140a74f90(rbp_1)
else if (rdi_2 != 0)
    sub_140a74f90(*(rdi_2 + 0x10))
    *(rdi_2 + 0x10) = 0
    sub_140a74f90(*(rdi_2 + 0x18))
    *(rdi_2 + 0x18) = 0
    j_sub_140a74f90(rdi_2)

sub_141c33880(*(arg1 + 0x78), arg1[0xb])
int32_t rdi_4 = arg1[0xa] - arg1[9]
int32_t* rax_7 = j_sub_140a82f30(0x30)
int32_t* rdi_5

if (rax_7 == 0)
    rdi_5 = nullptr
else
    rdi_5 = sub_141c300f0(rax_7, rdi_4 + 1, arg1[0xc])

if (&arg1[0x20] != &arg_8)
    int32_t* rdx_5 = *(arg1 + 0x80)
    *(arg1 + 0x80) = rdi_5
    sub_141c32aa0(&arg1[0x20], rdx_5)
else if (rdi_5 != 0)
    sub_140a74f90(*(rdi_5 + 0x20))
    sub_140a74f90(*(rdi_5 + 0x28))
    int64_t rcx_12 = *(rdi_5 + 0x10)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    void* rbp_2 = *(rdi_5 + 8)
    
    if (rbp_2 != 0)
        sub_140a74f90(*(rbp_2 + 0x10))
        *(rbp_2 + 0x10) = 0
        sub_140a74f90(*(rbp_2 + 0x18))
        *(rbp_2 + 0x18) = 0
        j_sub_140a74f90(rbp_2)
    
    j_sub_140a74f90(rdi_5)

int32_t rdx_8 = arg1[0xc]
arg1[0x10] = 0

if (rdx_8 s> arg1[0x11])
    sub_140775b10(&arg1[0xe], rdx_8)

int32_t r8_3 = arg1[0xc] + arg1[0x10]
arg1[0x10] = r8_3

if (r8_3 s> arg1[0x11])
    sub_140775270(&arg1[0xe])

int32_t rdx_10 = arg1[0xc]
arg1[0x18] = 0

if (rdx_10 s> arg1[0x19])
    sub_140775b10(&arg1[0x16], rdx_10)

int32_t r8_5 = arg1[0xc] + arg1[0x18]
arg1[0x18] = r8_5

if (r8_5 s> arg1[0x19])
    sub_140775270(&arg1[0x16])

int32_t rdx_12 = arg1[0xc]
arg1[0x1c] = 0

if (rdx_12 s> arg1[0x1d])
    sub_140775b10(&arg1[0x1a], rdx_12)

int32_t r8_7 = arg1[0xc] + arg1[0x1c]
arg1[0x1c] = r8_7

if (r8_7 s> arg1[0x1d])
    sub_140775270(&arg1[0x1a])

return arg1
