// 函数: sub_142020180
// 地址: 0x142020180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* result = nullptr
int64_t* rax_2 = sub_1424b2580(arg1, arg2)
int64_t* var_150_1
int64_t* r13

if (rax_2 == 0)
    r13 = nullptr
    var_150_1 = r13
else
    r13 = rax_2[0x23]
    var_150_1 = r13
    
    if (r13 == 0)
        (*(*rax_2 + 0x390))(rax_2)
        r13 = rax_2[0x23]
        var_150_1 = r13

int64_t rax_4 = *arg1
int64_t rbx_1 = 0
int64_t var_170 = 0
int32_t r12 = 0
int32_t var_174 = 0
int32_t var_164 = 0
int64_t r15 = 0
int64_t var_160 = 0
int32_t r14 = 0
int32_t var_178 = 0
int32_t var_154 = 0
void* rax_5 = (*(rax_4 + 0x150))(arg1)
char var_a8
sub_142018c50(&var_a8, rax_5, sub_142574150(), 5)
void* var_a0
void** var_98
char var_84
int64_t var_70

if (var_84 == 0)
    void* result_2
    void* result_1 = result_2
    
    while (true)
        void* rax_7 = sub_1425742c0()
        void* rdx_1 = *(result_1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            result = result_1
            break
        
        void* rbx_2 = *(result_1 + 0x130)
        int32_t* rax_10
        uint128_t zmm1_1
        
        if (rbx_2 == 0)
            int32_t var_11c_1 = data_143dbb200
            int64_t var_124
            rax_10 = &var_124
            var_124 = data_143dbb1f8.q
        else
            zmm1_1 = *(rbx_2 + 0x1d0)
            int32_t var_130
            rax_10 = &var_130
            var_130 = zmm1_1.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t var_128_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
            float var_12c_1 = temp0_1[0]
        
        zmm1_1 = zx.o(*rax_10)
        int32_t rcx_4 = rax_10[2]
        uint64_t var_148 = zmm1_1.q
        int64_t* rbx_3
        
        if (rbx_2 == 0)
            int64_t var_10c
            rbx_3 = &var_10c
            int32_t rax_16 = data_143dbb210
            var_10c = data_143dbb208
            int32_t var_104_1 = rax_16
        else
            float zmm2_1[0x4] = *(rbx_2 + 0x1c0)
            float var_c8[0x4] = zmm2_1
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm2_1, *(rbx_2 + 0x180), 4)) != 0)
                *(rbx_2 + 0x180) = zmm2_1
                void var_b8
                int32_t* rax_13 = sub_140adf5d0(&var_c8, &var_b8)
                *(rbx_2 + 0x190) = *rax_13
                *(rbx_2 + 0x198) = rax_13[2]
                zmm1_1 = zx.o(var_148)
            
            int32_t rax_15 = *(rbx_2 + 0x198)
            int64_t var_118
            rbx_3 = &var_118
            var_118 = *(rbx_2 + 0x190)
            int32_t var_110_1 = rax_15
        
        int32_t rax_17 = rbx_3[1].d
        int32_t var_e0_1 = rcx_4
        int64_t var_f8 = *rbx_3
        int32_t var_f0_1 = rax_17
        uint64_t var_e8 = zmm1_1.q
        
        if (sub_1420e1940(rax_5, r13, &var_e8, &var_f8, nullptr) != 0)
            int32_t rax_20 = rbx_3[1].d
            int64_t var_d8 = *rbx_3
            int32_t var_d0_1 = rax_20
            
            if (sub_1420e3b00(rax_5, r13, &var_148, &var_d8) != 0)
                int64_t rbx_5 = sx.q(r14)
                r14 = (rbx_5 + 1).d
                var_178 = r14
                
                if (r14 s> var_154)
                    sub_1405a4d70(&var_160)
                    r15 = var_160
                    var_178 = r14
                
                *(r15 + (rbx_5 << 3)) = result_1
        else
            int64_t rbx_4 = sx.q(r12)
            int32_t r12_1 = (rbx_4 + 1).d
            var_174 = r12_1
            
            if (r12_1 s> var_164)
                sub_1405a4d70(&var_170)
                var_174 = r12_1
            
            *(var_170 + (rbx_4 << 3)) = result_1
        
        int32_t var_68
        int32_t r8_4 = var_68
        int32_t var_90
        int32_t rdx_7 = var_90
        int32_t var_88
        int32_t r15_2 = var_88 + 1
        
        if (r15_2 s>= r8_4 + rdx_7)
        label_1420205e7:
            r14 = var_178
            r12 = var_174
            r15 = var_160
            int64_t var_78 = 0
            char var_84_1 = 1
            break
        
        int64_t r12_2 = sx.q(r15_2) << 3
        
        while (true)
            if (r15_2 s>= rdx_7)
                result_1 = *(var_70 + (sx.q(r15_2 - rdx_7) << 3))
            else
                result_1 = *(var_98 + r12_2)
            
            int32_t var_80 = var_80 + 1
            
            if (result_1 != 0)
                void* rax_29 = sub_141dc9840(result_1)
                
                if (rax_29 != 0)
                    void* const rax_36
                    
                    if ((var_a8 & 1) != 0)
                        int32_t rax_30 = *(result_1 + 0xc)
                        
                        if (rax_30 s>= data_143e1d9b4)
                            rax_36 = nullptr
                        else
                            int16_t temp0_5
                            int32_t temp1_1
                            temp0_5:temp1_1 = sx.q(rax_30)
                            uint32_t rdx_9 = zx.d(temp0_5)
                            int32_t rax_32 = temp1_1 + rdx_9
                            rax_36 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_32.w) - rdx_9) * 0x18
                    
                    if ((var_a8 & 1) == 0 || ((*(rax_36 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_17 = var_a8.d
                        
                        if (((rcx_17 u>> 1).b & 1) == 0)
                            goto label_14202050d
                        
                        uint64_t rax_40 = sub_1405949a0()
                        
                        if (rax_40.b != 0)
                            rcx_17 = var_a8.d
                        label_14202050d:
                            
                            if (((rcx_17 u>> 2).b & 1) == 0)
                                goto label_14202058b
                            
                            if ((*(rax_29 + 0x1f4) & 0x20) == 0 || (*(rax_29 + 0x1f6) & 8) != 0)
                                rax_40 = zx.q(*(rax_29 + 0x1f5))
                            
                            if (((*(rax_29 + 0x1f4) & 0x20) != 0 && (*(rax_29 + 0x1f6) & 8) == 0)
                                    || (rax_40.b & 0x40) != 0 || rax_40.b s< 0)
                                r14.b = 1
                            else
                                r14.b = 0
                            
                            void* rcx_19 = *(rax_29 + 0xb8)
                            char* rsi = *(rax_29 + 0x248)
                            
                            if (rcx_19 != 0)
                                rax_40 = sub_1424359b0(rcx_19)
                            
                            if (rcx_19 == 0 || rax_40 == 0 || rsi == rax_40)
                                rcx_19.b = 1
                            else
                                rcx_19.b = 0
                            
                            if (rsi == 0 || *rsi == 2)
                                rax_40.b = 1
                            else
                                rax_40.b = 0
                            
                            if (rcx_19.b != 0 || rax_40.b != 0)
                                rax_40.b = 1
                            
                            if (r14.b != 0 && rax_40.b != 0)
                                result = nullptr
                            label_14202058b:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_29) == var_a0)
                                    if (rax_29 == *(var_a0 + 0x30))
                                        break
                                    
                                    void* rax_42 = sub_1425bd0d0()
                                    void* rdx_11 = *(result_1 + 0x10)
                                    int64_t rax_43 = sx.q(*(rax_42 + 0x38))
                                    
                                    if (rax_43.d s> *(rdx_11 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_11 + 0x30) + (rax_43 << 3)) != rax_42 + 0x30)
                                        break
                
                r8_4 = var_68
                result = nullptr
                rdx_7 = var_90
            
            r15_2 += 1
            r12_2 += 8
            
            if (r15_2 s>= r8_4 + rdx_7)
                goto label_1420205e7
        
        r14 = var_178
        r12 = var_174
        var_88 = r15_2
        r15 = var_160
        void* result_3 = result_1
        
        if (var_84 != 0)
            break
        
        r13 = var_150_1
    
    rbx_1 = var_170

char var_50

if (var_50 != 0)
    char var_50_1 = 0
    int64_t var_58
    sub_142441560(var_a0, var_58)
    
    if (var_70 != 0)
        sub_140a74f90(var_70)
    
    if (var_98 != 0)
        sub_140a74f90(var_98)

if (result == 0)
    if (r12 s> 0)
        int32_t rax_46 = rand()
        int32_t rcx_25 = r12 - 1
        float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(r12))
        float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(rax_46))
        temp0_7[0] = temp0_7[0] * 3.05185094e-05f
        temp0_7[0] = temp0_7[0] * temp0_6[0]
        int32_t rax_47 = int.d(temp0_7[0])
        
        if (rax_47 s<= rcx_25)
            rcx_25 = rax_47
        
        result = *(rbx_1 + (sx.q(rcx_25) << 3))
    else if (r14 s> 0)
        int32_t rax_49 = rand()
        int32_t rdx_13 = r14 - 1
        float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(r14))
        float temp0_9[0x4] = _mm_cvtepi32_ps(zx.o(rax_49))
        temp0_9[0] = temp0_9[0] * 3.05185094e-05f
        temp0_9[0] = temp0_9[0] * temp0_8[0]
        int32_t rax_50 = int.d(temp0_9[0])
        
        if (rax_50 s<= rdx_13)
            rdx_13 = rax_50
        
        result = *(r15 + (sx.q(rdx_13) << 3))

if (r15 != 0)
    sub_140a74f90(r15)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
