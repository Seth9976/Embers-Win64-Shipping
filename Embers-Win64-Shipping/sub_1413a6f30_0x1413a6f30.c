// 函数: sub_1413a6f30
// 地址: 0x1413a6f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa2d0)
void var_a308
int64_t rax_1 = __security_cookie ^ &var_a308
int32_t rbx = data_1439b69d8

if (rbx s<= 0xffffffff)
    rbx = *(arg4 + 0x123c)

void** var_a188
sub_1411c8490(&var_a188, *(arg1 + 8) + 0x6338, rbx, 1, 0x18, *(*(arg4 + 0x15a8) + 0x4c8) & 0x3ff)
int32_t var_a154
int64_t rax_3 = zx.q(var_a154)
int32_t var_a150
uint32_t var_a208 = var_a150 u/ 3
int32_t rcx_3 = int.d(_mm_sqrt_ss(0, float.s(rax_3)))
int32_t var_a204 = rcx_3
int64_t* rcx_4 = data_143f0f180
uint32_t var_a200 = divu.dp.d(0:(rax_3.d), rcx_3)
int32_t var_a158
int32_t var_a1fc = var_a158
int64_t var_a2d8
int64_t var_a178
(*(*rcx_4 + 0x5b0))(rcx_4, &var_a2d8, &data_143f02b98, var_a178)
int64_t var_a1f8 = var_a2d8
sub_1405ec8a0(&var_a2d8)
void* r9_1 = *(arg1 + 8)
int64_t* rcx_6 = data_143f0f180
int32_t var_a218 = *(r9_1 + 0x6380)
int64_t var_a2a0
(*(*rcx_6 + 0x5b0))(rcx_6, &var_a2a0, &data_143f02b98, *(r9_1 + 0x6368))
int64_t var_a210 = var_a2a0
sub_1405ec8a0(&var_a2a0)
void* r8_1 = data_143f5b298
int32_t* rcx_8 = *(*(r8_1 + 0x700) + 0xd0)
int32_t rax_12
int32_t rcx_9

if (rcx_8 == 0)
    rax_12 = 0
    rcx_9 = 0
else
    rax_12 = rcx_8[1]
    rcx_9 = *rcx_8

int32_t var_a1e8 = rcx_9
int32_t var_a1e4 = rcx_9

if (rcx_9 s<= 1)
    rcx_9 = 1

int32_t var_a1e0 = divs.dp.d(sx.q(rax_12), rcx_9)
int64_t var_a1d8 = *(*(*(r8_1 + 0x700) + 0x78) + 0x10)
void var_a078
sub_1413aa0a0(*(arg1 + 8), arg4, &var_a078)
float zmm0_1 = data_1439b69e0
void* rcx_12 = *(arg1 + 8)
float zmm7 = 9.99999988e+26f

if (zmm0_1 <= 0f)
    void* rax_17 = *(rcx_12 + 0xf80)
    
    if (rax_17 != 0)
        double temp0_3[0x2] = _mm_cvtps_pd((*(rax_17 + 0x14))[0])
        temp0_3[0] = temp0_3[0] * 0.98999999999999999
        zmm7 = _mm_cvtpd_ps(_mm_max_sd(temp0_3[0], 0))
else
    zmm7 = zmm0_1

int64_t var_a110 = 0
int128_t var_a0e8
__builtin_memset(&var_a0e8, 0, 0x68)
int64_t var_a108 = 0
void* rsi = *(rcx_12 + 0xf80)
void var_a148
sub_1413f9890(rcx_12, &var_a148)
int32_t var_a2c0

if (rsi != 0 && (*(rsi + 0x20) & 0x40) == 0)
    var_a2c0 = 0
    int64_t var_a138_1 = _mm_unpacklo_ps(zx.o(0), 0)
    int32_t var_a130_1 = 0

int32_t* rax_18 = sub_14137ac00(arg2)
*rax_18 = rbx
int32_t rax_19 = *(data_143ec5658 + 4)

if (rax_19 s<= 0xffffffff)
    rax_19 = *(arg4 + 0x1238)

rax_18[1] = rax_19
rax_18[0xa] = sub_1413e95d0()
uint128_t zmm1_2 = data_1439b69dc

if (not(zmm1_2.d f!= -1f))
    zmm1_2 = *(arg4 + 0x11ec)

rax_18[3] = zmm1_2.d
rax_18[4] = *(arg4 + 0x11ec)
rax_18[5] = zmm7
rax_18[2] = arg5
int32_t rax_21
rax_21.b = data_143ec4118 != 0
rax_18[8] = rax_21
int32_t rax_22
rax_22.b = data_143ec411c != 0
rax_18[9] = rax_22
rax_18[7] = data_1439b69e8
rax_18[6] = _mm_cvtepi32_ps(zx.o(data_1439b69e4)).d
*(rax_18 + 0x38) = *(*(arg4 + 0x51e8) + 0x18)
sub_1405d16e0(&rax_18[0x14], *(arg4 + 0x10))
int64_t* rcx_17 = data_143f0f180
void* var_a2a8
(*(*rcx_17 + 0xf8))(rcx_17, &var_a2a8, &var_a208, &data_143e793f0, 0, 1)
void* rax_25 = var_a2a8
void* var_a2b0 = rax_25

if (rax_25 != 0)
    *(rax_25 + 8) += 1

sub_1405d1550(&var_a2a8)
sub_1405d1600(&rax_18[0x16], &var_a2b0)
sub_1405d1550(&var_a2b0)
int64_t* rcx_21 = data_143f0f180
void* var_a2b8
(*(*rcx_21 + 0xf8))(rcx_21, &var_a2b8, &var_a218, &data_143e79490, 0, 1)
void* rax_27 = var_a2b8
void* var_a288 = rax_27

if (rax_27 != 0)
    *(rax_27 + 8) += 1

sub_1405d1550(&var_a2b8)
sub_1405d1600(&rax_18[0x18], &var_a288)
sub_1405d1550(&var_a288)
int64_t* rcx_25 = data_143f0f180
void* var_a280
(*(*rcx_25 + 0xf8))(rcx_25, &var_a280, &var_a1e8, &data_143e2d9c0, 0, 1)
void* rax_29 = var_a280
void* var_a278 = rax_29

if (rax_29 != 0)
    *(rax_29 + 8) += 1

sub_1405d1550(&var_a280)
sub_1405d1600(&rax_18[0x1a], &var_a278)
sub_1405d1550(&var_a278)
int64_t* rcx_29 = data_143f0f180
void* var_a270
(*(*rcx_29 + 0xf8))(rcx_29, &var_a270, &var_a078, &data_143e8f6a0, 0, 1)
void* rax_31 = var_a270
void* var_a268 = rax_31

if (rax_31 != 0)
    *(rax_31 + 8) += 1

sub_1405d1550(&var_a270)
sub_1405d1600(&rax_18[0x1c], &var_a268)
sub_1405d1550(&var_a268)
*(rax_18 + 0x80) = *arg3
int32_t var_a2e0_5 = 1
*(rax_18 + 0x90) = arg3[1]
int32_t var_a2e8_5 = 0
*(rax_18 + 0xa0) = arg3[2]
*(rax_18 + 0xb0) = arg3[3]
*(rax_18 + 0xc0) = arg3[4]
int64_t* rcx_33 = data_143f0f180
int32_t* var_a260
(*(*rcx_33 + 0xf8))(rcx_33, &var_a260, &var_a148, &data_143ec9190, var_a2e8_5, var_a2e0_5)
int32_t* rax_33 = var_a260
int32_t* var_a2c8 = rax_33

if (rax_33 != 0)
    rax_33[2] += 1

sub_1405d1550(&var_a260)
sub_1405d1600(&rax_18[0x1e], &var_a2c8)
sub_1405d1550(&var_a2c8)
int64_t* rax_34 = sub_1422c6ca0(*arg2)
int64_t* var_a298 = rax_34
int64_t* rbx_1 = rax_34

if (rax_34 != 0)
    (*(*rax_34 + 0x30))(rbx_1)
    rbx_1 = var_a298

if (rax_34 == 0 || rbx_1 == 0)
    int64_t* rcx_39 = data_1439b70c8
    var_a298 = rcx_39
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x30))()
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1)

*(rax_18 + 0xd0) = sub_1410fccd0(arg2, &var_a298, u"External", 0)
*(rax_18 + 0xd8) = data_14395f4d0
int32_t* rbx_2 = *arg6
int64_t* rdx_21 = arg2[1]
var_a2c8 = rbx_2
var_a2c0.w = 0
void*** rax_40 = sub_14081d830(0x28, rdx_21, 1, 0)

if (rax_40 != 0)
    int128_t zmm0_5 = var_a2c8.o
    rax_40[1] = *(rbx_2 + 8)
    rax_40[2] = 0
    *(rax_40 + 0x18) = zmm0_5
    *rax_40 = &data_142f285c0

*(rax_18 + 0x40) = rax_40
int32_t* rbx_3 = arg6[2]
int64_t* rdx_22 = arg2[1]
var_a2c8 = rbx_3
var_a2c0.w = 0
void*** rax_41 = sub_14081d830(0x28, rdx_22, 1, 0)

if (rax_41 != 0)
    int128_t zmm0_6 = var_a2c8.o
    rax_41[1] = *(rbx_3 + 8)
    rax_41[2] = 0
    *(rax_41 + 0x18) = zmm0_6
    *rax_41 = &data_142f285c0

*(rax_18 + 0x48) = rax_41
*(rax_18 + 0x2c) = 0
int32_t rbx_4 = *(data_143ec5878 + 4)
int64_t* rax_44 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
int32_t r9_3 = 1

if (rbx_4 != 0)
    r9_3 = 3

int128_t var_a1c8
char rcx_46 = sub_1419a2ec0(rax_44, &var_a1c8, &data_143ec5d70, r9_3)
int128_t zmm7_1 = var_a1c8
int128_t var_a1b8 = sub_14139e1b0(rcx_46)
sub_141998c50(zmm7_1.q, &data_143ec79f0, rax_18)
void* rbx_5 = arg4
int32_t r14_1 = data_143ec4120
int32_t temp0_8 = divs.dp.d(sx.q(*(rbx_5 + 0x15a0) - *(rbx_5 + 0x1598) - 1 + arg5), arg5)
int32_t r8_9 = temp0_8
var_a2d8.d = temp0_8
int32_t temp0_9 = divs.dp.d(sx.q(arg5 - 1 + *(rbx_5 + 0x15a4) - *(rbx_5 + 0x159c)), arg5)
var_a2d8:4.d = temp0_9
int32_t r9_4 = temp0_9

if (r14_1 s> 0)
    if (r14_1 s<= 0x20)
        r14_1 = 0x20
    
    int32_t temp0_10 = divs.dp.d(sx.q(r14_1 - 1 + r8_9), r14_1)
    int32_t rcx_54 = temp0_10
    var_a2a0.d = temp0_10
    int32_t temp0_11 = divs.dp.d(sx.q(r14_1 - 1 + r9_4), r14_1)
    var_a2a8.d = temp0_11
    int32_t rax_65 = 0
    var_a2b8.d = 0
    
    if (temp0_11 s> 0)
        int32_t r10_1 = var_a2a8.d
        int32_t rdx_33 = 0
        var_a2b0.d = 0
        
        do
            int32_t r15_1 = 0
            
            if (rcx_54 s> 0)
                int32_t r13_1 = 0
                
                do
                    int32_t* rdi_2 = rax_18
                    
                    if (r15_1 s> 0 || rax_65 s> 0)
                        int32_t* rax_66 = sub_14137ac00(arg2)
                        rdi_2 = rax_66
                        *rax_66 = *rax_18
                        rax_66[1] = rax_18[1]
                        rax_66[2] = rax_18[2]
                        rax_66[3] = rax_18[3]
                        rax_66[4] = rax_18[4]
                        rax_66[5] = rax_18[5]
                        rax_66[6] = rax_18[6]
                        rdi_2[7] = rax_18[7]
                        rdi_2[8] = rax_18[8]
                        rdi_2[9] = rax_18[9]
                        rdi_2[0xa] = rax_18[0xa]
                        rdi_2[0xb] = rax_18[0xb]
                        rdi_2[0xc] = rax_18[0xc]
                        *(rdi_2 + 0x38) = *(rax_18 + 0x38)
                        *(rdi_2 + 0x40) = *(rax_18 + 0x40)
                        *(rdi_2 + 0x48) = *(rax_18 + 0x48)
                        sub_1405d16e0(&rdi_2[0x14], *(rax_18 + 0x50))
                        sub_1405d16e0(&rdi_2[0x16], *(rax_18 + 0x58))
                        sub_1405d16e0(&rdi_2[0x18], *(rax_18 + 0x60))
                        sub_1405d16e0(&rdi_2[0x1a], *(rax_18 + 0x68))
                        sub_1405d16e0(&rdi_2[0x1c], *(rax_18 + 0x70))
                        sub_1405d16e0(&rdi_2[0x1e], *(rax_18 + 0x78))
                        r8_9 = var_a2d8.d
                        r9_4 = var_a2d8:4.d
                        *(rdi_2 + 0x80) = *(rax_18 + 0x80)
                        *(rdi_2 + 0x90) = *(rax_18 + 0x90)
                        *(rdi_2 + 0xa0) = *(rax_18 + 0xa0)
                        *(rdi_2 + 0xb0) = *(rax_18 + 0xb0)
                        *(rdi_2 + 0xc0) = *(rax_18 + 0xc0)
                        *(rdi_2 + 0xd0) = *(rax_18 + 0xd0)
                        *(rdi_2 + 0xd8) = *(rax_18 + 0xd8)
                        rdi_2[0xc] = var_a2b0.d
                        rdi_2[0xb] = r13_1
                    
                    int32_t rax_80 = r8_9 - rdi_2[0xb]
                    int32_t rcx_70 = r9_4 - rdi_2[0xc]
                    void* var_a250_2 = arg1
                    
                    if (r14_1 s<= rax_80)
                        rax_80 = r14_1
                    
                    if (r14_1 s<= rcx_70)
                        rcx_70 = r14_1
                    
                    int64_t var_a230
                    var_a230.d = rax_80
                    var_a230:4.d = rcx_70
                    void*** rax_81
                    char rcx_71
                    rax_81, rcx_71 = sub_14081d830(0x68, arg2[1], 1, 0)
                    void*** rbx_7 = rax_81
                    
                    if (rax_81 == 0)
                        rbx_7 = nullptr
                    else
                        var_a2c8 = rdi_2
                        sub_14139e1b0(rcx_71)
                        var_a2c0.q = &data_143ec7a20
                        int128_t var_a198 = var_a2c8.o
                        void var_a2cf
                        sub_141992bd0(rbx_7, &var_a2cf, &var_a198, 2)
                        *rbx_7 = &data_142f6e220
                        *(rbx_7 + 0x38) = rdi_2.o
                        *(rbx_7 + 0x48) = rbx_5.o
                        *(rbx_7 + 0x58) = zmm7_1
                    
                    sub_1419968d0(arg2, rbx_7)
                    rcx_54 = var_a2a0.d
                    r15_1 += 1
                    rax_65 = var_a2b8.d
                    r13_1 += r14_1
                    rbx_5 = arg4
                    r8_9 = var_a2d8.d
                    r9_4 = var_a2d8:4.d
                while (r15_1 s< rcx_54)
                
                rdx_33 = var_a2b0.d
                r10_1 = var_a2a8.d
            
            rax_65 += 1
            rdx_33 += r14_1
            var_a2b8.d = rax_65
            var_a2b0.d = rdx_33
        while (rax_65 s< r10_1)
else
    void* var_a250_1 = arg1
    int64_t var_a230_1 = var_a2d8
    void*** rax_56
    char rcx_50
    rax_56, rcx_50 = sub_14081d830(0x68, arg2[1], 1, 0)
    
    if (rax_56 == 0)
        sub_1419968d0(arg2, nullptr)
    else
        sub_14139e1b0(rcx_50)
        void* var_a220_1 = &data_143ec7a20
        int128_t var_a1a8 = rax_18.o
        void var_a2d0
        sub_141992bd0(rax_56, &var_a2d0, &var_a1a8, 2)
        *rax_56 = &data_142f6e210
        *(rax_56 + 0x38) = rax_18.o
        *(rax_56 + 0x48) = rbx_5.o
        *(rax_56 + 0x58) = zmm7_1
        sub_1419968d0(arg2, rax_56)

int64_t* rcx_74 = var_a298

if (rcx_74 != 0)
    (*(*rcx_74 + 0x38))(rcx_74)

int64_t result = sub_1411c8fd0(&var_a188)
__security_check_cookie(rax_1 ^ &var_a308)
return result
