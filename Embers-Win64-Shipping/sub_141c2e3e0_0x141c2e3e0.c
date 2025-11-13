// 函数: sub_141c2e3e0
// 地址: 0x141c2e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[0x18], 0, 0x60)
int32_t r9 = arg2
int32_t r8 = arg3[3]
int32_t rdx = arg3[1]

if (arg3[2] s<= r8)
    r8 = arg3[2]

if (*arg3 s<= rdx)
    rdx = *arg3

if (rdx s<= r8)
    r8 = rdx

if (r8 s<= r9)
    r9 = r8

int32_t rax_1 = r9 & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

int32_t r9_1 = r9 - rax_1
*arg1 = r9_1

if (r9_1 s<= 0)
    r9_1 = 1
    *arg1 = 1

int32_t rdi = r9_1 + (*arg3 << 1)
int32_t* rax_5 = j_sub_140a82f30(0x48)
int32_t* rdi_1

if (rax_5 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_141c2da10(rax_5, rdi, zx.q(*arg1), 0x10, 0x10)

void arg_8

if (&arg1[0x18] != &arg_8)
    int32_t* rbp_1 = *(arg1 + 0x60)
    *(arg1 + 0x60) = rdi_1
    
    if (rbp_1 != 0)
        sub_140a74f90(*(rbp_1 + 0x10))
        *(rbp_1 + 0x10) = 0
        sub_140a74f90(*(rbp_1 + 0x18))
        *(rbp_1 + 0x18) = 0
        j_sub_140a74f90(rbp_1)
else if (rdi_1 != 0)
    sub_140a74f90(*(rdi_1 + 0x10))
    *(rdi_1 + 0x10) = 0
    sub_140a74f90(*(rdi_1 + 0x18))
    *(rdi_1 + 0x18) = 0
    j_sub_140a74f90(rdi_1)

int32_t rdi_2 = *arg1 + (arg3[1] << 1)
int32_t* rax_8 = j_sub_140a82f30(0x48)
int32_t* rdi_3

if (rax_8 == 0)
    rdi_3 = nullptr
else
    rdi_3 = sub_141c2da10(rax_8, rdi_2, zx.q(*arg1), 0x10, 0x10)

if (&arg1[0x1a] != &arg_8)
    int32_t* rbp_2 = *(arg1 + 0x68)
    *(arg1 + 0x68) = rdi_3
    
    if (rbp_2 != 0)
        sub_140a74f90(*(rbp_2 + 0x10))
        *(rbp_2 + 0x10) = 0
        sub_140a74f90(*(rbp_2 + 0x18))
        *(rbp_2 + 0x18) = 0
        j_sub_140a74f90(rbp_2)
else if (rdi_3 != 0)
    sub_140a74f90(*(rdi_3 + 0x10))
    *(rdi_3 + 0x10) = 0
    sub_140a74f90(*(rdi_3 + 0x18))
    *(rdi_3 + 0x18) = 0
    j_sub_140a74f90(rdi_3)

int32_t rdi_4 = *arg1 + (arg3[2] << 1)
int32_t* rax_12 = j_sub_140a82f30(0x48)
int32_t* rdi_5

if (rax_12 == 0)
    rdi_5 = nullptr
else
    rdi_5 = sub_141c2da10(rax_12, rdi_4, zx.q(*arg1), 0x10, 0x10)

if (&arg1[0x1c] != &arg_8)
    int32_t* rbp_3 = *(arg1 + 0x70)
    *(arg1 + 0x70) = rdi_5
    
    if (rbp_3 != 0)
        sub_140a74f90(*(rbp_3 + 0x10))
        *(rbp_3 + 0x10) = 0
        sub_140a74f90(*(rbp_3 + 0x18))
        *(rbp_3 + 0x18) = 0
        j_sub_140a74f90(rbp_3)
else if (rdi_5 != 0)
    sub_140a74f90(*(rdi_5 + 0x10))
    *(rdi_5 + 0x10) = 0
    sub_140a74f90(*(rdi_5 + 0x18))
    *(rdi_5 + 0x18) = 0
    j_sub_140a74f90(rdi_5)

int32_t rdi_6 = *arg1 + (arg3[3] << 1)
int32_t* rax_16 = j_sub_140a82f30(0x48)
int32_t* rdi_7

if (rax_16 == 0)
    rdi_7 = nullptr
else
    rdi_7 = sub_141c2da10(rax_16, rdi_6, zx.q(*arg1), 0x10, 0x10)

if (&arg1[0x1e] != &arg_8)
    int32_t* rbp_4 = *(arg1 + 0x78)
    *(arg1 + 0x78) = rdi_7
    
    if (rbp_4 != 0)
        sub_140a74f90(*(rbp_4 + 0x10))
        *(rbp_4 + 0x10) = 0
        sub_140a74f90(*(rbp_4 + 0x18))
        *(rbp_4 + 0x18) = 0
        j_sub_140a74f90(rbp_4)
else if (rdi_7 != 0)
    sub_140a74f90(*(rdi_7 + 0x10))
    *(rdi_7 + 0x10) = 0
    sub_140a74f90(*(rdi_7 + 0x18))
    *(rdi_7 + 0x18) = 0
    j_sub_140a74f90(rdi_7)

sub_141c33880(*(arg1 + 0x60), *arg3)
sub_141c33880(*(arg1 + 0x68), arg3[1])
sub_141c33880(*(arg1 + 0x70), arg3[2])
sub_141c33880(*(arg1 + 0x78), arg3[3])
int32_t rdx_13 = *arg1
arg1[0x22] = 0

if (rdx_13 s> arg1[0x23])
    sub_140775b10(&arg1[0x20], rdx_13)

int32_t rdx_14 = *arg1
arg1[0x26] = 0

if (rdx_14 s> arg1[0x27])
    sub_140775b10(&arg1[0x24], rdx_14)

int32_t rdx_15 = *arg1
arg1[0x2a] = 0

if (rdx_15 s> arg1[0x2b])
    sub_140775b10(&arg1[0x28], rdx_15)

int32_t rdx_16 = *arg1
arg1[0x2e] = 0

if (rdx_16 s> arg1[0x2f])
    sub_140775b10(&arg1[0x2c], rdx_16)

int32_t r8_6 = *arg1 + arg1[0x22]
arg1[0x22] = r8_6

if (r8_6 s> arg1[0x23])
    sub_140775270(&arg1[0x20])

int32_t r8_8 = *arg1 + arg1[0x26]
arg1[0x26] = r8_8

if (r8_8 s> arg1[0x27])
    sub_140775270(&arg1[0x24])

int32_t r8_10 = *arg1 + arg1[0x2a]
arg1[0x2a] = r8_10

if (r8_10 s> arg1[0x2b])
    sub_140775270(&arg1[0x28])

int32_t r8_12 = *arg1 + arg1[0x2e]
arg1[0x2e] = r8_12

if (r8_12 s> arg1[0x2f])
    sub_140775270(&arg1[0x2c])

__builtin_memset(&arg1[0xf], 0, 0x20)
return arg1
