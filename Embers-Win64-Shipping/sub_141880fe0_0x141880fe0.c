// 函数: sub_141880fe0
// 地址: 0x141880fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* var_100 = arg1
void*** var_c8
sub_14188bee0(&var_c8, arg2)
void*** rbx = var_c8
void**** result

if (rbx == 0)
    result.b = 0
else
    int32_t i_3 = 0
    int64_t** var_f8 = nullptr
    int32_t var_ec_1 = 0
    char result_1 = 1
    int64_t var_c0
    int64_t* rax_2 = sub_141839c20(&var_c0, rbx)
    int32_t rax_3 = rax_2[1].d
    uint64_t result_2 = zx.q(rax_3 - 1)
    
    if (rax_3 == 0)
        result_2 = 0
    
    int32_t rsi_1 = arg1[7].d
    int32_t rax_5
    
    if (rsi_1 == 0)
        rax_5 = rsi_1 + 2
    
    if (rsi_1 != 0 || (result_2 + 1).d == 0)
        rax_5 = 1
    
    int64_t r15_1 = arg1[6]
    int32_t rcx_2 = result_2.d + rax_5
    int16_t* var_d8 = nullptr
    
    if (rsi_1 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_d8, rsi_1 + rcx_2, 0)
        memcpy(var_d8, r15_1, rsi_1 * 2)
    else
        int32_t var_cc_1 = 0
    
    sub_140a2cf70(&var_d8, *rax_2, result_2.d)
    int64_t rcx_6 = var_c0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* const r8_3 = &data_142d40450
    int64_t* r15_2 = var_100
    
    if (rsi_1 != 0)
        r8_3 = var_d8
    
    int64_t* var_e8 = nullptr
    int32_t i_4 = 0
    int64_t* rcx_7 = r15_2[8]
    (*(*rcx_7 + 0x90))(rcx_7, &var_e8, r8_3, 0, result_1)
    int64_t* r14_2 = var_e8
    void* rax_9 = &r14_2[sx.q(i_4) * 2]
    int64_t** r14_3
    
    if (r14_2 == rax_9)
    label_1418813a8:
        char r9_3 = r15_2[5].b
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_14186d560(rbx, arg3, &var_98, r9_3, arg4)
        r14_3 = var_f8
        int64_t** rdi_4 = r14_3
        void* rsi_4 = &r14_3[sx.q(i_3)]
        
        if (r14_3 != rsi_4)
            do
                sub_14186d560(*rdi_4, arg3, &var_98, r15_2[5].b, arg4)
                rdi_4 = &rdi_4[1]
            while (rdi_4 != rsi_4)
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        int64_t var_90
        var_90.d = 0
        int32_t var_68_2 = 0xffffffff
        int32_t var_64_2 = 0
        int64_t var_88
        sub_14059a8e0(&var_88, 0)
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_36 = var_98
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
    else
        int64_t** rbx_1 = var_f8
        
        do
            int64_t* rcx_8 = r15_2[8]
            int16_t* const r8_4
            
            if (r14_2[1].d == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *r14_2
            
            (*(*rcx_8 + 0x48))(rcx_8, &var_100, r8_4, 0, result_1)
            int64_t* rdx_6 = var_100
            
            if (rdx_6 == 0)
                result_2.b = 0
                result_1 = 0
            else
                void*** var_b0
                void**** rax_11 = sub_14188bee0(&var_b0, rdx_6)
                int64_t i_5 = sx.q(i_3)
                i_3 = (i_5 + 1).d
                
                if (i_3 s> var_ec_1)
                    sub_1405a4d70(&var_f8)
                    rbx_1 = var_f8
                
                result_2 = &rbx_1[i_5]
                *result_2 = *rax_11
                *rax_11 = nullptr
                void*** rcx_11 = var_b0
                
                if (rcx_11 != 0)
                    (**rcx_11)(rcx_11, 1)
                
                if (*result_2 == 0)
                    result_2.b = 0
                    result_1 = 0
                else
                    int32_t rax_14 = r15_2[7].d
                    int32_t r9_1 = rax_14 - 1
                    int32_t rax_15 = r14_2[1].d
                    
                    if (rax_14 == 0)
                        r9_1 = 0
                    
                    int32_t rdx_8 = rax_15 - 1
                    
                    if (rax_15 == 0)
                        rdx_8 = 0
                    
                    int16_t* const r8_5
                    
                    if (rax_15 == 0)
                        r8_5 = &data_142d40450
                    else
                        r8_5 = *r14_2
                    
                    int32_t rcx_13 = rdx_8 - r9_1
                    int32_t rax_16
                    
                    if (rcx_13 - 1 s>= 0)
                        rax_16 = rdx_8
                        
                        if (rcx_13 s<= rdx_8)
                            rax_16 = rcx_13 - 1
                    else
                        rax_16 = 0
                    
                    int32_t rdx_9 = 0
                    int64_t var_110 = 0
                    int32_t var_108_1 = 0
                    int16_t* rsi_3 = &r8_5[sx.q(rdx_8) - sx.q(rax_16)]
                    int32_t rcx_16 = 0
                    int32_t var_104_1 = 0
                    
                    if (rsi_3 != 0 && *rsi_3 != 0)
                        int64_t rdi_1 = -1
                        
                        do
                            rdi_1 += 1
                        while (rsi_3[rdi_1] != 0)
                        
                        if (rdi_1.d + 1 s> 0)
                            sub_1405947f0(&var_110, rdi_1.d + 1)
                            rcx_16 = var_104_1
                            rdx_9 = var_108_1
                        
                        int32_t rax_18 = rdi_1.d + 1 + rdx_9
                        var_108_1 = rax_18
                        
                        if (rax_18 s> rcx_16)
                            sub_140594770(&var_110)
                        
                        UnDecorator::getReferenceType(var_110, rsi_3, (rdi_1.d + 1) * 2)
                    
                    if (r15_2[5].b != 0)
                        int64_t* rcx_20 = var_100
                        sub_140a2e390(&var_c0, u"\t%u", (*(*rcx_20 + 0x28))(rcx_20))
                        int32_t var_b8
                        int32_t r8_10
                        
                        if (var_b8 == 0)
                            r8_10 = 0
                        else
                            r8_10 = var_b8 - 1
                        
                        sub_140a20ba0(&var_110, var_c0, r8_10)
                        int64_t rcx_23 = var_c0
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                    
                    int64_t rdi_3 = sx.q(arg3[1].d)
                    int32_t rax_21 = (rdi_3 + 1).d
                    arg3[1].d = rax_21
                    
                    if (rax_21 s> *(arg3 + 0xc))
                        sub_1405a4f90(arg3)
                    
                    int64_t* rcx_27 = (rdi_3 << 4) + *arg3
                    *rcx_27 = 0
                    *rcx_27 = var_110
                    var_110 = 0
                    rcx_27[1].d = var_108_1
                    *(rcx_27 + 0xc) = var_104_1
                    int64_t rcx_28 = var_110
                    var_108_1.q = 0
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    result_2 = zx.q(result_1)
                
                int64_t* rcx_29 = var_100
                
                if (rcx_29 != 0)
                    (**rcx_29)(rcx_29, 1)
            
            r14_2 = &r14_2[2]
        while (r14_2 != rax_9)
        
        rbx = var_c8
        
        if (result_2.b != 0)
            goto label_1418813a8
        
        r14_3 = var_f8
    
    int32_t i_2 = i_4
    int64_t* rdi_5 = var_e8
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_37 = *rdi_5
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            rdi_5 = &rdi_5[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdi_5 = var_e8
    
    if (rdi_5 != 0)
        sub_140a74f90(rdi_5)
    
    int16_t* rcx_39 = var_d8
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t** rdi_6 = r14_3
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_40 = *rdi_6
            
            if (rcx_40 != 0)
                (**rcx_40)(rcx_40, 1)
            
            rdi_6 = &rdi_6[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r14_3 != 0)
        sub_140a74f90(r14_3)
    
    (**rbx)(rbx, 1)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_138)
return result
