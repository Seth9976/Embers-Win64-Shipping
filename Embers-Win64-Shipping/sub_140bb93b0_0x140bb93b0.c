// 函数: sub_140bb93b0
// 地址: 0x140bb93b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t performanceCount = 0
void* rax = sub_140a7b0a0()

if (rax != 0)
    sub_140a8dc00(rax, 0)

int64_t r13
r13.b = 0
QueryPerformanceCounter(&performanceCount)
void* var_b8
uint128_t zmm0 = *sub_140a1dfc0(arg1, &var_b8)
int16_t* rdx_1 = zmm0.q
void* rax_3 = &rdx_1[sx.q(_mm_bsrli_si128(zmm0, 8).d)]

if (rdx_1 == rax_3)
label_140bb945f:
    int32_t r12_1 = 0
    int64_t* var_80 = nullptr
    int32_t performanceCount_1 = 0
    int32_t var_74_1 = 0
    int64_t* var_a8 = nullptr
    int64_t var_a0_1 = 0
    sub_140bb3810(&var_a8)
    int32_t i_4 = var_a0_1.d
    int64_t* rsi_1 = var_80
    int32_t r14 = 0
    int64_t var_b0
    void* var_58
    int64_t* rax_6
    
    while (true)
        rax_6 = var_a8
        
        if (r14 s< 0)
            break
        
        if (r14 s>= i_4)
            break
        
        var_58 = nullptr
        var_b8 = nullptr
        int64_t* rbx_3 = &rax_6[sx.q(r14) * 2]
        int64_t var_50_1 = 0
        var_b0 = 0
        
        if (sub_140bbd1d0(rbx_3, &var_b8, &var_58) == 0)
            int16_t* const r9_2
            
            if (rbx_3[1].d == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *rbx_3
            
            sub_140af98a0("Unknown", 0x200, 
                LongPackageNameToFilename failed to convert '%s'. Path does not map to any roots.", 
                r9_2)
            sub_140afbb40()
        
        void* rcx_11 = var_58
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t performanceCount_2 = sx.q(performanceCount_1)
        performanceCount_1 = (performanceCount_2 + 1).d
        
        if (performanceCount_1 s> r12_1)
            sub_1405a4f90(&var_80)
            r12_1 = var_74_1
            rsi_1 = var_80
        
        sub_140596d10(&rsi_1[performanceCount_2 * 2], &var_b8)
        void* rcx_16 = var_b8
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        r14 += 1
    
    int64_t* rbx_5 = rax_6
    performanceCount = performanceCount_1
    
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t rcx_17 = *rbx_5
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rbx_5 = &rbx_5[2]
            i = i_4
            i_4 -= 1
        while (i != 1)
        rax_6 = var_a8
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
    
    int32_t var_d8_1 = 0xffffffff
    int32_t rax_7
    int32_t rcx_20
    rax_7, rcx_20 = sub_140a23cf0(arg1, &data_142d404c4, 0, 0, 0xffffffff)
    int32_t r14_2 = arg1[1].d
    int64_t rbx_7 = *arg1
    int64_t* var_68
    void** rax_8
    int32_t rbx_8
    
    if (rax_7 == 0xffffffff)
        var_a0_1.d = r14_2
        var_a8 = nullptr
        sub_1405a4c70(&var_a8, sbb.d(rcx_20, rcx_20, r14_2 != 0) + 3 + r14_2, 0)
        memcpy(var_a8, rbx_7, r14_2 * 2)
        rbx_8 = 2
        sub_140a20ba0(&var_a8, &data_142e834e8, 2)
        var_68 = var_a8
        int32_t var_60_1 = var_a0_1.d
        int32_t var_5c_1 = var_a0_1:4.d
        rax_8 = &var_68
    else
        var_b0.d = r14_2
        var_b8 = nullptr
        
        if (r14_2 != 0)
            sub_1405a4c70(&var_b8, r14_2, 0)
            memcpy(var_b8, rbx_7, r14_2 * 2)
            rax_8 = &var_b8
            rbx_8 = 1
        else
            var_b0:4.d = 0
            rax_8 = &var_b8
            rbx_8 = 1
    
    void* r12_2 = *rax_8
    *rax_8 = nullptr
    rax_8[1].d
    rax_8[1] = 0
    var_58 = r12_2
    
    if ((rbx_8.b & 2) != 0)
        int64_t* rcx_28 = var_68
        rbx_8 &= 0xfffffffd
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    if ((rbx_8.b & 1) != 0)
        void* rcx_29 = var_b8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
    
    int32_t r14_3 = performanceCount
    int32_t i_3 = 0
    int32_t i_5 = 0
    int64_t* var_90 = nullptr
    int32_t var_84_1 = 0
    int32_t var_98_1 = 0
    
    if (r14_3 s> 0)
        int64_t* r15_1 = var_80
        var_68 = r15_1
        
        while (r13.b == 0)
            sub_140a464c0()
            int16_t* const r8_9
            
            if (r15_1[1].d == 0)
                r8_9 = &data_142d40450
            else
                r8_9 = *r15_1
            
            char var_c8_1 = 1
            char var_d0_1 = 0
            var_d8_1.b = 1
            (*(data_14399ea08 + 0x80))(&data_14399ea08, &var_90, r8_9)
            i_3 = i_5
            int32_t r12_3 = 0
            
            if (i_3 s> 0)
                int64_t r15_2 = 0
                
                do
                    int64_t* rax_15 = var_90
                    var_a8 = nullptr
                    int32_t rbx_9 = *(rax_15 + r15_2 + 8)
                    int64_t r14_4 = *(rax_15 + r15_2)
                    var_a0_1.d = rbx_9
                    
                    if (rbx_9 != 0)
                        sub_1405a4c70(&var_a8, rbx_9, 0)
                        memcpy(var_a8, r14_4, rbx_9 * 2)
                        rax_15 = var_90
                    else
                        var_a0_1:4.d = 0
                    
                    void* rbx_12 = &rax_15[sx.q(r12_3) * 2]
                    char rax_16 = sub_140a236f0(rbx_12, &data_143e1a410, 1)
                    char rax_17
                    
                    if (rax_16 == 0)
                        rax_17 = sub_140a236f0(rbx_12, &data_143e1a420, 1)
                    
                    if (rax_16 != 0 || rax_17 != 0)
                        var_b8 = nullptr
                        int32_t var_b0_2 = 0
                        
                        if (sub_140bbcf00(&var_a8, &var_b8, nullptr) != 0)
                            if (arg2 != 0 && r13.b == 0 && arg2 != &var_b8)
                                void* r14_5 = var_b8
                                int32_t r8_12 = *(arg2 + 0xc)
                                arg2[1].d = var_b0_2
                                
                                if (var_b0_2 != 0 || r8_12 != 0)
                                    sub_1405a4c70(arg2, var_b0_2, r8_12)
                                    memcpy(*arg2, r14_5, var_b0_2 * 2)
                                else
                                    *(arg2 + 0xc) = 0
                            
                            if (arg3 != 0)
                                sub_140b20c40(&var_a8)
                                
                                if (r13.b == 0 && arg3 != &var_a8)
                                    int32_t rbx_14 = var_a0_1.d
                                    int64_t* r14_6 = var_a8
                                    int32_t r8_15 = *(arg3 + 0xc)
                                    arg3[1].d = rbx_14
                                    
                                    if (rbx_14 != 0 || r8_15 != 0)
                                        sub_1405a4c70(arg3, rbx_14, r8_15)
                                        memcpy(*arg3, r14_6, rbx_14 * 2)
                                    else
                                        *(arg3 + 0xc) = 0
                            
                            r13.b = 1
                        
                        void* rcx_40 = var_b8
                        
                        if (rcx_40 != 0)
                            sub_140a74f90(rcx_40)
                    
                    int64_t* rcx_41 = var_a8
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                    
                    i_3 = i_5
                    r12_3 += 1
                    r15_2 += 0x10
                while (r12_3 s< i_3)
                
                r14_3 = performanceCount
                r15_1 = var_68
            
            r15_1 = &r15_1[2]
            r12_2 = var_58
            int32_t rax_20 = var_98_1 + 1
            var_98_1 = rax_20
            var_68 = r15_1
            
            if (rax_20 s>= r14_3)
                break
    
    int64_t* rdi_2 = var_90
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_42 = *rdi_2
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rdi_2 = &rdi_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int64_t* rcx_43 = var_90
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    int64_t* rdi_3 = var_80
    int64_t* rbx_15 = rdi_3
    
    if (r14_3 != 0)
        int32_t i_2
        
        do
            int64_t rcx_45 = *rbx_15
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            rbx_15 = &rbx_15[2]
            i_2 = r14_3
            r14_3 -= 1
        while (i_2 != 1)
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
else
    while (*rdx_1 != 0x2f)
        rdx_1 = &rdx_1[1]
        
        if (rdx_1 == rax_3)
            goto label_140bb945f
    
    var_b8 = nullptr
    int32_t var_b0_1 = 0
    char rax_5 = sub_140ba1330(arg1, 0, &var_b8, 1)
    int64_t* r14_1 = var_b8
    
    if (rax_5 != 0)
        if (arg2 != 0)
            sub_140597df0(arg2, arg1)
        
        if (arg3 != 0 && arg3 != &var_b8)
            int32_t r8_2 = *(arg3 + 0xc)
            arg3[1].d = var_b0_1
            
            if (var_b0_1 != 0 || r8_2 != 0)
                sub_1405a4c70(arg3, var_b0_1, r8_2)
                memcpy(*arg3, r14_1, var_b0_1 * 2)
            else
                *(arg3 + 0xc) = 0
        
        r13.b = 1
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

QueryPerformanceCounter(&performanceCount)
void* rax_21 = sub_140a7b0a0()

if (rax_21 != 0)
    sub_140a89de0(rax_21, 0)

return zx.q(r13.b)
