// 函数: sub_1418cafd0
// 地址: 0x1418cafd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rbx = data_143efb550
void* rsi = arg2
int64_t* var_b8 = nullptr
char* r14 = arg1
int64_t var_100
__builtin_memset(&var_100, 0, 0x18)
int64_t rdi = rbx
char rax_2 = data_143de5480
void* var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t var_f8
var_f8.d = 1
int64_t rcx

if (rax_2 == 0)
    rcx = 0
else
    uint32_t rax_3 = GetCurrentThreadId()
    rbx = data_143efb550
    rax_2 = data_143de5480
    rcx.b = rax_3 != data_143de5470

int32_t r13 = *(rdi + (rcx << 2))
int32_t var_128 = r13
int32_t var_110_1
int64_t rcx_1

if (r13 s<= 1)
    if (rax_2 == 0)
        rcx_1 = 0
    else
        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
        rax_2 = data_143de5480
        rcx_1.b = cond:2_1
    
    var_110_1 = 6

if (r13 s> 1 || *(rbx + (rcx_1 << 2)) == 1)
    var_110_1 = 8

int64_t rbx_1 = data_143efb568
int64_t rcx_2

if (rax_2 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

int32_t rdx = *(rbx_1 + (rcx_2 << 2))
bool cond:3 = rdx == 2
int32_t rax_6 = *(rsi + 0x58)
int32_t var_48 = 0xffffffff
char var_44 = 0xff
char var_137
int32_t i_3

if (rax_6 - *(rsi + 0x84) s> 0 || rdx == 2)
    int64_t rdi_1 = sx.q(*(r14 + 0x50))
    var_137 = 1
    i_3 = rdi_1.d
    int32_t rax_8 = (rdi_1 + 1).d
    *(r14 + 0x50) = rax_8
    
    if (rax_8 s> *(r14 + 0x54))
        sub_1405a4df0(&r14[0x48])
    
    int64_t rax_9 = *(r14 + 0x48)
    int64_t rcx_4 = rdi_1 * 3
    *(rax_9 + (rcx_4 << 3)) = 0
    *(rax_9 + (rcx_4 << 3) + 8) = 0
    *(rax_9 + (rcx_4 << 3) + 0x10) = 0
else
    var_137 = 0
    i_3 = 0xffffffff

int64_t* i = nullptr
int32_t var_e8 = 0
int64_t* i_2 = nullptr
int64_t var_c0 = 0
int64_t var_90
bool r12_3

do
    int64_t* rdi_3 = *(rsi + (i << 3) + 0xa0)
    int64_t* var_e0_1 = rdi_3
    
    if (rdi_3 == 0)
        r12_3 = cond:3
    else
        int32_t rax_10 = rdi_3[9].d
        void* rsi_1 = i * 0x38
        var_f8:4.d = 0x20
        void* var_118_1 = rsi_1
        void* r15_1 = r14 + rsi_1
        void* var_d8_1 = r15_1
        
        if (rax_10 s> *(r15_1 + 0x84))
            sub_1405947f0(r15_1 + 0x78, rax_10)
            rax_10 = rdi_3[9].d
        
        int32_t j = 0
        
        if (rax_10 s> 0)
            int64_t* rdi_2 = &r14[0x48]
            
            do
                if (cond:3 == 0)
                    char i_4 = *(&var_48 + i)
                    
                    if (i_4 != 0xff)
                        i = zx.q(i_4)
                    else
                        i = sx.q(rdi_2[1].d)
                        int32_t rax_11 = (i + 1).d
                        rdi_2[1].d = rax_11
                        
                        if (rax_11 s> *(rdi_2 + 0xc))
                            sub_1405a4df0(rdi_2)
                        
                        int64_t rax_12 = *rdi_2
                        void* rcx_7 = i * 3
                        *(rax_12 + (rcx_7 << 3)) = 0
                        *(rax_12 + (rcx_7 << 3) + 8) = 0
                        *(rax_12 + (rcx_7 << 3) + 0x10) = 0
                        *(&var_48 + i_2) = i.b
                else
                    i.b = 0
                
                int64_t rax_14 = *rdi_2
                uint64_t r15_2 = zx.q(i.b)
                uint64_t rcx_8 = r15_2 * 3
                int64_t rsi_2 = sx.q(*(rax_14 + (rcx_8 << 3) + 8))
                int64_t* rbx_2 = rax_14 + (rcx_8 << 3)
                int32_t rax_15 = (rsi_2 + 1).d
                rbx_2[1].d = rax_15
                
                if (rax_15 s> *(rbx_2 + 0xc))
                    sub_1405a4cf0(rbx_2)
                
                *(*rbx_2 + (rsi_2 << 2)) = var_110_1
                
                if (*(var_118_1 + rdi_2 + 0x40) == 0xffff)
                    *(var_118_1 + rdi_2 + 0x40) = r15_2.w
                
                int64_t r14_1 = sx.q(*(var_118_1 + rdi_2 + 0x38))
                void* rbx_3 = var_118_1 + rdi_2
                int32_t rax_18 = (r14_1 + 1).d
                *(rbx_3 + 0x38) = rax_18
                
                if (rax_18 s> *(rbx_3 + 0x3c))
                    sub_140594770(rbx_3 + 0x30)
                
                var_100.d = rsi_2.d
                *(*(rbx_3 + 0x30) + (r14_1 << 1)) = rsi_2.w
                r14 = arg1
                var_100:4.d = var_110_1
                sub_1418d9650(r14, r15_2.d, &var_100)
                i = i_2
                j += 1
            while (j s< var_e0_1[9].d)
            
            rsi_1 = var_118_1
            rdi_3 = var_e0_1
            r13 = var_128
            r15_1 = var_d8_1
        
        int32_t j_3
        
        if (*(rdi_3 + 0x84) != 0)
            int32_t rax_21 = rdi_3[1].d
            
            if (rax_21 s> *(r15_1 + 0x74))
                sub_14083adb0(r15_1 + 0x68, rax_21)
                rax_21 = rdi_3[1].d
            
            int32_t r12_1 = 0
            
            if (rax_21 s> 0)
                int32_t r15_3 = 6
                int64_t r13_2 = 0
                
                if (r13 s> 1)
                    r15_3 = 8
                
                int32_t var_108_1 = r15_3
                
                while (true)
                    void* rax_22 = *rdi_3
                    var_f8:4.d = 0x20
                    var_100:4.d = r15_3
                    int64_t r9_1 = sx.q(*(rax_22 + r13_2))
                    j_3 = r9_1.d
                    
                    if (*(rax_22 + r13_2 + 4) == 0xffff)
                        i = &r14[0x68] + rsi_1
                        int64_t rdi_7 = sx.q(i[1].d)
                        int32_t rax_59 = (rdi_7 + 1).d
                        i[1].d = rax_59
                        
                        if (rax_59 s> *(i + 0xc))
                            sub_14083a900(i)
                        
                        int64_t rax_60 = *i
                        int64_t rcx_43 = rdi_7 * 3
                        *(rax_60 + (rcx_43 << 1)) = 0xffffffff
                        *(rax_60 + (rcx_43 << 1) + 4) = 0
                        *(*i + (rcx_43 << 1) + 4) = 0
                    else if (var_137 == 0)
                    label_1418cb5b5:
                        
                        if (cond:3 == 0)
                            char i_5 = *(&var_48 + i)
                            
                            if (i_5 != 0xff)
                                i = zx.q(i_5)
                            else
                                i = sx.q(*(r14 + 0x50))
                                int32_t rax_46 = (i + 1).d
                                *(r14 + 0x50) = rax_46
                                
                                if (rax_46 s> *(r14 + 0x54))
                                    sub_1405a4df0(&r14[0x48])
                                
                                int64_t rax_47 = *(r14 + 0x48)
                                void* rcx_33 = i * 3
                                *(rax_47 + (rcx_33 << 3)) = 0
                                *(rax_47 + (rcx_33 << 3) + 8) = 0
                                *(rax_47 + (rcx_33 << 3) + 0x10) = 0
                                *(&var_48 + i_2) = i.b
                        else
                            i.b = 0
                        
                        uint64_t rcx_34 = zx.q(i.b) * 3
                        int64_t rax_50 = *(r14 + 0x48)
                        int64_t r14_2 = sx.q(*(rax_50 + (rcx_34 << 3) + 8))
                        int64_t* rsi_5 = rax_50 + (rcx_34 << 3)
                        int32_t rax_51 = (r14_2 + 1).d
                        rsi_5[1].d = rax_51
                        
                        if (rax_51 s> *(rsi_5 + 0xc))
                            sub_1405a4cf0(rsi_5)
                        
                        void* rsi_7 = var_118_1 + &r14[0x48]
                        *(*rsi_5 + (r14_2 << 2)) = r15_3
                        int64_t r15_4 = sx.q(*(rsi_7 + 0x28))
                        int32_t rax_53 = (r15_4 + 1).d
                        *(rsi_7 + 0x28) = rax_53
                        
                        if (rax_53 s> *(rsi_7 + 0x2c))
                            sub_14083a900(rsi_7 + 0x20)
                        
                        int64_t rcx_37 = r15_4 * 3
                        int64_t rax_54 = *(rsi_7 + 0x20)
                        var_100.d = r14_2.d
                        *(rax_54 + (rcx_37 << 1)) = 0xffffffff
                        *(rax_54 + (rcx_37 << 1) + 4) = 0
                        int64_t rax_55 = *(rsi_7 + 0x20)
                        *(rax_55 + (rcx_37 << 1) + 4) = 1
                        *(rax_55 + (rcx_37 << 1) + 2) = r14_2.w
                        *(rax_55 + (rcx_37 << 1)) = zx.w(i.b)
                        
                        if (cond:3 == 0)
                            char i_6 = *(&var_48 + i_2)
                            
                            if (i_6 != 0xff)
                                i = zx.q(i_6)
                            else
                                i = sx.q(*(r14 + 0x50))
                                int32_t rax_57 = (i + 1).d
                                *(r14 + 0x50) = rax_57
                                
                                if (rax_57 s> *(r14 + 0x54))
                                    sub_1405a4df0(&r14[0x48])
                                
                                int64_t rax_58 = *(r14 + 0x48)
                                void* rcx_40 = i * 3
                                *(&var_48 + i_2) = i.b
                                *(rax_58 + (rcx_40 << 3)) = 0
                                *(rax_58 + (rcx_40 << 3) + 8) = 0
                                *(rax_58 + (rcx_40 << 3) + 0x10) = 0
                        else
                            i.b = 0
                        
                        r14 = arg1
                        sub_1418d9650(r14, zx.d(i.b), &var_100)
                        r15_3 = var_108_1
                        rsi_1 = var_118_1
                    else
                        *(arg2 + 0x84)
                        int32_t* rcx_16
                        
                        if (*(arg2 + 0x58) == *(arg2 + 0x84))
                        label_1418cb40e:
                            rcx_16 = nullptr
                        else
                            void* r8_1 = arg2 + 0x88
                            void* rcx_13 = *(r8_1 + 8)
                            
                            if (rcx_13 != 0)
                                r8_1 = rcx_13
                            
                            int32_t rax_25 = *(r8_1 + (((sx.q(*(arg2 + 0x98)) - 1) & r9_1) << 2))
                            
                            if (rax_25 == 0xffffffff)
                            label_1418cb40e_1:
                                rcx_16 = nullptr
                            else
                                while (true)
                                    rcx_16 = (sx.q(rax_25) << 4) + *(arg2 + 0x50)
                                    
                                    if (*rcx_16 == r9_1.d)
                                        break
                                    
                                    rax_25 = rcx_16[2]
                                    
                                    if (rax_25 == 0xffffffff)
                                        goto label_1418cb40e_2
                                
                                if (rax_25 == 0xffffffff)
                                label_1418cb40e_2:
                                    rcx_16 = nullptr
                        
                        void* r8_2 = &rcx_16[1]
                        
                        if (rcx_16 == 0)
                            r8_2 = nullptr
                        
                        if (r8_2 == 0)
                            goto label_1418cb5b5
                        
                        void* rcx_20
                        
                        if (var_90.d == var_64)
                        label_1418cb472:
                            rcx_20 = nullptr
                        else
                            void var_60
                            void* rcx_17 = &var_60
                            
                            if (var_58 != 0)
                                rcx_17 = var_58
                            
                            int32_t rax_30 = *(rcx_17 + ((sx.q(var_50 - 1) & r9_1) << 2))
                            
                            if (rax_30 == 0xffffffff)
                            label_1418cb472_1:
                                rcx_20 = nullptr
                            else
                                int32_t* rdx_16
                                
                                while (true)
                                    void* rcx_19 = var_98
                                    rdx_16 = sx.q(rax_30) * 0x14
                                    
                                    if (*(rdx_16 + rcx_19) == r9_1.d)
                                        break
                                    
                                    rax_30 = *(rdx_16 + rcx_19 + 0xc)
                                    
                                    if (rax_30 == 0xffffffff)
                                        goto label_1418cb472_2
                                
                                if (rax_30 == 0xffffffff)
                                label_1418cb472_2:
                                    rcx_20 = nullptr
                                else
                                    rcx_20 = var_98 + rdx_16
                        
                        void* rdi_4 = rcx_20 + 4
                        
                        if (rcx_20 == 0)
                            rdi_4 = nullptr
                        
                        if (rdi_4 == 0)
                            var_f8:4.d = *r8_2
                            int64_t rcx_25 = sx.q(i_3) * 3
                            int64_t rax_38 = *(r14 + 0x48)
                            int64_t rdi_5 = sx.q(*(rax_38 + (rcx_25 << 3) + 8))
                            int64_t* rbx_5 = rax_38 + (rcx_25 << 3)
                            int32_t rax_39 = (rdi_5 + 1).d
                            rbx_5[1].d = rax_39
                            
                            if (rax_39 s> *(rbx_5 + 0xc))
                                sub_1405a4cf0(rbx_5)
                            
                            void* rbx_6 = rsi_1 + r14
                            *(*rbx_5 + (rdi_5 << 2)) = r15_3
                            int64_t rsi_4 = sx.q(*(rbx_6 + 0x70))
                            int32_t rax_41 = (rsi_4 + 1).d
                            *(rbx_6 + 0x70) = rax_41
                            
                            if (rax_41 s> *(rbx_6 + 0x74))
                                sub_14083a900(rbx_6 + 0x68)
                            
                            int64_t rax_42 = *(rbx_6 + 0x68)
                            int64_t rcx_28 = rsi_4 * 3
                            *(rax_42 + (rcx_28 << 1)) = 0xffffffff
                            *(rax_42 + (rcx_28 << 1) + 4) = 0
                            int64_t rax_43 = *(rbx_6 + 0x68)
                            i = zx.q(i_3)
                            *(rax_43 + (rcx_28 << 1) + 4) = 1
                            *(rax_43 + (rcx_28 << 1)) = i.w
                            int32_t* rcx_29 = rax_43 + (rcx_28 << 1)
                            *(rcx_29 + 2) = rdi_5.w
                            int32_t var_c8 = *rcx_29
                            int16_t var_c4_1 = rcx_29[1].w
                            sub_1418ca260(&var_98, &j_3, &var_c8)
                            var_100.d = rdi_5.d
                            sub_1418d9650(r14, i.d, &var_100)
                            rsi_1 = var_118_1
                        else
                            i = rsi_1 + 0x68 + r14
                            int64_t rsi_3 = sx.q(i[1].d)
                            int32_t rax_31 = (rsi_3 + 1).d
                            i[1].d = rax_31
                            
                            if (rax_31 s> *(i + 0xc))
                                sub_14083a900(i)
                            
                            int64_t rax_32 = *i
                            int64_t rcx_22 = rsi_3 * 3
                            rsi_1 = var_118_1
                            *(rax_32 + (rcx_22 << 1)) = 0xffffffff
                            *(rax_32 + (rcx_22 << 1) + 4) = 0
                            int32_t* rcx_23 = *i + (rcx_22 << 1)
                            rcx_23[1].b = *(rdi_4 + 4)
                            *rcx_23 = *rdi_4
                    
                    rdi_3 = var_e0_1
                    r12_1 += 1
                    r13_2 += 0x28
                    
                    if (r12_1 s>= rdi_3[1].d)
                        break
                    
                    i = i_2
        
        int32_t rax_62 = rdi_3[3].d
        void* r13_4 = var_d8_1 + 0x58
        
        if (rax_62 s> *(r13_4 + 0xc))
            sub_1405dadb0(r13_4, rax_62)
            rax_62 = rdi_3[3].d
        
        var_f8:4.d = 0x20
        j_3 = 0
        
        if (rax_62 s> 0)
            void* rcx_45 = nullptr
            void* rsi_9 = &r14[0x48]
            void* var_d8_2 = nullptr
            int32_t j_1
            
            do
                void* r13_5 = rcx_45 + rdi_3[2]
                
                if (cond:3 == 0)
                    char i_7 = *(&var_48 + i_2)
                    
                    if (i_7 != 0xff)
                        i = zx.q(i_7)
                    else
                        i = sx.q(*(rsi_9 + 8))
                        int32_t rax_64 = (i + 1).d
                        *(rsi_9 + 8) = rax_64
                        
                        if (rax_64 s> *(rsi_9 + 0xc))
                            sub_1405a4df0(rsi_9)
                        
                        int64_t rax_65 = *rsi_9
                        void* rcx_47 = i * 3
                        *(&var_48 + i_2) = i.b
                        *(rax_65 + (rcx_47 << 3)) = 0
                        *(rax_65 + (rcx_47 << 3) + 8) = 0
                        *(rax_65 + (rcx_47 << 3) + 0x10) = 0
                else
                    i.b = 0
                
                int16_t r15_5 = *(r13_5 + 2)
                uint64_t rdx_30 = zx.q(i.b)
                int32_t var_108_2 = rdx_30.d
                uint32_t r12_2 = zx.d(*(zx.q(*(r13_5 + 4)) + rdi_3[4]))
                int64_t rdi_8
                
                if (r15_5 != 0xffff)
                    rdi_8 = zx.q(*(*(rsi_9 + var_118_1 + 0x10) + (zx.q(r15_5) << 2) + 2))
                else
                    int64_t rax_67 = *rsi_9
                    uint64_t rcx_49 = rdx_30 * 3
                    rdi_8 = sx.q(*(rax_67 + (rcx_49 << 3) + 8))
                    int64_t* rbx_8 = rax_67 + (rcx_49 << 3)
                    int32_t rax_68 = (rdi_8 + 1).d
                    rbx_8[1].d = rax_68
                    
                    if (rax_68 s> *(rbx_8 + 0xc))
                        sub_1405a4cf0(rbx_8)
                    
                    *(*rbx_8 + (rdi_8 << 2)) = r12_2
                
                i = var_118_1 + 0x10 + rsi_9
                int64_t r14_4 = sx.q(i[1].d)
                int32_t rax_72 = (r14_4 + 1).d
                i[1].d = rax_72
                
                if (rax_72 s> *(i + 0xc))
                    sub_1405a4cf0(i)
                
                int64_t rcx_53 = r14_4 << 2
                var_100.d = rdi_8.d
                var_100:4.d = r12_2
                *(rcx_53 + *i) = 0xffffffff
                int64_t rax_74 = *i
                *(rcx_53 + rax_74) = var_108_2.w
                *(rcx_53 + rax_74 + 2) = rdi_8.w
                
                if (r15_5 != 0xffff)
                    r14 = arg1
                else
                    if (*(r13_5 + 6) != 0 && var_e8 s< arg3[1].d)
                        void* rax_77 = *(*arg3 + (var_c0 << 3))
                        
                        if (rax_77 != 0)
                            int64_t* rcx_54 = var_b8
                            
                            if (*(rax_77 + 0x18) != 0)
                                rcx_54 = rax_77 + 0x18
                            
                            int64_t* var_f0_1 = rcx_54
                        
                        var_e8 += 1
                        var_c0 += 1
                    
                    r14 = arg1
                    sub_1418d9650(r14, var_108_2, &var_100)
                
                j_1 = j_3 + 1
                rdi_3 = var_e0_1
                rcx_45 = var_d8_2 + 0x18
                var_b8 = nullptr
                int64_t var_f0_2 = 0
                j_3 = j_1
                var_d8_2 = rcx_45
            while (j_1 s< rdi_3[3].d)
        
        int32_t rax_81 = rdi_3[0xb].d
        r12_3 = cond:3
        i = i_2
        
        if (rax_81 == 0)
            rsi = arg2
            r13 = var_128
        else
            if (r12_3 == 0)
                char rcx_57 = *(&var_48 + i)
                
                if (rcx_57 != 0xff)
                    r14 = zx.q(rcx_57)
                else
                    int64_t* rbx_11 = &r14[0x48]
                    r14 = sx.q(*(r14 + 0x50))
                    int32_t rax_79 = (&r14[1]).d
                    rbx_11[1].d = rax_79
                    
                    if (rax_79 s> *(rbx_11 + 0xc))
                        sub_1405a4df0(rbx_11)
                    
                    int64_t rax_80 = *rbx_11
                    void* rcx_59 = r14 * 3
                    i = i_2
                    *(rax_80 + (rcx_59 << 3)) = 0
                    *(rax_80 + (rcx_59 << 3) + 8) = 0
                    *(rax_80 + (rcx_59 << 3) + 0x10) = 0
                    rax_81 = rdi_3[0xb].d
                    *(&var_48 + i) = r14.b
            else
                r14.b = 0
            
            int32_t j_2 = 0
            
            if (rax_81 s<= 0)
                r14 = arg1
                rsi = arg2
                r13 = var_128
            else
                int16_t* rsi_10 = nullptr
                
                do
                    int64_t rdi_9 = sx.q(*(arg1 + 0x178))
                    int16_t r12_4 = *(rsi_10 + rdi_3[0xa])
                    int32_t rax_83 = (rdi_9 + 1).d
                    *(arg1 + 0x178) = rax_83
                    
                    if (rax_83 s> *(arg1 + 0x17c))
                        sub_1405a4cf0(&arg1[0x170])
                    
                    int64_t rcx_61 = rdi_9 << 2
                    rdi_3 = var_e0_1
                    j_2 += 1
                    *(rcx_61 + *(arg1 + 0x170)) = 0x2ffffff
                    int16_t* rdx_38 = *(arg1 + 0x170) + rcx_61
                    *rdx_38 = *(*r13_4 + (zx.q(r12_4) << 2) + 2)
                    rdx_38[1].b = r14.b
                    char rcx_64 = *(rsi_10 + rdi_3[0xa] + 2)
                    rsi_10 = &rsi_10[2]
                    *(rdx_38 + 3) = rcx_64
                while (j_2 s< rdi_3[0xb].d)
                
                rsi = arg2
                r14 = arg1
                i = i_2
                r13 = var_128
                r12_3 = cond:3
    
    i += 1
    i_2 = i
while (i s< 1)

sub_1418dab80(r14)
sub_1418e1820(r14, arg3)

if (r12_3 != 0)
    int32_t i_1 = 0
    
    if (*(r14 + 0x50) s> 0)
        void* rdi_10 = &r14[0x48]
        int64_t rsi_11 = 0
        
        do
            int64_t rdx_40 = *rdi_10
            
            if (*(rdx_40 + rsi_11 + 8) == 0)
                int64_t r14_5 = sx.q(i_1) * 0x18
                int64_t rcx_68 = *(r14_5 + rdx_40)
                
                if (rcx_68 != 0)
                    sub_140a74f90(rcx_68)
                
                int32_t rcx_71 = *(rdi_10 + 8)
                int32_t rax_89 = rcx_71 - i_1
                
                if (rax_89 != 1)
                    int64_t r9_4 = *rdi_10
                    memmove(r9_4 + r14_5, r9_4 + sx.q(i_1 + 1) * 0x18, (rax_89 - 1) * 0x18)
                    rcx_71 = *(rdi_10 + 8)
                
                *(rdi_10 + 8) = rcx_71 - 1
                sub_1405fde90(rdi_10)
                r14 = arg1
            
            i_1 += 1
            rsi_11 += 0x18
        while (i_1 s< *(r14 + 0x50))

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

bool cond:5 = var_90:4.d == 0
var_90.d = 0

if (not(cond:5))
    sub_1405c55e0(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

void* rcx_77 = var_98

if (rcx_77 != 0)
    result = sub_140a74f90(rcx_77)

__security_check_cookie(rax_1 ^ &var_158)
return result
