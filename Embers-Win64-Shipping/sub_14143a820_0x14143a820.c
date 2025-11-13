// 函数: sub_14143a820
// 地址: 0x14143a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t var_168 = arg3
char arg_20 = 0
arg_20 = 0
void* rsi = arg2
int32_t r15 = 0
int64_t* r12_1 = arg4 + 0x10 + sx.q(arg6[0x2a9].d) * 0x58

if (data_1439b6da0 == 0 || r12_1[9].b == 0)
    void var_98
    sub_142118c60(&var_98, arg4, arg5)
    arg_20 = 1
    int64_t* rax_1 = j_sub_140a82f30(0x58)
    r12_1 = rax_1
    
    if (rax_1 == 0)
        r12_1 = nullptr
    else
        __builtin_memset(rax_1, 0, 0x49)
        rax_1[0xa] = 0
    
    sub_142123690(arg4, r12_1, &var_98, rsi)
    int16_t rax_2 = *(arg1 + 0x128)
    
    if (rax_2 != 0xffff)
        void*** rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_6[6]
        
        if (rax_3 u> *(rsi + 0x38))
            sub_140b0e3d0(rsi + 0x30, 0x38)
            rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_6[6]
        
        *(rsi + 0x30) = rax_3
        *(rsi + 0x14) += 1
        **(rsi + 8) = rcx_6
        *(rsi + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142f86150
        rcx_6[2] = arg3
        rcx_6[3].d = zx.d(rax_2)
        rcx_6[4] = r12_1[1]
        void* rax_7 = r12_1[2]
        rcx_6[5] = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
            var_168 = arg_18
        
        void* rcx_10 = rcx_6[4][2]
        *(rcx_10 + 8) += 1
else
    sub_141083500(rsi, &arg_18, arg1 + 0x128, *r12_1)

int32_t result_3 = r12_1[8].d
void* r9_3 = arg1
int32_t rdx_3 = 0
int32_t var_1a8 = 0
int32_t result_5 = *(r9_3 + 0x120)

if (result_5 s<= result_3)
    result_3 = result_5

int64_t result = sx.q(result_3)
int64_t result_1 = result

if (result_3 s> 0)
    int64_t r14_1 = 0
    int64_t var_1a0_1 = 0
    
    do
        int64_t r13_2 = sx.q(rdx_3) << 4
        int64_t result_2 = sub_141455900(r9_3, r12_1[7] + r13_2, *(*arg6 + 0x20))
        
        if (result_2 == 0)
            int32_t r11_1 = (data_143a2eb28).d
            int32_t rcx_13 = 0
            int16_t* var_198 = nullptr
            int32_t r8_6 = 0
            int32_t var_190_1 = result_2.d
            int32_t var_188_1 = 0
            int32_t var_184_1 = 1
            void* var_180_1 = &data_143a2eb10
            int32_t var_178_1 = 0xffffffff
            int64_t result_4 = result_2
            
            if (r11_1 != 0)
                void* rax_11 = data_143a2eb20
                void* r9_4 = &data_143a2eb10
                
                if (rax_11 != 0)
                    r9_4 = rax_11
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rdx_7 = *r9_4
                
                if (rdx_7 != 0)
                label_14143aadb:
                    int32_t rax_18 = neg.d(rdx_7) & rdx_7
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                    int32_t var_184_2 = rax_18
                    int32_t rax_19
                    
                    if (rax_18 == 0)
                        rax_19 = 0x20
                    else
                        rax_19 = 0x1f - temp0_2
                    
                    result_4.d = r8_6 - rax_19 + 0x1f
                    
                    if (r8_6 - rax_19 + 0x1f s> r11_1)
                        result_4.d = r11_1
                else
                    while (true)
                        int64_t rdx_8 = sx.q(rcx_13)
                        r8_6 += 0x20
                        rcx_13 += 1
                        result_4:4.d = r8_6
                        var_188_1 = rcx_13
                        
                        if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_7 = *(r9_4 + (rdx_8 << 2) + 4)
                        int32_t var_178_2 = 0xffffffff
                        
                        if (rdx_7 != 0)
                            goto label_14143aadb
                    
                    result_4.d = r11_1
            
            int16_t var_120_1 = 0
            int64_t* var_58_1 = &data_143a2eb00
            int64_t* rdi_2 = &data_143a2eb00
            int64_t* var_128_1 = &data_143a2eb00
            int128_t var_a8_1 = 0xffffffff
            int128_t zmm0_1
            zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_138_1 = zmm0_1
            int128_t var_158 = (&data_143a2eb00).o
            int128_t var_148_1 = var_188_1.o
            int128_t var_60 = zmm0_1
            int32_t var_1b8
            int16_t* const rsi_2
            
            if (0 s< r11_1)
                int32_t i = var_148_1:0xc.d
                
                do
                    int64_t* r14_2 = var_158.q
                    int64_t rdi_4 = sx.q(i) << 5
                    void* rsi_1 = *(rdi_4 + *r14_2 + 0x10)
                    int64_t var_d0
                    
                    if (rsi_1 != 0)
                        int64_t var_118 = *(rsi_1 + 0x10)
                        r15 |= 1
                        int64_t* rax_23 = sub_140b63b70(&var_118, &var_d0)
                        
                        if (rax_23[1].d != 0)
                            *rax_23
                    
                    int16_t* var_f0
                    sub_140b291e0(*r14_2 + rdi_4, &var_f0, 0)
                    int16_t* const rax_24 = &data_142d40450
                    int32_t var_e8
                    
                    if (var_e8 != 0)
                        rax_24 = var_f0
                    
                    var_1b8.q = rax_24
                    int64_t var_100
                    sub_140a2e390(&var_100, u"\n0x%p: %s: %s", rsi_1)
                    int32_t var_f8
                    int32_t r8_10
                    
                    if (var_f8 == 0)
                        r8_10 = 0
                    else
                        r8_10 = var_f8 - 1
                    
                    sub_140a20ba0(&var_198, var_100, r8_10)
                    int64_t rcx_20 = var_100
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    int16_t* rcx_21 = var_f0
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    if ((r15.b & 1) != 0)
                        int64_t rcx_22 = var_d0
                        r15 &= 0xfffffffe
                        
                        if (rcx_22 != 0)
                            sub_140a74f90(rcx_22)
                    
                    var_148_1:8.d &= not.d(var_158:0xc.d)
                    sub_14059bdd0(&var_158:8)
                    i = var_148_1:0xc.d
                while (i s< *(var_148_1.q + 0x18))
                
                rdi_2 = var_128_1
                rsi_2 = var_198
            
            if (0 s>= r11_1 || var_190_1 == 0)
                rsi_2 = &data_142d40450
            
            int32_t rbx_3 = data_143a2eb08 - data_143a2eb34
            int16_t* var_e0
            sub_140b291e0(r12_1[7] + r13_2, &var_e0, 0)
            int16_t* const r9_6 = &data_142d40450
            int16_t* const var_1b0_1 = rsi_2
            int32_t var_d8
            
            if (var_d8 != 0)
                r9_6 = var_e0
            
            var_1b8 = rbx_3
            sub_140af98a0("Unknown", 0x135, 
                Failed to find parameter collection buffer with GUID '%s'.\nCurrently %i listed default "
            "instances: %s", r9_6)
            int16_t* rcx_26 = var_e0
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            sub_140afbb40()
            
            if (var_120_1.b != 0 && var_120_1:1.b != 0)
                sub_140cb1970(rdi_2, rdi_2[1].d - *(rdi_2 + 0x34), 1)
            
            int16_t* rcx_28 = var_198
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            r14_1 = var_1a0_1
            rsi = arg2
        
        r9_3 = arg1
        void* rax_28 = *(r9_3 + 0x118)
        
        if ((rax_28.b & 1) != 0)
            rax_28 = (rax_28 s>> 1) + r9_3 + 0x118
        
        int16_t rcx_30 = *(rax_28 + (r14_1 << 1))
        result = 0xffff
        
        if (rcx_30 != 0xffff)
            void*** rcx_33 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_30 = &rcx_33[5]
            
            if (rax_30 u> *(rsi + 0x38))
                sub_140b0e3d0(rsi + 0x30, 0x30)
                r9_3 = arg1
                rcx_33 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                rax_30 = &rcx_33[5]
            
            *(rsi + 0x30) = rax_30
            void**** rax_31 = *(rsi + 8)
            *(rsi + 0x14) += 1
            *rax_31 = rcx_33
            *(rsi + 8) = &rcx_33[1]
            rcx_33[1] = 0
            *rcx_33 = &data_142f11618
            rcx_33[2] = var_168
            result = result_2
            rcx_33[4] = result
            rcx_33[3].d = zx.d(rcx_30)
        
        rdx_3 = var_1a8 + 1
        r14_1 += 1
        var_1a8 = rdx_3
        var_1a0_1 = r14_1
    while (r14_1 s< result_1)

if (arg_20 == 0 || r12_1 == 0)
    return result

sub_14211ad30(r12_1)
return j_sub_140a74f90(r12_1)
