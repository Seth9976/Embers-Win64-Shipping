// 函数: sub_142745b10
// 地址: 0x142745b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
sub_141ee9830(arg1)
arg1[0x11].b |= 4
void* rax_3 = (*(*arg1 + 0x690))(arg1)
sub_140d3a3a0(&arg1[0x74], arg1)
void* result
int128_t zmm1
result, zmm1 = sub_140d3a3a0(&arg1[0x75], rax_3)
char r12 = 0
arg1[0x55].d = 0

if (arg1[0x86] != 0)
    void* rsi_1 = arg1[0x15]
    
    if (rsi_1 == 0)
        rsi_1 = sub_141ee69e0(arg1)
    
    result = *(rsi_1 + 0x1f8)
    void* result_1 = result
    
    if (data_143f74110 != 0 && arg1[0xd0] == 0)
        result = sub_142745650(arg1)
        void* result_2 = result
        
        if (result != 0)
            int64_t* rcx_5 = *(result + 0x418)
            
            if (rcx_5 != 0)
                int64_t rdx_2 = *rcx_5
                int32_t rax_5 = (*(rdx_2 + 0xc0))(rcx_5, rdx_2)
                int32_t rbx_1 = 0
                
                if (rax_5 s> 0)
                    do
                        int64_t r9_1 = *arg1
                        rbx_1 += 1
                        (*(r9_1 + 0x948))(arg1, zx.q(rbx_1), 0, r9_1)
                        sub_141ee8690(arg1)
                        zmm1 = sub_141ee8470(arg1)
                    while (rbx_1 s< rax_5)
                
                result = sub_14243ade0(rsi_1)
                
                if (result.b != 0)
                    void* rax_6 = sub_142218330(&arg1[0x55])
                    int64_t* rax_7 = sub_1427451c0(result_2, rax_6, zmm1)
                    float zmm2_1[0x4] = *(arg1 + 0x1c0)
                    float zmm3[0x4] = *(arg1 + 0x1d0)
                    float var_ec_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0]
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    float var_e8_1 = temp0_2[0]
                    float zmm1_1[0x4] = *(arg1 + 0x1e0)
                    float var_dc_1 = temp0_3[0]
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float var_f0 = zmm2_1[0]
                    float var_e0_1 = zmm3[0]
                    float var_100 = zmm1_1[0]
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    float var_f8_1 = temp0_5[0]
                    float var_e4_1 = temp0_6[0]
                    float var_d8_1 = temp0_7[0]
                    float var_fc_1 = temp0_4[0]
                    int32_t var_a4_1 = 0
                    int64_t var_60_1 = 0
                    int64_t var_58_1 = 0
                    int16_t var_a8 = 0
                    int64_t* var_50_1 = rax_7
                    int64_t var_60_2 = (*(*rax_7 + 0x78))(rax_7)
                    int64_t* rax_10
                    int128_t zmm1_2
                    rax_10, zmm1_2 = sub_1417cc6c0(rax_7, "globalPose", &var_a8, temp0_5)
                    
                    if (rax_10 != 0)
                        var_a8:1.b = 0
                        int64_t* var_50_2 = rax_10
                        int64_t r9_2 = *rax_10
                        (*(r9_2 + 0x388))(rax_10, &var_a8, &var_f0, r9_2)
                    
                    int32_t var_a4_2 = 0
                    int64_t var_60_3 = 0
                    int64_t var_58_2 = 0
                    var_a8 = 0
                    int64_t* var_50_3 = rax_7
                    int64_t var_60_4 = (*(*rax_7 + 0x78))(rax_7)
                    int64_t* rax_13
                    int128_t zmm1_3
                    rax_13, zmm1_3 = sub_1417cc6c0(rax_7, "scale", &var_a8, zmm1_2)
                    var_a8:1.b = 0
                    int64_t* var_50_4 = rax_13
                    
                    if (rax_13 != 0)
                        int64_t r9_3 = *rax_13
                        (*(r9_3 + 0x2b0))(rax_13, &var_a8, &var_100, r9_3)
                    
                    sub_142748a70(rax_7, "sleepVelocityFrameDecayConstant", 0x41a00000, 
                        sub_1427489b0(rax_7, "dynamic", *(arg1 + 0x2b4) u>> 4 & 1, zmm1_3))
                    int32_t var_128_1 = (*(*arg1 + 0x4d8))(arg1)
                    int128_t var_c8
                    sub_142259c00(&var_c8)
                    int64_t rdx_7 = *arg1
                    int128_t zmm1_6
                    
                    if ((*(rdx_7 + 0x4c8))(arg1, rdx_7) == 0)
                        var_128_1.b = 0
                        sub_142277d10(&var_c8, 0)
                        sub_142221430(&arg1[0xd1], 0)
                        zmm1_6 = sub_142221430(&arg1[0xd7], 0)
                    else
                        int64_t rdx_8 = *arg1
                        int128_t* rax_17 = (*(rdx_8 + 0x4b0))(arg1, rdx_8)
                        var_c8 = *rax_17
                        int128_t var_b8_1 = rax_17[1]
                        sub_142221830(&arg1[0xd1], &var_c8)
                        sub_142221830(&arg1[0xd7], &var_c8)
                        zmm1_6 = sub_142221ee0(&arg1[0xd7], 2, 1)
                    
                    char rax_18 = sub_1427458c0(result_2, 0)
                    
                    if (*(result_2 + 0x394) != 0 && not((zx.o(0)).d f>= *(result_2 + 0x398)))
                        r12 = 1
                    
                    char rsi_3 = *(arg1 + 0x2b4)
                    void* rbx_2
                    
                    if ((rsi_3 & 4) != 0 || rax_18 != 0)
                        rbx_2.b = 1
                    else
                        rbx_2.b = 0
                    
                    int32_t rax_19 = *(arg1 + 0xc)
                    int32_t rax_20 = *(arg1[0x14] + 0xc)
                    int32_t var_110
                    sub_141eb5f10(&var_110, var_128_1.b, 0, &var_c8)
                    int32_t var_108
                    int32_t rsi_4 = var_108
                    
                    if ((rsi_3 & 1) != 0)
                        rsi_4 |= 4
                    
                    if (rbx_2.b != 0)
                        rsi_4 |= 8
                    
                    if (r12 != 0)
                        rsi_4 |= 0x20
                    
                    int32_t rsi_5 = rsi_4 | 0x43
                    int128_t zmm1_7 = sub_142748bf0(rax_7, 
                        "p3ShapeDescTemplate.simulationFilterData.word0", 0, zmm1_6)
                    int128_t zmm1_11 = sub_142748bf0(rax_7, 
                        "p3ShapeDescTemplate.queryFilterData.word0", rax_20, 
                        sub_142748bf0(rax_7, "p3ShapeDescTemplate.simulationFilterData.word3", 
                            rsi_5, 
                            sub_142748bf0(rax_7, "p3ShapeDescTemplate.simulationFilterData.word2", 
                                rax_19, 
                                sub_142748bf0(rax_7, 
                                    "p3ShapeDescTemplate.simulationFilterData.word1", var_110, 
                                    zmm1_7))))
                    int32_t var_10c
                    sub_142748bf0(rax_7, "p3ShapeDescTemplate.queryFilterData.word3", rsi_5, 
                        sub_142748bf0(rax_7, "p3ShapeDescTemplate.queryFilterData.word2", var_10c, 
                            sub_142748bf0(rax_7, "p3ShapeDescTemplate.queryFilterData.word1", 
                                var_110, zmm1_11)))
                    void* rax_21
                    int128_t zmm1_14
                    rax_21, zmm1_14 = sub_14224f4a0(rax_6)
                    int64_t r8_13 = *rax_21
                    
                    if (r8_13 != 0)
                        zmm1_14 =
                            sub_142748cb0(rax_7, "p3ShapeDescTemplate.material", r8_13, zmm1_14)
                    
                    int128_t zmm1_19 = sub_142748cb0(rax_7, "p3ShapeDescTemplate.userData", 
                        &arg1[0xdd], 
                        sub_142748cb0(rax_7, "p3ActorDescTemplate.userData", 0, 
                            sub_1427489b0(rax_7, "p3ActorDescTemplate.flags.eVISUALIZATION", 1, 
                                sub_1427489b0(rax_7, "p3ActorDescTemplate.flags.eDISABLE_GRAVITY", 
                                    0, 
                                    sub_142748a70(rax_7, "p3ShapeDescTemplate.restOffset", zx.o(0), 
                                        zmm1_14)))))
                    int128_t zmm1_20 = sub_142748a70(rax_7, "p3BodyDescTemplate.angularDamping", 
                        *(arg1 + 0x314), zmm1_19)
                    int128_t zmm1_21 = sub_142748a70(rax_7, "p3BodyDescTemplate.linearDamping", 
                        arg1[0x62].d, zmm1_20)
                    int64_t* rcx_50 = data_143ef8520
                    int128_t zmm6_2 = *((*(*rcx_50 + 0x20))(rcx_50) + 8)
                    int128_t zmm0_3
                    zmm0_3.d = zmm6_2.d f* 4.99999987e-05f
                    zmm0_3.d = zmm0_3.d f* zmm6_2.d
                    int128_t zmm2_5
                    zmm2_5.d = sub_142218460(&arg1[0x55]).d f* zmm0_3.d
                    int128_t zmm1_22 =
                        sub_142748a70(rax_7, "p3BodyDescTemplate.sleepThreshold", zmm2_5, zmm1_21)
                    int128_t zmm2_6 = 0x3f800000
                    
                    if (rax_6 != 0)
                        zmm2_6 = *(rax_6 + 0x38)
                    
                    zmm2_6.d = zmm2_6.d f* 0.00100000005f
                    int128_t zmm1_23 =
                        sub_142748a70(rax_7, "p3BodyDescTemplate.density", zmm2_6, zmm1_22)
                    int128_t zmm1_25 = sub_1427489b0(rax_7, "createChunkEvents", 1, 
                        sub_1427489b0(rax_7, "p3BodyDescTemplate.flags.eENABLE_CCD", 
                            *(arg1 + 0x2b4) & 1, zmm1_23))
                    sub_1427489b0(rax_7, "useHardSleeping", arg1[0xcb].b, zmm1_25)
                    int64_t rax_24 = *(result_1 + 0x60)
                    int64_t* rax_25 = sub_14226e750(result_1)
                    sub_1427468c0(&arg1[0xcc], rax_5)
                    sub_142743ed0(&arg1[0xcc], rax_5)
                    arg1[0xe0].d = 0
                    
                    if (rax_5 s> *(arg1 + 0x704))
                        sub_1405a5410(&arg1[0xdf], rax_5)
                    
                    sub_141cfab60(&arg1[0xdf], rax_5)
                    
                    if (rax_25 != 0)
                        (*(*rax_25 + 0x358))(rax_25, 
                            "D:"
                        "/Build/++UE4/Sync/Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Private/DestructibleComponent."
                        "cpp", 
                            0x186)
                    
                    sub_142249870(data_143f52708)
                    int64_t* rcx_64 = *(result_2 + 0x418)
                    arg1[0xd0] = (*(*rcx_64 + 0x60))(rcx_64, rax_7, rax_24)
                    
                    if (rax_25 != 0)
                        (*(*rax_25 + 0x360))(rax_25)
                    
                    void* rax_30 = arg1[0xd0]
                    var_110 = 5
                    var_108.q = arg1
                    *(arg1 + 0x6e8) = var_110.o
                    *(rax_30 + 8) = &arg1[0xdd]
                    int64_t* rcx_66 = arg1[0xd0]
                    (*(*rcx_66 + 0x48))(rcx_66)
                    int64_t* rcx_67 = arg1[0xd0]
                    int64_t* rax_33 = (*(*rcx_67 + 0xd0))(rcx_67, 0)
                    
                    if (rax_33 != 0)
                        uint8_t r8_20 = *(arg1 + 0x2b4)
                        
                        if ((r8_20 & 0x10) != 0)
                            if (rax_25 != 0)
                                int64_t r9_5 = *rax_25
                                (*(r9_5 + 0x358))(rax_25, 
                                    "D:"
                                "/Build/++UE4/Sync/Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Private/DestructibleComponent."
                                "cpp", 
                                    0x1a0, r9_5, var_128_1, rax_20, rax_24)
                                r8_20 = *(arg1 + 0x2b4)
                            
                            (*(*rax_33 + 0x50))(rax_33, 2, not.b(r8_20 u>> 6) & 1)
                            
                            if ((*(arg1 + 0x2b5) & 1) == 0)
                                int64_t* rcx_70 = arg1[0xd0]
                                (*(*rcx_70 + 0x160))(rcx_70, 0, 0)
                            
                            if (rax_25 != 0)
                                (*(*rax_25 + 0x360))(rax_25)
                    
                    result = (*(*arg1 + 0x498))(arg1)

__security_check_cookie(rax_1 ^ &var_148)
return result
