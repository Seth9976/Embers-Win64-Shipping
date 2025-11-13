// 函数: sub_141e7caf0
// 地址: 0x141e7caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x540)
int64_t r15 = sx.q(arg2)
int32_t var_c8 = 0
int32_t var_c4 = 1
int32_t r10 = 0
int32_t* var_c0 = arg1 + 0x528
int32_t var_b8 = 0xffffffff
int32_t r8 = 0
int64_t var_b4 = 0

if (r11 != 0)
    int32_t* rax_1 = *(arg1 + 0x538)
    int32_t* r9 = arg1 + 0x528
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r9
    
    if (rcx != 0)
    label_141e7cbaa:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_b4:4.d = r8
            var_c8 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r9[rcx_1 + 1]
            int32_t var_b8_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141e7cbaa
        
        var_b4.d = r11

void* r10_1 = arg1 + 0x518
int32_t rdx_2 = *(r10_1 + 0x28)
int32_t r8_3 = rdx_2 s>> 5
int128_t var_78 = var_c8.o
int32_t r14 = 0xffffffff << (rdx_2.b & 0x1f)
int32_t r9_2 = rdx_2 & 0xffffffe0
int32_t var_b8_2 = r14
var_b4.d = rdx_2
int128_t var_68 = 0xffffffff
int64_t var_88 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_a8 = r10_1.o
int128_t var_98 = var_78

if (rdx_2 != r11)
    int32_t* rax_11 = *(arg1 + 0x538)
    int32_t* r10_2 = arg1 + 0x528
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = r10_2[sx.q(r8_3)] & r14
    
    if (rdx_6 != 0)
    label_141e7cc82:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_b4.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = r10_2[rcx_6 + 1]
            var_b8_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141e7cc82
        
        var_b4.d = r11
    
    r10_1 = arg1 + 0x518

while (true)
    int64_t rax_20 = sx.q(var_98:0xc.d)
    int64_t* rdi_1 = var_a8.q
    void* result
    
    if (rax_20.d == (var_b8_2.q u>> 0x20).d && var_98.q == arg1 + 0x528 && rdi_1 == r10_1)
        *arg4 = 0
        int32_t* rcx_13
        
        if (*(arg1 + 0x570) == *(arg1 + 0x59c))
        label_141e7cd9e:
            rcx_13 = nullptr
        else
            void* r8_5 = arg1 + 0x5a0
            void* rcx_10 = *(r8_5 + 8)
            
            if (rcx_10 != 0)
                r8_5 = rcx_10
            
            int32_t rax_25 = *(r8_5 + (((sx.q(*(arg1 + 0x5b0)) - 1) & r15) << 2))
            
            if (rax_25 == 0xffffffff)
            label_141e7cd9e_1:
                rcx_13 = nullptr
            else
                while (true)
                    rcx_13 = sx.q(rax_25) * 0x58 + *(arg1 + 0x568)
                    
                    if (*rcx_13 == r15.d)
                        break
                    
                    rax_25 = rcx_13[0x14]
                    
                    if (rax_25 == 0xffffffff)
                        goto label_141e7cd9e_2
                
                if (rax_25 == 0xffffffff)
                label_141e7cd9e_2:
                    rcx_13 = nullptr
        
        result = &rcx_13[2]
        
        if (rcx_13 == 0)
            result = nullptr
        
        if (result == 0)
            return result
        
        *(arg4 + 8) = *result
        *(arg4 + 0x18) = *(result + 0x10)
        *(arg4 + 0x28) = *(result + 0x20)
        *(arg4 + 0x38) = *(result + 0x30)
        result = zx.q(*(result + 0x40))
        arg4[0x12] = result.d
        return result
    
    int64_t rdi_2 = *rdi_1
    int64_t rbx_2 = rax_20 * 0x70
    
    if (*(rbx_2 + rdi_2 + 0xc) == r15.d)
        void* rcx_8 = *(rbx_2 + rdi_2 + 0x60)
        int32_t arg_8 = 0
        void var_58
        
        if (j_sub_14226ea10(rcx_8, arg3, &arg_8, &var_58) != 0 && arg_8.d f== 0f)
            *arg4 = *(rbx_2 + rdi_2 + 8)
            arg4[1] = *(rbx_2 + rdi_2 + 0x10)
            *(arg4 + 8) = *(rbx_2 + rdi_2 + 0x18)
            *(arg4 + 0x18) = *(rbx_2 + rdi_2 + 0x28)
            *(arg4 + 0x28) = *(rbx_2 + rdi_2 + 0x38)
            *(arg4 + 0x38) = *(rbx_2 + rdi_2 + 0x48)
            result = zx.q(*(rbx_2 + rdi_2 + 0x58))
            arg4[0x12] = result.d
            return result
    
    var_98:8.d &= not.d(var_a8:0xc.d)
    sub_14059bdd0(&var_a8:8)
    r10_1 = arg1 + 0x518
