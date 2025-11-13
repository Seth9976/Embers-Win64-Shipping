// 函数: sub_141775fc0
// 地址: 0x141775fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r10 = arg2
int32_t r12 = -1
void* const r11 = arg3
int32_t var_110 = 0
int64_t r9 = 0
int32_t rdi = *(arg1 + 0x2c)
int32_t rbx = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t rax_3 = *(arg1 + 0x28)
int32_t rcx = *(arg1 + 0x30)
void* const var_130 = arg3
void* var_138 = arg2
int32_t var_140 = 0xffffffff
int32_t var_f8 = rax_3
int32_t r14_2 = rcx * rdi * rax_3
int32_t var_144 = rdi
int32_t var_148 = rcx
int32_t r14_3

if (r14_2 s<= 0)
    int32_t rdi_3
    
    if (r14_2 s< 0)
        rdi_3 = neg.d(r14_2)
    
    if (r14_2 s>= 0 || rdi_3 == 0)
        r14_3 = var_148
    else
        int32_t rdi_4 = neg.d(rdi_3)
        
        if (rdi_4 != r14_2)
            memmove(sx.q(r14_2) << 2, nullptr, (rdi_4 - r14_2) << 2)
        
        var_e0 = rdi_4
        sub_1405dac90(&var_e8)
        r14_3 = rcx
        r10 = var_138
        r11 = var_130
        r9 = var_e8
        var_144 = rdi
        var_148 = r14_3
else
    var_e0 = r14_2
    sub_1405a4cf0(&var_e8)
    memset(var_e8, 0, sx.q(r14_2) << 2)
    r14_3 = rcx
    r10 = var_138
    r11 = var_130
    r9 = var_e8
    var_148 = r14_3
    var_144 = rdi

int64_t rdx_1 = r9 + (sx.q(var_e0) << 2)
uint64_t rcx_9 = (rdx_1 - r9 + 3) u>> 2
int32_t rdx_2 = 0

if (r9 u> rdx_1)
    rcx_9 = 0

if (rcx_9 != 0)
    __builtin_memset(r9, 0xffffffff, rcx_9 << 2)

int32_t rax_8 = *(arg1 + 0x28)
int32_t r8_4 = 0

if (rax_8 s> 0)
    int64_t r15_1 = var_e8
    
    do
        int32_t i = 0
        
        if (*(arg1 + 0x2c) s> 0)
            do
                int32_t r9_1 = *(arg1 + 0x30)
                
                if (r9_1 s> 0)
                    do
                        uint64_t rax_14
                        
                        if (r8_4 != 0 && *(sx.q((*(r10 + 4) * r8_4 + i) * *(r10 + 8) + rdx_2)
                                + *(r10 + 0x10)) == 0)
                            rax_14.b = 0
                        else if (r8_4 == *(arg1 + 0x28) - 1)
                            if (i == 0 || *(sx.q((*(r11 + 4) * r8_4 + i) * *(r11 + 8) + rdx_2)
                                    + *(r11 + 0x10)) != 0)
                                goto label_1417761e0
                            
                            rax_14.b = 0
                        else
                            rbx |= 1
                            
                            if (*(sx.q((*(r10 + 4) * (r8_4 + 1) + i) * *(r10 + 8) + rdx_2)
                                    + *(r10 + 0x10)) == 0 || (i != 0 && *(
                                    sx.q((*(r11 + 4) * r8_4 + i) * *(r11 + 8) + rdx_2)
                                    + *(r11 + 0x10)) == 0))
                                rax_14.b = 0
                            else
                            label_1417761e0:
                                
                                if (i == *(arg1 + 0x2c) - 1)
                                    if (rdx_2 == 0 || *(
                                            sx.q((*(arg4 + 4) * r8_4 + i) * *(arg4 + 8) + rdx_2)
                                            + *(arg4 + 0x10)) != 0)
                                        goto label_141776230
                                    
                                    rax_14.b = 0
                                else
                                    rbx |= 2
                                    
                                    if (*(sx.q((*(r11 + 4) * r8_4 + i + 1) * *(r11 + 8) + rdx_2)
                                            + *(r11 + 0x10)) == 0 || (rdx_2 != 0 && *(
                                            sx.q((*(arg4 + 4) * r8_4 + i) * *(arg4 + 8) + rdx_2)
                                            + *(arg4 + 0x10)) == 0))
                                        rax_14.b = 0
                                    else
                                    label_141776230:
                                        
                                        if (rdx_2 != r9_1 - 1)
                                            rbx |= 4
                                        
                                        if (rdx_2 == r9_1 - 1 || *(
                                                sx.q((*(arg4 + 4) * r8_4 + i) * *(arg4 + 8) + rdx_2)
                                                + *(arg4 + 0x10) + 1) != 0)
                                            rax_14.b = 1
                                        else
                                            rax_14.b = 0
                        
                        if ((rbx.b & 4) != 0)
                            rbx &= 0xfffffffb
                        
                        if ((rbx.b & 2) != 0)
                            rbx &= 0xfffffffd
                        
                        if ((rbx.b & 1) != 0)
                            rbx &= 0xfffffffe
                        
                        if (rax_14.b != 0)
                            r12 += 1
                            *(r15_1 + (sx.q((var_144 * r8_4 + i) * r14_3 + rdx_2) << 2)) = r12
                            r9_1 = *(arg1 + 0x30)
                        
                        rdx_2 += 1
                    while (rdx_2 s< r9_1)
                    
                    var_140 = r12
                
                i += 1
                rdx_2 = 0
            while (i s< *(arg1 + 0x2c))
            
            rax_8 = *(arg1 + 0x28)
        
        r8_4 += 1
    while (r8_4 s< rax_8)
    
    r9 = var_e8

int32_t rbx_1 = var_144
int32_t i_1 = 0
int32_t i_6 = 0
uint64_t var_d8
int32_t i_7

if (rax_8 s> 0)
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    int32_t r12_1 = 0
    
    do
        int32_t j = 0
        
        if (*(arg1 + 0x2c) s> 0)
            do
                int32_t k = 0
                
                if (*(arg1 + 0x30) s> 0)
                    i_7 = i_1
                    int32_t r15_2 = var_140
                    int32_t j_3 = j
                    zmm6 = zx.o(i_7.q)
                    
                    do
                        if (*(r9 + (sx.q((r12_1 + j) * var_148 + k) << 2)) == 0xffffffff)
                            var_d8 = zmm6.q
                            r15_2 += 1
                            int32_t k_2 = k
                            sub_141777e10(arg1, &var_d8, r15_2, r10, r11, arg4, &var_f8)
                            r9 = var_e8
                        
                        r10 = var_138
                        k += 1
                        r11 = var_130
                    while (k s< *(arg1 + 0x30))
                    
                    var_140 = r15_2
                    i_1 = i_6
                
                r10 = var_138
                j += 1
                r11 = var_130
            while (j s< *(arg1 + 0x2c))
            
            rbx_1 = var_144
        
        r10 = var_138
        i_1 += 1
        r11 = var_130
        r12_1 += rbx_1
        i_6 = i_1
    while (i_1 s< *(arg1 + 0x28))
    
    r12 = var_140

int32_t var_8c = 0x80
int64_t var_b8 = 0
int32_t var_b0 = 0
void* r8_6 = nullptr
int64_t r9_3 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x1c)
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
void* var_78 = nullptr
int32_t var_70 = 0
int64_t var_120 = 0
int64_t var_118 = 0

if (r12 + 1 s> 0)
    var_118.d = r12 + 1
    sub_1405a4cf0(&var_120)
    memset(var_120, 0, sx.q(r12 + 1) << 2)
    r9_3 = var_120
    r8_6 = var_78
else if (r12 + 1 s< 0 && r12 != 0xffffffff)
    var_118.d = r12 + 1
    sub_1405dac90(&var_120)
    r9_3 = var_120
    r8_6 = var_78

if (r12 s>= 0)
    __builtin_memset(r9_3, 0xffffffff, sx.q(r12 + 1) << 2)
    r8_6 = var_78

int32_t i_2 = 0
int32_t r10_1 = var_148
void var_80

if (*(arg1 + 0x2c) s> 0)
    int32_t r12_2 = 0
    
    do
        int32_t j_1 = 0
        
        if (*(arg1 + 0x30) s> 0)
            do
                int64_t rdx_5 = var_e8
                int32_t rax_46 = (*(arg1 + 0x28) - 1) * rbx_1
                int64_t rdi_8 = sx.q(*(rdx_5 + (sx.q(r12_2 + j_1) << 2)))
                i_6 = rdi_8.d
                int64_t rbx_4 = sx.q(*(rdx_5 + (sx.q((rax_46 + i_2) * r10_1 + j_1) << 2)))
                *(r9_3 + (rdi_8 << 2)) = 0
                var_140 = rbx_4.d
                *(r9_3 + (rbx_4 << 2)) = 0
                int32_t r9_4 = var_b0
                int32_t r11_1 = var_84
                int64_t rdx_6
                int32_t r10_2
                
                if (r9_4 == r11_1)
                label_14177654d:
                    sub_14077a5e0(&var_b8, &var_110, &i_6, nullptr)
                    r10_2 = var_70
                    r8_6 = var_78
                    r11_1 = var_84
                    r9_4 = var_b0
                    rdx_6 = var_b8
                else
                    r8_6 = var_78
                    r10_2 = var_70
                    void* rax_52 = &var_80
                    
                    if (r8_6 != 0)
                        rax_52 = r8_6
                    
                    int32_t rax_53 = *(rax_52 + ((sx.q(r10_2 - 1) & rdi_8) << 2))
                    
                    if (rax_53 == 0xffffffff)
                        goto label_14177654d
                    
                    rdx_6 = var_b8
                    
                    while (true)
                        int64_t rcx_36 = sx.q(rax_53) * 3
                        
                        if (*(rdx_6 + (rcx_36 << 2)) == rdi_8.d)
                            break
                        
                        rax_53 = *(rdx_6 + (rcx_36 << 2) + 4)
                        
                        if (rax_53 == 0xffffffff)
                            goto label_14177654d
                    
                    if (rax_53 == 0xffffffff)
                        goto label_14177654d
                
                if (r9_4 == r11_1)
                label_1417765bd:
                    sub_14077a5e0(&var_b8, &var_130, &var_140, nullptr)
                    r8_6 = var_78
                else
                    void* rax_55 = &var_80
                    
                    if (r8_6 != 0)
                        rax_55 = r8_6
                    
                    int32_t rax_56 = *(rax_55 + ((sx.q(r10_2 - 1) & rbx_4) << 2))
                    
                    if (rax_56 == 0xffffffff)
                        goto label_1417765bd
                    
                    while (true)
                        int64_t rcx_41 = sx.q(rax_56) * 3
                        
                        if (*(rdx_6 + (rcx_41 << 2)) == rbx_4.d)
                            break
                        
                        rax_56 = *(rdx_6 + (rcx_41 << 2) + 4)
                        
                        if (rax_56 == 0xffffffff)
                            goto label_1417765bd
                    
                    if (rax_56 == 0xffffffff)
                        goto label_1417765bd
                
                r9_3 = var_120
                j_1 += 1
                r10_1 = var_148
                rbx_1 = var_144
            while (j_1 s< *(arg1 + 0x30))
        
        r9_3 = var_120
        i_2 += 1
        rbx_1 = var_144
        r12_2 += r10_1
    while (i_2 s< *(arg1 + 0x2c))

int32_t rax_70 = *(arg1 + 0x28)
int32_t i_9 = 0
int32_t rcx_43 = var_144
i_6 = 0

if (rax_70 s> 0)
    int32_t r13_1 = 0
    
    do
        int32_t i_3 = 0
        
        if (*(arg1 + 0x30) s> 0)
            int32_t r15_5 = r10_1 * rcx_43 * i_9
            int64_t r12_3 = var_120
            
            do
                int64_t rdx_9 = var_e8
                int64_t rdi_9 = sx.q(*(rdx_9 + (sx.q(r15_5 + i_3) << 2)))
                int32_t rax_61 = (*(arg1 + 0x2c) - 1 + r13_1) * r10_1
                var_140 = rdi_9.d
                int64_t rbx_5 = sx.q(*(rdx_9 + (sx.q(rax_61 + i_3) << 2)))
                *(r12_3 + (rdi_9 << 2)) = 0
                var_110 = rbx_5.d
                *(r12_3 + (rbx_5 << 2)) = 0
                int32_t r9_5 = var_b0
                int32_t r11_2 = var_84
                int64_t rdx_10
                int32_t r10_3
                
                if (r9_5 == r11_2)
                label_1417766dd:
                    sub_14077a5e0(&var_b8, &var_130, &var_140, nullptr)
                    r10_3 = var_70
                    r8_6 = var_78
                    r11_2 = var_84
                    r9_5 = var_b0
                    rdx_10 = var_b8
                else
                    r8_6 = var_78
                    r10_3 = var_70
                    void* rax_65 = &var_80
                    
                    if (r8_6 != 0)
                        rax_65 = r8_6
                    
                    int32_t rax_66 = *(rax_65 + ((sx.q(r10_3 - 1) & rdi_9) << 2))
                    
                    if (rax_66 == 0xffffffff)
                        goto label_1417766dd
                    
                    rdx_10 = var_b8
                    
                    while (true)
                        int64_t rcx_48 = sx.q(rax_66) * 3
                        
                        if (*(rdx_10 + (rcx_48 << 2)) == rdi_9.d)
                            break
                        
                        rax_66 = *(rdx_10 + (rcx_48 << 2) + 4)
                        
                        if (rax_66 == 0xffffffff)
                            goto label_1417766dd
                    
                    if (rax_66 == 0xffffffff)
                        goto label_1417766dd
                
                if (r9_5 == r11_2)
                label_14177674d:
                    sub_14077a5e0(&var_b8, &var_138, &var_110, nullptr)
                    r8_6 = var_78
                else
                    void* rax_68 = &var_80
                    
                    if (r8_6 != 0)
                        rax_68 = r8_6
                    
                    int32_t rax_69 = *(rax_68 + ((sx.q(r10_3 - 1) & rbx_5) << 2))
                    
                    if (rax_69 == 0xffffffff)
                        goto label_14177674d
                    
                    while (true)
                        int64_t rcx_53 = sx.q(rax_69) * 3
                        
                        if (*(rdx_10 + (rcx_53 << 2)) == rbx_5.d)
                            break
                        
                        rax_69 = *(rdx_10 + (rcx_53 << 2) + 4)
                        
                        if (rax_69 == 0xffffffff)
                            goto label_14177674d
                    
                    if (rax_69 == 0xffffffff)
                        goto label_14177674d
                
                r10_1 = var_148
                i_3 += 1
            while (i_3 s< *(arg1 + 0x30))
            
            i_9 = i_6
            rcx_43 = var_144
        
        rax_70 = *(arg1 + 0x28)
        i_9 += 1
        r10_1 = var_148
        r13_1 += rcx_43
        i_6 = i_9
    while (i_9 s< rax_70)

i_6 = 0
int32_t i_10 = 0

if (rax_70 s> 0)
    do
        int32_t i_4 = 0
        
        if (*(arg1 + 0x2c) s> 0)
            int32_t r14_6 = var_148 * rcx_43 * i_10
            int64_t r12_4 = var_120
            
            do
                int64_t rcx_55 = var_e8
                int64_t rdi_10 = sx.q(*(rcx_55 + (sx.q(r14_6) << 2)))
                int32_t rax_73 = *(arg1 + 0x30) + r14_6
                var_110 = rdi_10.d
                int64_t rbx_6 = sx.q(*(rcx_55 + (sx.q(rax_73) << 2) - 4))
                *(r12_4 + (rdi_10 << 2)) = 0
                var_140 = rbx_6.d
                *(r12_4 + (rbx_6 << 2)) = 0
                int32_t r9_6 = var_b0
                int32_t r10_4 = var_84
                int64_t rdx_13
                int32_t r11_3
                
                if (r9_6 == r10_4)
                label_14177685d:
                    sub_14077a5e0(&var_b8, &var_138, &var_110, nullptr)
                    r11_3 = var_70
                    r8_6 = var_78
                    r10_4 = var_84
                    r9_6 = var_b0
                    rdx_13 = var_b8
                else
                    r8_6 = var_78
                    r11_3 = var_70
                    void* rax_76 = &var_80
                    
                    if (r8_6 != 0)
                        rax_76 = r8_6
                    
                    int32_t rax_77 = *(rax_76 + ((sx.q(r11_3 - 1) & rdi_10) << 2))
                    
                    if (rax_77 == 0xffffffff)
                        goto label_14177685d
                    
                    rdx_13 = var_b8
                    
                    while (true)
                        int64_t rcx_59 = sx.q(rax_77) * 3
                        
                        if (*(rdx_13 + (rcx_59 << 2)) == rdi_10.d)
                            break
                        
                        rax_77 = *(rdx_13 + (rcx_59 << 2) + 4)
                        
                        if (rax_77 == 0xffffffff)
                            goto label_14177685d
                    
                    if (rax_77 == 0xffffffff)
                        goto label_14177685d
                
                if (r9_6 == r10_4)
                label_1417768cd:
                    sub_14077a5e0(&var_b8, &var_130, &var_140, nullptr)
                    r8_6 = var_78
                else
                    void* rax_79 = &var_80
                    
                    if (r8_6 != 0)
                        rax_79 = r8_6
                    
                    int32_t rax_80 = *(rax_79 + ((sx.q(r11_3 - 1) & rbx_6) << 2))
                    
                    if (rax_80 == 0xffffffff)
                        goto label_1417768cd
                    
                    while (true)
                        int64_t rcx_64 = sx.q(rax_80) * 3
                        
                        if (*(rdx_13 + (rcx_64 << 2)) == rbx_6.d)
                            break
                        
                        rax_80 = *(rdx_13 + (rcx_64 << 2) + 4)
                        
                        if (rax_80 == 0xffffffff)
                            goto label_1417768cd
                    
                    if (rax_80 == 0xffffffff)
                        goto label_1417768cd
                
                i_4 += 1
                r14_6 += var_148
            while (i_4 s< *(arg1 + 0x2c))
            
            i_10 = i_6
        
        rax_70 = *(arg1 + 0x28)
        i_10 += 1
        rcx_43 = var_144
        i_6 = i_10
    while (i_10 s< rax_70)

int64_t r15_8 = var_e8
int32_t i_5 = 0
int32_t rdi_11
int64_t r11_4

if (rax_70 s<= 0)
    r11_4 = var_120
    rdi_11 = var_144
else
    int32_t r10_5 = 0
    r11_4 = var_120
    
    do
        int32_t j_2 = 0
        
        if (*(arg1 + 0x2c) s> 0)
            do
                int32_t k_1 = 0
                
                if (*(arg1 + 0x30) s> 0)
                    do
                        if (*(r11_4 +
                                (sx.q(*(r15_8 + (sx.q(k_1 + (j_2 + r10_5) * var_148) << 2))) << 2)) != 0)
                            int64_t rcx_67 =
                                sx.q((*(arg1 + 0x44) * i_5 + j_2) * *(arg1 + 0x48) + k_1)
                            int64_t rax_88 = *(arg1 + 0x50)
                            *(rax_88 + (rcx_67 << 2)) = (*(rax_88 + (rcx_67 << 2)) ^ 0x80000000).d
                        
                        k_1 += 1
                    while (k_1 s< *(arg1 + 0x30))
                
                j_2 += 1
            while (j_2 s< *(arg1 + 0x2c))
        
        rdi_11 = var_144
        i_5 += 1
        r10_5 += rdi_11
    while (i_5 s< *(arg1 + 0x28))
    
    r8_6 = var_78

int64_t* rbx_7 = arg5
int32_t r14_7 = rbx_7[1].d
int32_t r14_8 = r14_7 - 1

if (r14_7 - 1 s>= 0)
    int64_t r8_17 = var_120
    int64_t r9_7 = var_e8
    int32_t rdx_16 = var_148
    void* r15_7 = sx.q(r14_8) * 0xc
    var_138 = r15_7
    int64_t r13_4 = sx.q(r14_8 + 1) * 0xc
    
    while (true)
        int64_t rax_91 = *rbx_7
        int32_t r10_6 = *(r15_7 + rax_91)
        int32_t r11_5 = *(r15_7 + rax_91 + 4)
        int32_t rbx_8 = *(r15_7 + rax_91 + 8)
        
        if (*(r8_17 + (sx.q(*(r9_7 + (sx.q((rdi_11 * r10_6 + r11_5) * rdx_16 + rbx_8) << 2))) << 2))
            == 0)
        label_141776b9e:
            rbx_7 = arg5
        else
            int64_t rdx_17 = 0
            
            while (true)
                var_130 = nullptr
                void* rcx_70 = &var_130 + rdx_17
                int32_t var_128_1 = 0
                int32_t rax_98 = *(arg1 - &var_130 + rcx_70 + 0x28)
                *rcx_70 = 1
                int32_t rdi_13 = var_130.d + r10_6
                int32_t r8_19 = var_130:4.d + r11_5
                int32_t r9_9 = var_128_1 + rbx_8
                var_d8.d = rdi_13
                var_d8:4.d = r8_19
                int32_t var_d0_1 = r9_9
                
                if (*(&var_d8 + rdx_17) s>= rax_98)
                    r8_17 = var_120
                    r9_7 = var_e8
                else
                    r8_17 = var_120
                    r9_7 = var_e8
                    
                    if (*(r8_17 + (
                            sx.q(*(r9_7 + (sx.q((r8_19 + rdi_13 * var_144) * var_148 + r9_9) << 2)))
                            << 2)) != 0)
                        var_110.q = 0
                        int32_t var_108_1 = 0
                        *(&var_110 + rdx_17) = 1
                        int32_t i_8 = r10_6 - var_110
                        int32_t var_10c
                        int32_t rcx_73 = r11_5 - var_10c
                        int32_t rdi_16 = rbx_8 - var_108_1
                        i_7 = i_8
                        int32_t var_c4_1 = rcx_73
                        int32_t var_c0_1 = rdi_16
                        
                        if (*(&i_7 + rdx_17) s>= 0 && *(r8_17 + (sx.q(
                                *(r9_7 + (sx.q((i_8 * var_144 + rcx_73) * var_148 + rdi_16) << 2))) << 2))
                                != 0)
                            rdx_17 += 4
                            
                            if (rdx_17 s< 0xc)
                                continue
                            
                            rbx_7 = arg5
                            *(*(arg1 + 0x50) + (
                                sx.q((*(arg1 + 0x44) * r10_6 + r11_5) * *(arg1 + 0x48) + rbx_8)
                                << 2)) = 0xff7fffff
                            int32_t rcx_76 = rbx_7[1].d
                            int32_t rax_116 = rcx_76 - r14_8
                            
                            if (rax_116 != 1)
                                int64_t rcx_77 = *rbx_7
                                memmove(rcx_77 + var_138, rcx_77 + r13_4, (rax_116 - 1) * 0xc)
                                rcx_76 = rbx_7[1].d
                            
                            rbx_7[1].d = rcx_76 - 1
                            sub_140775970(rbx_7)
                            r8_17 = var_120
                            r9_7 = var_e8
                            rdx_16 = var_148
                            rdi_11 = var_144
                            break
                
                rdi_11 = var_144
                rdx_16 = var_148
                goto label_141776b9e
        
        var_138 -= 0xc
        r13_4 -= 0xc
        r15_7 -= 0xc
        int32_t temp4_1 = r14_8
        r14_8 -= 1
        
        if (temp4_1 - 1 s< 0)
            break
    
    r8_6 = var_78
    r11_4 = var_120
    r15_8 = var_e8

if (r11_4 != 0)
    sub_140a74f90(r11_4)
    r8_6 = var_78

int32_t var_70_1 = 0

if (r8_6 != 0)
    sub_140a74f90(r8_6)

var_b0 = 0
int32_t var_88_1 = 0xffffffff
int32_t var_84_1 = 0
void* result = sub_14059a8e0(&var_a8, 0)
int64_t var_98

if (var_98 != 0)
    result = sub_140a74f90(var_98)

int64_t rcx_85 = var_b8

if (rcx_85 != 0)
    result = sub_140a74f90(rcx_85)

if (r15_8 != 0)
    result = sub_140a74f90(r15_8)

__security_check_cookie(rax_1 ^ &var_188)
return result
