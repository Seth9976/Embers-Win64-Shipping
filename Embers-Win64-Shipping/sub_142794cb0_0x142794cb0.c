// 函数: sub_142794cb0
// 地址: 0x142794cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = arg1[0x46]
int64_t* r15 = data_143f881c0
int16_t* var_48
int64_t var_38
int64_t* rax_1
int32_t rbx

if (rax != 0)
    int64_t arg_10 = *(rax + 0x18)
    sub_140b63b70(&arg_10, &var_48)
    rax_1 = &var_48
    rbx = 2
else
    arg_8.q = 0
    rax_1 = sub_140b63b70(&arg_8, &var_38)
    rbx = 1

int16_t* r14 = *rax_1
*rax_1 = 0
int32_t r12 = rax_1[1].d
rax_1[1] = 0

if ((rbx.b & 2) != 0)
    int16_t* rcx_2 = var_48
    rbx &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rbx.b & 1) != 0)
    int64_t rcx_3 = var_38
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int16_t* const rsi = &data_142d40450
int16_t* const rdx_2 = &data_142d40450

if (r12 != 0)
    rdx_2 = r14

(*(*r15 + 0x80))(r15, rdx_2, 0x9000000)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t* rbx_1 = data_143f881d8
sub_140a2e390(&var_48, u"%d", zx.q(arg1[0x45].d))
int16_t* const rdx_3 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    rdx_3 = var_48

(*(*rbx_1 + 0x80))(rbx_1, rdx_3, 0x9000000)
int16_t* rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rbx_2 = data_143f881f0
sub_140a2e390(&var_48, u"%d", zx.q(arg1[0x48].b))
int16_t* const rdx_4 = &data_142d40450

if (var_40 != 0)
    rdx_4 = var_48

(*(*rbx_2 + 0x80))(rbx_2, rdx_4, 0x9000000)
int16_t* rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rbx_3 = data_143f88208
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x241)))
int16_t* const rdx_5 = &data_142d40450

if (var_40 != 0)
    rdx_5 = var_48

(*(*rbx_3 + 0x80))(rbx_3, rdx_5, 0x9000000)
int16_t* rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t* rbx_4 = data_143f88220
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x242)))
int16_t* const rdx_6 = &data_142d40450

if (var_40 != 0)
    rdx_6 = var_48

(*(*rbx_4 + 0x80))(rbx_4, rdx_6, 0x9000000)
int16_t* rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t* rbx_5 = data_143f88238
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x243)))
int16_t* const rdx_7 = &data_142d40450

if (var_40 != 0)
    rdx_7 = var_48

(*(*rbx_5 + 0x80))(rbx_5, rdx_7, 0x9000000)
int16_t* rcx_20 = var_48

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t* rbx_6 = data_143f88250
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x244)))
int16_t* const rdx_8 = &data_142d40450

if (var_40 != 0)
    rdx_8 = var_48

(*(*rbx_6 + 0x80))(rbx_6, rdx_8, 0x9000000)
int16_t* rcx_23 = var_48

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t* rbx_7 = data_143f88268
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x245)))
int16_t* const rdx_9 = &data_142d40450

if (var_40 != 0)
    rdx_9 = var_48

(*(*rbx_7 + 0x80))(rbx_7, rdx_9, 0x9000000)
int16_t* rcx_26 = var_48

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t* rbx_8 = data_143f88280
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x246)))
int16_t* const rdx_10 = &data_142d40450

if (var_40 != 0)
    rdx_10 = var_48

(*(*rbx_8 + 0x80))(rbx_8, rdx_10, 0x9000000)
int16_t* rcx_29 = var_48

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t* rbx_9 = data_143f88298
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x247)))
int16_t* const rdx_11 = &data_142d40450

if (var_40 != 0)
    rdx_11 = var_48

(*(*rbx_9 + 0x80))(rbx_9, rdx_11, 0x9000000)
int16_t* rcx_32 = var_48

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t* rbx_10 = data_143f882b0
sub_140a2e390(&var_48, u"%d", zx.q(arg1[0x49].b))
int16_t* const rdx_12 = &data_142d40450

if (var_40 != 0)
    rdx_12 = var_48

(*(*rbx_10 + 0x80))(rbx_10, rdx_12, 0x9000000)
int16_t* rcx_35 = var_48

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int64_t* rbx_11 = data_143f882c8
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x249)))
int16_t* const rdx_13 = &data_142d40450

if (var_40 != 0)
    rdx_13 = var_48

(*(*rbx_11 + 0x80))(rbx_11, rdx_13, 0x9000000)
int16_t* rcx_38 = var_48

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

int64_t* rbx_12 = data_143f882e0
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24a)))
int16_t* const rdx_14 = &data_142d40450

if (var_40 != 0)
    rdx_14 = var_48

(*(*rbx_12 + 0x80))(rbx_12, rdx_14, 0x9000000)
int16_t* rcx_41 = var_48

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int64_t* rbx_13 = data_143f882f8
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24b)))
int16_t* const rdx_15 = &data_142d40450

if (var_40 != 0)
    rdx_15 = var_48

(*(*rbx_13 + 0x80))(rbx_13, rdx_15, 0x9000000)
int16_t* rcx_44 = var_48

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

int64_t* rbx_14 = data_143f88310
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24c)))
int16_t* const rdx_16 = &data_142d40450

if (var_40 != 0)
    rdx_16 = var_48

(*(*rbx_14 + 0x80))(rbx_14, rdx_16, 0x9000000)
int16_t* rcx_47 = var_48

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

int64_t* rbx_15 = data_143f88328
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24d)))
int16_t* const rdx_17 = &data_142d40450

if (var_40 != 0)
    rdx_17 = var_48

(*(*rbx_15 + 0x80))(rbx_15, rdx_17, 0x9000000)
int16_t* rcx_50 = var_48

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int64_t* rbx_16 = data_143f88340
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24e)))
int16_t* const rdx_18 = &data_142d40450

if (var_40 != 0)
    rdx_18 = var_48

(*(*rbx_16 + 0x80))(rbx_16, rdx_18, 0x9000000)
int16_t* rcx_53 = var_48

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t* rbx_17 = data_143f88358
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x24f)))
int16_t* const rdx_19 = &data_142d40450

if (var_40 != 0)
    rdx_19 = var_48

(*(*rbx_17 + 0x80))(rbx_17, rdx_19, 0x9000000)
int16_t* rcx_56 = var_48

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int64_t* rbx_18 = data_143f88370
sub_140a2e390(&var_48, u"%d", zx.q(arg1[0x4a].b))
int16_t* const rdx_20 = &data_142d40450

if (var_40 != 0)
    rdx_20 = var_48

(*(*rbx_18 + 0x80))(rbx_18, rdx_20, 0x9000000)
int16_t* rcx_59 = var_48

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

int64_t* rbx_19 = data_143f88388
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x251)))
int16_t* const rdx_21 = &data_142d40450

if (var_40 != 0)
    rdx_21 = var_48

(*(*rbx_19 + 0x80))(rbx_19, rdx_21, 0x9000000)
int16_t* rcx_62 = var_48

if (rcx_62 != 0)
    sub_140a74f90(rcx_62)

int64_t* rbx_20 = data_143f883a0
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x252)))
int16_t* const rdx_22 = &data_142d40450

if (var_40 != 0)
    rdx_22 = var_48

(*(*rbx_20 + 0x80))(rbx_20, rdx_22, 0x9000000)
int16_t* rcx_65 = var_48

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

int64_t* rbx_21 = data_143f883b8
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x253)))
int16_t* const rdx_23 = &data_142d40450

if (var_40 != 0)
    rdx_23 = var_48

(*(*rbx_21 + 0x80))(rbx_21, rdx_23, 0x9000000)
int16_t* rcx_68 = var_48

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

int64_t* rbx_22 = data_143f883d0
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x254)))
int16_t* rdx_24 = &data_142d40450

if (var_40 != 0)
    rdx_24 = var_48

(*(*rbx_22 + 0x80))(rbx_22, rdx_24, 0x9000000)
int16_t* rcx_71 = var_48

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

int64_t* rbx_23 = data_143f883e8
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x255)))
int16_t* rdx_25 = &data_142d40450

if (var_40 != 0)
    rdx_25 = var_48

(*(*rbx_23 + 0x80))(rbx_23, rdx_25, 0x9000000)
int16_t* rcx_74 = var_48

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

int64_t* rbx_24 = data_143f88400
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x256)))
int16_t* rdx_26 = &data_142d40450

if (var_40 != 0)
    rdx_26 = var_48

(*(*rbx_24 + 0x80))(rbx_24, rdx_26, 0x9000000)
int16_t* rcx_77 = var_48

if (rcx_77 != 0)
    sub_140a74f90(rcx_77)

int64_t* rbx_25 = data_143f88448
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x25c)))
int16_t* rdx_27 = &data_142d40450

if (var_40 != 0)
    rdx_27 = var_48

(*(*rbx_25 + 0x80))(rbx_25, rdx_27, 0x9000000)
int16_t* rcx_80 = var_48

if (rcx_80 != 0)
    sub_140a74f90(rcx_80)

int64_t* rbx_26 = data_143f88460
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x25d)))
int16_t* rdx_28 = &data_142d40450

if (var_40 != 0)
    rdx_28 = var_48

(*(*rbx_26 + 0x80))(rbx_26, rdx_28, 0x9000000)
int16_t* rcx_83 = var_48

if (rcx_83 != 0)
    sub_140a74f90(rcx_83)

int64_t* rbx_27 = data_143f88478
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x25e)))
int16_t* rdx_29 = &data_142d40450

if (var_40 != 0)
    rdx_29 = var_48

(*(*rbx_27 + 0x80))(rbx_27, rdx_29, 0x9000000)
int16_t* rcx_86 = var_48

if (rcx_86 != 0)
    sub_140a74f90(rcx_86)

int64_t* rbx_28 = data_143f88490
sub_140a2e390(&var_48, u"%d", zx.q(*(arg1 + 0x25f)))
int16_t* rdx_30 = &data_142d40450

if (var_40 != 0)
    rdx_30 = var_48

(*(*rbx_28 + 0x80))(rbx_28, rdx_30, 0x9000000)
int16_t* rcx_89 = var_48

if (rcx_89 != 0)
    sub_140a74f90(rcx_89)

int64_t* rbx_29 = data_143f884a8
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(arg1[0x4c].d))
int16_t* rdx_31 = &data_142d40450

if (var_40 != 0)
    rdx_31 = var_48

(*(*rbx_29 + 0x80))(rbx_29, rdx_31, 0x9000000)
int16_t* rcx_92 = var_48

if (rcx_92 != 0)
    sub_140a74f90(rcx_92)

int64_t* rbx_30 = data_143f884c0
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(*(arg1 + 0x264)))
int16_t* rdx_32 = &data_142d40450

if (var_40 != 0)
    rdx_32 = var_48

(*(*rbx_30 + 0x80))(rbx_30, rdx_32, 0x9000000)
int16_t* rcx_95 = var_48

if (rcx_95 != 0)
    sub_140a74f90(rcx_95)

int64_t* rbx_31 = data_143f884d8
sub_140a2e390(&var_48, u"%d", zx.q(arg1[0x4d].b))
int16_t* rdx_33 = &data_142d40450

if (var_40 != 0)
    rdx_33 = var_48

(*(*rbx_31 + 0x80))(rbx_31, rdx_33, 0x9000000)
int16_t* rcx_98 = var_48

if (rcx_98 != 0)
    sub_140a74f90(rcx_98)

int64_t* rbx_32 = data_143f884f0
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(*(arg1 + 0x26c)))
int16_t* rdx_34 = &data_142d40450

if (var_40 != 0)
    rdx_34 = var_48

(*(*rbx_32 + 0x80))(rbx_32, rdx_34, 0x9000000)
int16_t* rcx_101 = var_48

if (rcx_101 != 0)
    sub_140a74f90(rcx_101)

int64_t* rbx_33 = data_143f88508
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(arg1[0x4e].d))
int16_t* rdx_35 = &data_142d40450

if (var_40 != 0)
    rdx_35 = var_48

(*(*rbx_33 + 0x80))(rbx_33, rdx_35, 0x9000000)
int16_t* rcx_104 = var_48

if (rcx_104 != 0)
    sub_140a74f90(rcx_104)

int64_t* rbx_34 = data_143f88520
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(*(arg1 + 0x274)))
int16_t* rdx_36 = &data_142d40450

if (var_40 != 0)
    rdx_36 = var_48

(*(*rbx_34 + 0x80))(rbx_34, rdx_36, 0x9000000)
int16_t* rcx_107 = var_48

if (rcx_107 != 0)
    sub_140a74f90(rcx_107)

int64_t* rbx_35 = data_143f88538
sub_140a2e390(&var_48, u"%g", _mm_cvtps_pd(arg1[0x4f].d))

if (var_40 != 0)
    rsi = var_48

(*(*rbx_35 + 0x80))(rbx_35, rsi, 0x9000000)
int16_t* rcx_110 = var_48

if (rcx_110 != 0)
    sub_140a74f90(rcx_110)

return sub_141dd15d0(arg1) __tailcall
