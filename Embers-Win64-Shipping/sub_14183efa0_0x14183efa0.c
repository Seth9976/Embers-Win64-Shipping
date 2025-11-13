// 函数: sub_14183efa0
// 地址: 0x14183efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rcx = arg3[1].d
int64_t* r12 = arg4
int64_t* r15 = arg3
int32_t result
int64_t* var_f8
int128_t var_a8

if (arg2 != 0)
    int32_t r10_1 = arg4[5].d
    void* rsi_1 = &arg4[2]
    int32_t rcx_12 = 0
    int32_t var_160_1 = 0
    int32_t r8_1 = 0
    int32_t var_15c_1 = 1
    void* var_158_1 = rsi_1
    int32_t var_150_1 = 0xffffffff
    int64_t var_14c_1 = 0
    
    if (r10_1 != 0)
        void* rax_4 = *(rsi_1 + 0x10)
        void* r9 = rsi_1
        
        if (rax_4 != 0)
            r9 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9
        
        if (rdx_5 != 0)
        label_14183f169:
            int32_t rax_11 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_15c_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_14c_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r10_1)
                var_14c_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_12)
                r8_1 += 0x20
                rcx_12 += 1
                var_14c_1:4.d = r8_1
                var_160_1 = rcx_12
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                var_150_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_14183f169
            
            var_14c_1.d = r10_1
    
    int32_t rdx_11 = r12[5].d
    var_f8 = r12
    double zmm2[0x2] = var_150_1.o
    int32_t r8_4 = rdx_11 s>> 5
    int64_t var_f0
    var_f0.o = var_160_1.o
    int128_t zmm0 = var_f8.o
    int32_t r9_2 = rdx_11 & 0xffffffe0
    int32_t var_188_1 = rdx_11
    int64_t var_e0
    var_e0.o = zmm2
    int64_t var_88_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_a8 = zmm0
    int64_t var_e8
    int128_t var_98_1 = var_e8.o
    
    if (rdx_11 != r10_1)
        void* rax_15 = *(rsi_1 + 0x10)
        void* rdi_1 = rsi_1
        
        if (rax_15 != 0)
            rdi_1 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(rdi_1 + (sx.q(r8_4) << 2)) & 0xffffffff << (rdx_11 & 0x1f).b
        
        if (rdx_10 != 0)
        label_14183f23e:
            result = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(result)
            int32_t r14_1
            
            if (result == 0)
                r14_1 = 0x20
            else
                r14_1 = 0x1f - temp0_4
            
            rdx_11 = r9_2 - r14_1 + 0x1f
            var_188_1 = rdx_11
            
            if (rdx_11 s<= r10_1)
                goto label_14183f267
        else
            while (true)
                int64_t rcx_16 = sx.q(r8_4)
                r9_2 += 0x20
                r8_4 += 1
                
                if (rcx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(rdi_1 + (rcx_16 << 2) + 4)
                
                if (rdx_10 != 0)
                    goto label_14183f23e
        
        rdx_11 = r10_1
        var_188_1 = rdx_11
        goto label_14183f267
    
    while (true)
        int64_t rcx_18 = sx.q(var_98_1:0xc.d)
        
        if (rcx_18.d != rdx_11 || var_98_1.q != rsi_1)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rdx_12 = var_a8.q
        
        if (result.b == 0 || rdx_12 != r12)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            break
        
        int64_t* rax_22 = (*(*arg1 + 0x1c8))(arg1, *rdx_12 + rcx_18 * 0x18)
        
        if (rax_22 != 0)
            sub_140a464c0()
            int32_t r14_2 = rax_22[1].d
            int32_t r14_3
            
            if (r14_2 == 0)
                r14_3 = 0
            else
                r14_3 = r14_2 - 1
            
            int32_t rsi_3 = r15[1].d
            int32_t rax_24
            
            if (rsi_3 == 0)
                rax_24 = rsi_3 + 2
            
            if (rsi_3 != 0 || r14_3 == 0xffffffff)
                rax_24 = 1
            
            int64_t r15_1 = *r15
            int32_t rcx_21 = r14_3 + rax_24
            int16_t* var_170 = nullptr
            
            if (rsi_3 != 0 || rcx_21 != 0)
                sub_1405a4c70(&var_170, rsi_3 + rcx_21, 0)
                memcpy(var_170, r15_1, rsi_3 * 2)
            else
                int32_t var_164_1 = 0
            
            sub_140a2cf70(&var_170, *rax_22, r14_3)
            int16_t* const rdx_18 = &data_142d40450
            
            if (rsi_3 != 0)
                rdx_18 = var_170
            
            int64_t rax_26 = (*(data_14399ea08 + 0x108))(&data_14399ea08, rdx_18)
            int16_t* rcx_25 = var_170
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t r9_4 = *arg1
            int32_t var_198
            char* var_190
            int32_t rax_29
            int32_t rcx_30
            int32_t* rdx_23
            int64_t* rsi_5
            int64_t* rdi_3
            
            if ((*(r9_4 + 0x218))(arg1, arg2, rax_22, r9_4, var_198, var_190, var_188_1, arg3, arg4)
                    != 0)
                rsi_5 = arg5
                int32_t var_120
                sub_140598750(rsi_5, &var_120)
                int64_t* var_118
                rdi_3 = var_118
                sub_140596d10(rdi_3, rax_22)
                rdi_3[2].d = 0xffffffff
                int32_t rax_28 = rdi_3[1].d
                int16_t* rdx_22
                
                if (rax_28 == 0)
                    rdx_22 = &data_142d40450
                else
                    rdx_22 = *rdi_3
                
                int32_t rcx_29 = rax_28 - 1
                
                if (rax_28 == 0)
                    rcx_29 = 0
                
                rax_29 = sub_1405969c0(rcx_29, rdx_22)
                rcx_30 = var_120
                void var_130
                rdx_23 = &var_130
            label_14183f43c:
                var_190 = nullptr
                var_198 = rcx_30
                sub_14059a6d0(rsi_5, rdx_23, rax_29, rdi_3, var_198, var_190)
            else if (rcx s> 1 && (rax_26 s< 0 || rax_26 != rax_22[0xb]))
                rsi_5 = arg5
                int32_t var_110
                sub_140598750(rsi_5, &var_110)
                int64_t* var_108
                rdi_3 = var_108
                sub_140596d10(rdi_3, rax_22)
                rdi_3[2].d = 0xffffffff
                int32_t rax_30 = rdi_3[1].d
                int16_t* rdx_26
                
                if (rax_30 == 0)
                    rdx_26 = &data_142d40450
                else
                    rdx_26 = *rdi_3
                
                int32_t rcx_33 = rax_30 - 1
                
                if (rax_30 == 0)
                    rcx_33 = 0
                
                rax_29 = sub_1405969c0(rcx_33, rdx_26)
                rcx_30 = var_110
                void var_12c
                rdx_23 = &var_12c
                goto label_14183f43c
            r12 = arg4
            r15 = arg3
        
        var_98_1:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)
        rdx_11 = var_188_1
    label_14183f267:
        rsi_1 = var_158_1
else
    int64_t rax_2 = *arg1
    __builtin_memset(&var_f8, 0, 0x2c)
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int32_t var_c4_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    (*(rax_2 + 0x198))(arg1, &var_f8)
    sub_141814510(arg5, sub_140967750(&var_f8, &var_a8, r12))
    int32_t var_60_1 = 0
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    sub_14059ad90(&var_a8, 0)
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    int64_t rcx_7 = var_a8.q
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int32_t var_b0_2 = 0
    
    if (var_b8_1 != 0)
        sub_140a74f90(var_b8_1)
    
    result = sub_14059ad90(&var_f8, 0)
    int64_t var_d8
    
    if (var_d8 != 0)
        result = sub_140a74f90(var_d8)
    
    int64_t* rcx_11 = var_f8
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
