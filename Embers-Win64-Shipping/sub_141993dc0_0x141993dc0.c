// 函数: sub_141993dc0
// 地址: 0x141993dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x20] != 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg1[0x1d].d, 0) == 0
    
    if ((*(arg1 + 0xec) != 0 | rcx.b) != 0)
        void* rdi_1 = *arg1
        void*** rcx_3 = (*(rdi_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rcx_3[3]
        
        if (rax_2 u> *(rdi_1 + 0x38))
            sub_140b0e3d0(rdi_1 + 0x30, 0x20)
            rcx_3 = (*(rdi_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rcx_3[3]
        
        *(rdi_1 + 0x30) = rax_2
        int64_t* rax_3 = *(rdi_1 + 8)
        *(rdi_1 + 0x14) += 1
        *rax_3 = rcx_3
        *(rdi_1 + 8) = &rcx_3[1]
        rcx_3[1] = 0
        *rcx_3 = &data_142f21860
        rcx_3[2] = arg1[0x1d]

int64_t r14 = 0
int64_t* rsi = arg1[1]
uint64_t r12_1 = sx.q(arg1[2].d) << 3 u>> 3

if (rsi u> &rsi[arg1[2]])
    r12_1 = 0

if (r12_1 != 0)
    do
        void* rdi_2 = *arg1
        int64_t r13_1 = *rsi
        void*** rcx_9 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_9[3]
        
        if (rax_8 u> *(rdi_2 + 0x38))
            sub_140b0e3d0(rdi_2 + 0x30, 0x20)
            rcx_9 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_9[3]
        
        *(rdi_2 + 0x30) = rax_8
        rsi = &rsi[1]
        int64_t* rax_9 = *(rdi_2 + 8)
        r14 += 1
        *(rdi_2 + 0x14) += 1
        *rax_9 = rcx_9
        *(rdi_2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_143009ba0
        rcx_9[2] = r13_1
    while (r14 != r12_1)

int64_t r14_1 = 0
int64_t* rsi_1 = arg1[0xf]
uint64_t r12_3 = sx.q(arg1[0x10].d) << 3 u>> 3

if (rsi_1 u> &rsi_1[arg1[0x10]])
    r12_3 = 0

if (r12_3 != 0)
    do
        void* rdi_3 = *arg1
        int64_t r13_2 = *rsi_1
        void*** rcx_15 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_15[3]
        
        if (rax_13 u> *(rdi_3 + 0x38))
            sub_140b0e3d0(rdi_3 + 0x30, 0x20)
            rcx_15 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_15[3]
        
        *(rdi_3 + 0x30) = rax_13
        rsi_1 = &rsi_1[1]
        int64_t* rax_14 = *(rdi_3 + 8)
        r14_1 += 1
        *(rdi_3 + 0x14) += 1
        *rax_14 = rcx_15
        *(rdi_3 + 8) = &rcx_15[1]
        rcx_15[1] = 0
        *rcx_15 = &data_143009bc0
        rcx_15[2] = r13_2
    while (r14_1 != r12_3)

int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t rbx = arg1[0xa].d
void* r10 = &arg1[7]
void* var_e0 = r10
int32_t rcx_19 = 0
int32_t var_d8 = 0xffffffff
int32_t r8 = 0
int64_t var_d4 = 0

if (rbx != 0)
    void* rax_16 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_16 != 0)
        r9_1 = rax_16
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141994039:
        int32_t rax_23 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_23)
        int32_t var_e4_1 = rax_23
        int32_t rax_24
        
        if (rax_23 == 0)
            rax_24 = 0x20
        else
            rax_24 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_24 + 0x1f
        
        if (r8 - rax_24 + 0x1f s> rbx)
            var_d4.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_19)
            r8 += 0x20
            rcx_19 += 1
            var_d4:4.d = r8
            var_e8 = rcx_19
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141994039
        
        var_d4.d = rbx

int32_t rdx_5 = arg1[0xa].d
char rcx_22 = rdx_5.b & 0x1f
int128_t var_98 = var_e8.o
int32_t r8_3 = rdx_5 s>> 5
int64_t var_88 = 0xffffffff
int32_t rdi_4 = 0xffffffff << rcx_22
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_a8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_e8_1 = r8_3
int32_t var_e4_2 = 1 << rcx_22
void* var_e0_1 = r10
int32_t var_d8_2 = rdi_4
var_d4.d = rdx_5
var_d4:4.d = r9_3
int128_t var_c8 = (&arg1[5]).o
int128_t var_b8 = var_98

if (rdx_5 != rbx)
    void* rax_27 = *(r10 + 0x10)
    
    if (rax_27 != 0)
        r10 = rax_27
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10 + (sx.q(r8_3) << 2)) & rdi_4
    
    if (rdx_9 != 0)
    label_14199411b:
        int32_t rax_34 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_34)
        int32_t var_e4_3 = rax_34
        int32_t rax_35
        
        if (rax_34 == 0)
            rax_35 = 0x20
        else
            rax_35 = 0x1f - temp0_4
        
        var_d4.d = r9_3 - rax_35 + 0x1f
        
        if (r9_3 - rax_35 + 0x1f s> rbx)
            var_d4.d = rbx
    else
        while (true)
            int64_t rcx_24 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_d4:4.d = r9_3
            var_e8_1 = r8_3
            
            if (rcx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10 + (rcx_24 << 2) + 4)
            var_d8_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14199411b
        
        var_d4.d = rbx

double var_60[0x2] = var_d8_2.o
void* var_a0
var_a0.o = (&arg1[5]).o
void* r9_5 = var_a0
int64_t rax_37 = var_88
int64_t r8_4 = var_e8_1.o:8.q
var_e8_1.q = rax_37
int64_t arg_18 = r8_4
void* arg_20 = r9_5

while (true)
    int64_t rdx_10 = sx.q(var_b8:0xc.d)
    int64_t rcx_26 = var_c8.q
    int32_t arg_8
    
    if (rdx_10.d == (rax_37 u>> 0x20).d && var_b8.q == r8_4 && rcx_26 == r9_5)
        int32_t var_d8_3 = 0xffffffff
        int32_t rbx_2 = arg1[0x18].d
        void* r10_1 = &arg1[0x15]
        void* var_e0_2 = r10_1
        int32_t rcx_37 = 0
        int32_t var_e8_2 = 0
        int32_t var_e4_4 = 1
        int32_t r8_5 = 0
        int64_t var_d4_1 = 0
        
        if (rbx_2 != 0)
            void* rax_51 = *(r10_1 + 0x10)
            void* r9_6 = r10_1
            
            if (rax_51 != 0)
                r9_6 = rax_51
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(rbx_2 - 1)
            int32_t rdx_15 = *r9_6
            
            if (rdx_15 != 0)
            label_14199434f:
                int32_t rax_58 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_58)
                int32_t var_e4_5 = rax_58
                int32_t rax_59
                
                if (rax_58 == 0)
                    rax_59 = 0x20
                else
                    rax_59 = 0x1f - temp0_5
                
                var_d4_1.d = r8_5 - rax_59 + 0x1f
                
                if (r8_5 - rax_59 + 0x1f s> rbx_2)
                    var_d4_1.d = rbx_2
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_37)
                    r8_5 += 0x20
                    rcx_37 += 1
                    var_d4_1:4.d = r8_5
                    var_e8_2 = rcx_37
                    
                    if (rdx_16.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        var_d4_1.d = rbx_2
                        break
                    
                    rdx_15 = *(r9_6 + (rdx_16 << 2) + 4)
                    int32_t var_d8_4 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_14199434f
        
        int32_t rax_61 = arg1[0x18].d
        char rcx_40 = rax_61.b & 0x1f
        int128_t var_70_1 = var_e8_2.o
        int32_t r8_8 = rax_61 s>> 5
        int128_t var_60_1 = 0xffffffff
        int32_t rdi_10 = 0xffffffff << rcx_40
        int32_t r9_8 = rax_61 & 0xffffffe0
        int32_t var_e8_3 = r8_8
        int64_t var_a8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int32_t var_e4_6 = 1 << rcx_40
        void* var_e0_3 = r10_1
        int32_t var_d8_5 = rdi_10
        var_d4_1.d = rax_61
        var_d4_1:4.d = r9_8
        var_c8 = (&arg1[0x13]).o
        int128_t var_b8_1 = var_70_1
        
        if (rax_61 != rbx_2)
            void* rax_62 = *(r10_1 + 0x10)
            
            if (rax_62 != 0)
                r10_1 = rax_62
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(rbx_2 - 1)
            int32_t rdx_20 = *(r10_1 + (sx.q(r8_8) << 2)) & rdi_10
            
            if (rdx_20 != 0)
            label_14199444b:
                int32_t rax_69 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_69)
                int32_t var_e4_7 = rax_69
                int32_t rsi_2
                
                if (rax_69 == 0)
                    rsi_2 = 0x20
                else
                    rsi_2 = 0x1f - temp0_7
                
                var_d4_1.d = r9_8 - rsi_2 + 0x1f
                
                if (r9_8 - rsi_2 + 0x1f s> rbx_2)
                    var_d4_1.d = rbx_2
            else
                while (true)
                    int64_t rcx_42 = sx.q(r8_8)
                    r9_8 += 0x20
                    r8_8 += 1
                    var_d4_1:4.d = r9_8
                    var_e8_3 = r8_8
                    
                    if (rcx_42.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r10_1 + (rcx_42 << 2) + 4)
                    var_d8_5 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_14199444b
                
                var_d4_1.d = rbx_2
        
        double var_60_2[0x2] = var_d8_5.o
        var_a0.o = (&arg1[0x13]).o
        void* r9_10 = var_a0
        int64_t rax_71 = var_88
        int64_t r8_9 = var_e8_3.o:8.q
        var_e8_3.q = rax_71
        arg_18 = r8_9
        arg_20 = r9_10
        
        while (true)
            int64_t rdx_21 = sx.q(var_b8_1:0xc.d)
            int64_t rcx_44 = var_c8.q
            
            if (rdx_21.d == (rax_71 u>> 0x20).d && var_b8_1.q == r8_9 && rcx_44 == r9_10)
                int64_t r14_7 = 0
                int64_t* rsi_3 = arg1[3]
                uint64_t r12_7 = sx.q(arg1[4].d) << 3 u>> 3
                
                if (rsi_3 u> &rsi_3[arg1[4]])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    do
                        void* rdi_16 = *arg1
                        int64_t r13_7 = *rsi_3
                        void*** rcx_57 = (*(rdi_16 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_87 = &rcx_57[3]
                        
                        if (rax_87 u> *(rdi_16 + 0x38))
                            sub_140b0e3d0(rdi_16 + 0x30, 0x20)
                            rcx_57 = (*(rdi_16 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_87 = &rcx_57[3]
                        
                        *(rdi_16 + 0x30) = rax_87
                        rsi_3 = &rsi_3[1]
                        int64_t* rax_88 = *(rdi_16 + 8)
                        r14_7 += 1
                        *(rdi_16 + 0x14) += 1
                        *rax_88 = rcx_57
                        *(rdi_16 + 8) = &rcx_57[1]
                        rcx_57[1] = 0
                        *rcx_57 = &data_143009bb0
                        rcx_57[2] = r13_7
                    while (r14_7 != r12_7)
                
                int64_t r14_8 = 0
                int64_t* rsi_4 = arg1[0x11]
                uint64_t r12_9 = sx.q(arg1[0x12].d) << 3 u>> 3
                
                if (rsi_4 u> &rsi_4[arg1[0x12]])
                    r12_9 = 0
                
                if (r12_9 != 0)
                    do
                        void* rdi_17 = *arg1
                        int64_t r13_8 = *rsi_4
                        void*** rcx_63 = (*(rdi_17 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_92 = &rcx_63[3]
                        
                        if (rax_92 u> *(rdi_17 + 0x38))
                            sub_140b0e3d0(rdi_17 + 0x30, 0x20)
                            rcx_63 = (*(rdi_17 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_92 = &rcx_63[3]
                        
                        *(rdi_17 + 0x30) = rax_92
                        rsi_4 = &rsi_4[1]
                        int64_t* rax_93 = *(rdi_17 + 8)
                        r14_8 += 1
                        *(rdi_17 + 0x14) += 1
                        *rax_93 = rcx_63
                        *(rdi_17 + 8) = &rcx_63[1]
                        rcx_63[1] = 0
                        *rcx_63 = &data_143009bd0
                        rcx_63[2] = r13_8
                    while (r14_8 != r12_9)
                
                if (arg1[0x20] == 0)
                    int32_t rcx_67
                    rcx_67.b = sub_140b5b8a0(arg1[0x1d].d, 0) == 0
                    
                    if ((*(arg1 + 0xec) != 0 | rcx_67.b) != 0)
                        void* rsi_5 = *arg1
                        int64_t i_6 = sx.q(arg1[0x1f].d)
                        var_e8_3.q = arg1[0x1e]
                        var_e0_3.d = i_6.d
                        int32_t rdx_24 = (i_6 << 3).d
                        int64_t* rbx_6 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
                        int64_t r12_10 = sx.q(rdx_24)
                        var_e8_3.o = var_e8_3.o
                        void* rax_97 = rbx_6 + r12_10
                        
                        if (rax_97 u> *(rsi_5 + 0x38))
                            sub_140b0e3d0(rsi_5 + 0x30, rdx_24 + 8)
                            rbx_6 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_97 = rbx_6 + r12_10
                        
                        *(rsi_5 + 0x30) = rax_97
                        int64_t i_5 = i_6
                        
                        if (i_6.d s> 0)
                            int64_t* rcx_69 = rbx_6
                            int64_t i
                            
                            do
                                *rcx_69 = *(var_e8_3.q - rbx_6 + rcx_69)
                                rcx_69 = &rcx_69[1]
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                        
                        void*** rcx_72 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_99 = &rcx_72[5]
                        
                        if (rax_99 u> *(rsi_5 + 0x38))
                            sub_140b0e3d0(rsi_5 + 0x30, 0x30)
                            rcx_72 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_99 = &rcx_72[5]
                        
                        *(rsi_5 + 0x30) = rax_99
                        void**** rax_100 = *(rsi_5 + 8)
                        *(rsi_5 + 0x14) += 1
                        *rax_100 = rcx_72
                        *(rsi_5 + 8) = &rcx_72[1]
                        rcx_72[1] = 0
                        *rcx_72 = &data_142f21870
                        rcx_72[2] = arg1[0x1d]
                        rcx_72[3] = rbx_6
                        rcx_72[4].d = i_6.d
                
                arg1[0x1c].d = 0
                sub_1419937d0(&arg1[0x13])
                arg1[0xe].d = 0
                return sub_1419937d0(&arg1[5]) __tailcall
            
            void* r13_6 = *arg1
            int64_t* rax_75 = (rdx_21 << 5) + *rcx_44
            uint64_t rcx_45 = zx.q(rax_75[2].d)
            int64_t* rdi_13 = (*(r13_6 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rbx_3 = *rax_75
            int64_t r14_5 = rax_75[1]
            uint32_t rdx_22 = (rcx_45 << 3).d
            arg_8 = rcx_45.d
            int64_t r12_5 = sx.q(rdx_22)
            void* rax_76 = r12_5 + rdi_13
            
            if (rax_76 u> *(r13_6 + 0x38))
                sub_140b0e3d0(r13_6 + 0x30, rdx_22 + 8)
                rcx_45 = zx.q(arg_8)
                rdi_13 = (*(r13_6 + 0x30) + 7) & 0xfffffffffffffff8
                rax_76 = r12_5 + rdi_13
            
            *(r13_6 + 0x30) = rax_76
            int64_t i_4 = sx.q(rcx_45.d)
            
            if (rcx_45.d s> 0)
                int64_t* rcx_47 = rdi_13
                int64_t i_1
                
                do
                    *rcx_47 = *(r14_5 - rdi_13 + rcx_47)
                    rcx_47 = &rcx_47[1]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            void*** rcx_50 = (*(r13_6 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_78 = &rcx_50[6]
            
            if (rax_78 u> *(r13_6 + 0x38))
                sub_140b0e3d0(r13_6 + 0x30, 0x38)
                rcx_50 = (*(r13_6 + 0x30) + 7) & 0xfffffffffffffff8
                rax_78 = &rcx_50[6]
            
            *(r13_6 + 0x30) = rax_78
            void**** rax_79 = *(r13_6 + 8)
            *(r13_6 + 0x14) += 1
            *rax_79 = rcx_50
            *(r13_6 + 8) = &rcx_50[1]
            rcx_50[1] = 0
            *rcx_50 = &data_142da7798
            rcx_50[2].d = arg_8
            *(rcx_50 + 0x24) = rbx_3:4.d
            int32_t rax_84 = not.d(var_c8:0xc.d)
            rcx_50[3] = rdi_13
            var_b8_1:8.d &= rax_84
            rcx_50[4].d = rbx_3.d
            rcx_50[5] = 0
            sub_14059bdd0(&var_c8:8)
            r8_9 = arg_18
            r9_10 = arg_20
            rax_71 = var_e8_3.q
    
    void* r13_4 = *arg1
    int64_t* rax_41 = (rdx_10 << 5) + *rcx_26
    uint64_t rcx_27 = zx.q(rax_41[2].d)
    int64_t* rdi_7 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbx_1 = *rax_41
    int64_t r14_2 = rax_41[1]
    uint32_t rdx_11 = (rcx_27 << 3).d
    arg_8 = rcx_27.d
    int64_t r12_4 = sx.q(rdx_11)
    void* rax_42 = r12_4 + rdi_7
    
    if (rax_42 u> *(r13_4 + 0x38))
        sub_140b0e3d0(r13_4 + 0x30, rdx_11 + 8)
        rcx_27 = zx.q(arg_8)
        rdi_7 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
        rax_42 = r12_4 + rdi_7
    
    *(r13_4 + 0x30) = rax_42
    int64_t i_3 = sx.q(rcx_27.d)
    
    if (rcx_27.d s> 0)
        int64_t* rcx_29 = rdi_7
        int64_t i_2
        
        do
            *rcx_29 = *(r14_2 - rdi_7 + rcx_29)
            rcx_29 = &rcx_29[1]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    void*** rcx_32 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_44 = &rcx_32[5]
    
    if (rax_44 u> *(r13_4 + 0x38))
        sub_140b0e3d0(r13_4 + 0x30, 0x30)
        rcx_32 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
        rax_44 = &rcx_32[5]
    
    *(r13_4 + 0x30) = rax_44
    void**** rax_45 = *(r13_4 + 8)
    *(r13_4 + 0x14) += 1
    *rax_45 = rcx_32
    *(r13_4 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    *rcx_32 = &data_143009bf0
    rcx_32[2].d = arg_8
    *(rcx_32 + 0x24) = rbx_1:4.d
    int32_t rax_50 = not.d(var_c8:0xc.d)
    rcx_32[3] = rdi_7
    var_b8:8.d &= rax_50
    rcx_32[4].d = rbx_1.d
    sub_14059bdd0(&var_c8:8)
    r8_4 = arg_18
    r9_5 = arg_20
    rax_37 = var_e8_1.q
