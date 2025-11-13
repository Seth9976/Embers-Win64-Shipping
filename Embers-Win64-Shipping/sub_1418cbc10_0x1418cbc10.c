// 函数: sub_1418cbc10
// 地址: 0x1418cbc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t rbx = data_143efb550
void* rsi = arg2
int64_t* var_b0 = nullptr
void* r14 = arg1
int64_t var_110
__builtin_memset(&var_110, 0, 0x18)
int64_t rdi = rbx
char rax_2 = data_143de5480
void* var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t var_108
var_108.d = 1
int64_t rcx

if (rax_2 == 0)
    rcx = 0
else
    uint32_t rax_3 = GetCurrentThreadId()
    rbx = data_143efb550
    rax_2 = data_143de5480
    rcx.b = rax_3 != data_143de5470

int32_t rcx_1 = *(rdi + (rcx << 2))
int32_t var_124_1
int64_t rcx_2

if (rcx_1 s<= 1)
    if (rax_2 == 0)
        rcx_2 = 0
    else
        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
        rax_2 = data_143de5480
        rcx_2.b = cond:2_1
    
    var_124_1 = 6

if (rcx_1 s> 1 || *(rbx + (rcx_2 << 2)) == 1)
    var_124_1 = 8

int64_t rbx_1 = data_143efb568
int64_t rcx_3

if (rax_2 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

int32_t rdx = *(rbx_1 + (rcx_3 << 2))
bool cond:3 = rdx == 2
int32_t rax_6 = *(rsi + 0x58)
int32_t var_48 = 0xffffffff
char var_44 = 0xff
char var_140
int32_t var_120

if (rax_6 - *(rsi + 0x84) s> 0 || rdx == 2)
    int64_t rdi_1 = sx.q(*(r14 + 0x50))
    var_140 = 1
    var_120 = rdi_1.d
    int32_t rax_8 = (rdi_1 + 1).d
    *(r14 + 0x50) = rax_8
    
    if (rax_8 s> *(r14 + 0x54))
        sub_1405a4df0(r14 + 0x48)
    
    int64_t rax_9 = *(r14 + 0x48)
    int64_t rcx_5 = rdi_1 * 3
    *(rax_9 + (rcx_5 << 3)) = 0
    *(rax_9 + (rcx_5 << 3) + 8) = 0
    *(rax_9 + (rcx_5 << 3) + 0x10) = 0
else
    var_140 = 0
    var_120 = 0xffffffff

int32_t i = 0
int32_t var_f8 = 0
int64_t rdx_2 = 0
int32_t i_2 = 0
int64_t var_138 = 0
int64_t var_b8 = 0
int64_t var_90
bool r12_3

do
    int64_t* rdi_3 = *(rsi + (rdx_2 << 3) + 0xa0)
    int64_t* var_f0_1 = rdi_3
    
    if (rdi_3 == 0)
        r12_3 = cond:3
    else
        int32_t rsi_1
        int32_t rax_10
        
        if (i == 0)
            rax_10 = 0
        label_1418cbe3b:
            
            switch (rax_10)
                case 0
                    rsi_1 = 1
                case 1
                    rsi_1 = 2
                case 2
                    rsi_1 = 4
                case 3
                    rsi_1 = 0x10
                case 4
                    rsi_1 = 8
        else
            if (i == 1)
                rax_10 = 3
                goto label_1418cbe3b
            
            if (i == 2)
                rax_10 = 4
                goto label_1418cbe3b
            
            if (i == 3)
                rax_10 = 1
                goto label_1418cbe3b
            
            if (i == 4)
                rax_10 = i - 2
                goto label_1418cbe3b
            
            rsi_1 = 0x7fffffff
        int32_t rax_12 = rdi_3[9].d
        void* rbx_2 = rdx_2 * 0x38
        int32_t var_144_1 = rsi_1
        var_108:4.d = rsi_1
        void* var_118_1 = rbx_2
        void* r15_1 = r14 + rbx_2
        void* var_e8_1 = r15_1
        
        if (rax_12 s> *(r15_1 + 0x84))
            sub_1405947f0(r15_1 + 0x78, rax_12)
            rax_12 = rdi_3[9].d
            rdx_2 = var_138
        
        int32_t j = 0
        
        if (rax_12 s> 0)
            int64_t* rdi_2 = r14 + 0x48
            
            do
                if (cond:3 == 0)
                    char rax_13 = *(&var_48 + rdx_2)
                    
                    if (rax_13 != 0xff)
                        rbx_2 = zx.q(rax_13)
                    else
                        rbx_2 = sx.q(rdi_2[1].d)
                        int32_t rax_14 = (rbx_2 + 1).d
                        rdi_2[1].d = rax_14
                        
                        if (rax_14 s> *(rdi_2 + 0xc))
                            sub_1405a4df0(rdi_2)
                            rdx_2 = var_138
                        
                        int64_t rax_15 = *rdi_2
                        void* rcx_13 = rbx_2 * 3
                        *(&var_48 + rdx_2) = rbx_2.b
                        *(rax_15 + (rcx_13 << 3)) = 0
                        *(rax_15 + (rcx_13 << 3) + 8) = 0
                        *(rax_15 + (rcx_13 << 3) + 0x10) = 0
                else
                    rbx_2.b = 0
                
                int64_t rax_16 = *rdi_2
                uint64_t r15_2 = zx.q(rbx_2.b)
                uint64_t rcx_14 = r15_2 * 3
                int64_t rsi_2 = sx.q(*(rax_16 + (rcx_14 << 3) + 8))
                int64_t* rbx_3 = rax_16 + (rcx_14 << 3)
                int32_t rax_17 = (rsi_2 + 1).d
                rbx_3[1].d = rax_17
                
                if (rax_17 s> *(rbx_3 + 0xc))
                    sub_1405a4cf0(rbx_3)
                
                *(*rbx_3 + (rsi_2 << 2)) = var_124_1
                
                if (*(var_118_1 + rdi_2 + 0x40) == 0xffff)
                    *(var_118_1 + rdi_2 + 0x40) = r15_2.w
                
                rbx_2 = var_118_1 + 0x30 + rdi_2
                int64_t r14_1 = sx.q(*(rbx_2 + 8))
                int32_t rax_20 = (r14_1 + 1).d
                *(rbx_2 + 8) = rax_20
                
                if (rax_20 s> *(rbx_2 + 0xc))
                    sub_140594770(rbx_2)
                
                var_110.d = rsi_2.d
                *(*rbx_2 + (r14_1 << 1)) = rsi_2.w
                r14 = arg1
                var_110:4.d = var_124_1
                sub_1418d9650(r14, r15_2.d, &var_110)
                rdx_2 = var_138
                j += 1
            while (j s< var_f0_1[9].d)
            
            rsi_1 = var_144_1
            rdi_3 = var_f0_1
            rbx_2 = var_118_1
            r15_1 = var_e8_1
        
        void* var_e0
        void* var_c8
        
        if (*(rdi_3 + 0x84) != 0)
            int32_t rax_23 = rdi_3[1].d
            
            if (rax_23 s> *(r15_1 + 0x74))
                sub_14083adb0(r15_1 + 0x68, rax_23)
                rax_23 = rdi_3[1].d
            
            int32_t r13_2 = 0
            
            if (rax_23 s> 0)
                int32_t r15_3 = 6
                void* r12_1 = nullptr
                
                if (rcx_1 s> 1)
                    r15_3 = 8
                
                var_e0.d = r15_3
                
                while (true)
                    int64_t rax_24 = *rdi_3
                    var_108:4.d = rsi_1
                    var_110:4.d = r15_3
                    int64_t r9_1 = sx.q(*(r12_1 + rax_24))
                    var_c8.d = r9_1.d
                    
                    if (*(r12_1 + rax_24 + 4) == 0xffff)
                        rbx_2 = rbx_2 + 0x68 + r14
                        int64_t rdi_7 = sx.q(*(rbx_2 + 8))
                        int32_t rax_62 = (rdi_7 + 1).d
                        *(rbx_2 + 8) = rax_62
                        
                        if (rax_62 s> *(rbx_2 + 0xc))
                            sub_14083a900(rbx_2)
                        
                        int64_t rax_63 = *rbx_2
                        int64_t rcx_49 = rdi_7 * 3
                        *(rax_63 + (rcx_49 << 1)) = 0xffffffff
                        *(rax_63 + (rcx_49 << 1) + 4) = 0
                        *(*rbx_2 + (rcx_49 << 1) + 4) = 0
                    else if (var_140 == 0)
                    label_1418cc266:
                        
                        if (cond:3 == 0)
                            char rax_48 = *(&var_48 + var_138)
                            
                            if (rax_48 != 0xff)
                                rbx_2 = zx.q(rax_48)
                            else
                                rbx_2 = sx.q(*(r14 + 0x50))
                                int32_t rax_49 = (rbx_2 + 1).d
                                *(r14 + 0x50) = rax_49
                                
                                if (rax_49 s> *(r14 + 0x54))
                                    sub_1405a4df0(r14 + 0x48)
                                
                                int64_t rax_50 = *(r14 + 0x48)
                                void* rcx_39 = rbx_2 * 3
                                *(&var_48 + var_138) = rbx_2.b
                                *(rax_50 + (rcx_39 << 3)) = 0
                                *(rax_50 + (rcx_39 << 3) + 8) = 0
                                *(rax_50 + (rcx_39 << 3) + 0x10) = 0
                        else
                            rbx_2.b = 0
                        
                        uint64_t rcx_40 = zx.q(rbx_2.b) * 3
                        int64_t rax_52 = *(r14 + 0x48)
                        int64_t r14_2 = sx.q(*(rax_52 + (rcx_40 << 3) + 8))
                        int64_t* rsi_6 = rax_52 + (rcx_40 << 3)
                        int32_t rax_53 = (r14_2 + 1).d
                        rsi_6[1].d = rax_53
                        
                        if (rax_53 s> *(rsi_6 + 0xc))
                            sub_1405a4cf0(rsi_6)
                        
                        void* rsi_8 = var_118_1 + r14 + 0x48
                        *(*rsi_6 + (r14_2 << 2)) = r15_3
                        int64_t r15_4 = sx.q(*(rsi_8 + 0x28))
                        int32_t rax_55 = (r15_4 + 1).d
                        *(rsi_8 + 0x28) = rax_55
                        
                        if (rax_55 s> *(rsi_8 + 0x2c))
                            sub_14083a900(rsi_8 + 0x20)
                        
                        int64_t rcx_43 = r15_4 * 3
                        int64_t rax_56 = *(rsi_8 + 0x20)
                        var_110.d = r14_2.d
                        *(rax_56 + (rcx_43 << 1)) = 0xffffffff
                        *(rax_56 + (rcx_43 << 1) + 4) = 0
                        int64_t rax_57 = *(rsi_8 + 0x20)
                        *(rax_57 + (rcx_43 << 1) + 4) = 1
                        *(rax_57 + (rcx_43 << 1) + 2) = r14_2.w
                        *(rax_57 + (rcx_43 << 1)) = zx.w(rbx_2.b)
                        
                        if (cond:3 == 0)
                            char rax_59 = *(&var_48 + var_138)
                            
                            if (rax_59 != 0xff)
                                rbx_2 = zx.q(rax_59)
                            else
                                rbx_2 = sx.q(*(r14 + 0x50))
                                int32_t rax_60 = (rbx_2 + 1).d
                                *(r14 + 0x50) = rax_60
                                
                                if (rax_60 s> *(r14 + 0x54))
                                    sub_1405a4df0(r14 + 0x48)
                                
                                int64_t rax_61 = *(r14 + 0x48)
                                void* rcx_46 = rbx_2 * 3
                                *(&var_48 + var_138) = rbx_2.b
                                *(rax_61 + (rcx_46 << 3)) = 0
                                *(rax_61 + (rcx_46 << 3) + 8) = 0
                                *(rax_61 + (rcx_46 << 3) + 0x10) = 0
                        else
                            rbx_2.b = 0
                        
                        r14 = arg1
                        sub_1418d9650(r14, zx.d(rbx_2.b), &var_110)
                        r15_3 = var_e0.d
                        rsi_1 = var_144_1
                    else
                        *(arg2 + 0x84)
                        int32_t* rcx_22
                        
                        if (*(arg2 + 0x58) == *(arg2 + 0x84))
                        label_1418cc0be:
                            rcx_22 = nullptr
                        else
                            void* r8_1 = arg2 + 0x88
                            void* rcx_19 = *(r8_1 + 8)
                            
                            if (rcx_19 != 0)
                                r8_1 = rcx_19
                            
                            int32_t rax_27 = *(r8_1 + (((sx.q(*(arg2 + 0x98)) - 1) & r9_1) << 2))
                            
                            if (rax_27 == 0xffffffff)
                            label_1418cc0be_1:
                                rcx_22 = nullptr
                            else
                                while (true)
                                    rcx_22 = (sx.q(rax_27) << 4) + *(arg2 + 0x50)
                                    
                                    if (*rcx_22 == r9_1.d)
                                        break
                                    
                                    rax_27 = rcx_22[2]
                                    
                                    if (rax_27 == 0xffffffff)
                                        goto label_1418cc0be_2
                                
                                if (rax_27 == 0xffffffff)
                                label_1418cc0be_2:
                                    rcx_22 = nullptr
                        
                        void* r8_2 = &rcx_22[1]
                        
                        if (rcx_22 == 0)
                            r8_2 = nullptr
                        
                        if (r8_2 == 0)
                            goto label_1418cc266
                        
                        void* rcx_26
                        
                        if (var_90.d == var_64)
                        label_1418cc122:
                            rcx_26 = nullptr
                        else
                            void var_60
                            void* rcx_23 = &var_60
                            
                            if (var_58 != 0)
                                rcx_23 = var_58
                            
                            int32_t rax_32 = *(rcx_23 + ((sx.q(var_50 - 1) & r9_1) << 2))
                            
                            if (rax_32 == 0xffffffff)
                            label_1418cc122_1:
                                rcx_26 = nullptr
                            else
                                int64_t rdx_17
                                
                                while (true)
                                    void* rcx_25 = var_98
                                    rdx_17 = sx.q(rax_32) * 0x14
                                    
                                    if (*(rdx_17 + rcx_25) == r9_1.d)
                                        break
                                    
                                    rax_32 = *(rdx_17 + rcx_25 + 0xc)
                                    
                                    if (rax_32 == 0xffffffff)
                                        goto label_1418cc122_2
                                
                                if (rax_32 == 0xffffffff)
                                label_1418cc122_2:
                                    rcx_26 = nullptr
                                else
                                    rcx_26 = var_98 + rdx_17
                        
                        int32_t* rdi_4 = rcx_26 + 4
                        
                        if (rcx_26 == 0)
                            rdi_4 = nullptr
                        
                        if (rdi_4 == 0)
                            var_108:4.d = *r8_2
                            int64_t rcx_31 = sx.q(var_120) * 3
                            int64_t rax_40 = *(r14 + 0x48)
                            int64_t rdi_5 = sx.q(*(rax_40 + (rcx_31 << 3) + 8))
                            int64_t* rbx_6 = rax_40 + (rcx_31 << 3)
                            int32_t rax_41 = (rdi_5 + 1).d
                            rbx_6[1].d = rax_41
                            
                            if (rax_41 s> *(rbx_6 + 0xc))
                                sub_1405a4cf0(rbx_6)
                            
                            void* rbx_8 = var_118_1 + r14
                            *(*rbx_6 + (rdi_5 << 2)) = r15_3
                            int64_t rsi_4 = sx.q(*(rbx_8 + 0x70))
                            int32_t rax_43 = (rsi_4 + 1).d
                            *(rbx_8 + 0x70) = rax_43
                            
                            if (rax_43 s> *(rbx_8 + 0x74))
                                sub_14083a900(rbx_8 + 0x68)
                            
                            int64_t rax_44 = *(rbx_8 + 0x68)
                            int64_t rcx_34 = rsi_4 * 3
                            *(rax_44 + (rcx_34 << 1)) = 0xffffffff
                            *(rax_44 + (rcx_34 << 1) + 4) = 0
                            int64_t rax_45 = *(rbx_8 + 0x68)
                            rbx_2 = zx.q(var_120)
                            *(rax_45 + (rcx_34 << 1) + 4) = 1
                            *(rax_45 + (rcx_34 << 1)) = rbx_2.w
                            int32_t* rcx_35 = rax_45 + (rcx_34 << 1)
                            *(rcx_35 + 2) = rdi_5.w
                            int32_t var_c0 = *rcx_35
                            int16_t var_bc_1 = rcx_35[1].w
                            sub_1418ca260(&var_98, &var_c8, &var_c0)
                            var_110.d = rdi_5.d
                            sub_1418d9650(r14, rbx_2.d, &var_110)
                            rsi_1 = var_144_1
                        else
                            rbx_2 = rbx_2 + 0x68 + r14
                            int64_t rsi_3 = sx.q(*(rbx_2 + 8))
                            int32_t rax_33 = (rsi_3 + 1).d
                            *(rbx_2 + 8) = rax_33
                            
                            if (rax_33 s> *(rbx_2 + 0xc))
                                sub_14083a900(rbx_2)
                            
                            int64_t rax_34 = *rbx_2
                            int64_t rcx_28 = rsi_3 * 3
                            rsi_1 = var_144_1
                            *(rax_34 + (rcx_28 << 1)) = 0xffffffff
                            *(rax_34 + (rcx_28 << 1) + 4) = 0
                            int32_t* rcx_29 = *rbx_2 + (rcx_28 << 1)
                            rcx_29[1].b = rdi_4[1].b
                            *rcx_29 = *rdi_4
                    
                    rdi_3 = var_f0_1
                    r13_2 += 1
                    r12_1 += 0x28
                    
                    if (r13_2 s>= rdi_3[1].d)
                        break
                    
                    rbx_2 = var_118_1
        
        int32_t rax_65 = rdi_3[3].d
        void* r13_4 = var_e8_1 + 0x58
        var_c8 = r13_4
        
        if (rax_65 s> *(r13_4 + 0xc))
            sub_1405dadb0(r13_4, rax_65)
            rax_65 = rdi_3[3].d
        
        var_108:4.d = rsi_1
        int32_t j_3 = 0
        
        if (rax_65 s> 0)
            void* rcx_51 = nullptr
            var_e0 = nullptr
            int32_t j_1
            
            do
                void* rdx_30 = rcx_51 + rdi_3[2]
                void* var_e8_2 = rdx_30
                
                if (cond:3 == 0)
                    char rax_67 = *(&var_48 + var_138)
                    
                    if (rax_67 != 0xff)
                        rbx_2 = zx.q(rax_67)
                    else
                        rbx_2 = sx.q(*(r14 + 0x50))
                        int32_t rax_68 = (rbx_2 + 1).d
                        *(r14 + 0x50) = rax_68
                        
                        if (rax_68 s> *(r14 + 0x54))
                            sub_1405a4df0(r14 + 0x48)
                            rdx_30 = var_e8_2
                        
                        int64_t rax_69 = *(r14 + 0x48)
                        void* rcx_53 = rbx_2 * 3
                        *(&var_48 + var_138) = rbx_2.b
                        *(rax_69 + (rcx_53 << 3)) = 0
                        *(rax_69 + (rcx_53 << 3) + 8) = 0
                        *(rax_69 + (rcx_53 << 3) + 0x10) = 0
                else
                    rbx_2.b = 0
                
                int16_t r15_5 = *(rdx_30 + 2)
                uint64_t r13_5 = zx.q(rbx_2.b)
                uint32_t r12_2 = zx.d(*(zx.q(*(rdx_30 + 4)) + rdi_3[4]))
                int64_t rdi_8
                
                if (r15_5 != 0xffff)
                    rdi_8 = zx.q(*(*(r14 + 0x48 + var_118_1 + 0x10) + (zx.q(r15_5) << 2) + 2))
                else
                    int64_t rax_71 = *(r14 + 0x48)
                    uint64_t rcx_56 = r13_5 * 3
                    rdi_8 = sx.q(*(rax_71 + (rcx_56 << 3) + 8))
                    int64_t* rbx_10 = rax_71 + (rcx_56 << 3)
                    int32_t rax_72 = (rdi_8 + 1).d
                    rbx_10[1].d = rax_72
                    
                    if (rax_72 s> *(rbx_10 + 0xc))
                        sub_1405a4cf0(rbx_10)
                    
                    *(*rbx_10 + (rdi_8 << 2)) = r12_2
                
                rbx_2 = var_118_1 + 0x10 + r14 + 0x48
                int64_t rsi_11 = sx.q(*(rbx_2 + 8))
                int32_t rax_76 = (rsi_11 + 1).d
                *(rbx_2 + 8) = rax_76
                
                if (rax_76 s> *(rbx_2 + 0xc))
                    sub_1405a4cf0(rbx_2)
                
                int64_t rcx_60 = rsi_11 << 2
                var_110.d = rdi_8.d
                var_110:4.d = r12_2
                *(rcx_60 + *rbx_2) = 0xffffffff
                int64_t rax_78 = *rbx_2
                *(rcx_60 + rax_78) = r13_5.w
                *(rcx_60 + rax_78 + 2) = rdi_8.w
                
                if (r15_5 == 0xffff)
                    if (*(var_e8_2 + 6) != 0 && var_f8 s< arg3[1].d)
                        void* rax_82 = *(*arg3 + (var_b8 << 3))
                        
                        if (rax_82 != 0)
                            int64_t* rcx_61 = var_b0
                            
                            if (*(rax_82 + 0x18) != 0)
                                rcx_61 = rax_82 + 0x18
                            
                            int64_t* var_100_1 = rcx_61
                        
                        var_f8 += 1
                        var_b8 += 1
                    
                    sub_1418d9650(arg1, r13_5.d, &var_110)
                
                j_1 = j_3 + 1
                rdi_3 = var_f0_1
                rcx_51 = var_e0 + 0x18
                j_3 = j_1
                var_b0 = nullptr
                int64_t var_100_2 = 0
                var_e0 = rcx_51
            while (j_1 s< rdi_3[3].d)
            r13_4 = var_c8
        
        int32_t rax_86 = rdi_3[0xb].d
        r12_3 = cond:3
        rdx_2 = var_138
        
        if (rax_86 == 0)
        label_1418cc89f:
            r14 = arg1
            rsi = arg2
            i = i_2
        else
            void* rsi_12
            
            if (r12_3 == 0)
                char rcx_64 = *(&var_48 + rdx_2)
                
                if (rcx_64 != 0xff)
                    r14 = zx.q(rcx_64)
                    rsi_12 = arg1
                else
                    rsi_12 = arg1
                    r14 = sx.q(*(rsi_12 + 0x50))
                    int32_t rax_84 = (r14 + 1).d
                    *(rsi_12 + 0x50) = rax_84
                    
                    if (rax_84 s> *(rsi_12 + 0x54))
                        sub_1405a4df0(rsi_12 + 0x48)
                        rdx_2 = var_138
                    
                    int64_t rax_85 = *(rsi_12 + 0x48)
                    void* rcx_66 = r14 * 3
                    *(&var_48 + rdx_2) = r14.b
                    *(rax_85 + (rcx_66 << 3)) = 0
                    *(rax_85 + (rcx_66 << 3) + 8) = 0
                    *(rax_85 + (rcx_66 << 3) + 0x10) = 0
                    rax_86 = rdi_3[0xb].d
            else
                r14.b = 0
                rsi_12 = arg1
            
            int32_t j_2 = 0
            
            if (rax_86 s<= 0)
                goto label_1418cc89f
            
            int16_t* rsi_13 = nullptr
            
            do
                int64_t rdi_9 = sx.q(*(rsi_12 + 0x178))
                int16_t r12_4 = *(rsi_13 + rdi_3[0xa])
                int32_t rax_88 = (rdi_9 + 1).d
                *(rsi_12 + 0x178) = rax_88
                
                if (rax_88 s> *(rsi_12 + 0x17c))
                    sub_1405a4cf0(rsi_12 + 0x170)
                
                int64_t rcx_68 = rdi_9 << 2
                rdi_3 = var_f0_1
                j_2 += 1
                *(rcx_68 + *(rsi_12 + 0x170)) = 0x2ffffff
                int16_t* rdx_40 = *(arg1 + 0x170) + rcx_68
                *rdx_40 = *(*r13_4 + (zx.q(r12_4) << 2) + 2)
                rdx_40[1].b = r14.b
                char rcx_71 = *(rsi_13 + rdi_3[0xa] + 2)
                rsi_13 = &rsi_13[2]
                *(rdx_40 + 3) = rcx_71
            while (j_2 s< rdi_3[0xb].d)
            
            r14 = arg1
            rdx_2 = var_138
            rsi = arg2
            i = i_2
            r12_3 = cond:3
    
    i += 1
    rdx_2 += 1
    i_2 = i
    var_138 = rdx_2
while (i s< 5)

sub_1418dab80(r14)
sub_1418e1820(r14, arg3)

if (r12_3 != 0)
    int32_t i_1 = 0
    
    if (*(r14 + 0x50) s> 0)
        void* rdi_10 = r14 + 0x48
        int64_t rsi_14 = 0
        
        do
            int64_t rdx_42 = *rdi_10
            
            if (*(rdx_42 + rsi_14 + 8) == 0)
                int64_t r14_3 = sx.q(i_1) * 0x18
                int64_t rcx_75 = *(r14_3 + rdx_42)
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                int32_t rcx_78 = *(rdi_10 + 8)
                int32_t rax_95 = rcx_78 - i_1
                
                if (rax_95 != 1)
                    int64_t r9_2 = *rdi_10
                    memmove(r9_2 + r14_3, r9_2 + sx.q(i_1 + 1) * 0x18, (rax_95 - 1) * 0x18)
                    rcx_78 = *(rdi_10 + 8)
                
                *(rdi_10 + 8) = rcx_78 - 1
                sub_1405fde90(rdi_10)
                r14 = arg1
            
            i_1 += 1
            rsi_14 += 0x18
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

void* rcx_84 = var_98

if (rcx_84 != 0)
    result = sub_140a74f90(rcx_84)

__security_check_cookie(rax_1 ^ &var_168)
return result
