// 函数: sub_1427d8280
// 地址: 0x1427d8280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 0x10)
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xb]

if (rax != 0)
    *rax += 1

void var_70
memset(&var_70, 0, 0x60)
physx::PxClothMotionConstraintConfigGeneratedInfo::PxClothMotionConstraintConfigGeneratedInfo(
    &var_70)

if (sub_1427e4f10(arg1) != 0)
    int64_t var_a8
    int64_t* rax_2 = zmm1.q(&var_a8, arg1[6])
    int64_t var_b8 = *rax_2
    int32_t rax_3 = rax_2[1].d
    sub_1427dd110(arg1, &var_b8, &var_70)
    int64_t rcx_5 = arg1[6]
    var_a8 = var_b8
    int32_t var_a0_1 = rax_3
    zmm1:8.q(rcx_5, &var_a8)

return sub_1427e5c70(arg1) __tailcall
