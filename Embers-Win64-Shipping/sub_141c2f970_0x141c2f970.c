// 函数: sub_141c2f970
// 地址: 0x141c2f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2.d
arg1[1] = arg3
arg1[2] = 0x3a03126f
*(arg1 + 0xc) = 0x3f000000
*(arg1 + 0x14) = *arg4
*(arg1 + 0x24) = arg4[1]
*(arg1 + 0x34) = arg4[2]
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
__builtin_memset(&arg1[0x1c], 0, 0x68)
int32_t rcx = arg1[1]

if (rcx s> arg1[0x10])
    rcx = arg1[0x10]

int32_t rax_1 = rcx & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

int32_t rbp = arg1[6]
int32_t rbx = arg1[5]
int128_t zmm6 = arg1[4] ^ data_142d3f780
arg1[1] = rcx - rax_1
int32_t* rax_4 = j_sub_140a82f30(0x88)
int32_t* rbx_2

if (rax_4 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_141c2dd20(rax_4, zmm6.d, rbx - rbp, rbx + rbp, arg1[1], *arg1)

void arg_8

if (&arg1[0x12] != &arg_8)
    void* rdx_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) = rbx_2
    rbx_2 = nullptr
    sub_141c32980(&arg1[0x12], rdx_1)

sub_141c32980(&arg_8, rbx_2)
int32_t* rax_6 = j_sub_140a82f30(0x20)
int32_t* rsi_1

if (rax_6 == 0)
    rsi_1 = nullptr
else
    int32_t rdx_3 = arg1[7]
    rsi_1 = sub_141c2eb10(rax_6, rdx_3, rdx_3, 0x100)

if (&arg1[0x14] != &arg_8)
    void* rdx_4 = *(arg1 + 0x50)
    *(arg1 + 0x50) = rsi_1
    sub_141c32a30(&arg1[0x14], rdx_4)
else if (rsi_1 != 0)
    void* rbx_3 = *(rsi_1 + 0x18)
    
    if (rbx_3 != 0)
        sub_140a74f90(*(rbx_3 + 0x10))
        *(rbx_3 + 0x10) = 0
        sub_140a74f90(*(rbx_3 + 0x18))
        *(rbx_3 + 0x18) = 0
        j_sub_140a74f90(rbx_3)
    
    j_sub_140a74f90(rsi_1)

int32_t* rax_8 = j_sub_140a82f30(0x20)
int32_t* rsi_2

if (rax_8 == 0)
    rsi_2 = nullptr
else
    int32_t rdx_7 = arg1[8]
    rsi_2 = sub_141c2eb10(rax_8, rdx_7, rdx_7, 0x100)

if (&arg1[0x16] != &arg_8)
    void* rdx_8 = *(arg1 + 0x58)
    *(arg1 + 0x58) = rsi_2
    sub_141c32a30(&arg1[0x16], rdx_8)
else if (rsi_2 != 0)
    void* rbx_4 = *(rsi_2 + 0x18)
    
    if (rbx_4 != 0)
        sub_140a74f90(*(rbx_4 + 0x10))
        *(rbx_4 + 0x10) = 0
        sub_140a74f90(*(rbx_4 + 0x18))
        *(rbx_4 + 0x18) = 0
        j_sub_140a74f90(rbx_4)
    
    j_sub_140a74f90(rsi_2)

int32_t* rax_10 = j_sub_140a82f30(0x20)
int32_t* rsi_3

if (rax_10 == 0)
    rsi_3 = nullptr
else
    int32_t rdx_11 = arg1[9]
    rsi_3 = sub_141c2eb10(rax_10, rdx_11, rdx_11, 0x100)

if (&arg1[0x18] != &arg_8)
    void* rdx_12 = *(arg1 + 0x60)
    *(arg1 + 0x60) = rsi_3
    sub_141c32a30(&arg1[0x18], rdx_12)
else if (rsi_3 != 0)
    void* rbx_5 = *(rsi_3 + 0x18)
    
    if (rbx_5 != 0)
        sub_140a74f90(*(rbx_5 + 0x10))
        *(rbx_5 + 0x10) = 0
        sub_140a74f90(*(rbx_5 + 0x18))
        *(rbx_5 + 0x18) = 0
        j_sub_140a74f90(rbx_5)
    
    j_sub_140a74f90(rsi_3)

int32_t* rax_12 = j_sub_140a82f30(0x20)
int32_t* rsi_4

if (rax_12 == 0)
    rsi_4 = nullptr
else
    int32_t rdx_15 = arg1[0xa]
    rsi_4 = sub_141c2eb10(rax_12, rdx_15, rdx_15, 0x100)

if (&arg1[0x1a] != &arg_8)
    void* rdx_16 = *(arg1 + 0x68)
    *(arg1 + 0x68) = rsi_4
    sub_141c32a30(&arg1[0x1a], rdx_16)
else if (rsi_4 != 0)
    void* rbx_6 = *(rsi_4 + 0x18)
    
    if (rbx_6 != 0)
        sub_140a74f90(*(rbx_6 + 0x10))
        *(rbx_6 + 0x10) = 0
        sub_140a74f90(*(rbx_6 + 0x18))
        *(rbx_6 + 0x18) = 0
        j_sub_140a74f90(rbx_6)
    
    j_sub_140a74f90(rsi_4)

int32_t* rax_14 = j_sub_140a82f30(0x10)
int32_t* rbx_7 = rax_14

if (rax_14 == 0)
    rbx_7 = nullptr
else
    float zmm1 = arg1[2]
    rax_14[1] = zmm1
    *rax_14 = 0
    rax_14[3] = 0
    rax_14[2] = 1f - zmm1

if (&arg1[0x1c] != &arg_8)
    int64_t rcx_30 = *(arg1 + 0x70)
    *(arg1 + 0x70) = rbx_7
    rbx_7 = nullptr
    j_sub_140a74f90(rcx_30)

j_sub_140a74f90(rbx_7)
zmm6.d = arg1[4].d f- 0.150000006f
int32_t* rax_16 = j_sub_140a82f30(0x28)
int32_t* rbx_8

if (rax_16 == 0)
    rbx_8 = nullptr
else
    rbx_8 = sub_141c302c0(rax_16, zmm6.d, arg1[0xb], arg1[1])

if (&arg1[0x1e] != &arg_8)
    void* rdx_21 = *(arg1 + 0x78)
    *(arg1 + 0x78) = rbx_8
    sub_141c32b30(&arg1[0x1e], rdx_21)
else if (rbx_8 != 0)
    void* rsi_5 = *(rbx_8 + 0x20)
    
    if (rsi_5 != 0)
        sub_140a74f90(*(rsi_5 + 0x10))
        *(rsi_5 + 0x10) = 0
        sub_140a74f90(*(rsi_5 + 0x18))
        *(rsi_5 + 0x18) = 0
        j_sub_140a74f90(rsi_5)
    
    int64_t rcx_37 = *(rbx_8 + 0x10)
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    j_sub_140a74f90(rbx_8)

int32_t* rax_19 = j_sub_140a82f30(0x20)
int32_t* rsi_6

if (rax_19 == 0)
    rsi_6 = nullptr
else
    int32_t rdx_24 = arg1[0xc]
    rsi_6 = sub_141c2eb10(rax_19, rdx_24, rdx_24, 0x100)

if (&arg1[0x20] != &arg_8)
    void* rdx_25 = *(arg1 + 0x80)
    *(arg1 + 0x80) = rsi_6
    sub_141c32a30(&arg1[0x20], rdx_25)
else if (rsi_6 != 0)
    void* rbx_9 = *(rsi_6 + 0x18)
    
    if (rbx_9 != 0)
        sub_140a74f90(*(rbx_9 + 0x10))
        *(rbx_9 + 0x10) = 0
        sub_140a74f90(*(rbx_9 + 0x18))
        *(rbx_9 + 0x18) = 0
        j_sub_140a74f90(rbx_9)
    
    j_sub_140a74f90(rsi_6)

int32_t* rax_22 = j_sub_140a82f30(0x20)
int32_t* rsi_7

if (rax_22 == 0)
    rsi_7 = nullptr
else
    int32_t rdx_28 = arg1[0xd]
    rsi_7 = sub_141c2eb10(rax_22, rdx_28, rdx_28, 0x100)

if (&arg1[0x22] != &arg_8)
    void* rdx_29 = *(arg1 + 0x88)
    *(arg1 + 0x88) = rsi_7
    sub_141c32a30(&arg1[0x22], rdx_29)
else if (rsi_7 != 0)
    void* rbx_10 = *(rsi_7 + 0x18)
    
    if (rbx_10 != 0)
        sub_140a74f90(*(rbx_10 + 0x10))
        *(rbx_10 + 0x10) = 0
        sub_140a74f90(*(rbx_10 + 0x18))
        *(rbx_10 + 0x18) = 0
        j_sub_140a74f90(rbx_10)
    
    j_sub_140a74f90(rsi_7)

int32_t* rax_25 = j_sub_140a82f30(0x20)
int32_t* rsi_8

if (rax_25 == 0)
    rsi_8 = nullptr
else
    int32_t rdx_32 = arg1[0xe]
    rsi_8 = sub_141c2eb10(rax_25, rdx_32, rdx_32, 0x100)

if (&arg1[0x24] != &arg_8)
    void* rdx_33 = *(arg1 + 0x90)
    *(arg1 + 0x90) = rsi_8
    sub_141c32a30(&arg1[0x24], rdx_33)
else if (rsi_8 != 0)
    void* rbx_11 = *(rsi_8 + 0x18)
    
    if (rbx_11 != 0)
        sub_140a74f90(*(rbx_11 + 0x10))
        *(rbx_11 + 0x10) = 0
        sub_140a74f90(*(rbx_11 + 0x18))
        *(rbx_11 + 0x18) = 0
        j_sub_140a74f90(rbx_11)
    
    j_sub_140a74f90(rsi_8)

int32_t* rax_28 = j_sub_140a82f30(0x20)
int32_t* rsi_9

if (rax_28 == 0)
    rsi_9 = nullptr
else
    int32_t rdx_36 = arg1[0xf]
    rsi_9 = sub_141c2eb10(rax_28, rdx_36, rdx_36, 0x100)

if (&arg1[0x26] != &arg_8)
    void* rdx_37 = *(arg1 + 0x98)
    *(arg1 + 0x98) = rsi_9
    sub_141c32a30(&arg1[0x26], rdx_37)
else if (rsi_9 != 0)
    void* rbx_12 = *(rsi_9 + 0x18)
    
    if (rbx_12 != 0)
        sub_140a74f90(*(rbx_12 + 0x10))
        *(rbx_12 + 0x10) = 0
        sub_140a74f90(*(rbx_12 + 0x18))
        *(rbx_12 + 0x18) = 0
        j_sub_140a74f90(rbx_12)
    
    j_sub_140a74f90(rsi_9)

int32_t* rax_31 = j_sub_140a82f30(0x20)
int32_t* rsi_10

if (rax_31 == 0)
    rsi_10 = nullptr
else
    int32_t rdx_40 = arg1[0x10]
    rsi_10 = sub_141c2eb10(rax_31, rdx_40, rdx_40, 0x100)

if (&arg1[0x28] != &arg_8)
    void* rdx_41 = *(arg1 + 0xa0)
    *(arg1 + 0xa0) = rsi_10
    sub_141c32a30(&arg1[0x28], rdx_41)
else if (rsi_10 != 0)
    void* rbx_13 = *(rsi_10 + 0x18)
    
    if (rbx_13 != 0)
        sub_140a74f90(*(rbx_13 + 0x10))
        *(rbx_13 + 0x10) = 0
        sub_140a74f90(*(rbx_13 + 0x18))
        *(rbx_13 + 0x18) = 0
        j_sub_140a74f90(rbx_13)
    
    j_sub_140a74f90(rsi_10)

return arg1
