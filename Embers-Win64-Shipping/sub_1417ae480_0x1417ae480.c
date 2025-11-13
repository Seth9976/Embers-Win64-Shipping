// 函数: sub_1417ae480
// 地址: 0x1417ae480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r12 = arg1
int32_t i_7
sub_1405ba560(arg1 + 0x170, &i_7, arg2)
int64_t i_15 = sx.q(i_7)
void* const r15_2

if (i_15.d == 0xffffffff)
    r15_2 = nullptr
else
    r15_2 = (i_15 << 5) + *(r12 + 0x170)

int32_t r11 = *(r15_2 + 0x10)
void* rbx = nullptr
void* var_108 = nullptr
int32_t rax_2 = r11
void* const var_120 = r15_2
int32_t var_fc = 0

if (r11 s> 0)
    sub_140638a00(&var_108)
    rax_2 = *(r15_2 + 0x10)
    rbx = var_108

int32_t i = 0
void* r8_1

if (rax_2 s> 0)
    int64_t r9_1 = 0
    r8_1 = rbx
    
    do
        r9_1 += 8
        i += 1
        r8_1 += 0xc
        int64_t* rcx_2 = *(r9_1 + *(r15_2 + 8) - 8)
        int64_t rdx_2 = sx.q(rcx_2[1].d) * 3
        int64_t rcx_3 = *(*rcx_2 + 0x28)
        *(r8_1 - 0xc) = *(rcx_3 + (rdx_2 << 2))
        *(r8_1 - 4) = *(rcx_3 + (rdx_2 << 2) + 8)
    while (i s< *(r15_2 + 0x10))

r8_1.b = 1
int64_t* var_118 = nullptr
int32_t i_13 = 0
void* var_160 = rbx
int32_t var_158 = r11
sub_141521d00(&var_160, &var_118, r8_1.b, 0x38d1b717)
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int64_t rdi = 0
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t rbx_1 = *(r15_2 + 0x10)

if (rbx_1 s> 0)
    sub_1417b4a60(&var_a8, rbx_1)
    int32_t rax_9
    
    if (rbx_1 u< 4)
        rax_9 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_6
        
        if (rbx_2 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        
        if (rcx_8 == 0)
            rax_9 = 1
        else
            rax_9 = 1 << ((not.d(rcx_8)).b & (0x20 - (0x1f - temp0_3)))
    
    if (var_60 == 0 || var_60 s< rax_9)
        int32_t var_60_1 = rax_9
        sub_1417b2970(&var_a8)
    
    rdi = var_a8

int64_t* rbx_4 = *(r15_2 + 8)
int64_t rsi = 0
uint64_t rcx_13 = sx.q(*(r15_2 + 0x10))
uint64_t r14_1 = rcx_13 << 3 u>> 3

if (rbx_4 u> &rbx_4[rcx_13])
    r14_1 = 0

int32_t var_168
void* var_128
void** var_d8

if (r14_1 != 0)
    var_d8 = &var_128
    void** var_d0_1 = &var_160
    
    do
        void* rax_11 = *rbx_4
        var_128 = rax_11
        var_160 = rax_11
        var_158 = 1
        sub_14178d810(&var_a8, &var_168, &var_d8, nullptr)
        rsi += 1
        rbx_4 = &rbx_4[1]
    while (rsi != r14_1)
    
    rcx_13 = zx.q(*(r15_2 + 0x10))
    rdi = var_a8

int64_t* var_138 = &var_a8
int32_t i_1 = 0
i_7 = 0
int32_t var_180
int32_t var_17c
int32_t var_178
int32_t var_174
int32_t var_170
int32_t var_16c

if (rcx_13.d s> 0)
    int64_t* rcx_15 = nullptr
    int64_t* var_130_1 = nullptr
    
    do
        int64_t* r13_1 = *(rcx_15 + *(r15_2 + 8))
        int64_t* rax_13 = nullptr
        
        if (*(r13_1 + 0xc) u>= 3)
            rax_13 = r13_1
        
        int64_t* rcx_18 = (sx.q(rax_13[1].d) << 4) + *(*rax_13 + 0x500)
        int64_t* r15_3 = *rcx_18
        void* r12_3 = &r15_3[sx.q(rcx_18[1].d) * 2]
        
        if (r15_3 != r12_3)
            do
                int64_t rbx_5 = *r15_3
                
                if (*sub_1417ae200(&var_a8, &var_168, rbx_5) != 0xffffffff)
                    int64_t rdi_1 = sub_1417a41f0(&var_138, r13_1)
                    int64_t rax_17 = sub_1417a41f0(&var_138, rbx_5)
                    int64_t rsi_1 = rax_17
                    
                    if (rdi_1 != rax_17)
                        sub_1417ae200(&var_a8, &var_180, rdi_1)
                        int64_t rcx_23 = sx.q(var_180)
                        int64_t r14_2 = var_a8
                        void* const rbx_8
                        
                        if (rcx_23.d == 0xffffffff)
                            rbx_8 = nullptr
                        else
                            rbx_8 = (rcx_23 << 5) + r14_2
                        
                        sub_1417ae200(&var_a8, &var_17c, rsi_1)
                        int64_t rax_18 = sx.q(var_17c)
                        void* const rcx_27
                        
                        if (rax_18.d == 0xffffffff)
                            rcx_27 = nullptr
                        else
                            rcx_27 = (rax_18 << 5) + r14_2
                        
                        if (*(rbx_8 + 0x10) s> *(rcx_27 + 0x10))
                            int64_t rax_20 = rdi_1
                            rdi_1 = rsi_1
                            rsi_1 = rax_20
                        
                        sub_1417ae200(&var_a8, &var_178, rdi_1)
                        int64_t rax_21 = sx.q(var_178)
                        void* const rcx_31
                        
                        if (rax_21.d == 0xffffffff)
                            rcx_31 = nullptr
                        else
                            rcx_31 = (rax_21 << 5) + r14_2
                        
                        *(rcx_31 + 8) = rsi_1
                        sub_1417ae200(&var_a8, &var_174, rsi_1)
                        int64_t rax_22 = sx.q(var_174)
                        int64_t rsi_2 = var_a8
                        void* const rbx_11
                        
                        if (rax_22.d == 0xffffffff)
                            rbx_11 = nullptr
                        else
                            rbx_11 = (rax_22 << 5) + rsi_2
                        
                        sub_1417ae200(&var_a8, &var_170, rdi_1)
                        int64_t rax_23 = sx.q(var_170)
                        void* const rcx_36
                        
                        if (rax_23.d == 0xffffffff)
                            rcx_36 = nullptr
                        else
                            rcx_36 = (rax_23 << 5) + rsi_2
                        
                        *(rbx_11 + 0x10) += *(rcx_36 + 0x10)
                        sub_1417ae200(&var_a8, &var_16c, rdi_1)
                        int64_t rax_25 = sx.q(var_16c)
                        void* const rcx_40
                        
                        if (rax_25.d == 0xffffffff)
                            rcx_40 = nullptr
                        else
                            rcx_40 = (rax_25 << 5) + var_a8
                        
                        *(rcx_40 + 0x10) = 0
                    
                    rdi = var_a8
                
                r15_3 = &r15_3[2]
            while (r15_3 != r12_3)
            
            i_1 = i_7
        
        i_1 += 1
        r15_2 = var_120
        rcx_15 = &var_130_1[1]
        i_7 = i_1
        var_130_1 = rcx_15
    while (i_1 s< *(r15_2 + 0x10))
    
    r12 = arg1

int32_t i_17 = i_13
void* rsi_3 = nullptr
var_160 = nullptr
int32_t r13_2 = 0
var_158.q = 0

if (i_17 s> 0)
    sub_1413a8ae0(&var_160, i_17)
    i_17 = i_13
    rdi = var_a8
    r13_2 = var_158
    rsi_3 = var_160

int32_t i_16 = 0
float zmm6 = *(r12 + 0x228) * 250000f
i_7 = 0
int32_t var_150
int32_t var_14c
int32_t var_148
int32_t var_144
int32_t var_140

if (i_17 s> 0)
    void* r11_1 = var_108
    void* r8_12 = nullptr
    var_128 = nullptr
    void** r10 = nullptr
    var_d8 = nullptr
    int32_t* r9_3 = r11_1 + 8
    int32_t* var_f0_1 = r9_3
    
    do
        int64_t* i_9 = *(r10 + *(r15_2 + 8))
        int64_t* rax_27 = var_118
        int32_t* r14_3 = *(rax_27 + r8_12)
        int32_t* var_e0_1 = r14_3
        int64_t rbx_12 = 0
        int64_t var_f8_1 = 0
        uint64_t rax_30 = sx.q(*(rax_27 + r8_12 + 8)) << 2 u>> 2
        
        if (r14_3 u> &r14_3[sx.q(*(rax_27 + r8_12 + 8))])
            rax_30 = 0
        
        if (rax_30 != 0)
            do
                int64_t rax_31 = sx.q(*r14_3)
                
                if (rax_31.d s>= i_16)
                    int64_t* i_12 = *(*(r15_2 + 8) + (rax_31 << 3))
                    int64_t rax_33 = rax_31 * 3
                    float zmm2_1 = *(r11_1 + (rax_33 << 2) + 4) f- r9_3[-1]
                    int64_t zmm1_1
                    zmm1_1.d = (*(r11_1 + (rax_33 << 2))).d f- r9_3[-2]
                    int128_t zmm0_1
                    zmm0_1.d = (*(r11_1 + (rax_33 << 2) + 8)).d f- *r9_3
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm2_1 = zmm2_1 * zmm2_1 f+ zmm1_1.d f+ zmm0_1.d
                    
                    if (zmm2_1 >= zmm6)
                        int64_t* i_2 = i_9
                        
                        if (i_9 != 0)
                            do
                                sub_1417ae200(&var_a8, &var_150, i_2)
                                int64_t rax_44 = sx.q(var_150)
                                void* rcx_69
                                void* const rbx_19
                                
                                if (rax_44.d == 0xffffffff)
                                    rbx_19 = nullptr
                                    rcx_69 = nullptr
                                else
                                    rcx_69 = (rax_44 << 5) + rdi
                                    rbx_19 = nullptr
                                
                                if (*(rcx_69 + 8) == i_2)
                                    break
                                
                                sub_1417ae200(&var_a8, &var_14c, i_2)
                                int64_t rax_45 = sx.q(var_14c)
                                
                                if (rax_45.d != 0xffffffff)
                                    rbx_19 = (rax_45 << 5) + rdi
                                
                                sub_1417ae200(&var_a8, &var_148, *(rbx_19 + 8))
                                int64_t rax_46 = sx.q(var_148)
                                void* rcx_74
                                
                                if (rax_46.d == 0xffffffff)
                                    rcx_74 = nullptr
                                else
                                    rcx_74 = (rax_46 << 5) + rdi
                                
                                *(rbx_19 + 8) = *(rcx_74 + 8)
                                i_2 = *(rcx_74 + 8)
                                rdi = var_a8
                            while (i_2 != 0)
                        
                        int64_t* i_3 = i_12
                        
                        if (i_12 != 0)
                            do
                                sub_1417ae200(&var_a8, &var_144, i_3)
                                int64_t rax_48 = sx.q(var_144)
                                void* rcx_78
                                
                                if (rax_48.d == 0xffffffff)
                                    rcx_78 = nullptr
                                else
                                    rcx_78 = (rax_48 << 5) + rdi
                                
                                if (*(rcx_78 + 8) == i_3)
                                    break
                                
                                sub_1417ae200(&var_a8, &var_140, i_3)
                                int64_t rax_49 = sx.q(var_140)
                                void* const rbx_24
                                
                                if (rax_49.d == 0xffffffff)
                                    rbx_24 = nullptr
                                else
                                    rbx_24 = (rax_49 << 5) + rdi
                                
                                sub_1417ae200(&var_a8, &var_168, *(rbx_24 + 8))
                                int64_t rax_50 = sx.q(var_168)
                                void* rcx_83
                                
                                if (rax_50.d == 0xffffffff)
                                    rcx_83 = nullptr
                                else
                                    rcx_83 = (rax_50 << 5) + rdi
                                
                                *(rbx_24 + 8) = *(rcx_83 + 8)
                                i_3 = *(rcx_83 + 8)
                                rdi = var_a8
                            while (i_3 != 0)
                        
                        if (i_2 == i_3)
                            rbx_12 = var_f8_1
                            rsi_3 = var_160
                        else
                            int64_t rbx_25 = sx.q(r13_2)
                            int64_t* i_14 = i_12
                            r13_2 = (rbx_25 + 1).d
                            int32_t var_154
                            
                            if (r13_2 s> var_154)
                                sub_140ac0d60(&var_160)
                            
                            rsi_3 = var_160
                            int64_t rcx_85 = rbx_25 * 3
                            rbx_12 = var_f8_1
                            *(rsi_3 + (rcx_85 << 3)) = i_9.o
                            *(rsi_3 + (rcx_85 << 3) + 0x10) = zmm2_1.q
                            rdi = var_a8
                    else
                        int64_t rdi_2 = sub_1417a41f0(&var_138, i_9)
                        int64_t rax_35 = sub_1417a41f0(&var_138, i_12)
                        int64_t rsi_4 = rax_35
                        
                        if (rdi_2 != rax_35)
                            sub_1417ae200(&var_a8, &var_16c, rdi_2)
                            int64_t rcx_47 = sx.q(var_16c)
                            int64_t r14_4 = var_a8
                            void* const rbx_15
                            
                            if (rcx_47.d == 0xffffffff)
                                rbx_15 = nullptr
                            else
                                rbx_15 = (rcx_47 << 5) + r14_4
                            
                            sub_1417ae200(&var_a8, &var_170, rsi_4)
                            int64_t rax_36 = sx.q(var_170)
                            void* const rcx_51
                            
                            if (rax_36.d == 0xffffffff)
                                rcx_51 = nullptr
                            else
                                rcx_51 = (rax_36 << 5) + r14_4
                            
                            if (*(rbx_15 + 0x10) s> *(rcx_51 + 0x10))
                                int64_t rax_38 = rdi_2
                                rdi_2 = rsi_4
                                rsi_4 = rax_38
                            
                            sub_1417ae200(&var_a8, &var_174, rdi_2)
                            int64_t rax_39 = sx.q(var_174)
                            void* const rcx_55
                            
                            if (rax_39.d == 0xffffffff)
                                rcx_55 = nullptr
                            else
                                rcx_55 = (rax_39 << 5) + r14_4
                            
                            *(rcx_55 + 8) = rsi_4
                            sub_1417ae200(&var_a8, &var_178, rsi_4)
                            int64_t rax_40 = sx.q(var_178)
                            int64_t rsi_5 = var_a8
                            void* const rbx_18
                            
                            if (rax_40.d == 0xffffffff)
                                rbx_18 = nullptr
                            else
                                rbx_18 = (rax_40 << 5) + rsi_5
                            
                            sub_1417ae200(&var_a8, &var_17c, rdi_2)
                            int64_t rax_41 = sx.q(var_17c)
                            void* const rcx_60
                            
                            if (rax_41.d == 0xffffffff)
                                rcx_60 = nullptr
                            else
                                rcx_60 = (rax_41 << 5) + rsi_5
                            
                            *(rbx_18 + 0x10) += *(rcx_60 + 0x10)
                            sub_1417ae200(&var_a8, &var_180, rdi_2)
                            int64_t rax_43 = sx.q(var_180)
                            void* const rcx_64
                            
                            if (rax_43.d == 0xffffffff)
                                rcx_64 = nullptr
                            else
                                rcx_64 = (rax_43 << 5) + var_a8
                            
                            rbx_12 = var_f8_1
                            *(rcx_64 + 0x10) = 0
                            r14_3 = var_e0_1
                        
                        zmm6 = sub_1417a98a0(arg1, i_9, i_12)
                        rdi = var_a8
                        rsi_3 = var_160
                    
                    i_16 = i_7
                    r9_3 = var_f0_1
                    r15_2 = var_120
                    r11_1 = var_108
                
                r14_3 = &r14_3[1]
                rbx_12 += 1
                var_e0_1 = r14_3
                var_f8_1 = rbx_12
            while (rbx_12 != rax_30)
            
            i_17 = i_13
            r10 = var_d8
        
        i_16 += 1
        r8_12 = var_128 + 0x10
        i_7 = i_16
        r10 = &r10[1]
        var_128 = r8_12
        r9_3 = &r9_3[3]
        var_d8 = r10
        var_f0_1 = r9_3
    while (i_16 s< i_17)

char var_188 = 0
sub_141791d70(rsi_3, r13_2, 0)
void* r15_4 = rsi_3
void* r14_5 = rsi_3 + sx.q(r13_2) * 0x18
var_128 = r14_5

if (rsi_3 != r14_5)
    int64_t rdi_3 = var_a8
    
    do
        int64_t* i_10 = *r15_4
        int64_t* i_11 = *(r15_4 + 8)
        int64_t* i_4 = i_10
        
        if (i_10 != 0)
            do
                sub_1417ae200(&var_a8, &var_168, i_4)
                int64_t rax_53 = sx.q(var_168)
                void* const rcx_91
                void* const rbx_26
                
                if (rax_53.d == 0xffffffff)
                    rbx_26 = nullptr
                    rcx_91 = nullptr
                else
                    rcx_91 = (rax_53 << 5) + rdi_3
                    rbx_26 = nullptr
                
                if (*(rcx_91 + 8) == i_4)
                    break
                
                sub_1417ae200(&var_a8, &var_140, i_4)
                int64_t rax_54 = sx.q(var_140)
                
                if (rax_54.d != 0xffffffff)
                    rbx_26 = (rax_54 << 5) + rdi_3
                
                sub_1417ae200(&var_a8, &var_144, *(rbx_26 + 8))
                int64_t rax_55 = sx.q(var_144)
                void* const rcx_96
                
                if (rax_55.d == 0xffffffff)
                    rcx_96 = nullptr
                else
                    rcx_96 = (rax_55 << 5) + rdi_3
                
                *(rbx_26 + 8) = *(rcx_96 + 8)
                i_4 = *(rcx_96 + 8)
                rdi_3 = var_a8
            while (i_4 != 0)
        
        int64_t* i_5 = i_11
        
        if (i_11 != 0)
            do
                sub_1417ae200(&var_a8, &var_148, i_5)
                int64_t rax_57 = sx.q(var_148)
                void* const rcx_100
                
                if (rax_57.d == 0xffffffff)
                    rcx_100 = nullptr
                else
                    rcx_100 = (rax_57 << 5) + rdi_3
                
                if (*(rcx_100 + 8) == i_5)
                    break
                
                sub_1417ae200(&var_a8, &var_14c, i_5)
                int64_t rax_58 = sx.q(var_14c)
                void* const rbx_31
                
                if (rax_58.d == 0xffffffff)
                    rbx_31 = nullptr
                else
                    rbx_31 = (rax_58 << 5) + rdi_3
                
                sub_1417ae200(&var_a8, &var_150, *(rbx_31 + 8))
                int64_t rax_59 = sx.q(var_150)
                void* const rcx_105
                
                if (rax_59.d == 0xffffffff)
                    rcx_105 = nullptr
                else
                    rcx_105 = (rax_59 << 5) + rdi_3
                
                *(rbx_31 + 8) = *(rcx_105 + 8)
                i_5 = *(rcx_105 + 8)
                rdi_3 = var_a8
            while (i_5 != 0)
        
        if (i_4 != i_5)
            int64_t rdi_4 = sub_1417a41f0(&var_138, i_10)
            int64_t rax_62 = sub_1417a41f0(&var_138, i_11)
            int64_t rsi_6 = rax_62
            
            if (rdi_4 != rax_62)
                sub_1417ae200(&var_a8, &var_16c, rdi_4)
                int64_t rcx_109 = sx.q(var_16c)
                int64_t r14_6 = var_a8
                void* const rbx_34
                
                if (rcx_109.d == 0xffffffff)
                    rbx_34 = nullptr
                else
                    rbx_34 = (rcx_109 << 5) + r14_6
                
                sub_1417ae200(&var_a8, &var_170, rsi_6)
                int64_t rax_63 = sx.q(var_170)
                void* const rcx_113
                
                if (rax_63.d == 0xffffffff)
                    rcx_113 = nullptr
                else
                    rcx_113 = (rax_63 << 5) + r14_6
                
                if (*(rbx_34 + 0x10) s> *(rcx_113 + 0x10))
                    int64_t rax_65 = rdi_4
                    rdi_4 = rsi_6
                    rsi_6 = rax_65
                
                sub_1417ae200(&var_a8, &var_174, rdi_4)
                int64_t rax_66 = sx.q(var_174)
                void* const rcx_117
                
                if (rax_66.d == 0xffffffff)
                    rcx_117 = nullptr
                else
                    rcx_117 = (rax_66 << 5) + r14_6
                
                *(rcx_117 + 8) = rsi_6
                sub_1417ae200(&var_a8, &var_178, rsi_6)
                int64_t rax_67 = sx.q(var_178)
                int64_t rsi_7 = var_a8
                void* const rbx_37
                
                if (rax_67.d == 0xffffffff)
                    rbx_37 = nullptr
                else
                    rbx_37 = (rax_67 << 5) + rsi_7
                
                sub_1417ae200(&var_a8, &var_17c, rdi_4)
                int64_t rax_68 = sx.q(var_17c)
                void* const rcx_122
                
                if (rax_68.d == 0xffffffff)
                    rcx_122 = nullptr
                else
                    rcx_122 = (rax_68 << 5) + rsi_7
                
                *(rbx_37 + 0x10) += *(rcx_122 + 0x10)
                sub_1417ae200(&var_a8, &var_180, rdi_4)
                int64_t rax_70 = sx.q(var_180)
                void* const rcx_126
                
                if (rax_70.d == 0xffffffff)
                    rcx_126 = nullptr
                else
                    rcx_126 = (rax_70 << 5) + var_a8
                
                *(rcx_126 + 0x10) = 0
                r14_5 = var_128
            
            sub_1417a98a0(arg1, i_10, i_11)
            rdi_3 = var_a8
        
        r15_4 += 0x18
    while (r15_4 != r14_5)
    
    rsi_3 = var_160

if (rsi_3 != 0)
    sub_140a74f90(rsi_3)

int32_t var_60_2 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t var_a0
var_a0.d = 0
int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int64_t var_98
void* result = sub_14059a8e0(&var_98, 0)
int64_t var_88

if (var_88 != 0)
    result = sub_140a74f90(var_88)

int64_t rcx_133 = var_a8

if (rcx_133 != 0)
    result = sub_140a74f90(rcx_133)

int32_t i_8 = i_13
int64_t* rbx_38 = var_118

if (i_8 != 0)
    int32_t i_6
    
    do
        int64_t rcx_134 = *rbx_38
        
        if (rcx_134 != 0)
            result = sub_140a74f90(rcx_134)
        
        rbx_38 = &rbx_38[2]
        i_6 = i_8
        i_8 -= 1
    while (i_6 != 1)
    rbx_38 = var_118

if (rbx_38 != 0)
    result = sub_140a74f90(rbx_38)

void* rcx_136 = var_108

if (rcx_136 != 0)
    result = sub_140a74f90(rcx_136)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
