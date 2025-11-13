// 函数: sub_140aa5980
// 地址: 0x140aa5980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t* r13 = arg4
void**** result = arg1
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t var_bc = 0x80
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0

if (sub_140ab6620(arg3, &var_e8, 0x3d, 0x2c) == 0)
label_140aa5f80:
    *result = nullptr
    result[1] = 0
    int32_t var_a0_2 = 0
else
    int32_t r14_1 = 0
    int32_t var_1d4_1 = 0
    int64_t var_98 = 0
    uint64_t r15
    r15.b = 0
    int32_t var_90_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t rbx_2 = var_e0 - var_b4
    char var_1d8_1 = 0
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    
    if (rbx_2 s> 0)
        sub_140ac0210(&var_98, rbx_2)
        int32_t rdx_3
        
        if (rbx_2 u< 4)
            rdx_3 = 1
        else
            uint32_t rbx_3 = rbx_2 u>> 1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
            int32_t var_188_1 = temp0_1
            int32_t rcx_2
            
            if (rbx_3 == 0xfffffff8)
                rcx_2 = 0x20
            else
                rcx_2 = 0x1f - temp0_1
            
            int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
            int32_t var_184_1 = temp0_2
            char rdx_2
            
            if (rcx_4 == 0)
                rdx_2 = 0x20
            else
                rdx_2 = 0x1f - temp0_2.b
            
            rdx_3 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_2))
        
        if (var_50_1 == 0 || var_50_1 s< rdx_3)
            int32_t var_50_2 = rdx_3
            sub_140abf250(&var_98)
    
    int32_t var_1bc_1 = 1
    int64_t* var_1b8_1 = &var_d8
    int32_t rcx_8 = 0
    int32_t var_1c0_1 = 0
    int32_t var_1b0_1 = 0xffffffff
    int32_t r8_1 = 0
    int64_t var_1ac_1 = 0
    int32_t var_c0
    
    if (var_c0 != 0)
        int64_t* r11_1 = &var_d8
        int64_t* var_c8
        
        if (var_c8 != 0)
            r11_1 = var_c8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(var_c0 - 1)
        int32_t rdx_6 = *r11_1
        
        if (rdx_6 != 0)
        label_140aa5b88:
            int32_t rax_15 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_3
            int32_t temp0_3
            temp0_3, rflags_3 = _bit_scan_reverse(rax_15)
            int32_t var_1bc_2 = rax_15
            int32_t var_180_1 = temp0_3
            int32_t rdi_1
            
            if (rax_15 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_3
            
            int32_t rax_16 = r8_1 - rdi_1 + 0x1f
            
            if (rax_16 s> var_c0)
                rax_16 = var_c0
            
            var_1ac_1.d = rax_16
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_8)
                r8_1 += 0x20
                rcx_8 += 1
                var_1ac_1:4.d = r8_1
                var_1c0_1 = rcx_8
                
                if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    var_1ac_1.d = var_c0
                    break
                
                rdx_6 = *(r11_1 + (rdx_7 << 2) + 4)
                int32_t var_1b0_2 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_140aa5b88
    
    int128_t var_118_1 = 0xffffffff
    int128_t var_128_1
    var_128_1:8.d = 0xffffffff << (var_c0.b & 0x1f)
    var_128_1:0xc.d = var_c0
    uint64_t rcx_13 = var_128_1:8.q u>> 0x20
    int64_t temp0_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    uint64_t var_168_1 = rcx_13
    int128_t var_158 = (&var_e8).o
    int128_t var_148_1 = var_1c0_1.o
    int64_t var_138_1 = temp0_4
    
    while (true)
        int64_t rax_17 = sx.q(var_148_1:0xc.d)
        int64_t* rdx_8 = var_158.q
        
        if (rax_17.d == rcx_13.d && var_148_1.q == &var_d8 && rdx_8 == &var_e8)
            break
        
        int64_t* rbx_5 = r13[1]
        void* rsi = *rdx_8 + rax_17 * 0x48
        int64_t rax_19 = *r13
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int16_t* r13_1 = *(rsi + 0x20)
        int32_t rdx_9 = 0
        int32_t r15_1 = *(rsi + 0x28)
        int32_t rcx_15 = 0
        int64_t var_1d0 = 0
        int64_t r14_2 = 0
        int32_t var_1c8_1 = 0
        int32_t var_1c4_1 = 0
        
        if (r13_1 != 0 && *r13_1 != 0 && r15_1 s> 0)
            if (r15_1 + 1 s> 0)
                sub_1405947f0(&var_1d0, r15_1 + 1)
                rcx_15 = var_1c4_1
                rdx_9 = var_1c8_1
                r14_2 = var_1d0
            
            int32_t rsi_2 = r15_1 + 1 + rdx_9
            
            if (rsi_2 s> rcx_15)
                sub_140594770(&var_1d0)
                r14_2 = var_1d0
            
            UnDecorator::getReferenceType(r14_2, r13_1, r15_1 * 2)
            *(r14_2 + (sx.q(rsi_2) << 1) - 2) = 0
        
        int64_t var_108 = rax_19
        int64_t* var_100_1 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        char* var_198
        sub_140a961b0(&var_198, &var_1d0, &var_108)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_24 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t rcx_22 = var_1d0
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        char* rdi_2 = var_198
        EnterCriticalSection(&rdi_2[0x30])
        int32_t rdi_3 = *(rdi_2 + 0x90)
        
        if (rdi_2 != -0x30)
            LeaveCriticalSection(&rdi_2[0x30])
        
        int64_t* var_190
        
        if (rdi_3 == 0)
            if (var_190 != 0)
                var_190[1].d -= 1
                
                if (var_190[1].d == 1)
                    (**var_190)(var_190)
                    int32_t r12_1 = *(var_190 + 0xc)
                    *(var_190 + 0xc) -= 1
                    
                    if (r12_1 == 1)
                        (*(*var_190 + 8))(var_190, zx.q(r12_1))
            
            r14_1 = var_1d4_1
            r15 = zx.q(var_1d8_1)
            break
        
        int32_t rax_26 = *(rsi + 0x28)
        char* rdi_4 = var_198
        
        if (var_1d4_1 s>= rax_26)
            rax_26 = var_1d4_1
        
        r14_1 = rax_26
        var_1d4_1 = rax_26
        EnterCriticalSection(&rdi_4[0x30])
        int32_t rdi_5 = *(rdi_4 + 0x90)
        
        if (rdi_4 != -0x30)
            LeaveCriticalSection(&rdi_4[0x30])
        
        void* var_f8 = rsi
        r15.b = var_1d8_1 | rdi_5 == 2
        var_1d8_1 = r15.b
        char** var_f0_1 = &var_198
        void var_17c
        sub_140a92580(&var_98, &var_17c, &var_f8, nullptr)
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t rax_30 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        var_148_1:8.d &= not.d(var_158:0xc.d)
        sub_14059bdd0(&var_158:8)
        rcx_13 = var_168_1
        r13 = arg4
    
    if (var_90_1 - var_64_1 != var_e0 - var_b4)
        int32_t var_50_4 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        sub_140a98840(&var_98)
        result = arg1
        goto label_140aa5f80
    
    void*** rax_39 = j_sub_140a82f30(0x78)
    void*** rbx_10
    
    if (rax_39 == 0)
        rbx_10 = nullptr
    else
        rbx_10 = sub_140a965c0(rax_39, arg2, &var_98, r14_1, r15.b)
    
    void*** rax_41 = j_sub_140a82f30(0x18)
    
    if (rax_41 == 0)
        rax_41 = nullptr
    else
        rax_41[1].d = 1
        *rax_41 = &data_142d42ea8
        *(rax_41 + 0xc) = 1
        rax_41[2] = rbx_10
    
    result = arg1
    *result = rbx_10
    result[1] = rax_41
    int32_t var_50_3 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_140a98840(&var_98)
    int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140a984b0(&var_e8)
__security_check_cookie(rax_1 ^ &var_208)
return result
