// 函数: sub_141a55a30
// 地址: 0x141a55a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
sub_141a41060(arg1 + 0xa0, &var_a8)
int32_t var_134 = 1
int32_t r11 = *(arg1 + 0x78)
int32_t rcx_1 = 0
int32_t var_138 = 0
int32_t r8 = 0
void* var_130 = arg1 + 0x60
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r11 != 0)
    void* rax_3 = *(arg1 + 0x70)
    void* r9 = arg1 + 0x60
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141a55b3b:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_134_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_124:4.d = r8
            var_138 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141a55b3b
        
        var_124.d = r11

int32_t rdx_5 = *(arg1 + 0x78)
int128_t var_d0 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_e0 = var_138.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int64_t var_f8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_128_2 = rsi
var_124.d = rdx_5
int128_t var_118 = (arg1 + 0x50).o
int128_t var_108 = var_e0

if (rdx_5 != r11)
    void* rax_13 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x60
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_141a55c13:
        int32_t rax_20 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_4
        
        var_124.d = r9_2 - rax_21 + 0x1f
        
        if (r9_2 - rax_21 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_128_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141a55c13
        
        var_124.d = r11

while (true)
    int64_t rax_23 = sx.q(var_108:0xc.d)
    int64_t* rdx_10 = var_118.q
    
    if (rax_23.d == (var_128_2.q u>> 0x20).d && var_108.q == arg1 + 0x60 && rdx_10 == arg1 + 0x50)
        int32_t rcx_12 = 0
        int32_t r8_4 = 0
        int32_t var_138_1 = 0
        int32_t var_134_2 = 1
        int64_t var_98
        int64_t* var_130_1 = &var_98
        int32_t var_128_3 = 0xffffffff
        int64_t var_124_1 = 0
        int64_t* var_88
        int32_t var_80
        
        if (var_80 != 0)
            int64_t* r9_4 = &var_98
            
            if (var_88 != 0)
                r9_4 = var_88
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_80 - 1)
            int32_t rdx_14 = *r9_4
            
            if (rdx_14 != 0)
            label_141a55d1d:
                int32_t rax_35 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_35)
                int32_t var_134_3 = rax_35
                int32_t rax_36
                
                if (rax_35 == 0)
                    rax_36 = 0x20
                else
                    rax_36 = 0x1f - temp0_5
                
                int32_t rax_37 = r8_4 - rax_36 + 0x1f
                
                if (rax_37 s> var_80)
                    rax_37 = var_80
                
                var_124_1.d = rax_37
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_12)
                    r8_4 += 0x20
                    rcx_12 += 1
                    var_124_1:4.d = r8_4
                    var_138_1 = rcx_12
                    
                    if (rdx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_124_1.d = var_80
                        break
                    
                    rdx_14 = *(r9_4 + (rdx_15 << 2) + 4)
                    int32_t var_128_4 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_141a55d1d
        
        var_124_1.d = var_80
        int128_t var_d0_1 = 0xffffffff
        int32_t rdx_16 = 0xffffffff << (var_80.b & 0x1f)
        int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_118 = (&var_a8).o
        int128_t var_108_1 = var_138_1.o
        int64_t var_f8_1 = temp0_6
        
        while (true)
            int64_t rax_38 = sx.q(var_108_1:0xc.d)
            int64_t rcx_16 = var_118.q
            
            if (rax_38.d == (rdx_16.q u>> 0x20).d && var_108_1.q == &var_98 && rcx_16 == &var_a8)
                sub_141a63710(arg1 + 0xa0)
                void* rsi_1 = arg1 + 0x50
                int32_t r11_1 = *(rsi_1 + 0x28)
                void* r15_1 = rsi_1 + 0x10
                int32_t var_134_4 = 1
                int32_t rcx_20 = 0
                int32_t var_138_2 = 0
                int32_t r8_7 = 0
                void* var_130_2 = r15_1
                int32_t var_128_6 = 0xffffffff
                int64_t var_124_2 = 0
                
                if (r11_1 != 0)
                    void* rax_44 = *(r15_1 + 0x10)
                    void* r9_6 = r15_1
                    
                    if (rax_44 != 0)
                        r9_6 = rax_44
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r11_1 - 1)
                    int32_t rdx_21 = *r9_6
                    
                    if (rdx_21 != 0)
                    label_141a55ebb:
                        int32_t rax_51 = neg.d(rdx_21) & rdx_21
                        uint64_t rflags_4
                        int32_t temp0_7
                        temp0_7, rflags_4 = _bit_scan_reverse(rax_51)
                        int32_t var_134_5 = rax_51
                        int32_t rax_52
                        
                        if (rax_51 == 0)
                            rax_52 = 0x20
                        else
                            rax_52 = 0x1f - temp0_7
                        
                        var_124_2.d = r8_7 - rax_52 + 0x1f
                        
                        if (r8_7 - rax_52 + 0x1f s> r11_1)
                            var_124_2.d = r11_1
                    else
                        while (true)
                            int64_t rdx_22 = sx.q(rcx_20)
                            r8_7 += 0x20
                            rcx_20 += 1
                            var_124_2:4.d = r8_7
                            var_138_2 = rcx_20
                            
                            if (rdx_22.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_21 = *(r9_6 + (rdx_22 << 2) + 4)
                            int32_t var_128_7 = 0xffffffff
                            
                            if (rdx_21 != 0)
                                goto label_141a55ebb
                        
                        var_124_2.d = r11_1
                
                int32_t rdx_23 = *(rsi_1 + 0x28)
                int128_t var_d0_2 = 0xffffffff
                int32_t rdi_2 = 0xffffffff << (rdx_23.b & 0x1f)
                int128_t var_e0_2 = var_138_2.o
                int32_t r8_10 = rdx_23 s>> 5
                int32_t r9_8 = rdx_23 & 0xffffffe0
                int64_t var_f8_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_128_8 = rdi_2
                var_124_2.d = rdx_23
                var_118 = rsi_1.o
                int128_t var_108_2 = var_e0_2
                
                if (rdx_23 != r11_1)
                    void* rax_54 = *(r15_1 + 0x10)
                    void* r10_4 = r15_1
                    
                    if (rax_54 != 0)
                        r10_4 = rax_54
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_1 - 1)
                    int32_t rdx_27 = *(r10_4 + (sx.q(r8_10) << 2)) & rdi_2
                    
                    if (rdx_27 != 0)
                    label_141a55f93:
                        int32_t rax_61 = neg.d(rdx_27) & rdx_27
                        uint64_t rflags_5
                        int32_t temp0_9
                        temp0_9, rflags_5 = _bit_scan_reverse(rax_61)
                        int32_t r14_1
                        
                        if (rax_61 == 0)
                            r14_1 = 0x20
                        else
                            r14_1 = 0x1f - temp0_9
                        
                        var_124_2.d = r9_8 - r14_1 + 0x1f
                        
                        if (r9_8 - r14_1 + 0x1f s> r11_1)
                            var_124_2.d = r11_1
                    else
                        while (true)
                            int64_t rcx_25 = sx.q(r8_10)
                            r9_8 += 0x20
                            r8_10 += 1
                            
                            if (rcx_25.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_27 = *(r10_4 + (rcx_25 << 2) + 4)
                            var_128_8 = 0xffffffff
                            
                            if (rdx_27 != 0)
                                goto label_141a55f93
                        
                        var_124_2.d = r11_1
                
                while (true)
                    int64_t rax_63 = sx.q(var_108_2:0xc.d)
                    int64_t rdx_28 = var_118.q
                    
                    if (rax_63.d == (var_128_8.q u>> 0x20).d && var_108_2.q == r15_1
                            && rdx_28 == rsi_1)
                        int32_t var_60_1 = 0
                        
                        if (var_68 != 0)
                            sub_140a74f90(var_68)
                        
                        int64_t result = sub_141a46280(&var_a8, 0)
                        
                        if (var_88 != 0)
                            result = sub_140a74f90(var_88)
                        
                        int64_t rcx_36 = var_a8
                        
                        if (rcx_36 != 0)
                            result = sub_140a74f90(rcx_36)
                        
                        __security_check_cookie(rax_1 ^ &var_168)
                        return result
                    
                    void* rsi_4 = rax_63 * 0x30 + *rdx_28
                    int32_t rax_64 = *(rsi_4 + 0x24)
                    int64_t* rbx_7 = *(rsi_4 + 0x18)
                    int32_t i_2 = *(rsi_4 + 0x20)
                    
                    if (rax_64 s< 0)
                        if (i_2 != 0)
                            int32_t i
                            
                            do
                                char rax_67 = rbx_7[0x10].b
                                
                                if ((rax_67 & 1) != 0)
                                    int64_t* rcx_29 = rbx_7
                                    
                                    if ((rax_67 & 2) == 0)
                                        rcx_29 = *rbx_7
                                    
                                    rbx_7[0x10].b = rax_67 & 0xfe
                                    (**rcx_29)(rcx_29, 0)
                                    
                                    if ((rbx_7[0x10].b & 2) == 0)
                                        sub_140a74f90(*rbx_7)
                                
                                rbx_7 = &rbx_7[0x11]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            rax_64 = *(rsi_4 + 0x24)
                        
                        *(rsi_4 + 0x20) = 0
                        
                        if (rax_64 != 0)
                            sub_1405a5390(rsi_4 + 0x18, 0)
                    else
                        if (i_2 != 0)
                            int32_t i_1
                            
                            do
                                char rax_65 = rbx_7[0x10].b
                                
                                if ((rax_65 & 1) != 0)
                                    int64_t* rcx_27 = rbx_7
                                    
                                    if ((rax_65 & 2) == 0)
                                        rcx_27 = *rbx_7
                                    
                                    rbx_7[0x10].b = rax_65 & 0xfe
                                    (**rcx_27)(rcx_27, 0)
                                    
                                    if ((rbx_7[0x10].b & 2) == 0)
                                        sub_140a74f90(*rbx_7)
                                
                                rbx_7 = &rbx_7[0x11]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        *(rsi_4 + 0x20) = 0
                    
                    var_108_2:8.d &= not.d(var_118:0xc.d)
                    sub_14059bdd0(&var_118:8)
                    rsi_1 = arg1 + 0x50
            
            void* rax_40 = (rax_38 << 6) + *rcx_16
            char rdx_17 = *(rax_40 + 0x30)
            void* rcx_17 = rax_40 + 0x10
            
            if ((rdx_17 & 1) == 0)
                rcx_17 = nullptr
            else if ((rdx_17 & 2) == 0)
                rcx_17 = *rcx_17
            
            (*(*rcx_17 + 0x10))(rcx_17, arg4, arg3, arg1, *(rax_40 + 8), arg2, var_138_1, 
                var_130_1, rdx_16)
            var_108_1:8.d &= not.d(var_118:0xc.d)
            sub_14059bdd0(&var_118:8)
    
    sub_141a41060(rax_23 * 0x30 + *rdx_10 + 0x18, &var_a8)
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)
