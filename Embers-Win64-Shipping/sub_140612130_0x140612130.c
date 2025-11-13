// 函数: sub_140612130
// 地址: 0x140612130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
uint32_t rbx = *(arg2 + 8)
int32_t result = rbx - 8
char var_1b8
int32_t count_2
uint128_t zmm0

if (result u<= 6)
    char rdx = *(arg2 + 0x18)
    char r8 = *(arg2 + 0x1c)
    char rcx = *(arg2 + 0x20)
    
    if (*(arg1 + 0xbc) != 0 && rbx == 9)
        rbx = zx.d(rbx.b)
        
        if (rcx == 0)
            rbx = 8
    
    zmm0 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0xc)))
    char var_1b7_1 = rdx
    char var_1b5_1 = rcx
    var_1b8 = rbx.b
    char var_1b6_1 = r8
    int32_t var_1b4_1 = arg3
    int32_t var_1ac_1 = zmm0.d
    count_2 = arg4
    result = sub_1405a9f90(arg1 + 0x1c8, &var_1b8)
else
    int64_t rcx_10
    char* rsi_1
    
    if (rbx != 0xff)
        if (rbx == 0x51)
            var_1b8.d = (*(arg2 + 0x24)).d
            int32_t var_1b4_2 = *(arg2 + 0x20)
            count_2 = arg3
            int32_t var_1ac_3 = arg4
            result = sub_1405a9f90(arg1 + 0x208, &var_1b8)
        else
            char var_1a8
            
            if (rbx == 0xf0 || rbx == 0xf7)
                if (*(arg1 + 0x1e0) s> 0)
                    void** rdi_4 = *(arg2 + 0x20)
                    var_1b8.q = 0
                    rsi_1 = nullptr
                    char var_1c8_1 = 0
                    int32_t count_6 = 0
                    int32_t var_1ac_6 = 0
                    
                    if (rbx == 0xf0)
                        count_2 = 1
                        sub_1405daba0(&var_1b8)
                    label_1406125c2:
                        rsi_1 = var_1b8.q
                        count_6 = count_2
                        *rsi_1 = 0xf0
                    else if (rbx == 0xf7 && rdi_4[2] u> 3)
                        count_2 = 1
                        sub_1405daba0(&var_1b8)
                        var_1c8_1 = 1
                        goto label_1406125c2
                    
                    uint32_t count_1 = rdi_4[2].d
                    
                    if (rdi_4[3] u>= 0x10)
                        rdi_4 = *rdi_4
                    
                    int32_t count = count_6 + count_1
                    count_2 = count
                    
                    if (count s> var_1ac_6)
                        sub_1405daba0(&var_1b8)
                        count = count_2
                        rsi_1 = var_1b8.q
                    
                    memcpy(&rsi_1[sx.q(count_6)], rdi_4, count_1)
                    
                    if (var_1c8_1 != 0 && rsi_1[sx.q(count - 1)] != 0xf7)
                        char* count_3 = sx.q(count)
                        count = (&count_3[1]).d
                        count_2 = count
                        
                        if (count s> var_1ac_6)
                            sub_1405daba0(&var_1b8)
                            count = count_2
                            rsi_1 = var_1b8.q
                        
                        *(count_3 + rsi_1) = 0xf7
                    
                    var_1b8.q = 0
                    int32_t var_1ac_7 = 0
                    count_2 = count
                    
                    if (count != 0)
                        sub_1405da9e0(&var_1b8, count, 0)
                        memcpy(var_1b8.q, rsi_1, count)
                    
                    var_1a8.d = arg3
                    int32_t var_1a4_3 = arg4
                    result = sub_1405a9f90(arg1 + 0x1d8, &var_1b8)
                    rcx_10 = var_1b8.q
                    
                    if (rcx_10 == 0)
                        goto label_1406126af
                    
                    goto label_1406126aa
            else if (rbx s< 1)
                if (rbx == 0xffffff01 && *(arg1 + 0x220) s> 0)
                    zmm0 = zx.o(*(arg2 + 0xc))
                    int32_t rax_12 = *(arg2 + 0x2c) + 1
                    count_2 = arg3
                    zmm0 = _mm_cvtepi32_ps(zmm0)
                    var_1b8.d = rax_12
                    int32_t var_1b4_3 = *(arg2 + 0x28)
                    int32_t var_1ac_5 = zmm0.d
                    result = sub_1405a9f90(arg1 + 0x218, &var_1b8)
            else if (rbx s<= 7 && *(arg1 + 0x1f0) s> 0)
                int64_t* var_198
                sub_140592d30(&var_198, arg2 + 0x20)
                int64_t* rdx_11 = &var_198
                int64_t var_180
                
                if (var_180 u>= 0x10)
                    rdx_11 = var_198
                
                void var_178
                void* rax_4 = sub_14060c4d0(&var_178, rdx_11)
                char* r12_1 = nullptr
                var_1b8.q = 0
                int32_t count_5 = 0
                count_2 = 0
                int16_t* r13_3 = *(rax_4 + 0x108)
                int32_t rax_5 = 0
                int32_t var_1ac_4 = 0
                
                if (r13_3 != 0 && *r13_3 != 0)
                    int64_t rdi_2 = -1
                    
                    do
                        rdi_2 += 1
                    while (r13_3[rdi_2] != 0)
                    
                    if (rdi_2.d + 1 s> 0)
                        sub_1405947f0(&var_1b8, rdi_2.d + 1)
                        rax_5 = var_1ac_4
                        count_5 = count_2
                        r12_1 = var_1b8.q
                    
                    count_5 += rdi_2.d + 1
                    count_2 = count_5
                    
                    if (count_5 s> rax_5)
                        sub_140594770(&var_1b8)
                        count_5 = count_2
                        r12_1 = var_1b8.q
                    
                    UnDecorator::getReferenceType(r12_1, r13_3, (rdi_2.d + 1) * 2)
                
                int64_t var_78
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                if (var_180 u>= 0x10)
                    int64_t* rcx_18 = var_198
                    int64_t* rax_6 = rcx_18
                    
                    if (var_180 + 1 u>= 0x1000)
                        rcx_18 = rcx_18[-1]
                        
                        if (rax_6 - rcx_18 - 8 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                    
                    j_sub_140a74f90(rcx_18)
                
                count_2.q = 0
                int32_t var_1a4_2 = 0
                var_1b8 = rbx.b
                var_1a8.d = count_5
                
                if (count_5 != 0)
                    sub_1405a4c70(&count_2, count_5, 0)
                    memcpy(count_2.q, r12_1, count_5 * 2)
                
                int32_t var_1a0_2 = arg3
                int32_t var_19c_1 = arg4
                result = sub_1405a9f90(arg1 + 0x1e8, &var_1b8)
                int64_t rcx_22 = count_2.q
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
                
                if (r12_1 != 0)
                    result = sub_140a74f90(r12_1)
    else if (*(arg1 + 0x200) s> 0)
        int64_t count_4 = sx.q(*(arg2 + 0x30))
        int64_t r13_1 = *(arg2 + 0x28)
        rsi_1 = nullptr
        var_1b8.q = 0
        count_2 = count_4.d
        
        if (count_4.d != 0)
            sub_1405c4a90(&var_1b8, count_4.d, 0)
            rsi_1 = var_1b8.q
            memcpy(rsi_1, r13_1, (count_4 << 2).d)
            count_4 = zx.q(count_2)
        
        char r13_2 = *(arg2 + 0x20)
        var_1b8.q = 0
        count_2 = count_4.d
        int64_t rdi_1
        
        if (count_4.d != 0)
            sub_1405c4a90(&var_1b8, count_4.d, 0)
            rdi_1 = var_1b8.q
            memcpy(rdi_1, rsi_1, count_4.d << 2)
            count_4 = zx.q(count_2)
        else
            rdi_1 = 0
        
        var_1b8.q = 0
        int32_t var_1ac_2 = 0
        count_2 = count_4.d
        
        if (count_4.d != 0)
            sub_1405c4a90(&var_1b8, count_4.d, 0)
            memcpy(var_1b8.q, rdi_1, count_4.d << 2)
        
        int32_t var_1a0_1 = arg4
        char var_1a8_1 = r13_2
        int32_t var_1a4_1 = arg3
        result = sub_1405a9f90(arg1 + 0x1f8, &var_1b8)
        int64_t rcx_9 = var_1b8.q
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        if (rdi_1 == 0)
            goto label_1406126af
        
        rcx_10 = rdi_1
    label_1406126aa:
        result = sub_140a74f90(rcx_10)
    label_1406126af:
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
