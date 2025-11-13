// 函数: sub_140b9b770
// 地址: 0x140b9b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int32_t var_c4 = 1
void* r10 = arg1 + 0x1e8
int32_t var_c8 = 0
int32_t r11 = *(r10 + 0x28)
void* r13 = r10 + 0x10
void* var_d8 = r10
int32_t rcx = 0
void* var_c0 = r13
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int32_t r8 = 0
int32_t var_b0 = 0

if (r11 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_b4_2
    
    if (rdx_2 != 0)
    label_140b9b828:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_b4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_b4_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_b0_1 = rcx
            var_c8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140b9b828
        
        var_b4_2 = r11

int32_t rdx_5 = *(r10 + 0x28)
double zmm2[0x2] = var_b8.o
double var_50[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_60 = var_c8.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_70 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_b8_1 = r15
int32_t var_b4_3 = rdx_5
int128_t var_90 = r10.o
int128_t var_58
int128_t var_80 = var_58

if (rdx_5 != r11)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r15
    int32_t var_b4_5
    
    if (rdx_9 != 0)
    label_140b9b8f2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_b4_4 = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_b4_5 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140b9b8f2
        
        var_b4_5 = r11
    r10 = var_d8

while (true)
    int64_t rcx_7 = sx.q(var_80:0xc.d)
    void** result = var_90.q
    
    if (rcx_7.d == (var_b8_1.q u>> 0x20).d && var_80.q == r13 && result == r10)
        result.b = 1
        return result
    
    void* rbx_2 = *(*result + rcx_7 * 0x10)
    void* var_e8 = rbx_2
    void arg_20
    
    if (*sub_1408296b0(arg2, &arg_20, rbx_2) == 0xffffffff)
        void var_98
        sub_140812a70(arg2, &var_98, &var_e8, nullptr)
        void* rax_22 = sub_140cba0e0(rbx_2)
        
        if (rax_22 != 0)
            void* r9_5 = *(rax_22 + 0x2e0)
            
            if (r9_5 != 0)
                int32_t var_e0
                int32_t var_dc
                void* rcx_33
                wchar16* rdx_31
                int16_t* const r8_11
                
                if (*(r9_5 + 0x4fa) == 0)
                    int64_t* rax_34 = sub_140b63b70(arg1 + 0x14, &var_c8)
                    
                    if (rax_34[1].d == 0)
                        r8_11 = &data_142d40450
                    else
                        r8_11 = *rax_34
                    
                    rdx_31 = u"%s Doesn't have all exports Serialized"
                label_140b9bc82:
                    sub_140a2e390(&var_e8, rdx_31, r8_11)
                    
                    if (arg3 == &var_e8)
                        rcx_33 = var_e8
                        
                        if (rcx_33 == 0)
                            goto label_140b9bcce
                        
                        goto label_140b9bcc9
                    
                    void* rcx_39 = *arg3
                    
                    if (rcx_39 != 0)
                        sub_140a74f90(rcx_39)
                    
                    *arg3 = var_e8
                    arg3[1].d = var_e0
                    var_e0.q = 0
                    *(arg3 + 0xc) = var_dc
                    var_e8 = nullptr
                    goto label_140b9bcce
                
                if (*(r9_5 + 0xb8) s< *(r9_5 + 0x100))
                    int64_t* rax_33 = sub_140b63b70(arg1 + 0x14, &var_c8)
                    
                    if (rax_33[1].d == 0)
                        r8_11 = &data_142d40450
                        rdx_31 = u"%s Doesn't have all objects processed by DeferredPostLoad"
                    else
                        r8_11 = *rax_33
                        rdx_31 = u"%s Doesn't have all objects processed by DeferredPostLoad"
                    
                    goto label_140b9bc82
                
                void* rax_23 = *(rax_22 + 0x18)
                void* rdx_15 = (sx.q(*(rax_22 + 0x20)) << 7) + rax_23
                void* var_a8
                void* rcx_18
                
                if (rax_23 != rdx_15)
                    while (true)
                        void* rcx_13 = *(rax_23 + 0x40)
                        
                        if (rcx_13 != 0 && (*(rcx_13 + 8) & 0x1400) != 0)
                            int64_t* rax_27 = sub_140d21830(rcx_13, &var_a8, 0, 0)
                            int16_t* const r8_6
                            
                            if (rax_27[1].d == 0)
                                r8_6 = &data_142d40450
                            else
                                r8_6 = *rax_27
                            
                            sub_140a2e390(&var_e8, u"%s has not been %s", r8_6)
                            
                            if (arg3 == &var_e8)
                                void* rcx_19 = var_e8
                                
                                if (rcx_19 != 0)
                                    sub_140a74f90(rcx_19)
                                
                                rcx_18 = var_a8
                            else
                                void* rcx_17 = *arg3
                                
                                if (rcx_17 != 0)
                                    sub_140a74f90(rcx_17)
                                
                                rcx_18 = var_a8
                                *arg3 = var_e8
                                arg3[1].d = var_e0
                                *(arg3 + 0xc) = var_dc
                                var_e0.q = 0
                                var_e8 = nullptr
                            
                            break
                        
                        rax_23 -= -0x80
                        
                        if (rax_23 == rdx_15)
                            goto label_140b9b9f6
                    
                    goto label_140b9bcd5
                
            label_140b9b9f6:
                
                if (sub_140b9b770(r9_5, arg2, arg3) == 0)
                    int64_t* rax_30 = sub_140b63b70(arg1 + 0x14, &var_c8)
                    void* rcx_22 = *rax_30
                    int32_t rdx_19 = rax_30[1].d
                    int32_t rdx_20 = neg.d(rdx_19)
                    *rax_30 = 0
                    int32_t r8_7 = rax_30[1].d
                    var_e8 = rcx_22
                    int32_t rcx_23 = *(rax_30 + 0xc)
                    int32_t rdx_23 = sbb.d(rdx_20, rdx_20, rdx_19 != 0) + 3 + r8_7
                    rax_30[1] = 0
                    
                    if (rdx_23 s> rcx_23)
                        sub_1405947f0(&var_e8, rdx_23)
                    
                    sub_140a20ba0(&var_e8, &data_142e84ca0, 2)
                    void* r15_1 = var_e8
                    int32_t rbx_5 = arg3[1].d
                    var_e8 = nullptr
                    int32_t var_e0_1
                    var_e0_1.q = 0
                    int32_t r14_3
                    
                    if (r8_7 s> 1)
                        int32_t r14_4 = rbx_5 - 1
                        
                        if (rbx_5 == 0)
                            r14_4 = 0
                        
                        int32_t rdx_26
                        
                        if (r8_7 == 0)
                            rdx_26 = r8_7 + 1
                        
                        if (r8_7 != 0 || r14_4 == 0)
                            rdx_26 = 0
                        
                        var_d8 = r15_1
                        int32_t rdx_28 = rdx_26 + r14_4 + r8_7
                        r15_1 = nullptr
                        
                        if (rdx_28 s> rcx_23)
                            sub_1405947f0(&var_d8, rdx_28)
                        
                        sub_140a20ba0(&var_d8, *arg3, r14_4)
                        void* rax_32 = var_d8
                        rbx_5 = r8_7
                        r14_3 = rcx_23
                        var_d8 = nullptr
                        int32_t var_d0_1
                        var_d0_1.q = 0
                        rdi = rax_32
                    else
                        void* r14_2 = *arg3
                        var_a8 = nullptr
                        
                        if (rbx_5 != 0)
                            sub_1405a4c70(&var_a8, rbx_5, 0)
                            rdi = var_a8
                            memcpy(rdi, r14_2, rbx_5 * 2)
                            int32_t var_9c
                            r14_3 = var_9c
                        else
                            r14_3 = 0
                    
                    if (arg3 != &var_a8)
                        void* rcx_31 = *arg3
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        *arg3 = rdi
                        arg3[1].d = rbx_5
                        *(arg3 + 0xc) = r14_3
                    else if (rdi != 0)
                        sub_140a74f90(rdi)
                    
                    if (r15_1 == 0)
                        goto label_140b9bcce
                    
                    rcx_33 = r15_1
                label_140b9bcc9:
                    sub_140a74f90(rcx_33)
                label_140b9bcce:
                    rcx_18 = var_c8.q
                label_140b9bcd5:
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    result.b = 0
                    return result
    
    var_80:8.d &= not.d(var_90:0xc.d)
    sub_14059bdd0(&var_90:8)
    r10 = var_d8
