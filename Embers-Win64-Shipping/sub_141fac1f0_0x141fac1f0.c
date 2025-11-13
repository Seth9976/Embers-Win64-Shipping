// 函数: sub_141fac1f0
// 地址: 0x141fac1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rbx = *(arg1 + 0x140)

if (rbx != 0)
    rbx = rbx[0x26]

if (rbx != 0)
    rbx = rbx[0x44]

if (rbx == 0)
label_141fac26f:
    void* rax_5 = sub_142411ce0(arg3, u"game=", nullptr)
    
    if (rax_5 != 0)
        rbx = sub_140d2f240(sub_1424b14e0(), 0, rax_5, 0, 0, 0)
else
    void* rax_2 = sub_1424b14e0()
    
    if (rax_2 == 0)
        goto label_141fac26f
    
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> rbx[7].d || *(rbx[6] + (rax_3 << 3)) != rax_2 + 0x30)
        goto label_141fac26f

void* result

if (rbx == 0)
    result = nullptr
else
    void* rcx_2 = rbx[0x23]
    
    if (rcx_2 != 0)
    label_141fac2d6:
        int64_t* rbx_1 = *(rcx_2 + 0x268)
        
        if (rbx_1 == 0)
            result = nullptr
        else
            void* rax_8 = sub_14256a090()
            
            if (rax_8 == 0)
                result = nullptr
            else
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> rbx_1[7].d || *(rbx_1[6] + (rax_9 << 3)) != rax_8 + 0x30)
                    result = nullptr
                else
                    void var_c8
                    sub_142427eb0(&var_c8)
                    int32_t var_9c
                    int32_t var_9c_1 = var_9c | 0x40
                    int32_t var_128
                    var_128.q = &var_c8
                    void* result_1 =
                        sub_1420efae0(*(arg1 + 0x140), rbx_1, nullptr, nullptr, var_128)
                    
                    if (result_1 == 0)
                        result = nullptr
                    else
                        *(result_1 + 0x3d0) &= 0xfffffff7
                        sub_141dd8d70(result_1, *(arg1 + 0x190))
                        
                        if (*(result_1 + 0x228) == 0)
                            void* rcx_8 = *(arg1 + 0x140)
                            
                            if (rcx_8 != 0 && sub_14243aea0(rcx_8) != 0)
                                (*(*result_1 + 0x6e8))(result_1)
                        
                        void* rcx_10 = *(result_1 + 0x228)
                        
                        if (rcx_10 != 0)
                            sub_1422ac920(rcx_10, 1)
                        
                        int64_t rbx_2 = *(arg1 + 0x140)
                        void* rax_13 = sub_142452380()
                        int32_t var_98 = 5
                        char var_40_1 = 0
                        void* var_90
                        sub_1405ab0f0(&var_90, rbx_2, rax_13)
                        char var_40_2 = 1
                        sub_1405b0c60(&var_98)
                        char i
                        
                        while (i == 0)
                            void* var_68
                            void* r9_1 = var_68
                            void* r8_3 = sub_142574150() + 0x30
                            void* rdx_8 = *(r9_1 + 0x10)
                            int64_t rax_15 = sx.q(*(r8_3 + 8))
                            
                            if (rax_15.d s<= *(rdx_8 + 0x38)
                                    && *(*(rdx_8 + 0x30) + (rax_15 << 3)) == r8_3)
                                void* rbx_3 = *(r9_1 + 0x130)
                                int32_t rax_20
                                float zmm0_1[0x4]
                                float zmm1_1[0x4]
                                
                                if (rbx_3 == 0)
                                    zmm0_1 = zx.o(data_143dbb208)
                                    rax_20 = data_143dbb210
                                else
                                    zmm1_1 = *(rbx_3 + 0x1c0)
                                    uint32_t temp0_2 =
                                        _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_3 + 0x180), zmm1_1, 4))
                                    float var_e8[0x4] = zmm1_1
                                    
                                    if (temp0_2 != 0)
                                        *(rbx_3 + 0x180) = zmm1_1
                                        void var_d8
                                        int32_t* rax_18 = sub_140adf5d0(&var_e8, &var_d8)
                                        *(rbx_3 + 0x190) = *rax_18
                                        *(rbx_3 + 0x198) = rax_18[2]
                                        r9_1 = var_68
                                    
                                    zmm0_1 = zx.o(*(rbx_3 + 0x190))
                                    rax_20 = *(rbx_3 + 0x198)
                                
                                int64_t var_10c = zmm0_1.q
                                int32_t var_104_1 = rax_20
                                void* rax_22 = *(r9_1 + 0x130)
                                int64_t var_118_1
                                float var_110_2
                                
                                if (rax_22 == 0)
                                    var_118_1 = data_143dbb1f8.q
                                    var_110_2 = data_143dbb200
                                else
                                    zmm1_1 = *(rax_22 + 0x1d0)
                                    var_118_1.d = zmm1_1[0]
                                    float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                    var_110_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                    var_118_1:4.d = temp0_3[0]
                                
                                float var_f8_1 = var_110_2
                                int64_t rax_25 = *result_1
                                int64_t var_100 = var_118_1
                                (*(rax_25 + 0x670))(result_1, &var_100, &var_10c)
                                break
                            
                            sub_1405b0c60(&var_98)
                        
                        if (var_40_2 != 0)
                            char var_40_3 = 0
                            int64_t var_48
                            sub_142441560(var_90, var_48)
                            int64_t var_60
                            
                            if (var_60 != 0)
                                sub_140a74f90(var_60)
                            
                            int64_t var_88
                            
                            if (var_88 != 0)
                                sub_140a74f90(var_88)
                        
                        sub_141dd8f90(result_1, 1)
                        sub_141dd7750(result_1, 1, 1)
                        (*(*result_1 + 0xc10))(result_1, arg2)
                        result = result_1
    else
        int64_t rdx_1 = *rbx
        (*(rdx_1 + 0x390))(rbx, rdx_1)
        rcx_2 = rbx[0x23]
        
        if (rcx_2 != 0)
            goto label_141fac2d6
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_148)
return result
