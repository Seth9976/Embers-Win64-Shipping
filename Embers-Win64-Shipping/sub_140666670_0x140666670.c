// 函数: sub_140666670
// 地址: 0x140666670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rdi = 0
int32_t* r11 = arg1 + 0x10
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t r9 = 0
int32_t r10 = 0
void* rbx = nullptr
int32_t var_5c = 0x80
int32_t rsi = 0
int32_t var_58 = 0xffffffff
int32_t rcx = 0
int32_t var_54 = 0
int32_t r8 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t r14 = r11[6]
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t* var_e0 = r11
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r14 != 0)
    int32_t* rax_2 = *(r11 + 0x10)
    
    if (rax_2 != 0)
        r11 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r14 - 1)
    int32_t rdx_2 = *r11
    
    if (rdx_2 != 0)
    label_140666769:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r14)
            var_d4.d = r14
    else
        while (true)
            rcx += 1
            r8 += 0x20
            var_e8 = rcx
            var_d4:4.d = r8
            
            if (rcx s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            var_d8 = 0xffffffff
            rdx_2 = r11[sx.q(rcx)]
            
            if (rdx_2 != 0)
                goto label_140666769
        
        var_d4.d = r14

int128_t var_a0 = 0xffffffff
double var_b0[0x2] = var_e8.o
var_e8.o = arg1.o
int64_t var_c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d8.o = var_b0

if (0 s< r14)
    int32_t var_cc
    int32_t rcx_2 = var_cc
    
    while (true)
        int64_t* r13_1 = var_e8.q
        int64_t r15_3 = sx.q(rcx_2) * 0x28
        int64_t* r14_2 = *r13_1 + r15_3
        int64_t var_80_1
        
        if (r9 == r10)
        label_140666898:
            int64_t rbx_2 = sx.q(arg2[1].d)
            int64_t* rdi_2 = *r13_1 + r15_3
            int32_t rax_18 = (rbx_2 + 1).d
            arg2[1].d = rax_18
            
            if (rax_18 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            sub_140596d10((rbx_2 << 4) + *arg2, rdi_2)
            int64_t* rsi_3 = *r13_1 + r15_3
            int128_t var_78
            int64_t rbx_3
            
            if (var_54 == 0)
                rbx_3 = zx.q(var_80_1.d)
                int32_t rax_20 = (rbx_3 + 1).d
                var_80_1.d = rax_20
                
                if (rax_20 s> var_80_1:4.d)
                    sub_1405a4df0(&var_88)
                
                sub_1405b2ba0(&var_78, 0)
            else
                rbx_3 = sx.q(var_58)
                bool cond:1_1 = var_54 == 1
                int64_t r8_2 = var_88
                int64_t rax_19 = sx.q(*(r8_2 + rbx_3 * 0x18 + 4))
                var_58 = rax_19.d
                var_54 -= 1
                
                if (not(cond:1_1))
                    *(r8_2 + rax_19 * 0x18) = 0xffffffff
            
            int128_t* rcx_16 = &var_78
            int128_t* var_68
            
            if (var_68 != 0)
                rcx_16 = var_68
            
            int32_t rax_22 = rbx_3.d
            
            if (rbx_3.d s< 0)
                rax_22 = (rbx_3 + 0x1f).d
            
            void* r9_1 = rcx_16 + (sx.q(rax_22 s>> 5) << 2)
            *r9_1 |= 1 << (rbx_3.b & 0x1f)
            int64_t* rdi_3 = var_88 + sx.q(rbx_3.d) * 0x18
            
            if (rdi_3 != 0)
                sub_140596d10(rdi_3, rsi_3)
                rdi_3[2].d = 0xffffffff
            
            int32_t rax_27 = rdi_3[1].d
            int32_t rcx_21
            int16_t* rdx_13
            
            if (rax_27 == 0)
                rdx_13 = &data_142d40450
                rcx_21 = 0
            else
                rdx_13 = *rdi_3
                rcx_21 = rax_27 - 1
            
            void var_c0
            sub_14059a6d0(&var_88, &var_c0, sub_1405969c0(rcx_21, rdx_13), rdi_3, rbx_3.d, nullptr)
        else
            int32_t rax_12 = r14_2[1].d
            int32_t rcx_4
            int16_t* rdx_3
            
            if (rax_12 == 0)
                rdx_3 = &data_142d40450
                rcx_4 = 0
            else
                rdx_3 = *r14_2
                rcx_4 = rax_12 - 1
            
            void var_50
            void* rax_15 = &var_50
            int64_t rdx_5 = sx.q(sub_1405969c0(rcx_4, rdx_3)) & sx.q(rsi - 1)
            
            if (rbx != 0)
                rax_15 = rbx
            
            int32_t rbx_1 = *(rax_15 + (rdx_5 << 2))
            
            if (rbx_1 == 0xffffffff)
                goto label_140666898
            
            while (true)
                int64_t rsi_1 = sx.q(rbx_1) * 0x18
                int16_t* rdx_6
                
                if (r14_2[1].d == 0)
                    rdx_6 = &data_142d40450
                else
                    rdx_6 = *r14_2
                
                int16_t* const rcx_7
                
                if (*(rsi_1 + rdi + 8) == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *(rsi_1 + rdi)
                
                if (sub_140a54510(rcx_7, rdx_6) == 0)
                    break
                
                rdi = var_88
                rbx_1 = *(rsi_1 + rdi + 0x10)
                
                if (rbx_1 == 0xffffffff)
                    goto label_140666898
            
            if (rbx_1 == 0xffffffff)
                goto label_140666898
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        rcx_2 = var_cc
        rbx = var_48
        
        if (rcx_2 s>= *(var_d8.q + 0x18))
            break
        
        rsi = var_40
        r10 = var_54
        r9 = var_80_1.d
        rdi = var_88

int32_t rdi_4 = arg2[1].d
int32_t var_40_1 = 0

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140669e00(&var_88)
__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rdi_4)
