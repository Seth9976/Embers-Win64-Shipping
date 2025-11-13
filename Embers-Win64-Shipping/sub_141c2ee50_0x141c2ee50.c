// 函数: sub_141c2ee50
// 地址: 0x141c2ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg2
*(arg1 + 4) = 0x3f800000
*arg1 = zmm2.d
*(arg1 + 0xc) = 0x3fc90fdb
int128_t var_48 = arg5
arg1[5] = 0
*(arg1 + 0x18) = *arg4
uint128_t zmm0
zmm0.d = zmm2.d f* 0.0305097271f
*(arg1 + 0x28) = arg4[1].q
arg2.d = zmm2.d f* 0.000537616317f
arg1[0xc] = *(arg4 + 0x18)
int32_t rax_1 = int.d(zmm0.d)
__builtin_memset(&arg1[0xe], 0, 0x30)
zmm0.d = zmm2.d f* 0.0118611604f
int32_t rcx = int.d(arg2.d)
int32_t var_84 = rcx
arg2.d = zmm2.d f* 0.0281240549f
int32_t var_80 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.081885688f
int32_t rax_3 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.0198246036f
int32_t var_7c = rax_3
int32_t rax_4 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.0892443135f
int32_t rax_5 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.0062833908f
int32_t var_74 = rax_5
int32_t rax_6 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.0349786617f
int32_t var_70 = rax_6
int32_t rax_7 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.0358186886f
int32_t var_6c = rax_7
int32_t rax_8 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.0539968424f
int32_t rax_9 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.0155572733f
int32_t var_64 = rax_9
int32_t var_60 = int.d(zmm0.d)
int32_t var_84_1 = rcx
int32_t var_5c = int.d(arg2.d)
*(arg1 + 0x68) = rax_1.o
*(arg1 + 0x78) = rax_4.o
arg2.d = zmm2.d f* 0.022579886f
*(arg1 + 0x88) = rax_8.o
int32_t rax_12 = int.d(arg2.d)
void* rsi = &arg1[0x34]
zmm0.d = zmm2.d f* 0.00893787201f
arg2.d = zmm2.d f* 0.0619938858f
int32_t rax_13 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.028997682f
int32_t var_80_1 = rax_13
int32_t rax_14 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.049695909f
int32_t var_7c_1 = rax_14
int32_t rax_15 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.0604818389f
int32_t rax_16 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.0112563418f
int32_t var_74_1 = rax_16
int32_t rax_17 = int.d(zmm0.d)
zmm0.d = zmm2.d f* 0.0530224107f
int32_t var_70_1 = rax_17
int32_t rax_18 = int.d(arg2.d)
arg2.d = zmm2.d f* 0.00406572362f
int32_t var_6c_1 = rax_18
int32_t rax_19 = int.d(zmm0.d)
zmm0 = zmm2
zmm2.d = zmm2.d f* 0.0579281598f
zmm0.d = zmm0.d f* 0.0630019158f
int32_t var_64_1 = int.d(arg2.d)
int32_t var_60_1 = int.d(zmm0.d)
*(arg1 + 0x98) = rax_12.o
int32_t var_5c_1 = int.d(zmm2.d)
*(arg1 + 0xa8) = rax_15.o
*(arg1 + 0xb8) = rax_19.o
*(arg1 + 0xc8) = 0
*rsi = 0
__builtin_memset(&arg1[0x36], 0, 0x80)
__builtin_memset(&arg1[0x56], 0, 0x80)
*(arg1 + 0x1d8) = 0
*(arg1 + 0x1e0) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x1f8) = 0
*(arg1 + 0x200) = 0
*(arg1 + 0x208) = 0
*(arg1 + 0x210) = 0
*(arg1 + 0x218) = 0
*(arg1 + 0x220) = 0
*(arg1 + 0x228) = 0
*(arg1 + 0x230) = 0
*(arg1 + 0x18) = *arg4
*(arg1 + 0x28) = arg4[1].q
arg1[0xc] = *(arg4 + 0x18)
sub_141c353d0(&arg1[6])
int32_t* rax_26 = j_sub_140a82f30(0xd8)
int32_t* rbx_1

if (rax_26 == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_141c2f970(rax_26, *arg1, arg3, &arg1[0x1a])

void arg_8

if (&arg1[0x32] != &arg_8)
    int32_t* rsi_1 = *(arg1 + 0xc8)
    *(arg1 + 0xc8) = rbx_1
    
    if (rsi_1 != 0)
        sub_141c31f70(rsi_1)
        j_sub_140a74f90(rsi_1)
    
    rsi = &arg1[0x34]
else if (rbx_1 != 0)
    sub_141c31f70(rbx_1)
    j_sub_140a74f90(rbx_1)

int32_t* rax_29 = j_sub_140a82f30(0xd8)
int32_t* rbx_2

if (rax_29 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_141c2f970(rax_29, *arg1, arg3, &arg1[0x26])

if (rsi != &arg_8)
    void* rsi_2 = *rsi
    *(arg1 + 0xd0) = rbx_2
    
    if (rsi_2 != 0)
        sub_141c31f70(rsi_2)
        j_sub_140a74f90(rsi_2)
    
    rsi = &arg1[0x34]
else if (rbx_2 != 0)
    sub_141c31f70(rbx_2)
    j_sub_140a74f90(rbx_2)

int32_t rdx_4 = *(*rsi + 4)
void* rax_32 = *(arg1 + 0xc8)

if (*(rax_32 + 4) s<= rdx_4)
    rdx_4 = *(rax_32 + 4)

int32_t rax_33 = int.d(*arg1 * -2f)
arg1[5] = rdx_4
int32_t* rax_34 = j_sub_140a82f30(0x20)
int32_t* rsi_3

if (rax_34 == 0)
    rsi_3 = nullptr
else
    rsi_3 = sub_141c2eb10(rax_34, 8 - rax_33, 0, arg1[5])

if (&arg1[0xe] != &arg_8)
    int32_t* rdx_7 = *(arg1 + 0x38)
    *(arg1 + 0x38) = rsi_3
    sub_141c32a30(&arg1[0xe], rdx_7)
else if (rsi_3 != 0)
    void* rbx_4 = *(rsi_3 + 0x18)
    
    if (rbx_4 != 0)
        sub_140a74f90(*(rbx_4 + 0x10))
        *(rbx_4 + 0x10) = 0
        sub_140a74f90(*(rbx_4 + 0x18))
        *(rbx_4 + 0x18) = 0
        j_sub_140a74f90(rbx_4)
    
    j_sub_140a74f90(rsi_3)

int128_t zmm7
zmm7.d = 1f f- arg1[8]
int32_t* rax_37 = j_sub_140a82f30(0x10)
int32_t* rbx_5 = rax_37

if (rax_37 == 0)
    rbx_5 = nullptr
else
    arg5.d = 1f f- zmm7.d
    rax_37[1] = zmm7.d
    *rax_37 = 0
    rax_37[3] = 0
    rax_37[2] = arg5.d

if (&arg1[0x10] != &arg_8)
    int32_t* rcx_18 = *(arg1 + 0x40)
    *(arg1 + 0x40) = rbx_5
    rbx_5 = nullptr
    j_sub_140a74f90(rcx_18)

j_sub_140a74f90(rbx_5)
int32_t rbx_6 = int.d(*arg1 * 0.00477134483f)
int32_t* rax_39 = j_sub_140a82f30(0x28)
int32_t* rbx_7

if (rax_39 == 0)
    rbx_7 = nullptr
else
    rbx_7 = sub_141c302c0(rax_39, arg1[9], rbx_6, arg1[5])

if (&arg1[0x12] != &arg_8)
    int32_t* rdx_12 = *(arg1 + 0x48)
    *(arg1 + 0x48) = rbx_7
    sub_141c32b30(&arg1[0x12], rdx_12)
else if (rbx_7 != 0)
    void* rsi_4 = *(rbx_7 + 0x20)
    
    if (rsi_4 != 0)
        sub_140a74f90(*(rsi_4 + 0x10))
        *(rsi_4 + 0x10) = 0
        sub_140a74f90(*(rsi_4 + 0x18))
        *(rsi_4 + 0x18) = 0
        j_sub_140a74f90(rsi_4)
    
    int64_t rcx_25 = *(rbx_7 + 0x10)
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    j_sub_140a74f90(rbx_7)

int32_t rbx_8 = int.d(*arg1 * 0.00359530933f)
int32_t* rax_42 = j_sub_140a82f30(0x28)
int32_t* rbx_9

if (rax_42 == 0)
    rbx_9 = nullptr
else
    rbx_9 = sub_141c302c0(rax_42, arg1[9], rbx_8, arg1[5])

if (&arg1[0x14] != &arg_8)
    int32_t* rdx_15 = *(arg1 + 0x50)
    *(arg1 + 0x50) = rbx_9
    sub_141c32b30(&arg1[0x14], rdx_15)
else if (rbx_9 != 0)
    void* rsi_5 = *(rbx_9 + 0x20)
    
    if (rsi_5 != 0)
        sub_140a74f90(*(rsi_5 + 0x10))
        *(rsi_5 + 0x10) = 0
        sub_140a74f90(*(rsi_5 + 0x18))
        *(rsi_5 + 0x18) = 0
        j_sub_140a74f90(rsi_5)
    
    int64_t rcx_32 = *(rbx_9 + 0x10)
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    j_sub_140a74f90(rbx_9)

int32_t rbx_10 = int.d(*arg1 * 0.0127347875f)
arg5.d = arg1[9].d f- 0.125f
int32_t* rax_45 = j_sub_140a82f30(0x28)
int32_t* rbx_11

if (rax_45 == 0)
    rbx_11 = nullptr
else
    rbx_11 = sub_141c302c0(rax_45, arg5.d, rbx_10, arg1[5])

if (&arg1[0x16] != &arg_8)
    int32_t* rdx_18 = *(arg1 + 0x58)
    *(arg1 + 0x58) = rbx_11
    sub_141c32b30(&arg1[0x16], rdx_18)
else if (rbx_11 != 0)
    void* rsi_6 = *(rbx_11 + 0x20)
    
    if (rsi_6 != 0)
        sub_140a74f90(*(rsi_6 + 0x10))
        *(rsi_6 + 0x10) = 0
        sub_140a74f90(*(rsi_6 + 0x18))
        *(rsi_6 + 0x18) = 0
        j_sub_140a74f90(rsi_6)
    
    int64_t rcx_39 = *(rbx_11 + 0x10)
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    j_sub_140a74f90(rbx_11)

arg5.d = arg1[9].d f- 0.125f
int32_t rbx_12 = int.d(*arg1 * 0.00930748321f)
int32_t* rax_48 = j_sub_140a82f30(0x28)
int32_t* rbx_13

if (rax_48 == 0)
    rbx_13 = nullptr
else
    rbx_13 = sub_141c302c0(rax_48, arg5.d, rbx_12, arg1[5])

if (&arg1[0x18] != &arg_8)
    int32_t* rdx_21 = *(arg1 + 0x60)
    *(arg1 + 0x60) = rbx_13
    sub_141c32b30(&arg1[0x18], rdx_21)
else if (rbx_13 != 0)
    void* rsi_7 = *(rbx_13 + 0x20)
    
    if (rsi_7 != 0)
        sub_140a74f90(*(rsi_7 + 0x10))
        *(rsi_7 + 0x10) = 0
        sub_140a74f90(*(rsi_7 + 0x18))
        *(rsi_7 + 0x18) = 0
        j_sub_140a74f90(rsi_7)
    
    int64_t rcx_46 = *(rbx_13 + 0x10)
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    j_sub_140a74f90(rbx_13)

int32_t rdx_24 = arg1[5]
arg1[4] = 6.28318548f f/ *arg1
arg1[0x84] = 0

if (rdx_24 s> arg1[0x85])
    sub_140775b10(&arg1[0x82], rdx_24)

int32_t rdx_25 = arg1[5]
arg1[0x88] = 0

if (rdx_25 s> arg1[0x89])
    sub_140775b10(&arg1[0x86], rdx_25)

int32_t rdx_26 = arg1[5]
arg1[0x8c] = 0

if (rdx_26 s> arg1[0x8d])
    sub_140775b10(&arg1[0x8a], rdx_26)

int32_t rdx_27 = arg1[5]
arg1[0x7c] = 0

if (rdx_27 s> arg1[0x7d])
    sub_140775b10(&arg1[0x7a], rdx_27)

int32_t rdx_28 = arg1[5]
arg1[0x80] = 0

if (rdx_28 s> arg1[0x81])
    sub_140775b10(&arg1[0x7e], rdx_28)

int32_t r8_7 = arg1[5] + arg1[0x84]
arg1[0x84] = r8_7

if (r8_7 s> arg1[0x85])
    sub_140775270(&arg1[0x82])

int32_t r8_9 = arg1[5] + arg1[0x88]
arg1[0x88] = r8_9

if (r8_9 s> arg1[0x89])
    sub_140775270(&arg1[0x86])

int32_t r8_11 = arg1[5] + arg1[0x8c]
arg1[0x8c] = r8_11

if (r8_11 s> arg1[0x8d])
    sub_140775270(&arg1[0x8a])

int32_t r8_13 = arg1[5] + arg1[0x7c]
arg1[0x7c] = r8_13

if (r8_13 s> arg1[0x7d])
    sub_140775270(&arg1[0x7a])

int32_t r8_15 = arg1[5] + arg1[0x80]
arg1[0x80] = r8_15

if (r8_15 s> arg1[0x81])
    sub_140775270(&arg1[0x7e])

sub_141c45700(&arg1[0x36], arg1[5])
sub_141c45700(&arg1[0x56], arg1[5])
int32_t rbx_16 = arg1[5] << 2
int32_t* rax_51 = j_sub_140a82f30(0x48)
int32_t* rbx_17

if (rax_51 == 0)
    rbx_17 = nullptr
else
    rbx_17 = sub_141c2da10(rax_51, rbx_16, zx.q(arg1[5]), 0x10, 0x10)

if (&arg1[0x76] != &arg_8)
    int32_t* rsi_8 = *(arg1 + 0x1d8)
    *(arg1 + 0x1d8) = rbx_17
    
    if (rsi_8 != 0)
        sub_140a74f90(*(rsi_8 + 0x10))
        *(rsi_8 + 0x10) = 0
        sub_140a74f90(*(rsi_8 + 0x18))
        *(rsi_8 + 0x18) = 0
        j_sub_140a74f90(rsi_8)
else if (rbx_17 != 0)
    sub_140a74f90(*(rbx_17 + 0x10))
    *(rbx_17 + 0x10) = 0
    sub_140a74f90(*(rbx_17 + 0x18))
    *(rbx_17 + 0x18) = 0
    j_sub_140a74f90(rbx_17)

int32_t rbx_19 = arg1[5] << 2
int32_t* rax_54 = j_sub_140a82f30(0x48)
int32_t* rbx_20

if (rax_54 == 0)
    rbx_20 = nullptr
else
    rbx_20 = sub_141c2da10(rax_54, rbx_19, zx.q(arg1[5]), 0x10, 0x10)

if (&arg1[0x78] != &arg_8)
    int32_t* rsi_9 = *(arg1 + 0x1e0)
    *(arg1 + 0x1e0) = rbx_20
    
    if (rsi_9 != 0)
        sub_140a74f90(*(rsi_9 + 0x10))
        *(rsi_9 + 0x10) = 0
        sub_140a74f90(*(rsi_9 + 0x18))
        *(rsi_9 + 0x18) = 0
        j_sub_140a74f90(rsi_9)
else if (rbx_20 != 0)
    sub_140a74f90(*(rbx_20 + 0x10))
    *(rbx_20 + 0x10) = 0
    sub_140a74f90(*(rbx_20 + 0x18))
    *(rbx_20 + 0x18) = 0
    j_sub_140a74f90(rbx_20)

sub_141c33fd0(arg1)
int512_t zmm6
zmm6.o = var_48
return arg1
