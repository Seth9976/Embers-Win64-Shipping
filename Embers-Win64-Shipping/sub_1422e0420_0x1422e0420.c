// 函数: sub_1422e0420
// 地址: 0x1422e0420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdi = 0
int32_t var_88 = 0x41a00000
int32_t var_84 = 0x42480000
int32_t* var_78 = nullptr
float zmm7[0x4] = _mm_min_ss(arg2[0], arg3.d)
int32_t var_6c = 4
int32_t var_70 = 3
int32_t var_80 = 0x428c0000
bool cond:0 = data_143ddb400 == 0
uint64_t var_98 = arg1

if (not(cond:0))
    int16_t* var_b8 = nullptr
    int64_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 0x15)
    int32_t r12_1 = var_b0_1:4.d
    int32_t rbx_1 = var_b0_1.d + 0x15
    var_b0_1.d = rbx_1
    
    if (rbx_1 s> r12_1)
        sub_140594770(&var_b8)
        r12_1 = var_b0_1:4.d
        rbx_1 = var_b0_1.d
    
    int16_t* r13_1 = var_b8
    UnDecorator::getReferenceType(r13_1, u"PerfIndexThresholds_", 0x2a)
    int32_t rsi_1 = *(arg1 + 8)
    int32_t r14_1 = 1
    int16_t* rbx_3
    int16_t* r12_2
    
    if (rbx_1 s> 1)
        int32_t r15_1 = rsi_1 - 1
        
        if (rsi_1 == 0)
            r15_1 = 0
        
        int32_t rax_2
        
        if (rbx_1 == 0)
            rax_2 = 1
        
        if (rbx_1 != 0 || r15_1 == 0)
            rax_2 = 0
        
        var_b8 = r13_1
        int32_t rdx_5 = r15_1 + rax_2 + rbx_1
        var_b0_1.d = rbx_1
        var_b0_1:4.d = r12_1
        
        if (rdx_5 s> r12_1)
            sub_1405947f0(&var_b8, rdx_5)
        
        sub_140a20ba0(&var_b8, *var_98, r15_1)
        r12_2 = var_b8
        rsi_1 = var_b0_1.d
        rbx_3 = r12_2
    else
        int64_t rbx_2 = *arg1
        r12_2 = nullptr
        var_98 = 0
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_98, rsi_1, 0)
            r12_2 = var_98
            memcpy(r12_2, rbx_2, rsi_1 * 2)
            rbx_3 = r12_2
        else
            rbx_3 = nullptr
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
    
    void* rcx_8 = data_143ddb400
    int64_t* var_a8 = nullptr
    int16_t* r8_4 = &data_142d40450
    int32_t i_2 = 0
    
    if (rsi_1 != 0)
        r8_4 = rbx_3
    
    int64_t zmm0_1
    float zmm6_1[0x4]
    float zmm8_1[0x4]
    zmm0_1, zmm6_1, zmm7, zmm8_1 =
        sub_140af5a00(rcx_8, ScalabilitySettings", r8_4, &var_a8, &data_143de5800)
    
    if (i_2 s> 1)
        int64_t* rax_3 = var_a8
        int16_t* r15_2 = nullptr
        var_b8 = nullptr
        int32_t rbx_4 = rax_3[1].d
        int64_t rsi_2 = *rax_3
        var_b0_1.d = rbx_4
        int16_t* rsi_3
        
        if (rbx_4 != 0)
            sub_1405a4c70(&var_b8, rbx_4, 0)
            r15_2 = var_b8
            zmm0_1 = memcpy(r15_2, rsi_2, rbx_4 * 2)
            rbx_4 = var_b0_1.d
            rsi_3 = r15_2
        else
            rsi_3 = nullptr
        
        int16_t* const rcx_11 = &data_142d40450
        
        if (rbx_4 != 0)
            rcx_11 = rsi_3
        
        if (sub_140a54510(rcx_11, &data_142d5f5d0) != 0)
            int16_t* rcx_12 = &data_142d40450
            
            if (rbx_4 != 0)
                rcx_12 = rsi_3
            
            if (sub_140a54510(rcx_12, &data_142d5f5c8) == 0)
                zmm7 = zmm8_1
                goto label_1422e06bb
            
            int16_t* rcx_13 = &data_142d40450
            
            if (rbx_4 != 0)
                rcx_13 = rsi_3
            
            if (sub_140a54510(rcx_13, &data_14301d9e8) == 0)
                goto label_1422e06bb
        else
            zmm7 = zmm6_1
        label_1422e06bb:
            var_70 = 0
            
            if (var_6c s< 0 && var_6c != 0)
                zmm0_1 = sub_140dbd170(&var_88, 0)
            
            if (i_2 s> 1)
                int64_t* rbx_5 = 0x10
                
                do
                    int64_t* rax_8 = var_a8
                    wchar16* _String
                    
                    if (*(rbx_5 + rax_8 + 8) == 0)
                        _String = &data_142d40450
                    else
                        _String = *(rbx_5 + rax_8)
                    
                    _wtof(_String)
                    int64_t rsi_4 = sx.q(var_70)
                    zmm6_1 = zx.o(0)
                    zmm6_1[0] = fconvert.s(zmm0_1)
                    int32_t rax_9 = (rsi_4 + 1).d
                    var_70 = rax_9
                    
                    if (rax_9 s> var_6c)
                        zmm0_1 = sub_140dbc4b0(&var_88, rsi_4.d)
                    
                    int32_t* rdx_11 = &var_88
                    
                    if (var_78 != 0)
                        rdx_11 = var_78
                    
                    r14_1 += 1
                    rbx_5 = &rbx_5[2]
                    rdx_11[rsi_4] = zmm6_1[0]
                while (r14_1 s< i_2)
        
        if (r15_2 != 0)
            sub_140a74f90(r15_2)
    
    int32_t i_1 = i_2
    int64_t* rbx_6 = var_a8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_17 = *rbx_6
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rbx_6 = &rbx_6[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_6 = var_a8
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)

int32_t* rdx_12 = &var_88

if (var_78 != 0)
    rdx_12 = var_78

void* r8_7 = &rdx_12[sx.q(var_70)]

if (rdx_12 != r8_7)
    while (not(zmm7[0] f< *rdx_12))
        rdi += 1
        rdx_12 = &rdx_12[1]
        
        if (rdx_12 == r8_7)
            break

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rdi)
