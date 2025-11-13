// 函数: sub_1427f4340
// 地址: 0x1427f4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d3f660
int128_t zmm6 = 0x3f800000
int32_t arg_10 = 0x3f800000
int32_t var_d8 = 0x3f800000
int64_t r15
r15.b = arg5 != 0
int32_t var_d4 = 0x3f800000
int32_t var_d0 = 0x3f800000
int128_t var_b8 = zmm0
int64_t var_c8
int32_t var_c0

if (arg5 == 0)
    var_c8 = 0
    var_c0 = 0
else
    var_c8.d = (*arg5).d
    var_c0 = (*(arg5 + 8)).d
    var_c8:4.d = (*(arg5 + 4)).d

int128_t zmm7 = var_c8.d
int128_t zmm8 = var_c8:4.d
int128_t zmm9 = var_c0
int32_t var_e8 = zmm7.d
int32_t var_e4 = zmm8.d
int32_t var_e0 = zmm9.d
int128_t var_a8
int64_t rbx

if (arg3 == 0 || arg4 == 0)
    char const* const var_100_2 = "PxRigidBodyExt::setMassAndUpdateInertia"
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtRigidBodyExt.cpp", 
        0x162, "%s: No mass specified, setting mass to 1 and inertia to (1,1,1)")
    rbx.b = 0
else
    __builtin_memset(&var_a8, 0, 0x34)
    char rax_2
    int32_t zmm10_1
    rax_2, zmm6, zmm7, zmm8, zmm9, zmm10_1 =
        sub_1427f2700(arg1, arg2, nullptr, arg3, arg4, arg6, &var_a8)
    
    if (rax_2 == 0)
        char const* const var_100_1 = "PxRigidBodyExt::setMassAndUpdateInertia"
        physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\ExtRigidBodyExt.cpp", 
            0x15a, 
            "%s: Mass and inertia computation failed, setting mass to 1 and inertia to (1,1,1)")
        rbx.b = 0
    else
        rbx.b = 1
        int32_t var_78
        
        if (not(var_78.d f== zmm10_1))
            char rax_3 = sub_1427f2270(&var_a8, &var_d8, &var_b8, &arg_10, &var_e8, r15.b, arg2, 
                "PxRigidBodyExt::setMassAndUpdateInertia")
            zmm6 = arg_10
            zmm9 = var_e0
            zmm8 = var_e4
            zmm7 = var_e8
            rbx = 1
            
            if (rax_3 == 0)
                rbx = 0
        
        if (arg4 == 1)
            zmm6 = *arg3

(*(*arg2 + 0xf8))(arg2, zmm6)
(*(*arg2 + 0x110))(arg2, &var_d8)
int64_t r8_1 = *arg2
int128_t var_98
var_98.d = zmm7.d
var_a8 = var_b8
var_98:4.d = zmm8.d
var_98:8.d = zmm9.d
(*(r8_1 + 0xe8))(arg2, &var_a8, r8_1)
return zx.q(rbx.b)
