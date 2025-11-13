// 函数: sub_1429cb310
// 地址: 0x1429cb310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
int64_t var_50 = -2
int32_t* r14 = arg1
uint64_t rdi = zx.q(arg1[2])
int64_t rbx = sx.q(*arg1)
sub_1429cd600(arg1, rdi.d)
*r14 = rbx.d
sub_14058d4e0(&r14[6], sx.q((rbx * 2).d))
sub_1429cd3a0(&r14[0x18], rbx)
memset(*(r14 + 0x60), 0, sx.q(*r14))
void* r12 = &r14[1]
void* var_148 = r12
*r12 = 0
sub_14058d4e0(&r14[0x24], 0)
sub_140897a60(&r14[0x36], 0)
sub_1429cd3a0(&r14[0x3c], 0)
sub_14058d4e0(&r14[0x12], sx.q(((*(r14 + 0x38) - *(r14 + 0x30)) s>> 2).d))
int64_t rbx_1 = sx.q((rdi << 2).d)
void* r13 = &r14[0x1e]

if ((*(r13 + 0x10) - *r13) s>> 2 u< rbx_1)
    if (rbx_1 u> 0x3fffffffffffffff)
        std::_Xlength_error("vector<T> too long")
        noreturn
    
    sub_1429ca9c0(r13, rbx_1)

if ((*(r14 + 0xb8) - *(r14 + 0xa8)) s>> 2 u< rbx_1)
    if (rbx_1 u> 0x3fffffffffffffff)
        std::_Xlength_error("vector<T> too long")
        noreturn
    
    sub_1429ca9c0(&r14[0x2a], rbx_1)

if ((*(r14 + 0xa0) - *(r14 + 0x90)) s>> 2 u< rbx_1)
    if (rbx_1 u> 0x3fffffffffffffff)
        std::_Xlength_error("vector<T> too long")
        noreturn
    
    sub_1429ca9c0(&r14[0x24], rbx_1)

int32_t var_e0
sub_1429c9b10(&var_e0, &r14[0x24], &r14[0x2a], 2)
int32_t var_78[0x6]
sub_1429c9b10(&var_78, &r14[0x42], &r14[0x48], 6)
int32_t var_108
sub_1429c9b10(&var_108, &r14[0x54], &r14[0x5a], 6)
int128_t var_168
__builtin_memset(&var_168, 0, 0x1c)
int64_t r15 = 0
int32_t rdx_10 = 0
int64_t r8_4 = 0
int64_t var_118 = 0
int32_t* rdi_1 = var_168:8.q
void* r14_1 = var_168.q
void** var_f0
int64_t** var_c8

if (rbx s> 0)
    while (true)
        int64_t rax_15 = *(r14 + 0x18)
        int64_t rcx_13 = sx.q(*(rax_15 + (r8_4 << 3) + 4))
        int32_t r8_5 = *(rax_15 + (r8_4 << 3))
        int32_t var_124_1 = r8_5
        void* r9_1 = *(arg_8 + 0x30) + (rcx_13 << 2)
        void* var_80_1 = r9_1
        int32_t* rax_20 = *(r14 + 0x48) + (rcx_13 << 2)
        int32_t rax_21 = 0
        int64_t rcx_14 = 0
        int64_t var_120_1 = 0
        int32_t var_150_1
        
        if (r8_5 s> 0)
            while (true)
                uint64_t r13_1 = zx.q(*(r9_1 + (rcx_14 << 2)))
                int32_t var_140 = r13_1.d
                int32_t rsi_1 = *(r9_1 + (sx.q(mods.dp.d(sx.q(rax_21 + 1), r8_5)) << 2))
                int32_t var_13c = rsi_1
                int64_t rbx_8
                
                if (r13_1.d == rsi_1)
                    if (r12 u>= rdi_1 || r14_1 u> r12)
                        if (rdi_1 != r15 || (r15 - rdi_1) s>> 2 u>= 1)
                            goto label_1429cba40
                        
                        int64_t rdi_5 = (rdi_1 - r14_1) s>> 2
                        
                        if (0x3fffffffffffffff - rdi_5 u< 1)
                            std::_Xlength_error("vector<T> too long")
                            noreturn
                        
                        int64_t rdx_24 = rdi_5 + 1
                        int64_t r15_4 = (r15 - r14_1) s>> 2
                        uint64_t rax_57 = r15_4 u>> 1
                        int64_t r8_14 = 0
                        
                        if (0x3fffffffffffffff - rax_57 u>= r15_4)
                            r8_14 = rax_57 + r15_4
                        
                        if (r8_14 u>= rdx_24)
                            rdx_24 = r8_14
                        
                        sub_1429ca9c0(&var_168, rdx_24)
                        goto label_1429cba31
                    
                    rbx_8 = (r12 - r14_1) s>> 2
                    
                    if (rdi_1 != r15 || (r15 - rdi_1) s>> 2 u>= 1)
                        goto label_1429cb864
                    
                    int64_t rdi_3 = (rdi_1 - r14_1) s>> 2
                    
                    if (0x3fffffffffffffff - rdi_3 u< 1)
                        std::_Xlength_error("vector<T> too long")
                        noreturn
                    
                    int64_t rdx_23 = rdi_3 + 1
                    int64_t r15_2 = (r15 - r14_1) s>> 2
                    uint64_t rax_50 = r15_2 u>> 1
                    int64_t r8_13 = 0
                    
                    if (0x3fffffffffffffff - rax_50 u>= r15_2)
                        r8_13 = rax_50 + r15_2
                    
                    if (r8_13 u>= rdx_23)
                        rdx_23 = r8_13
                    
                    sub_1429ca9c0(&var_168, rdx_23)
                    goto label_1429cb855
                
                int32_t arg_20 = r13_1.d
                uint32_t rdx_13 = (r13_1 << 1).d
                int64_t* var_100
                int64_t r8_6 = *var_100
                int32_t r9_2 = *(r8_6 + (sx.q(rdx_13) << 2))
                int32_t* var_130
                int32_t var_104
                int64_t r10_1
                int64_t* var_f8
                
                if (r9_2 s<= var_104)
                    r10_1 = *var_f8 + (sx.q(*(r8_6 + (sx.q(rdx_13 + 1) << 2))) << 2)
                else
                    void** rcx_17 = var_f0
                    void** rax_26 = rcx_17[1]
                    void** rbx_2 = rcx_17
                    
                    if (*(rax_26 + 0x19) != 0)
                    label_1429cb60a:
                        var_130 = &arg_20
                        int64_t* rax_27 = sub_1429c9300(&var_f0, &data_1435fc448, &var_130)
                        void** var_a8
                        sub_1429c9630(&var_f0, &var_a8, rbx_2, &rax_27[4], rax_27)
                        rbx_2 = var_a8
                    else
                        do
                            if (rax_26[4].d s>= r13_1.d)
                                rbx_2 = rax_26
                                rax_26 = *rax_26
                            else
                                rax_26 = rax_26[2]
                        while (*(rax_26 + 0x19) == 0)
                        
                        if (rbx_2 == rcx_17 || r13_1.d s< rbx_2[4].d)
                            goto label_1429cb60a
                    
                    r10_1 = rbx_2[5]
                    r9_2 = ((rbx_2[6] - r10_1) s>> 2).d
                int32_t r8_9 = 0
                int64_t rdx_16 = 0
                int32_t rsi_2
                
                if (r9_2 s<= 0)
                label_1429cb6b9:
                    rsi_2 = -1
                else
                    int64_t r11_1 = *r13
                    
                    while (true)
                        int64_t rcx_22 = sx.q(*(r10_1 + (rdx_16 << 2)) * 2)
                        
                        if (*(r11_1 + (rcx_22 << 2)) == rsi_1
                                || *(r11_1 + (rcx_22 << 2) + 4) == rsi_1)
                            rsi_2 = *(r10_1 + (rdx_16 << 2))
                            break
                        
                        r8_9 += 1
                        rdx_16 += 1
                        
                        if (r8_9 s>= r9_2)
                            goto label_1429cb6b9
                        
                        continue
                
                arg_20 = rsi_2
                
                if (rsi_2 == 0xffffffff)
                    goto label_1429cba54
                
                var_130.d = rsi_2
                int32_t rcx_23 = rsi_2 * 2
                int64_t r12_1 = sx.q(rcx_23)
                int64_t* var_d8
                int64_t rdx_17 = *var_d8
                int32_t r9_6 = *(rdx_17 + (r12_1 << 2))
                int32_t var_dc
                int32_t rdx_21
                int64_t r8_12
                
                if (r9_6 s<= var_dc)
                    int64_t* var_d0
                    r8_12 = *var_d0 + (sx.q(*(rdx_17 + (sx.q(rcx_23 + 1) << 2))) << 2)
                    rdx_21 = r9_6
                else
                    int64_t** rcx_24 = var_c8
                    void** rax_34 = rcx_24[1]
                    int64_t** rbx_3 = rcx_24
                    
                    if (*(rax_34 + 0x19) != 0)
                    label_1429cb726:
                        int32_t** var_a0 = &var_130
                        int64_t* rax_35 = sub_1429c9300(&var_c8, &data_1435fc448, &var_a0)
                        int64_t** var_98
                        sub_1429c9630(&var_c8, &var_98, rbx_3, &rax_35[4], rax_35)
                        rbx_3 = var_98
                    else
                        do
                            if (rax_34[4].d s>= rsi_2)
                                rbx_3 = rax_34
                                rax_34 = *rax_34
                            else
                                rax_34 = rax_34[2]
                        while (*(rax_34 + 0x19) == 0)
                        
                        if (rbx_3 == rcx_24 || rsi_2 s< rbx_3[4].d)
                            goto label_1429cb726
                    
                    r8_12 = rbx_3[5]
                    rdx_21 = ((rbx_3[6] - r8_12) s>> 2).d
                
                int64_t var_158
                
                if (*(r8_12 + (sx.q(rdx_21 - 1) << 2)) != var_150_1)
                    if (rdx_21 s> 1 || r13_1.d == *(*r13 + (r12_1 << 2)))
                        if (&arg_20 u>= rdi_1 || r14_1 u> &arg_20)
                            if (rdi_1 == r15)
                                sub_1429cad50(&var_168, 1)
                                r15 = var_158
                                rdi_1 = var_168:8.q
                                r14_1 = var_168.q
                            
                            if (rdi_1 != 0)
                                *rdi_1 = rsi_2
                        else
                            int64_t rbx_10 = (&arg_20 - r14_1) s>> 2
                            
                            if (rdi_1 == r15)
                                sub_1429cad50(&var_168, 1)
                                r15 = var_158
                                rdi_1 = var_168:8.q
                                r14_1 = var_168.q
                            
                            if (rdi_1 != 0)
                                *rdi_1 = *(r14_1 + (rbx_10 << 2))
                        
                        rdi_1 = &rdi_1[1]
                        var_168:8.q = rdi_1
                    
                    r12 = var_148
                else
                    if (&arg_20 u>= rdi_1 || r14_1 u> &arg_20)
                        if (rdi_1 == r15)
                            sub_1429cad50(&var_168, 1)
                            r15 = var_158
                            rdi_1 = var_168:8.q
                            r14_1 = var_168.q
                        
                        if (rdi_1 != 0)
                            *rdi_1 = rsi_2
                    else
                        int64_t rbx_5 = (&arg_20 - r14_1) s>> 2
                        
                        if (rdi_1 == r15)
                            sub_1429cad50(&var_168, 1)
                            r15 = var_158
                            rdi_1 = var_168:8.q
                            r14_1 = var_168.q
                        
                        if (rdi_1 != 0)
                            *rdi_1 = *(r14_1 + (rbx_5 << 2))
                    
                    rdi_1 = &rdi_1[1]
                    var_168:8.q = rdi_1
                    r12 = var_148
                    int32_t rax_41
                    
                    if (r12 u< rdi_1 && r14_1 u<= r12)
                        rbx_8 = (r12 - r14_1) s>> 2
                        
                        if (rdi_1 == r15)
                            sub_1429cad50(&var_168, 1)
                        label_1429cb855:
                            r15 = var_158
                            rdi_1 = var_168:8.q
                            r14_1 = var_168.q
                        
                    label_1429cb864:
                        
                        if (rdi_1 == 0)
                            goto label_1429cba4b
                        
                        rax_41 = *(r14_1 + (rbx_8 << 2))
                        goto label_1429cba49
                    
                    if (rdi_1 == r15)
                        sub_1429cad50(&var_168, 1)
                    label_1429cba31:
                        r15 = var_158
                        r14_1 = var_168.q
                        rdi_1 = var_168:8.q
                    
                label_1429cba40:
                    
                    if (rdi_1 == 0)
                        goto label_1429cba4b
                    
                    rax_41 = *r12
                label_1429cba49:
                    *rdi_1 = rax_41
                label_1429cba4b:
                    rdi_1 = &rdi_1[1]
                    var_168:8.q = rdi_1
                label_1429cba54:
                    rsi_2 = *r12
                    *r12 = rsi_2 + 1
                    sub_140909dc0(r13, &var_140)
                    sub_140909dc0(r13, &var_13c)
                    sub_1429cb1c0(&var_e0)
                    r13_1 = zx.q(var_140)
                    sub_1429cb070(&var_108, r13_1.d, rsi_2)
                    sub_1429cb070(&var_108, var_13c, rsi_2)
                sub_1429cb070(&var_e0, rsi_2, var_150_1)
                sub_1429cb070(&var_78, r13_1.d, var_150_1)
                rax_20[rcx_14] = rsi_2
                rcx_14 = var_120_1 + 1
                var_120_1 = rcx_14
                rax_21 += 1
                r8_5 = var_124_1
                r9_1 = var_80_1
                
                if (rax_21 s>= r8_5)
                    break
            
            rdx_10 = var_150_1
        
        rdx_10 += 1
        var_150_1 = rdx_10
        r8_4 = var_118 + 1
        var_118 = r8_4
        
        if (r8_4 s>= rbx)
            break

int32_t rax_61 = sub_1429cbd00(&var_e0)
int32_t rax_62 = sub_1429cbd00(&var_78)
int32_t arg_10 = rax_62
int32_t rax_63 = sub_1429cbd00(&var_108)
int32_t arg_18 = rax_63
int32_t* rcx_52 = arg_8
rcx_52[4] = rax_61
int32_t* rcx_53 = &arg_10

if (rax_62 s< rcx_52[5])
    rcx_53 = &rcx_52[5]

rcx_52[5] = *rcx_53
int32_t* rcx_55 = &arg_18

if (rax_63 s< rcx_52[5])
    rcx_55 = &rcx_52[5]

int32_t rax_64 = *rcx_55
rcx_52[5] = rax_64
int32_t* rbx_14

if (rax_64 s<= 0xffff)
    sub_1429cd580(rcx_52, *r12)
    int32_t rdi_7 = ((rdi_1 - r14_1) s>> 2).d
    
    if (rdi_7 s> 0)
        void* r8_20 = r14_1
        int32_t r9_8 = 0
        
        do
            int64_t rdx_33 = sx.q(*r8_20)
            int64_t rax_65 = *(rcx_52 + 0xf0)
            *(rdx_33 + rax_65) |= 1
            int32_t* rdx_34 = *r13 + (sx.q((rdx_33 * 2).d) << 2)
            int64_t rcx_58 = sx.q(*rdx_34)
            int64_t rax_68 = *(rcx_52 + 0x1b0)
            *(rax_68 + (rcx_58 << 1)) |= 1
            int64_t rcx_59 = sx.q(rdx_34[1])
            int64_t rax_69 = *(rcx_52 + 0x1b0)
            *(rax_69 + (rcx_59 << 1)) |= 1
            r9_8 += 1
            r8_20 += 4
        while (r9_8 s< rdi_7)
    
    sub_1429ccf30(rcx_52)
    sub_1429ccfb0(rcx_52)
    rbx_14.b = 1
else
    rbx_14.b = 0

if (r14_1 != 0)
    sub_1429cc220(&var_168, r14_1, (r15 - r14_1) s>> 2)

int64_t** r8_22 = var_f0
sub_1429cc320(&var_f0, &arg_8, *r8_22, r8_22)
sub_1429ca770(var_f0, 1, 0x40)
int64_t* var_60
int64_t* r8_24 = var_60
sub_1429cc320(&var_60, &arg_8, *r8_24, r8_24)
sub_1429ca770(var_60, 1, 0x40)
int64_t** r8_26 = var_c8
sub_1429cc320(&var_c8, &arg_8, *r8_26, r8_26)
sub_1429ca770(var_c8, 1, 0x40)
return zx.q(rbx_14.b)
