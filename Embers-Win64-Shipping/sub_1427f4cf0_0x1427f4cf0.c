// 函数: sub_1427f4cf0
// 地址: 0x1427f4cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d3f660
int32_t arg_10 = 0x3f800000
int32_t var_88 = 0x3f800000
int64_t rbx
rbx.b = arg5 != 0
int32_t var_84 = 0x3f800000
int32_t var_80 = 0x3f800000
int128_t var_68 = zmm0
int64_t var_78
int32_t var_70

if (arg5 == 0)
    var_78 = 0
    var_70 = 0
else
    var_78.d = (*arg5).d
    var_70 = (*(arg5 + 8)).d
    var_78:4.d = *(arg5 + 4)

int32_t var_98 = var_78.d.d
int32_t var_90 = var_70.d
int32_t var_94 = var_78:4.d
int128_t var_58

if (arg3 == 0 || arg4 == 0)
    char const* const var_b0_2 = "PxRigidBodyExt::updateMassAndInertia"
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtRigidBodyExt.cpp", 
        0x124, "%s: No density specified, setting mass to 1 and inertia to (1,1,1)")
    rbx.b = 0
else
    __builtin_memset(&var_58, 0, 0x34)
    char rax_2
    int32_t zmm6_1
    rax_2, zmm6_1 = sub_1427f2700(arg1, arg2, arg3, nullptr, arg4, arg6, &var_58)
    int32_t var_28
    
    if (rax_2 == 0)
        char const* const var_b0_1 = "PxRigidBodyExt::updateMassAndInertia"
        physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\ExtRigidBodyExt.cpp", 
            0x11c, 
            "%s: Mass and inertia computation failed, setting mass to 1 and inertia to (1,1,1)")
        rbx.b = 0
    else if (var_28.d f== zmm6_1)
        rbx.b = 0
    else if (sub_1427f2270(&var_58, &var_88, &var_68, &arg_10, &var_98, rbx.b, arg2, 
            "PxRigidBodyExt::updateMassAndInertia") == 0)
        rbx.b = 0
    else
        rbx.b = 1

(*(*arg2 + 0xf8))(arg2, arg_10)
(*(*arg2 + 0x110))(arg2, &var_88)
int64_t r8_1 = *arg2
var_58 = var_68
int128_t var_48
var_48.d = var_98.d
var_48:8.d = var_90.d
var_48:4.d = var_94
(*(r8_1 + 0xe8))(arg2, &var_58, r8_1)
return zx.q(rbx.b)
