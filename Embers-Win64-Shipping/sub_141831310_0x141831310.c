// 函数: sub_141831310
// 地址: 0x141831310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
CRITICAL_SECTION* lpCriticalSection = arg1 + 8
int64_t* r12 = arg2
EnterCriticalSection(lpCriticalSection)
int64_t* rsi = arg1 + 0x30
void* r14 = nullptr
void var_110

if (*sub_1408f1b50(rsi, &var_110, r12) == 0xffffffff)
    int64_t* rax_1 = j_sub_140a82f30(8)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        *rax_1 = arg4
    
    int64_t* var_148 = rax_1
    int64_t* var_b8 = r12
    int64_t** var_b0_1 = &var_148
    void var_10c
    int32_t rcx_3 = sub_141818c20(rsi, &var_10c, &var_b8, nullptr)
    int32_t rsi_1 = r12[1].d
    int64_t rdi_1 = *r12
    int64_t* var_100 = var_148
    int64_t var_158 = 0
    sub_1405a4c70(&var_158, sbb.d(rcx_3, rcx_3, rsi_1 != 0) + 3 + rsi_1, 0)
    memcpy(var_158, rdi_1, rsi_1 * 2)
    sub_140a20ba0(&var_158, &data_142d85f5c, 2)
    int64_t var_120 = var_158
    int32_t var_118_1 = rsi_1
    int32_t var_14c
    int32_t var_114_1 = var_14c
    int64_t** var_a8 = &var_100
    int64_t* var_a0_1 = &var_120
    var_158 = 0
    int32_t var_150_1
    var_150_1.q = 0
    void var_108
    sub_141818710(arg1 + 0x80, &var_108, &var_a8, nullptr)
    int64_t rcx_9 = var_120
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t* var_f8 = var_148
    int64_t** var_98 = &var_f8
    char* var_90_1 = &arg_18
    void var_104
    sub_1418188e0(arg1 + 0xd0, &var_104, &var_98, nullptr)
    int32_t rax_9 = r12[1].d
    int32_t var_13c_1 = 1
    void* var_138_1 = arg1 + 0x90
    int32_t r8_6 = 0
    int32_t var_130_1 = 0xffffffff
    int32_t rcx_11 = rax_9 + 1
    int64_t var_12c_1 = 0
    int32_t rax_10 = *(arg1 + 0x128)
    
    if (rax_9 == 0)
        rcx_11 = 2
    
    if (rax_10 u>= rcx_11)
        rcx_11 = rax_10
    
    *(arg1 + 0x128) = rcx_11
    int32_t rcx_12 = 0
    int32_t r11_1 = *(arg1 + 0xa8)
    int32_t var_140_1 = 0
    
    if (r11_1 != 0)
        void* rax_11 = *(arg1 + 0xa0)
        void* r9 = arg1 + 0x90
        
        if (rax_11 != 0)
            r9 = rax_11
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *r9
        
        if (rdx_9 != 0)
        label_14183155b:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
            int32_t var_13c_2 = rax_18
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_2
            
            var_12c_1.d = r8_6 - rax_19 + 0x1f
            
            if (r8_6 - rax_19 + 0x1f s> r11_1)
                var_12c_1.d = r11_1
        else
            while (true)
                int64_t rdx_10 = sx.q(rcx_12)
                r8_6 += 0x20
                rcx_12 += 1
                var_12c_1:4.d = r8_6
                var_140_1 = rcx_12
                
                if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r9 + (rdx_10 << 2) + 4)
                var_130_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_14183155b
            
            var_12c_1.d = r11_1
    
    int32_t rdx_11 = *(arg1 + 0xa8)
    double zmm2[0x2] = var_130_1.o
    int128_t var_60_1 = var_140_1.o
    int32_t r12_1 = 0xffffffff << (rdx_11.b & 0x1f)
    int32_t r8_9 = rdx_11 s>> 5
    int32_t r9_2 = rdx_11 & 0xffffffe0
    int32_t var_78_1 = r12_1
    int32_t var_74_1 = rdx_11
    double var_50_1[0x2] = zmm2
    int64_t var_c0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int128_t var_e0 = (arg1 + 0x80).o
    int128_t var_d0_1 = var_60_1
    
    if (rdx_11 != r11_1)
        void* rax_21 = *(arg1 + 0xa0)
        void* r10_1 = arg1 + 0x90
        
        if (rax_21 != 0)
            r10_1 = rax_21
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_15 = *(r10_1 + (sx.q(r8_9) << 2)) & r12_1
        int32_t var_74_3
        
        if (rdx_15 != 0)
        label_141831632:
            int32_t rax_28 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_28)
            int32_t rdi_2
            
            if (rax_28 == 0)
                rdi_2 = 0x20
            else
                rdi_2 = 0x1f - temp0_4
            
            int32_t var_74_2 = r9_2 - rdi_2 + 0x1f
            
            if (r9_2 - rdi_2 + 0x1f s> r11_1)
                var_74_3 = r11_1
        else
            while (true)
                int64_t rcx_17 = sx.q(r8_9)
                r9_2 += 0x20
                r8_9 += 1
                
                if (rcx_17.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r10_1 + (rcx_17 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_141831632
            
            var_74_3 = r11_1
    
    while (true)
        int64_t rcx_19 = sx.q(var_d0_1:0xc.d)
        int64_t rax_30 = var_e0.q
        
        if (rcx_19.d == (var_78_1.q u>> 0x20).d && var_d0_1.q == arg1 + 0x90
                && rax_30 == arg1 + 0x80)
            break
        
        void* rdi_5 = (rcx_19 << 5) + *rax_30
        
        while (true)
            int32_t rax_31 = *(rdi_5 + 0x10)
            int32_t rcx_20 = rax_31 - 1
            
            if (rax_31 == 0)
                rcx_20 = 0
            
            if (rcx_20 s>= *(arg1 + 0x128))
                break
            
            sub_140a20ba0(rdi_5 + 8, &data_142d404d4, 1)
        
        var_d0_1:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
    
    r12 = arg2

int32_t arg_8
sub_1408f1b50(rsi, &arg_8, r12)
int64_t rax_34 = sx.q(arg_8)

if (rax_34.d != 0xffffffff)
    r14 = (rax_34 << 5) + *rsi

int64_t result = *(r14 + 0x10)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return result
