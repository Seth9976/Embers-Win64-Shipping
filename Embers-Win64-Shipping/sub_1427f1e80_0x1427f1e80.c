// 函数: sub_1427f1e80
// 地址: 0x1427f1e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 - 2 u<= 1)
    return physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtRigidBodyExt.cpp", 
        0x191, 
        "PxRigidBodyExt::addForce methods do not support eACCELERATION or eVELOCITY_CHANGE modes")

int32_t var_98
(*(*arg1 + 0xa0))(arg1, &var_98)
void var_b8
void* rax_3 = (*(*arg1 + 0xf0))(arg1, &var_b8)
int32_t var_8c
int128_t zmm7 = var_8c
int32_t var_94
int128_t zmm4_1 = var_94
int128_t zmm12 = var_98
int128_t zmm11 = *(rax_3 + 0x10)
int128_t zmm8 = *(rax_3 + 0x14)
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm10 = *(rax_3 + 0x18)
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm9
zmm9.d = zmm7.d f* zmm7.d
zmm10.d = zmm10.d f+ zmm10.d
zmm9.d = zmm9.d f- 0.5f
int128_t zmm6
zmm6.d = zmm4_1.d f* zmm8.d
zmm6.d = zmm6.d f+ zmm12.d f* zmm11.d
float var_90
zmm6.d = zmm6.d f+ var_90 f* zmm10.d
float zmm1 = zmm12.d f* zmm6.d
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm8.d
float zmm3 = (zmm4_1.d f* zmm10.d - var_90 f* zmm8.d) f* zmm7.d + zmm9.d f* zmm11.d + zmm1
zmm1 = zmm4_1.d f* zmm6.d
float zmm2 = var_90 f* zmm11.d - zmm0 f* zmm10.d
zmm4_1.d = zmm4_1.d f* zmm11.d
zmm0 = zmm9.d f* zmm8.d
zmm12.d = zmm12.d f- zmm4_1.d
zmm4_1 = arg2[2]
zmm9.d = zmm9.d f* zmm10.d
zmm2 = zmm2 f* zmm7.d + zmm0
zmm12.d = zmm12.d f* zmm7.d
zmm12.d = zmm12.d f+ zmm9.d
float var_88
zmm7.d = (*arg3).d f- (var_88 + zmm3)
zmm12.d = zmm12.d f+ var_90 f* zmm6.d
float zmm5_1 = arg2[1]
float var_84
zmm6.d = (*(arg3 + 4)).d f- (var_84 + zmm2 + zmm1)
float var_80
zmm3 = *(arg3 + 8) - (var_80 f+ zmm12.d)
zmm2 = *arg2
int64_t rax_4 = *arg1
zmm1 = zmm4_1.d f* zmm6.d
zmm4_1.d = zmm4_1.d f* zmm7.d
float var_c8 = zmm1 - zmm5_1 * zmm3
float var_c0_1 = zmm5_1 f* zmm7.d - zmm2 f* zmm6.d
float var_c4_1 = zmm2 * zmm3 f- zmm4_1.d
(*(rax_4 + 0x148))(arg1, arg2, zx.q(arg4), zx.q(arg5))
return (*(*arg1 + 0x150))(arg1, &var_c8, zx.q(arg4), zx.q(arg5))
