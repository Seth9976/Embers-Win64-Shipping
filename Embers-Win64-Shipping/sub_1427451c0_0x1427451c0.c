// 函数: sub_1427451c0
// 地址: 0x1427451c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8c8
int64_t rax_1 = __security_cookie ^ &var_8c8
int32_t i = 0
int64_t* rcx = *(arg1 + 0x418)
int64_t* result

if (rcx == 0)
    result = nullptr
else
    result = (*(*rcx + 0x48))(rcx)
    
    if (result != 0)
        if (arg2 != 0)
            int128_t zmm2
            zmm2.d = (*(arg2 + 0x40)).d f* *(arg1 + 0x380)
            arg3 = sub_142748a70(result, "defaultBehaviorGroup.damageThreshold", zmm2, arg3)
        
        int128_t zmm1 =
            sub_142748a70(result, "defaultBehaviorGroup.damageToRadius", *(arg1 + 0x384), arg3)
        int128_t zmm1_1 =
            sub_142748a70(result, "destructibleParameters.forceToDamage", *(arg1 + 0x38c), zmm1)
        int128_t zmm2_2
        
        if (*(arg1 + 0x394) == 0)
            zmm2_2 = zx.o(0)
        else
            zmm2_2 = *(arg1 + 0x398)
        
        int128_t zmm1_2 =
            sub_142748a70(result, "defaultBehaviorGroup.materialStrength", zmm2_2, zmm1_1)
        uint128_t zmm0_1
        
        if (*(arg1 + 0x388) == 0)
            zmm0_1 = 0xbf800000
        else
            zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x390)))
        
        int128_t zmm1_3 = sub_142748b30(result, "destructibleParameters.impactDamageDefaultDepth", 
            int.d(zmm0_1.d), zmm1_2)
        int128_t zmm1_4 = sub_142748bf0(result, "supportDepth", *(arg1 + 0x3d8), zmm1_3)
        int128_t zmm1_5 = sub_142748bf0(result, "destructibleParameters.minimumFractureDepth", 
            *(arg1 + 0x3dc), zmm1_4)
        int32_t r8_4 = -1
        
        if (*(arg1 + 0x3e0) != 0)
            r8_4 = *(arg1 + 0x3e4)
        
        int128_t zmm1_6 = sub_142748b30(result, "destructibleParameters.debrisDepth", r8_4, zmm1_5)
        int128_t zmm1_7 =
            sub_142748bf0(result, "destructibleParameters.essentialDepth", *(arg1 + 0x3e8), zmm1_6)
        int128_t zmm1_8 =
            sub_142748a70(result, "destructibleParameters.damageCap", *(arg1 + 0x3c8), zmm1_7)
        int128_t zmm1_9 = sub_142748a70(result, "destructibleParameters.impactVelocityThreshold", 
            *(arg1 + 0x3cc), zmm1_8)
        int128_t zmm1_10 =
            sub_142748a70(result, "destructibleParameters.maxChunkSpeed", *(arg1 + 0x3d0), zmm1_9)
        int128_t zmm1_11 = sub_142748a70(result, "destructibleParameters.fractureImpulseScale", 
            *(arg1 + 0x3d4), zmm1_10)
        int128_t zmm1_12 = sub_142748a70(result, "destructibleParameters.debrisLifetimeMin", 
            *(arg1 + 0x39c), zmm1_11)
        int128_t zmm1_13 = sub_142748a70(result, "destructibleParameters.debrisLifetimeMax", 
            *(arg1 + 0x3a0), zmm1_12)
        int128_t zmm1_14 = sub_142748a70(result, "destructibleParameters.debrisMaxSeparationMin", 
            *(arg1 + 0x3a4), zmm1_13)
        sub_142748a70(result, "destructibleParameters.debrisMaxSeparationMax", *(arg1 + 0x3a8), 
            zmm1_14)
        int32_t var_884_1 = 0
        int128_t zmm1_15 = *(arg1 + 0x3c0)
        int128_t var_8a8 = *(arg1 + 0x3ac)
        int64_t var_840_1 = 0
        int32_t var_898_1 = (*(arg1 + 0x3bc)).d
        int32_t var_894_1 = zmm1_15.d
        int64_t var_838_1 = 0
        int16_t var_888 = 0
        int64_t* result_1 = result
        int64_t var_840_2 = (*(*result + 0x78))(result)
        int64_t* rax_5
        int128_t zmm1_16
        rax_5, zmm1_16 =
            sub_1417cc6c0(result, "destructibleParameters.validBounds", &var_888, zmm1_15)
        var_888:1.b = 0
        int64_t* var_830_1 = rax_5
        
        if (rax_5 != 0)
            (*(*rax_5 + 0x370))(rax_5, &var_888, &var_8a8)
        
        int128_t zmm1_17 = sub_1427489b0(result, "destructibleParameters.flags.ACCUMULATE_DAMAGE", 
            *(arg1 + 0x400) & 1, zmm1_16)
        int128_t zmm1_18 =
            sub_1427489b0(result, "useAssetDefinedSupport", (*(arg1 + 0x400) u>> 1).b & 1, zmm1_17)
        int128_t zmm1_19 =
            sub_1427489b0(result, "useWorldSupport", (*(arg1 + 0x400) u>> 2).b & 1, zmm1_18)
        int128_t zmm1_20 = sub_1427489b0(result, "destructibleParameters.flags.DEBRIS_TIMEOUT", 
            (*(arg1 + 0x400) u>> 3).b & 1, zmm1_19)
        int128_t zmm1_21 = sub_1427489b0(result, 
            "destructibleParameters.flags.DEBRIS_MAX_SEPARATION", (*(arg1 + 0x400) u>> 4).b & 1, 
            zmm1_20)
        int128_t zmm1_22 = sub_1427489b0(result, 
            "destructibleParameters.flags.CRUMBLE_SMALLEST_CHUNKS", (*(arg1 + 0x400) u>> 5).b & 1, 
            zmm1_21)
        int128_t zmm1_23 = sub_1427489b0(result, "destructibleParameters.flags.ACCURATE_RAYCASTS", 
            (*(arg1 + 0x400) u>> 6).b & 1, zmm1_22)
        int128_t zmm1_24 = sub_1427489b0(result, "destructibleParameters.flags.USE_VALID_BOUNDS", 
            (*(arg1 + 0x400) u>> 7).b & 1, zmm1_23)
        int128_t zmm1_25 =
            sub_1427489b0(result, "formExtendedStructures", (*(arg1 + 0x400) u>> 8).b & 1, zmm1_24)
        
        if (*(arg1 + 0x3f8) s> 0)
            int64_t r14_1 = 0
            
            do
                void var_828
                sscanf_s(&var_828, "depthParameters[%d].OVERRIDE_IMPACT_DAMAGE", zx.q(i))
                char var_428[0x400]
                sscanf_s(&var_428, "depthParameters[%d].OVERRIDE_IMPACT_DAMAGE_VALUE", zx.q(i))
                uint32_t rcx_32 = zx.d(*(*(arg1 + 0x3f0) + r14_1))
                
                if (rcx_32 == 0)
                    zmm1_25 = sub_1427489b0(result, &var_828, 0, zmm1_25)
                else if (rcx_32 == 1)
                    zmm1_25 = sub_1427489b0(result, &var_428, 1, 
                        sub_1427489b0(result, &var_828, 1, zmm1_25))
                else if (rcx_32 == 2)
                    zmm1_25 = sub_1427489b0(result, &var_428, 0, 
                        sub_1427489b0(result, &var_828, (rcx_32 - 1).b, zmm1_25))
                
                i += 1
                r14_1 += 1
            while (i s< *(arg1 + 0x3f8))

__security_check_cookie(rax_1 ^ &var_8c8)
return result
