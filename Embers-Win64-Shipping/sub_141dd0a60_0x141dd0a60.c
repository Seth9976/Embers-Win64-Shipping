// 函数: sub_141dd0a60
// 地址: 0x141dd0a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rax_3 = (*(*arg1 + 0x150))()
char rax_4

if (rax_3 != 0)
    rax_4 = sub_14242d3a0(rax_3)

int64_t rbx

if (rax_3 == 0 || rax_4 == 0)
    rbx.b = 0
else
    int64_t rdx_1 = *arg1
    rbx.b = 1
    (*(rdx_1 + 0x478))(arg1, rdx_1)

char var_158_1

if (arg1[0xb].b s< 0 && *(arg1 + 0x5f) == 3)
    var_158_1 = 1

if (arg1[0xb].b s>= 0 || *(arg1 + 0x5f) != 3 || data_143de5424 != 0)
    var_158_1 = 0

void* r15 = nullptr
uint64_t result

if (rbx.b == 0)
    int32_t rax_63 = *(arg1 + 0xc)
    void* const rax_70
    
    if (rax_63 s>= data_143e1d9b4)
        rax_70 = nullptr
    else
        int16_t temp0_15
        int32_t temp1_1
        temp0_15:temp1_1 = sx.q(rax_63)
        uint32_t rdx_20 = zx.d(temp0_15)
        int32_t rax_65 = temp1_1 + rdx_20
        rax_70 =
            *(data_143e1d9a0 + (sx.q(rax_65 s>> 0x10) << 3)) + sx.q(zx.d(rax_65.w) - rdx_20) * 0x18
    
    *(rax_70 + 8) |= 0x20000000
    result = zx.q(*(arg1 + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(result.d)
        uint32_t rdx_23 = zx.d(temp2_1)
        int32_t rax_72 = temp3_1 + rdx_23
        result = data_143e1d9a0
        r15 = *(result + (sx.q(rax_72 s>> 0x10) << 3)) + sx.q(zx.d(rax_72.w) - rdx_23) * 0x18
    
    *(r15 + 8) &= 0xdfffffff
else
    void* var_48_1 = nullptr
    int32_t var_3c_1 = 0x18
    int32_t var_40_1 = 0
    void* rax_5 = sub_142459c10()
    void* const rsi_1
    
    if (rax_5 == 0)
        rsi_1 = nullptr
    else
        void* rax_6 = sub_142459c10()
        
        if (rax_6 == 0)
            rsi_1 = nullptr
        else
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s> *(rax_5 + 0x38))
                rsi_1 = nullptr
            else
                rsi_1 = rax_5
                
                if (*(*(rax_5 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rsi_1 = nullptr
    
    void var_108
    void* r8_1 = &var_108
    
    if (rsi_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_5, r8_1)
    else
        sub_1419f6fe0(arg1, rax_5, r8_1)
    
    void* rcx_6 = var_48_1
    void* rsi_2 = &var_108
    int64_t r14_1 = 0
    
    if (rcx_6 != 0)
        rsi_2 = rcx_6
    
    int64_t r12_1 = sx.q(var_40_1) << 3
    uint64_t r12_2 = r12_1 u>> 3
    
    if (rsi_2 u> rsi_2 + r12_1)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* rbx_2 = *rsi_2
            
            if ((rbx_2[0x11].b & 1) != 0)
                if (*(rbx_2 + 0x89) s< 0 && (*(rbx_2 + 0x8a) & 1) == 0)
                    int64_t rdx_4
                    rdx_4.b = 1
                    (*(*rbx_2 + 0x268))(rbx_2, rdx_4)
                
                char rax_13 = *(rbx_2 + 0x8a)
                
                if ((rax_13 & 0x10) != 0 && rax_13 s>= 0)
                    (*(*rbx_2 + 0x318))(rbx_2)
            
            rsi_2 += 8
            r14_1 += 1
        while (r14_1 != r12_2)
        
        rcx_6 = var_48_1
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t var_138
    
    if (rax_3 != 0)
        uint32_t rcx_7 = zx.d(*(arg1 + 0xf2))
        float var_150
        int32_t var_130_3
        int64_t var_128
        float var_120_2
        float var_118[0x4]
        float zmm0_1[0x4]
        float zmm1_1[0x4]
        
        if (rcx_7 == 2)
            void* rbx_5 = arg1[0x26]
            int64_t* rax_33
            
            if (rbx_5 == 0)
                int32_t var_130_4 = data_143dbb200
                rax_33 = &var_138
                var_138 = data_143dbb1f8.q
            else
                zmm1_1 = *(rbx_5 + 0x1d0)
                rax_33 = &var_150
                var_150 = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_148_4 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                float var_14c_2 = zmm0_1[0]
            
            float rax_35 = rax_33[1].d
            var_128 = *rax_33
            var_120_2 = rax_35
            int32_t rax_39
            
            if (rbx_5 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_39 = data_143dbb210
            else
                zmm1_1 = *(rbx_5 + 0x1c0)
                uint32_t temp0_12 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_5 + 0x180), zmm1_1, 4))
                var_118 = zmm1_1
                
                if (temp0_12 != 0)
                    *(rbx_5 + 0x180) = zmm1_1
                    int32_t* rax_37 = sub_140adf5d0(&var_118, &var_138)
                    *(rbx_5 + 0x190) = *rax_37
                    *(rbx_5 + 0x198) = rax_37[2]
                
                zmm0_1 = zx.o(*(rbx_5 + 0x190))
                rax_39 = *(rbx_5 + 0x198)
            
            var_130_3 = rax_39
            var_138 = zmm0_1.q
            var_118[0].q = var_138
            var_118[2] = var_130_3
            
            if (sub_1420e3b00(rax_3, arg1, &var_128, &var_118) != 0)
            label_141dd0f72:
                int64_t* rcx_19 = arg1[0x26]
                uint128_t zmm0_2 = zx.o(var_138)
                var_118[2] = var_130_3
                var_118[0].q = zmm0_2.q
                
                if (rcx_19 != 0)
                    float zmm3_1[0x4] = *(rcx_19 + 0x1d0)
                    float zmm1_2 = var_128:4.d
                    zmm0_2.d = var_128.d.d f- zmm3_1[0]
                    char var_168_1 = 1
                    int32_t var_170_1 = 0
                    void* const var_178_2 = nullptr
                    var_150 = zmm0_2.d
                    float var_14c_3 = zmm1_2 f- _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).d
                    float var_148_5 = var_120_2 - _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)[0]
                    sub_141f42080(rcx_19, &var_150, &var_118, 0, var_178_2, var_170_1, var_168_1)
        else if (rcx_7 == 3)
            void* rbx_4 = arg1[0x26]
            int64_t* rax_24
            
            if (rbx_4 == 0)
                int32_t var_130_2 = data_143dbb200
                rax_24 = &var_138
                var_138 = data_143dbb1f8.q
            else
                zmm1_1 = *(rbx_4 + 0x1d0)
                rax_24 = &var_150
                var_150 = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_148_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                float var_14c_1 = zmm0_1[0]
            
            float rax_26 = rax_24[1].d
            var_128 = *rax_24
            var_120_2 = rax_26
            int32_t rax_30
            
            if (rbx_4 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_30 = data_143dbb210
            else
                zmm1_1 = *(rbx_4 + 0x1c0)
                uint32_t temp0_8 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_4 + 0x180), zmm1_1, 4))
                var_118 = zmm1_1
                
                if (temp0_8 != 0)
                    *(rbx_4 + 0x180) = zmm1_1
                    int32_t* rax_28 = sub_140adf5d0(&var_118, &var_138)
                    *(rbx_4 + 0x190) = *rax_28
                    *(rbx_4 + 0x198) = rax_28[2]
                
                zmm0_1 = zx.o(*(rbx_4 + 0x190))
                rax_30 = *(rbx_4 + 0x198)
            
            var_130_3 = rax_30
            var_138 = zmm0_1.q
            var_118[0].q = var_138
            var_118[2] = var_130_3
            
            if (sub_1420e3b00(rax_3, arg1, &var_128, &var_118) != 0)
                goto label_141dd0f72
            
            sub_141dbe590(arg1, 0, 1)
        else if (rcx_7 == 4)
            void* rcx_10 = arg1[0x26]
            int32_t rax_18
            
            if (rcx_10 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_18 = data_143dbb210
            else
                zmm1_1 = *(rcx_10 + 0x1c0)
                void* rbx_3 = rcx_10 + 0x180
                uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*rbx_3, zmm1_1, 4))
                var_118 = zmm1_1
                
                if (temp0_2 != 0)
                    *rbx_3 = zmm1_1
                    int32_t* rax_16 = sub_140adf5d0(&var_118, &var_138)
                    *(rbx_3 + 0x10) = *rax_16
                    *(rbx_3 + 0x18) = rax_16[2]
                    rcx_10 = arg1[0x26]
                
                zmm0_1 = zx.o(*(rbx_3 + 0x10))
                rax_18 = *(rbx_3 + 0x18)
            
            var_150.q = zmm0_1.q
            var_118[0].q = var_150.q
            var_118[2] = rax_18
            int64_t* rax_20
            
            if (rcx_10 == 0)
                int32_t var_148_2 = data_143dbb200
                rax_20 = &var_150
                var_150.q = data_143dbb1f8.q
            else
                zmm1_1 = *(rcx_10 + 0x1d0)
                rax_20 = &var_128
                var_128.d = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_120_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_128:4.d = zmm0_1[0]
            
            int32_t rax_22 = rax_20[1].d
            var_138 = *rax_20
            int32_t var_130_1 = rax_22
            
            if (sub_1420e1940(rax_3, arg1, &var_138, &var_118, nullptr) != 0)
                sub_141dbe590(arg1, 0, 1)
    
    int32_t rax_43 = *(arg1 + 0xc)
    void* const rax_50
    
    if (rax_43 s>= data_143e1d9b4)
        rax_50 = nullptr
    else
        int16_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(rax_43)
        uint32_t rdx_13 = zx.d(temp5_1)
        int32_t rax_45 = temp6_1 + rdx_13
        rax_50 =
            *(data_143e1d9a0 + (sx.q(rax_45 s>> 0x10) << 3)) + sx.q(zx.d(rax_45.w) - rdx_13) * 0x18
    
    result = zx.q(*(rax_50 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        (*(*arg1 + 0x480))(arg1)
        int32_t rax_53 = *(arg1 + 0xc)
        
        if (rax_53 s< data_143e1d9b4)
            int16_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(rax_53)
            uint32_t rdx_16 = zx.d(temp8_1)
            int32_t rax_55 = temp9_1 + rdx_16
            r15 = *(data_143e1d9a0 + (sx.q(rax_55 s>> 0x10) << 3))
                + sx.q(zx.d(rax_55.w) - rdx_16) * 0x18
        
        result = zx.q(*(r15 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            if ((*(arg1 + 0x5b) & 0x20) == 0)
                int64_t* rax_61 = sub_140d21830(arg1, &var_138, 0, 0)
                int16_t* const r9_4
                
                if (rax_61[1].d == 0)
                    r9_4 = &data_142d40450
                else
                    r9_4 = *rax_61
                
                sub_140af98a0("Unknown", 0xc8f, 
                    %s failed to route PostInitializeComponents.  Please call Super::"
                "PostInitializeComponents() in your <className>::PostInitializeComponents() "
                "function. ", r9_4)
                int64_t rcx_30 = var_138
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                result = sub_140afbb40()
            
            if (var_158_1 == 0)
                if (data_143f38be8 u<= 0)
                    result = sub_1424385d0(rax_3)
                
                if (data_143f38be8 u> 0 || result.b != 0)
                    void* rax_62 = sub_140d3c6e0(&arg1[0x2c])
                    
                    if (rax_62 == 0)
                        result = sub_141dbf290(arg1, 0)
                    else
                        void* rcx_33 = *(rax_62 + 0xa0)
                        
                        if (rcx_33 == 0)
                            result = sub_141dbf290(arg1, 0)
                        else
                            result.b = *(rcx_33 + 0x5c) & 0x60
                            result.b -= 0x20
                            
                            if ((result.b & 0xdf) == 0)
                                result = sub_141dbf290(arg1, 0)

__security_check_cookie(rax_1 ^ &var_198)
return result
