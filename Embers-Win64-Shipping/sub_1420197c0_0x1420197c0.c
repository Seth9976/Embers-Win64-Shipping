// 函数: sub_1420197c0
// 地址: 0x1420197c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422db920(arg1, arg2)
*arg1 = &data_14329f4c8
arg1[5] = &data_14329f810
arg1[7] = &data_14329f9e0
__builtin_memset(&arg1[9], 0, 0x20)
arg1[0xd].d = 4
sub_141e70d50(&arg1[0x12])
*(arg1 + 0xac) = -1
void* rcx_1 = &arg1[0x24]
*(arg1 + 0xac) |= 0x48000
arg1[0x16].d = (arg1[0x16].d & 0xfff8ffff) | 0x400
__builtin_memset(&arg1[0x19], 0, 0x58)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x2e]
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
arg1[0x2a] = 0
arg1[0x2b].d = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x38]
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
arg1[0x36] = 0
arg1[0x37] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x3c].d = 0xffffffff
*(arg1 + 0x1e4) = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
arg1[0x40].b = 1
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = 2
arg1[0x44] = 0
arg1[0x45].d = 0
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 2
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b] = 2
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e] = 2
arg1[0x4f] = 0
arg1[0x50] = 0
arg1[0x51] = 2
arg1[0x52] = 0
arg1[0x53] = 0
arg1[0x54] = 2
arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x57] = 2
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5a] = 2
arg1[0x5b] = 0
arg1[0x5c].d = 0
arg1[0x5d] = 0
arg1[0x5e] = 0
arg1[0x5f] = 2
arg1[0x60] = 0
arg1[0x61] = 0
arg1[0x62] = 2
*(arg1 + 0x6c) &= 0xfffffffd
*(arg1 + 0x329) = 0x1000100
*(arg1 + 0x32d) = 0
arg1[0x15].d = 3
int32_t i_2 = arg1[0xc].d
int64_t* rsi = arg1[0xb]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rsi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rsi = &rsi[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t i_3 = 0xa
arg1[0xc].d = 0

if (*(arg1 + 0x64) != 0xa)
    sub_1405a5410(&arg1[0xb], 0xa)

int64_t* rsi_1
int64_t i_1

do
    int64_t r14 = sx.q(arg1[0xc].d)
    int32_t rax_6 = (r14 + 1).d
    arg1[0xc].d = rax_6
    
    if (rax_6 s> *(arg1 + 0x64))
        sub_1405a4f90(&arg1[0xb])
    
    rsi_1 = arg1[0xb]
    int64_t* rax_9 = &rsi_1[r14 * 2]
    
    if (r14 << 4 != neg.q(rsi_1))
        *rax_9 = 0
        rax_9[1] = 0
        rsi_1 = arg1[0xb]
    
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int64_t r14_1 = sx.q(rsi_1[1].d)
int128_t zmm6 = data_142f13080
int32_t rax_10 = (r14_1 + 1).d
rsi_1[1].d = rax_10

if (rax_10 s> *(rsi_1 + 0xc))
    sub_1405a4f90(rsi_1)

*(*rsi_1 + r14_1 * 0x10) = zmm6
void* rsi_2 = arg1[0xb]
zmm6 = data_1432a4ed0
int64_t r14_2 = sx.q(*(rsi_2 + 0x18))
int32_t rax_12 = (r14_2 + 1).d
*(rsi_2 + 0x18) = rax_12

if (rax_12 s> *(rsi_2 + 0x1c))
    sub_1405a4f90(rsi_2 + 0x10)

*(*(rsi_2 + 0x10) + r14_2 * 0x10) = zmm6
void* rsi_3 = arg1[0xb]
zmm6 = data_1432a4f70
int64_t r14_3 = sx.q(*(rsi_3 + 0x18))
int32_t rax_14 = (r14_3 + 1).d
*(rsi_3 + 0x18) = rax_14

if (rax_14 s> *(rsi_3 + 0x1c))
    sub_1405a4f90(rsi_3 + 0x10)

*(*(rsi_3 + 0x10) + r14_3 * 0x10) = zmm6
void* rsi_4 = arg1[0xb]
zmm6 = data_1432a4ef0
int64_t r14_4 = sx.q(*(rsi_4 + 0x28))
int32_t rax_16 = (r14_4 + 1).d
*(rsi_4 + 0x28) = rax_16

if (rax_16 s> *(rsi_4 + 0x2c))
    sub_1405a4f90(rsi_4 + 0x20)

*(*(rsi_4 + 0x20) + r14_4 * 0x10) = zmm6
void* rsi_5 = arg1[0xb]
zmm6 = data_1432a4f20
int64_t r14_5 = sx.q(*(rsi_5 + 0x28))
int32_t rax_18 = (r14_5 + 1).d
*(rsi_5 + 0x28) = rax_18

if (rax_18 s> *(rsi_5 + 0x2c))
    sub_1405a4f90(rsi_5 + 0x20)

*(*(rsi_5 + 0x20) + r14_5 * 0x10) = zmm6
void* rsi_6 = arg1[0xb]
zmm6 = data_1432a4ed0
int64_t r14_6 = sx.q(*(rsi_6 + 0x38))
int32_t rax_20 = (r14_6 + 1).d
*(rsi_6 + 0x38) = rax_20

if (rax_20 s> *(rsi_6 + 0x3c))
    sub_1405a4f90(rsi_6 + 0x30)

*(*(rsi_6 + 0x30) + r14_6 * 0x10) = zmm6
void* rsi_7 = arg1[0xb]
zmm6 = data_1432a4f60
int64_t r14_7 = sx.q(*(rsi_7 + 0x38))
int32_t rax_22 = (r14_7 + 1).d
*(rsi_7 + 0x38) = rax_22

if (rax_22 s> *(rsi_7 + 0x3c))
    sub_1405a4f90(rsi_7 + 0x30)

*(*(rsi_7 + 0x30) + r14_7 * 0x10) = zmm6
void* rsi_8 = arg1[0xb]
zmm6 = data_142d3f640
int64_t r14_8 = sx.q(*(rsi_8 + 0x38))
int32_t rax_24 = (r14_8 + 1).d
*(rsi_8 + 0x38) = rax_24

if (rax_24 s> *(rsi_8 + 0x3c))
    sub_1405a4f90(rsi_8 + 0x30)

*(*(rsi_8 + 0x30) + r14_8 * 0x10) = zmm6
void* rsi_9 = arg1[0xb]
zmm6 = data_142d4cc10
int64_t r14_9 = sx.q(*(rsi_9 + 0x48))
int32_t rax_26 = (r14_9 + 1).d
*(rsi_9 + 0x48) = rax_26

if (rax_26 s> *(rsi_9 + 0x4c))
    sub_1405a4f90(rsi_9 + 0x40)

*(*(rsi_9 + 0x40) + r14_9 * 0x10) = zmm6
void* rsi_10 = arg1[0xb]
zmm6 = data_142e6d9f0
int64_t r14_10 = sx.q(*(rsi_10 + 0x48))
int32_t rax_28 = (r14_10 + 1).d
*(rsi_10 + 0x48) = rax_28

if (rax_28 s> *(rsi_10 + 0x4c))
    sub_1405a4f90(rsi_10 + 0x40)

*(*(rsi_10 + 0x40) + r14_10 * 0x10) = zmm6
void* rsi_11 = arg1[0xb]
zmm6 = data_1432a4f70
int64_t r14_11 = sx.q(*(rsi_11 + 0x48))
int32_t rax_30 = (r14_11 + 1).d
*(rsi_11 + 0x48) = rax_30

if (rax_30 s> *(rsi_11 + 0x4c))
    sub_1405a4f90(rsi_11 + 0x40)

int64_t rax_31 = *(rsi_11 + 0x40)
int32_t zmm2 = data_143a2e158
int32_t var_58 = zmm2
int64_t var_54 = 0x3f800000
int32_t var_4c = 0
*(rax_31 + r14_11 * 0x10) = zmm6
void* rsi_12 = arg1[0xb]
int64_t r14_12 = sx.q(*(rsi_12 + 0x58))
int32_t rax_32 = (r14_12 + 1).d
*(rsi_12 + 0x58) = rax_32

if (rax_32 s> *(rsi_12 + 0x5c))
    sub_1405a4f90(rsi_12 + 0x50)
    zmm2 = data_143a2e158

int128_t zmm0 = var_58.o
int64_t rax_33 = *(rsi_12 + 0x50)
var_58 = zmm2
var_54:4.d = zmm2
var_54.d = 0x3f800000
int32_t var_4c_1 = 0
*(rax_33 + r14_12 * 0x10) = zmm0
void* rsi_13 = arg1[0xb]
int64_t r14_13 = sx.q(*(rsi_13 + 0x58))
int32_t rax_34 = (r14_13 + 1).d
*(rsi_13 + 0x58) = rax_34

if (rax_34 s> *(rsi_13 + 0x5c))
    sub_1405a4f90(rsi_13 + 0x50)
    zmm2 = data_143a2e158

zmm0 = var_58.o
int64_t rax_35 = *(rsi_13 + 0x50)
var_58 = zmm2
var_54.d = 0x3f800000
int32_t var_4c_2 = 0
*(rax_35 + r14_13 * 0x10) = zmm0
void* rsi_14 = arg1[0xb]
var_54:4.d = data_143a2e15c.d
int64_t r14_14 = sx.q(*(rsi_14 + 0x58))
int32_t rax_36 = (r14_14 + 1).d
*(rsi_14 + 0x58) = rax_36

if (rax_36 s> *(rsi_14 + 0x5c))
    sub_1405a4f90(rsi_14 + 0x50)
    zmm2 = data_143a2e158

int64_t rax_37 = *(rsi_14 + 0x50)
zmm0 = var_58.o
var_58 = 0x3f800000
var_54.d = zmm2
var_54 = 0
*(rax_37 + r14_14 * 0x10) = zmm0
void* rsi_15 = arg1[0xb]
int64_t r14_15 = sx.q(*(rsi_15 + 0x68))
int32_t rax_38 = (r14_15 + 1).d
*(rsi_15 + 0x68) = rax_38

if (rax_38 s> *(rsi_15 + 0x6c))
    sub_1405a4f90(rsi_15 + 0x60)
    zmm2 = data_143a2e158

zmm0 = var_58.o
int64_t rax_39 = *(rsi_15 + 0x60)
var_54.d = zmm2
int32_t var_4c_3 = zmm2
var_58 = 0x3f800000
var_54:4.d = 0
*(rax_39 + r14_15 * 0x10) = zmm0
void* rsi_16 = arg1[0xb]
int64_t r14_16 = sx.q(*(rsi_16 + 0x68))
int32_t rax_40 = (r14_16 + 1).d
*(rsi_16 + 0x68) = rax_40

if (rax_40 s> *(rsi_16 + 0x6c))
    sub_1405a4f90(rsi_16 + 0x60)
    zmm2 = data_143a2e158

zmm0 = var_58.o
int64_t rax_41 = *(rsi_16 + 0x60)
var_54.d = zmm2
var_58 = 0x3f800000
var_54:4.d = 0
*(rax_41 + r14_16 * 0x10) = zmm0
void* rsi_17 = arg1[0xb]
int32_t var_4c_4 = data_143a2e15c.d
int64_t r14_17 = sx.q(*(rsi_17 + 0x68))
int32_t rax_42 = (r14_17 + 1).d
*(rsi_17 + 0x68) = rax_42

if (rax_42 s> *(rsi_17 + 0x6c))
    sub_1405a4f90(rsi_17 + 0x60)

zmm6 = data_142d4cc10
*(*(rsi_17 + 0x60) + r14_17 * 0x10) = var_58.o
void* rsi_18 = arg1[0xb]
int64_t r14_18 = sx.q(*(rsi_18 + 0x78))
int32_t rax_44 = (r14_18 + 1).d
*(rsi_18 + 0x78) = rax_44

if (rax_44 s> *(rsi_18 + 0x7c))
    sub_1405a4f90(rsi_18 + 0x70)

*(*(rsi_18 + 0x70) + r14_18 * 0x10) = zmm6
void* rsi_19 = arg1[0xb]
zmm6 = data_142e6d9f0
int64_t r14_19 = sx.q(*(rsi_19 + 0x78))
int32_t rax_46 = (r14_19 + 1).d
*(rsi_19 + 0x78) = rax_46

if (rax_46 s> *(rsi_19 + 0x7c))
    sub_1405a4f90(rsi_19 + 0x70)

*(*(rsi_19 + 0x70) + r14_19 * 0x10) = zmm6
void* rsi_20 = arg1[0xb]
zmm6 = data_1432a4f60
int64_t r14_20 = sx.q(*(rsi_20 + 0x78))
int32_t rax_48 = (r14_20 + 1).d
*(rsi_20 + 0x78) = rax_48

if (rax_48 s> *(rsi_20 + 0x7c))
    sub_1405a4f90(rsi_20 + 0x70)

*(*(rsi_20 + 0x70) + r14_20 * 0x10) = zmm6
void* rsi_21 = arg1[0xb]
zmm6 = data_142d3f640
int64_t r14_21 = sx.q(*(rsi_21 + 0x78))
int32_t rax_50 = (r14_21 + 1).d
*(rsi_21 + 0x78) = rax_50

if (rax_50 s> *(rsi_21 + 0x7c))
    sub_1405a4f90(rsi_21 + 0x70)

*(*(rsi_21 + 0x70) + r14_21 * 0x10) = zmm6
void* rsi_22 = arg1[0xb]
zmm6 = data_1432a4ee0
int64_t r14_22 = sx.q(*(rsi_22 + 0x88))
int32_t rax_52 = (r14_22 + 1).d
*(rsi_22 + 0x88) = rax_52

if (rax_52 s> *(rsi_22 + 0x8c))
    sub_1405a4f90(rsi_22 + 0x80)

*(*(rsi_22 + 0x80) + r14_22 * 0x10) = zmm6
void* rsi_23 = arg1[0xb]
zmm6 = data_1432a4f00
int64_t r14_23 = sx.q(*(rsi_23 + 0x88))
int32_t rax_54 = (r14_23 + 1).d
*(rsi_23 + 0x88) = rax_54

if (rax_54 s> *(rsi_23 + 0x8c))
    sub_1405a4f90(rsi_23 + 0x80)

*(*(rsi_23 + 0x80) + r14_23 * 0x10) = zmm6
void* rsi_24 = arg1[0xb]
zmm6 = data_1432a4f10
int64_t r14_24 = sx.q(*(rsi_24 + 0x88))
int32_t rax_56 = (r14_24 + 1).d
*(rsi_24 + 0x88) = rax_56

if (rax_56 s> *(rsi_24 + 0x8c))
    sub_1405a4f90(rsi_24 + 0x80)

*(*(rsi_24 + 0x80) + r14_24 * 0x10) = zmm6
void* rsi_25 = arg1[0xb]
zmm6 = data_1432a4f30
int64_t r14_25 = sx.q(*(rsi_25 + 0x88))
int32_t rax_58 = (r14_25 + 1).d
*(rsi_25 + 0x88) = rax_58

if (rax_58 s> *(rsi_25 + 0x8c))
    sub_1405a4f90(rsi_25 + 0x80)

*(*(rsi_25 + 0x80) + r14_25 * 0x10) = zmm6
void* rsi_26 = arg1[0xb]
zmm6 = data_1432a4ec0
int64_t r14_26 = sx.q(*(rsi_26 + 0x98))
int32_t rax_60 = (r14_26 + 1).d
*(rsi_26 + 0x98) = rax_60

if (rax_60 s> *(rsi_26 + 0x9c))
    sub_1405a4f90(rsi_26 + 0x90)

*(*(rsi_26 + 0x90) + r14_26 * 0x10) = zmm6
void* rsi_27 = arg1[0xb]
zmm6 = data_1432a4f40
int64_t r14_27 = sx.q(*(rsi_27 + 0x98))
int32_t rax_62 = (r14_27 + 1).d
*(rsi_27 + 0x98) = rax_62

if (rax_62 s> *(rsi_27 + 0x9c))
    sub_1405a4f90(rsi_27 + 0x90)

*(*(rsi_27 + 0x90) + r14_27 * 0x10) = zmm6
void* rsi_28 = arg1[0xb]
zmm6 = data_1432a4f50
int64_t r14_28 = sx.q(*(rsi_28 + 0x98))
int32_t rax_64 = (r14_28 + 1).d
*(rsi_28 + 0x98) = rax_64

if (rax_64 s> *(rsi_28 + 0x9c))
    sub_1405a4f90(rsi_28 + 0x90)

*(*(rsi_28 + 0x90) + r14_28 * 0x10) = zmm6
void* rbx = arg1[0xb]
zmm6 = data_1432a4f80
int64_t rsi_29 = sx.q(*(rbx + 0x98))
int32_t rax_66 = (rsi_29 + 1).d
*(rbx + 0x98) = rax_66

if (rax_66 s> *(rbx + 0x9c))
    sub_1405a4f90(rbx + 0x90)

*(*(rbx + 0x90) + rsi_29 * 0x10) = zmm6
arg1[0x11].b = 1

if (((arg1[1].d u>> 4).b & 1) == 0)
    int64_t rax_70 = j_sub_140a82f30(0x38)
    
    if (rax_70 == 0)
        rax_70 = 0
    else
        __builtin_memset(rax_70, 0, 0x38)
    
    arg1[0x63] = rax_70
    void* rax_71 = j_sub_140a82f30(0x30)
    void* const rbx_1 = rax_71
    
    if (rax_71 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(rax_71, 0, 0x30)
        int64_t r15 = sx.q(*(rax_71 + 0x10))
        int32_t rax_72 = (r15 + 0x14).d
        *(rbx_1 + 0x10) = rax_72
        
        if (rax_72 s> *(rbx_1 + 0x14))
            sub_1406105e0(rbx_1 + 8)
        
        memset(*(rbx_1 + 8) + (r15 << 2), 0, 0x50)
        int64_t rsi_30 = sx.q(*(rbx_1 + 0x20))
        int32_t rax_74 = (rsi_30 + 0x14).d
        *(rbx_1 + 0x20) = rax_74
        
        if (rax_74 s> *(rbx_1 + 0x24))
            sub_1405a4d70(rbx_1 + 0x18)
        
        memset(*(rbx_1 + 0x18) + (rsi_30 << 3), 0, 0xa0)
    
    arg1[0x64] = rbx_1
    var_54:4.d = 0
    var_58.q = sub_14202f790
    int64_t* rax_76 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_76 != 0)
        *rax_76 = &data_1432a4d58
        sub_140d3a3a0(&rax_76[1], arg1)
        *(rax_76 + 0x10) = var_58.o
        rax_76[5] = sub_140a387b0()
        *rax_76 = &data_1432a4db0
    
    void arg_8
    
    if (rax_76 != 0)
        sub_140599630(&data_1439a0108, 1)
        (*(*rax_76 + 0x30))(rax_76, &arg_8)
        int64_t rsi_31 = sx.q(data_1439a0110)
        int32_t rax_79 = (rsi_31 + 1).d
        bool cond:0_1 = rax_79 s<= data_1439a0114
        data_1439a0110 = rax_79
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_1439a0108)
        
        void** rax_82 = (rsi_31 << 4) + data_1439a0108
        *rax_82 = rax_76
        rax_82[1].d = 3
    
    var_54:4.d = 0
    var_58.q = sub_14202fa10
    int128_t var_48 = var_58.o
    sub_142012b30(&data_1439a0120, &arg_8, arg1, &var_48)
    var_54:4.d = 0
    var_58.q = sub_14202f930
    var_48 = var_58.o
    sub_142012b30(&data_1439a0138, &arg_8, arg1, &var_48)
    var_48:8.d = 0
    var_48.q = sub_14202f890
    var_58.q = 0
    var_54:4.d = 0
    void*** rax_83 = sub_1405978f0(0x30, &var_58)
    
    if (rax_83 != 0)
        *rax_83 = &data_143083c50
        sub_140d3a3a0(&rax_83[1], arg1)
        *(rax_83 + 0x10) = var_48
        rax_83[5] = sub_140a387b0()
        *rax_83 = &data_143083ca8
    
    int32_t r14_29 = var_54:4.d
    
    if (r14_29 == 0)
        int64_t rcx_102 = var_58.q
        
        if (rcx_102 != 0)
            sub_140a74f90(rcx_102)
    else
        int64_t* rbx_4 = var_58.q
        
        if (rbx_4 != 0)
            sub_140599630(&data_1439a0150, 1)
            (*(*rbx_4 + 0x30))(rbx_4, &arg_8)
            int64_t rsi_32 = sx.q(data_1439a0158)
            int32_t rax_86 = (rsi_32 + 1).d
            bool cond:1_1 = rax_86 s<= data_1439a015c
            data_1439a0158 = rax_86
            
            if (not(cond:1_1))
                sub_1405a4f90(&data_1439a0150)
            
            int64_t** rax_89 = (rsi_32 << 4) + data_1439a0150
            *rax_89 = rbx_4
            rax_89[1].d = r14_29

return arg1
