// 函数: sub_141da2cf0
// 地址: 0x141da2cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rsi = nullptr
int32_t performanceCount = 0
int64_t* r15 = arg2
void** const var_178 = &data_142dd6130
char result = arg2[0xb].b
char r12 = 0
char result_1 = result
int32_t var_170 = 6

if (arg1[0x73].d == 0 && arg1[0x32] == 0)
    int32_t rbx_1 = arg2[1].d
    int64_t r13_1 = *arg2
    uint64_t var_1c8 = 0
    int32_t var_1c0_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_1c8, rbx_1, 0)
        result, arg2 = memcpy(var_1c8, r13_1, rbx_1 * 2)
        rbx_1 = r15[1].d
    else
        int32_t var_1bc_1 = 0
    
    if (rbx_1 s> 1)
    label_141da2e5d:
        arg2.b = r15[0xb].b == 0
        (*(arg1[0x49] + 0xa0))(&arg1[0x49], arg2)
        (*(arg1[0x49] + 0xa8))(&arg1[0x49], not.b(arg1[0x4e].b) & 1)
        int64_t rax_9 = arg1[0x34]
        char rdx_5 = arg1[0x4e].b & 1
        *(arg1 + 0x2ec) = 0
        (*(rax_9 + 0xa0))(&arg1[0x34], rdx_5)
        (*(arg1[0x34] + 0xa8))(&arg1[0x34], arg1[0x4e].b u>> 1 & 1)
        (*(arg1[0x5e] + 0xa0))(&arg1[0x5e], arg1[0x4e].b & 1)
        (*(arg1[0x5e] + 0xa8))(&arg1[0x5e], arg1[0x4e].b u>> 1 & 1)
        arg1[0x17].d = 0
        __builtin_memset(&arg1[0x29], 0, 0x14)
        performanceCount.q = 0
        QueryPerformanceCounter(&performanceCount)
        arg1[0x2c] = float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
        int64_t var_188
        result = sub_141d9ef80(arg1, &var_188, &var_1c8)
        
        if (r15[0xb].b != 0)
            r12 = 1
            result = sub_140a236f0(&var_188, sub_141d157d0(&performanceCount), 1)
        
        void* rbx_3
        
        if (r15[0xb].b == 0 || result != 0)
            rbx_3.b = 0
        else
            rbx_3 = 1
        
        if ((r12 & 1) != 0)
            int64_t rcx_20 = performanceCount.q
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
        
        if (rbx_3.b == 0)
            if (&arg1[0x74] != &var_1c8)
                uint64_t r13_2 = var_1c8
                int32_t r8_3 = *(arg1 + 0x3ac)
                arg1[0x75].d = var_1c0_1
                
                if (var_1c0_1 != 0 || r8_3 != 0)
                    sub_1405a4c70(&arg1[0x74], var_1c0_1, r8_3)
                    memcpy(arg1[0x74], r13_2, var_1c0_1 * 2)
                else
                    *(arg1 + 0x3ac) = 0
            
            int64_t* var_198
            int32_t var_180
            uint64_t (* var_c8)(int64_t* arg1, void* arg2)
            void** const var_a8
            int64_t var_98
            int64_t (* var_88)(int64_t* arg1, void* arg2)
            void** const var_68
            
            if (r15[0xb].b != 0)
                arg1[0x73].d = 1
                int32_t rax_26 = *(arg1 + 0xfc)
                arg1[0x1f].d = 0
                
                if (rax_26 s< 0 && rax_26 != 0)
                    sub_1405c5510(&arg1[0x1e], 0)
                
                if ((*(*arg1 + 0x1b8))(arg1) != 0)
                    (*(*arg1 + 0x1c0))(arg1, &arg1[0x1e])
                
                int64_t* rcx_38 = nullptr
                var_198 = nullptr
                int32_t rdx_22 = 0
                int32_t var_190_2 = 0
                
                if (arg3 != &var_198 && arg3[1].d != 0)
                    int64_t* r8_10 = *arg3
                    
                    if (r8_10 != 0)
                        (*(*r8_10 + 0x40))(r8_10, &var_198)
                        rdx_22 = var_190_2
                        rcx_38 = var_198
                
                void*** var_b8_2 = nullptr
                var_a8 = &data_143239620
                int64_t* var_a0_2 = arg1
                var_98 = 0
                int32_t var_90_2 = 0
                
                if (rdx_22 != 0 && rcx_38 != 0)
                    (*(*rcx_38 + 0x40))(rcx_38, &var_98)
                
                int64_t r12_2 = var_188
                var_a8 = &data_143239640
                var_c8 = sub_141d9bba0
                int64_t* var_160 = arg1
                int64_t var_158 = 0
                int32_t var_150_1 = var_180
                
                if (var_180 != 0)
                    sub_1405a4c70(&var_158, var_180, 0)
                    memcpy(var_158, r12_2, var_180 * 2)
                else
                    int32_t var_14c_1 = 0
                
                void var_148
                sub_141d94d20(&var_148, r15)
                uint64_t r15_1 = var_1c8
                uint64_t var_e8 = 0
                int32_t var_e0_1 = var_1c0_1
                int32_t var_dc
                
                if (var_1c0_1 != 0)
                    sub_1405a4c70(&var_e8, var_1c0_1, 0)
                    memcpy(var_e8, r15_1, var_1c0_1 * 2)
                else
                    var_dc = 0
                
                uint32_t count = arg1[0x1f].d
                int64_t rbx_7 = arg1[0x1e]
                int64_t var_d8 = 0
                int32_t var_cc
                
                if (count != 0)
                    sub_1405da9e0(&var_d8, count, 0)
                    memcpy(var_d8, rbx_7, count)
                else
                    var_cc = 0
                
                int64_t* rax_33 = sub_140a82f30(0xa0, 8)
                int64_t* rcx_47 = var_160
                *rax_33 = &data_143239660
                rax_33[1] = rcx_47
                sub_140596d10(&rax_33[2], &var_158)
                sub_141d94d20(&rax_33[4], &var_148)
                int32_t rax_34 = var_e0_1
                rax_33[0x10] = var_e8
                rax_33[0x11].d = rax_34
                *(rax_33 + 0x8c) = var_dc
                rax_33[0x12] = var_d8
                rax_33[0x13].d = count
                *(rax_33 + 0x9c) = var_cc
                *rax_33 = &data_143239680
                int64_t (* rax_39)(int64_t* arg1, void* arg2) = var_88
                
                if (rax_33 != -8)
                    rax_39 = j_sub_141d98550
                
                var_e8 = 0
                var_88 = rax_39
                __builtin_memset(&var_e0_1, 0, 0x18)
                sub_141d934e0(arg1, 0, &var_88, &var_c8)
                
                if (var_88 != 0)
                    int64_t* rcx_52 = &var_68
                    
                    if (rax_33 != 0)
                        rcx_52 = rax_33
                    
                    (*(*rcx_52 + 0x10))(rcx_52)
                
                sub_141d94de0(&var_160)
                
                if (var_c8 != 0)
                    void** const* rcx_54 = &var_a8
                    
                    if (var_b8_2 != 0)
                        rcx_54 = var_b8_2
                    
                    (*rcx_54)[2](rcx_54)
                
                sub_140745b20(&var_198)
                result = (*(*arg1 + 0xe8))(arg1)
            else
                arg1[0x73].d = 2
                int64_t* rcx_25 = nullptr
                int32_t rdx_15 = 0
                var_198 = nullptr
                int32_t var_190_1 = 0
                
                if (arg3 != &var_198 && arg3[1].d != 0)
                    int64_t* r8_6 = *arg3
                    
                    if (r8_6 != 0)
                        (*(*r8_6 + 0x40))(r8_6, &var_198)
                        rdx_15 = var_190_1
                        rcx_25 = var_198
                
                void*** var_b8_1 = nullptr
                var_a8 = &data_143239620
                int64_t* var_a0_1 = arg1
                var_98 = 0
                int32_t var_90_1 = 0
                
                if (rdx_15 != 0 && rcx_25 != 0)
                    (*(*rcx_25 + 0x40))(rcx_25, &var_98)
                
                int64_t rdi_1 = var_188
                var_a8 = &data_143239640
                var_c8 = j_sub_141d98060
                int64_t* rax_21 = arg1
                performanceCount.q = rax_21
                int64_t var_1b0 = 0
                int32_t var_1a8_1 = var_180
                
                if (var_180 != 0)
                    sub_1405a4c70(&var_1b0, var_180, 0)
                    memcpy(var_1b0, rdi_1, var_180 * 2)
                    rax_21 = performanceCount.q
                else
                    int32_t var_1a4_1 = 0
                
                void*** var_78_1 = nullptr
                var_68 = &data_142fe8568
                int64_t* var_60_1 = rax_21
                void var_58
                sub_140596d10(&var_58, &var_1b0)
                var_68 = &data_143239600
                var_88 = sub_141d9bd50
                sub_141d934e0(arg1, 5, &var_88, &var_c8)
                
                if (var_88 != 0)
                    void** const* rcx_31 = &var_68
                    
                    if (var_78_1 != 0)
                        rcx_31 = var_78_1
                    
                    (*rcx_31)[2](rcx_31)
                
                int64_t rcx_32 = var_1b0
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                if (var_c8 != 0)
                    void** const* rcx_33 = &var_a8
                    
                    if (var_b8_1 != 0)
                        rcx_33 = var_b8_1
                    
                    (*rcx_33)[2](rcx_33)
                
                result = sub_140745b20(&var_198)
        else if (arg3[1].d != 0)
            int64_t* rcx_21 = *arg3
            
            if (rcx_21 != 0)
                result = (*(*rcx_21 + 0x28))(rcx_21)
                
                if (result != 0)
                    if (arg3[1].d != 0)
                        rsi = *arg3
                    
                    result = (*(*rsi + 0x50))(rsi, &var_178)
        
        int64_t rcx_57 = var_188
        
        if (rcx_57 != 0)
            result = sub_140a74f90(rcx_57)
    else
        if (r15[0xb].b != 0)
            uint64_t** rax_4
            rax_4, arg2 = sub_141d9e760(arg1, &performanceCount)
            
            if (&var_1c8 != rax_4)
                uint64_t rcx_5 = var_1c8
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                var_1c8 = *rax_4
                *rax_4 = nullptr
                var_1c0_1 = rax_4[1].d
                int32_t var_1bc_2 = *(rax_4 + 0xc)
                rax_4[1] = 0
            
            int64_t rcx_7 = performanceCount.q
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            goto label_141da2e5d
        
        int32_t var_170_1 = 2
        
        if (arg3[1].d != 0)
            int64_t* rcx_18 = *arg3
            
            if (rcx_18 != 0)
                result = (*(*rcx_18 + 0x28))(rcx_18)
                
                if (result != 0)
                    if (arg3[1].d != 0)
                        rsi = *arg3
                    
                    result = (*(*rsi + 0x50))(rsi, &var_178)
    
    uint64_t rcx_58 = var_1c8
    
    if (rcx_58 != 0)
        result = sub_140a74f90(rcx_58)
else if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            if (arg3[1].d != 0)
                rsi = *arg3
            
            result = (*(*rsi + 0x50))(rsi, &var_178)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
