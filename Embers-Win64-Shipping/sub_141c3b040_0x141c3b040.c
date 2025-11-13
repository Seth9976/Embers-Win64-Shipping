// 函数: sub_141c3b040
// 地址: 0x141c3b040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
data_143a12b94 = arg2
zmm0.d = zmm0.d f* 3.36010198e-05f
data_143a12b90 = zmm0.d
sub_141c3aa60(arg1 + 0x38, arg2)
int64_t rcx_1 = *(arg1 + 0x450)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(data_143a12b94))
*(arg1 + 0x464) = zmm6.d
int32_t rdx = 1 - int.d(zmm6.d * -2f)
*(arg1 + 0x458) = rdx

if (rcx_1 != 0)
    j_sub_140a74f90(rcx_1)
    rdx = *(arg1 + 0x458)

int64_t rdx_1 = sx.q(rdx)
int64_t rax_1 = 4 * rdx_1

if (mulu.dp.q(4, rdx_1) u>> 0x40 != zx.o(0))
    rax_1 = -1

*(arg1 + 0x450) = j_sub_140a82f30(rax_1)
sub_141c45160(arg1 + 0x448)
int64_t rcx_4 = *(arg1 + 0x4a8)
*(arg1 + 0x4bc) = zmm6.d
int32_t rbx_1 = 1 - int.d(zmm6.d * -0.200000003f)
*(arg1 + 0x4b0) = rbx_1
int32_t rax_4 = rbx_1

if (rcx_4 != 0)
    j_sub_140a74f90(rcx_4)
    rax_4 = *(arg1 + 0x4b0)

int64_t rcx_5 = sx.q(rax_4)
int64_t rax_5 = 4 * rcx_5

if (mulu.dp.q(4, rcx_5) u>> 0x40 != zx.o(0))
    rax_5 = -1

*(arg1 + 0x4a8) = j_sub_140a82f30(rax_5)
sub_141c45160(arg1 + 0x4a0)
int128_t zmm7 = 0x447a0000
sub_141c46000(arg1 + 0x4a0, 
    data_143a12b90 * 142f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_7 = rbx_1
int64_t rcx_9 = *(arg1 + 0x4f8)
*(arg1 + 0x50c) = zmm6.d
*(arg1 + 0x500) = rbx_1

if (rcx_9 != 0)
    j_sub_140a74f90(rcx_9)
    rax_7 = *(arg1 + 0x500)

int64_t rcx_10 = sx.q(rax_7)
int64_t rax_8 = 4 * rcx_10

if (mulu.dp.q(4, rcx_10) u>> 0x40 != zx.o(0))
    rax_8 = -1

*(arg1 + 0x4f8) = j_sub_140a82f30(rax_8)
sub_141c45160(arg1 + 0x4f0)
sub_141c46000(arg1 + 0x4f0, 
    data_143a12b90 * 107f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_10 = rbx_1
int64_t rcx_14 = *(arg1 + 0x548)
*(arg1 + 0x55c) = zmm6.d
*(arg1 + 0x550) = rbx_1

if (rcx_14 != 0)
    j_sub_140a74f90(rcx_14)
    rax_10 = *(arg1 + 0x550)

int64_t rcx_15 = sx.q(rax_10)
int64_t rax_11 = 4 * rcx_15

if (mulu.dp.q(4, rcx_15) u>> 0x40 != zx.o(0))
    rax_11 = -1

*(arg1 + 0x548) = j_sub_140a82f30(rax_11)
sub_141c45160(arg1 + 0x540)
sub_141c46000(arg1 + 0x540, 
    data_143a12b90 * 379f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_13 = rbx_1
int64_t rcx_19 = *(arg1 + 0x598)
*(arg1 + 0x5ac) = zmm6.d
*(arg1 + 0x5a0) = rbx_1

if (rcx_19 != 0)
    j_sub_140a74f90(rcx_19)
    rax_13 = *(arg1 + 0x5a0)

int64_t rcx_20 = sx.q(rax_13)
int64_t rax_14 = 4 * rcx_20

if (mulu.dp.q(4, rcx_20) u>> 0x40 != zx.o(0))
    rax_14 = -1

*(arg1 + 0x598) = j_sub_140a82f30(rax_14)
sub_141c45160(arg1 + 0x590)
sub_141c46000(arg1 + 0x590, 
    data_143a12b90 * 277f * 1000f f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)

if (*(arg1 + 0x5e0) == 0)
    void var_38
    int64_t* rax_16
    rax_16, zmm6, zmm7 = sub_141c35d70(&var_38, 1, 0x400)
    
    if (arg1 + 0x5e0 != rax_16)
        *(arg1 + 0x5e0) = *rax_16
        *rax_16 = 0
        int64_t rax_18 = rax_16[1]
        int64_t* rsi_4 = *(arg1 + 0x5e8)
        
        if (rax_18 != rsi_4)
            rax_16[1] = 0
            *(arg1 + 0x5e8) = rax_18
            
            if (rsi_4 != 0)
                rsi_4[1].d -= 1
                
                if (rsi_4[1].d == 1)
                    (**rsi_4)(rsi_4)
                    int32_t temp12_1 = *(rsi_4 + 0xc)
                    *(rsi_4 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rsi_4 + 8))(rsi_4, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp10_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

void* rax_23 = *(arg1 + 0x5e0)
uint128_t zmm1_4 = zx.o(*(rax_23 + 0x10))
*(rax_23 + 0x1c) = zmm6.d
*(rax_23 + 0x18) = 0x3f800000
*(rax_23 + 0x20) = 0
zmm1_4 = _mm_cvtepi32_ps(zmm1_4)
float zmm0_7 = zmm1_4.d * 0.25f
zmm1_4.d = zmm1_4.d f/ zmm6.d
*(rax_23 + 0x24) = zmm0_7
*(rax_23 + 0x28) = zmm1_4.d
void* rax_24 = *(arg1 + 0x5e0)
*(rax_24 + 0x2c) = 0x3f000000
*(rax_24 + 0x30) = 0x3f000000
int32_t rax_25 = rbx_1
int64_t rcx_30 = *(arg1 + 0x5f8)
*(arg1 + 0x60c) = zmm6.d
*(arg1 + 0x600) = rbx_1

if (rcx_30 != 0)
    j_sub_140a74f90(rcx_30)
    rax_25 = *(arg1 + 0x600)

int64_t rdx_2 = sx.q(rax_25)
int64_t rax_26 = 4 * rdx_2

if (mulu.dp.q(4, rdx_2) u>> 0x40 != zx.o(0))
    rax_26 = -1

*(arg1 + 0x5f8) = j_sub_140a82f30(rax_26)
sub_141c45160(arg1 + 0x5f0)
int32_t rax_28 = rbx_1
*(arg1 + 0x734) = data_143a12b90 * 908f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d
*(arg1 + 0x738) = data_143a12b90 * 16f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d
int64_t rcx_33 = *(arg1 + 0x648)
*(arg1 + 0x65c) = zmm6.d
*(arg1 + 0x650) = rbx_1

if (rcx_33 != 0)
    j_sub_140a74f90(rcx_33)
    rax_28 = *(arg1 + 0x650)

int64_t rcx_34 = sx.q(rax_28)
int64_t rax_29 = 4 * rcx_34

if (mulu.dp.q(4, rcx_34) u>> 0x40 != zx.o(0))
    rax_29 = -1

*(arg1 + 0x648) = j_sub_140a82f30(rax_29)
sub_141c45160(arg1 + 0x640)
sub_141c46000(arg1 + 0x640, 
    data_143a12b90 * 4217f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_31 = rbx_1
int64_t rcx_38 = *(arg1 + 0x6a0)
*(arg1 + 0x6b4) = zmm6.d
*(arg1 + 0x6a8) = rbx_1

if (rcx_38 != 0)
    j_sub_140a74f90(rcx_38)
    rax_31 = *(arg1 + 0x6a8)

int64_t rcx_39 = sx.q(rax_31)
int64_t rax_32 = 4 * rcx_39

if (mulu.dp.q(4, rcx_39) u>> 0x40 != zx.o(0))
    rax_32 = -1

*(arg1 + 0x6a0) = j_sub_140a82f30(rax_32)
sub_141c45160(arg1 + 0x698)
sub_141c46000(arg1 + 0x698, 
    data_143a12b90 * 2656f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_34 = rbx_1
int64_t rcx_43 = *(arg1 + 0x6f0)
*(arg1 + 0x704) = zmm6.d
*(arg1 + 0x6f8) = rbx_1

if (rcx_43 != 0)
    j_sub_140a74f90(rcx_43)
    rax_34 = *(arg1 + 0x6f8)

int64_t rcx_44 = sx.q(rax_34)
int64_t rax_35 = 4 * rcx_44

if (mulu.dp.q(4, rcx_44) u>> 0x40 != zx.o(0))
    rax_35 = -1

*(arg1 + 0x6f0) = j_sub_140a82f30(rax_35)
sub_141c45160(arg1 + 0x6e8)
sub_141c46000(arg1 + 0x6e8, 
    data_143a12b90 * 3136f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_37 = rbx_1
int64_t rcx_48 = *(arg1 + 0x748)
*(arg1 + 0x75c) = zmm6.d
*(arg1 + 0x750) = rbx_1

if (rcx_48 != 0)
    j_sub_140a74f90(rcx_48)
    rax_37 = *(arg1 + 0x750)

int64_t rdx_3 = sx.q(rax_37)
int64_t rax_38 = 4 * rdx_3

if (mulu.dp.q(4, rdx_3) u>> 0x40 != zx.o(0))
    rax_38 = -1

*(arg1 + 0x748) = j_sub_140a82f30(rax_38)
sub_141c45160(arg1 + 0x740)
int32_t rax_40 = rbx_1
*(arg1 + 0x884) = data_143a12b90 * 672f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d
*(arg1 + 0x888) = data_143a12b90 * 16f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d
int64_t rcx_51 = *(arg1 + 0x798)
*(arg1 + 0x7ac) = zmm6.d
*(arg1 + 0x7a0) = rbx_1

if (rcx_51 != 0)
    j_sub_140a74f90(rcx_51)
    rax_40 = *(arg1 + 0x7a0)

int64_t rcx_52 = sx.q(rax_40)
int64_t rax_41 = 4 * rcx_52

if (mulu.dp.q(4, rcx_52) u>> 0x40 != zx.o(0))
    rax_41 = -1

*(arg1 + 0x798) = j_sub_140a82f30(rax_41)
sub_141c45160(arg1 + 0x790)
sub_141c46000(arg1 + 0x790, 
    data_143a12b90 * 4453f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int32_t rax_43 = rbx_1
int64_t rcx_56 = *(arg1 + 0x7f0)
*(arg1 + 0x804) = zmm6.d
*(arg1 + 0x7f8) = rbx_1

if (rcx_56 != 0)
    j_sub_140a74f90(rcx_56)
    rax_43 = *(arg1 + 0x7f8)

int64_t rcx_57 = sx.q(rax_43)
int64_t rax_44 = 4 * rcx_57

if (mulu.dp.q(4, rcx_57) u>> 0x40 != zx.o(0))
    rax_44 = -1

*(arg1 + 0x7f0) = j_sub_140a82f30(rax_44)
sub_141c45160(arg1 + 0x7e8)
sub_141c46000(arg1 + 0x7e8, 
    data_143a12b90 * 1800f f* zmm7.d f/ _mm_cvtepi32_ps(zx.o(data_143a12b94)).d)
int64_t rcx_61 = *(arg1 + 0x840)
*(arg1 + 0x854) = zmm6.d
*(arg1 + 0x848) = rbx_1

if (rcx_61 != 0)
    j_sub_140a74f90(rcx_61)
    rbx_1 = *(arg1 + 0x848)

int64_t rcx_62 = sx.q(rbx_1)
int64_t rax_46 = 4 * rcx_62

if (mulu.dp.q(4, rcx_62) u>> 0x40 != zx.o(0))
    rax_46 = -1

*(arg1 + 0x840) = j_sub_140a82f30(rax_46)
sub_141c45160(arg1 + 0x838)
sub_141c46000(arg1 + 0x838, data_143a12b90 * 3720f f* zmm7.d / float.s(data_143a12b94))
*(arg1 + 0x890) = data_143a12b90 * 266f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x894) = data_143a12b90 * 2974f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x898) = data_143a12b90 * 1913f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x89c) = data_143a12b90 * 1996f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8a0) = data_143a12b90 * 1990f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8a4) = data_143a12b90 * 187f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8a8) = data_143a12b90 * 1066f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8ac) = data_143a12b90 * 353f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8b0) = data_143a12b90 * 3627f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8b4) = data_143a12b90 * 1228f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8b8) = data_143a12b90 * 2673f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8bc) = data_143a12b90 * 2111f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8c0) = data_143a12b90 * 335f f* zmm7.d f/ float.s(data_143a12b94)
*(arg1 + 0x8c4) = data_143a12b90 * 121f f* zmm7.d f/ float.s(data_143a12b94)
return sub_141c34170(arg1) __tailcall
