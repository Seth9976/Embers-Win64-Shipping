// 函数: sub_142803c10
// 地址: 0x142803c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg3
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x68)
int16_t rbx = 0
int32_t var_110
__builtin_memset(&var_110, 0, 0x14)
char* _String_1

if ((*(rax + 0x10))(arg3, "Fabric", &_String_1) == 0)
label_14280411e:
    *(arg2 + 8) = 0
    *arg2 = &data_1434cce10
    arg2[1].q = 0
else
    char* _String = _String_1
    char* _EndPtr = _String
    
    if (_String == 0 || *_String == 0)
        goto label_14280411e
    
    if (_strtoui64(_String, &_EndPtr, 0xa) == 0)
        goto label_14280411e
    
    int64_t rax_3 = sub_1427d9880(arg6)
    
    if (rax_3 == 0)
        goto label_14280411e
    
    sub_142805cc0(arg3, "Particles", &var_b8, &_String_1, &_EndPtr, arg4)
    int32_t var_fc
    int64_t var_90
    sub_142805530(arg3, "CollisionSpheres", &var_90, &_String_1, &var_fc, arg4)
    int32_t var_f8
    int32_t* var_88
    sub_142804d40(arg3, "CollisionSpherePairs", &var_88, &_String_1, &var_f8, arg4)
    int32_t var_f4
    int64_t var_80
    sub_142805310(arg3, "CollisionPlanes", &var_80, &_String_1, &var_f4, arg4)
    int32_t i_4
    int32_t* var_78
    sub_142804d40(arg3, "CollisionConvexMasks", &var_78, &_String_1, &i_4, arg4)
    int32_t var_ec
    int64_t var_70
    sub_142805750(arg3, "CollisionTriangles", &var_70, &_String_1, &var_ec, arg4)
    
    if ((*(*arg3 + 0x10))(arg3, "ClothFlags", &_EndPtr) != 0)
        _String_1.d = 0
        sub_1427e6fe0(_EndPtr, arg4, &_String_1, &data_143b7ca00)
        rbx = _String_1.w
    
    int32_t var_104
    int64_t var_98
    sub_1428066f0(arg3, "ParticleAccelerations", &var_98, &_String_1, &var_104, arg4)
    int64_t var_b0
    sub_142804d40(arg3, "SelfCollisionIndices", &var_b0, &_String_1, &var_110, arg4)
    int32_t var_10c
    int64_t var_a8
    sub_142805ee0(arg3, "MotionConstraints", &var_a8, &_String_1, &var_10c, arg4)
    int32_t var_108
    int64_t var_a0
    sub_142806100(arg3, "SeparationConstraints", &var_a0, &_String_1, &var_108, arg4)
    int32_t var_e8
    int64_t var_68
    sub_1428066f0(arg3, "RestPositions", &var_68, &_String_1, &var_e8, arg4)
    int64_t var_60
    sub_1428064d0(arg3, "VirtualParticleWeights", &var_60, &_String_1, &_EndPtr, arg4)
    int32_t var_100
    int64_t var_58
    sub_142804d40(arg3, "VirtualParticles", &var_58, &_String_1, &var_100, arg4)
    int64_t r9_13 = var_b8
    _String_1.w = rbx
    int128_t var_50 = data_142d3f660
    int64_t var_40_1 = 0
    int32_t var_38_1 = 0
    int64_t* rcx_17 = *arg5
    int64_t* rax_7 = (*(*rcx_17 + 0xc8))(rcx_17, &var_50, rax_3, r9_13, &_String_1)
    int64_t zmm1_1 = arg5[2]
    int128_t var_d8 = *arg5
    int64_t var_c8_1 = zmm1_1
    char rax_8 = sub_1427db700(&var_d8, arg3, rax_7, arg4, arg6)
    int32_t r8_18 = var_110
    
    if (r8_18 != 0)
        int64_t r9_15 = *rax_7
        (*(r9_15 + 0x350))(rax_7, var_b0, r8_18, r9_15)
    
    if (var_10c != 0)
        (*(*rax_7 + 0x1e8))(rax_7, var_a8)
    
    if (var_108 != 0)
        (*(*rax_7 + 0x210))(rax_7, var_a0)
    
    if (var_104 != 0)
        (*(*rax_7 + 0x1a0))(rax_7, var_98)
    
    (*(*rax_7 + 0x260))(rax_7, var_90, zx.q(var_fc))
    int32_t rax_13 = var_f8
    
    if (rax_13 != 0)
        int32_t* rbx_2 = var_88
        uint64_t i_3 = zx.q(((rax_13 - 1) u>> 1) + 1)
        uint64_t i
        
        do
            uint64_t rdx_10 = zx.q(*rbx_2)
            uint64_t r8_20 = zx.q(rbx_2[1])
            rbx_2 = &rbx_2[2]
            (*(*rax_7 + 0x270))(rax_7, rdx_10, r8_20)
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    (*(*rax_7 + 0x298))(rax_7, var_80, zx.q(var_f4))
    int32_t i_2 = i_4
    
    if (i_2 != 0)
        int32_t* rsi_3 = var_78
        int32_t i_1
        
        do
            uint64_t rdx_12 = zx.q(*rsi_3)
            rsi_3 = &rsi_3[1]
            (*(*rax_7 + 0x2a8))(rax_7, rdx_12)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    (*(*rax_7 + 0x2d0))(rax_7, var_70, zx.q(var_ec))
    
    if (var_e8 != 0)
        (*(*rax_7 + 0x368))(rax_7, var_68)
    
    uint32_t rdx_16 = var_100 u>> 2
    
    if (rdx_16 != 0)
        int32_t r9_16 = _EndPtr.d
        
        if (r9_16 != 0)
            (*(*rax_7 + 0x2e8))(rax_7, rdx_16, var_58, r9_16, var_60)
    
    int64_t* var_c8_2
    char const* const rax_20
    
    if (rax_8 == 0)
        rax_20 = &data_1434cce10
        var_d8:8.q = 0
        var_c8_2 = nullptr
    else
        rax_20 = "PxCloth"
        var_d8:8.q = rax_7
        var_c8_2 = rax_7
    
    var_d8.q = rax_20
    *arg2 = var_d8
    arg2[1].q = var_c8_2

return arg2
