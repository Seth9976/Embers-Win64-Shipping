// 函数: sub_14181f8e0
// 地址: 0x14181f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void*** result = arg1
*arg1 = &data_142fe4b58
arg1[1] = 0
arg1[2] = 0
arg1[5] = 0
void* rcx = &arg1[3]
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)
int64_t* r14 = &result[0xb]

if (rax_2 != 0)
    rcx = rax_2

int64_t* var_150 = r14
*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = &r14[2]
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
*r14 = 0
r14[1] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_3 = rcx_1[2]

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
rcx_1[1] = 0
int64_t* rcx_2 = &result[0x17]
r14[6].d = 0xffffffff
*(r14 + 0x34) = 0
r14[8] = 0
r14[9].d = 0
result[0x15] = 0
result[0x16] = 0
rcx_2[2] = 0
rcx_2[3].d = 0
*(rcx_2 + 0x1c) = 0x80
int64_t* rax_4 = rcx_2[2]

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
rcx_2[1] = 0
result[0x1b].d = 0xffffffff
*(result + 0xdc) = 0
result[0x1d] = 0
result[0x1e].d = 0
result[0x1f] = 0
result[0x1f] = *arg2
*arg2 = 0
result[0x20].d = arg2[1].d
*(result + 0x104) = *(arg2 + 0xc)
arg2[1] = 0
void* r15 = result[0x1f]
void* r13_1 = sx.q(result[0x20].d) * 0x138 + r15
int128_t var_1d0
double var_1c0[0x2]
int32_t var_1b0
int32_t var_190
int128_t var_178
int64_t i_2
int64_t var_138
void* var_128
int128_t var_108
int128_t var_f8
double zmm2[0x2]

if (r15 != r13_1)
    do
        void* i_3 = *(r15 + 0x78)
        int128_t zmm1
        
        if (i_3 != 0)
        label_14181fc74:
            void* i
            
            do
                int32_t var_1ac_1 = 1
                int32_t r10_1 = *(i_3 + 0x278)
                void* var_1a8_1 = i_3 + 0x260
                int32_t rcx_3 = 0
                var_1b0 = 0
                int32_t r8_1 = 0
                int32_t var_1a0_1 = 0xffffffff
                int64_t var_19c_1 = 0
                
                if (r10_1 != 0)
                    void* rax_9 = *(i_3 + 0x270)
                    void* r9_1 = i_3 + 0x260
                    
                    if (rax_9 != 0)
                        r9_1 = rax_9
                    
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r10_1 - 1)
                    int32_t rdx_2 = *r9_1
                    
                    if (rdx_2 != 0)
                    label_14181fafd:
                        int32_t rax_15 = neg.d(rdx_2) & rdx_2
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_15)
                        int32_t var_1ac_2 = rax_15
                        int32_t rax_16
                        
                        if (rax_15 == 0)
                            rax_16 = 0x20
                        else
                            rax_16 = 0x1f - temp0_1
                        
                        var_19c_1.d = r8_1 - rax_16 + 0x1f
                        
                        if (r8_1 - rax_16 + 0x1f s> r10_1)
                            var_19c_1.d = r10_1
                    else
                        while (true)
                            int64_t rax_12 = sx.q(rcx_3)
                            r8_1 += 0x20
                            rcx_3 += 1
                            var_19c_1:4.d = r8_1
                            var_1b0 = rcx_3
                            
                            if (rax_12.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                                break
                            
                            rdx_2 = *(r9_1 + (rax_12 << 2) + 4)
                            var_1a0_1 = 0xffffffff
                            
                            if (rdx_2 != 0)
                                goto label_14181fafd
                        
                        var_19c_1.d = r10_1
                
                int32_t rdx_3 = *(i_3 + 0x278)
                zmm2 = var_1a0_1.o
                var_1d0 = var_1b0.o
                int32_t rbx = 0xffffffff << (rdx_3.b & 0x1f)
                int32_t r8_4 = rdx_3 s>> 5
                int32_t r9_3 = rdx_3 & 0xffffffe0
                var_1c0 = zmm2
                int64_t var_e8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                zmm1 = var_1d0
                var_1d0:8.d = rbx
                var_1d0:0xc.d = rdx_3
                var_108 = (i_3 + 0x250).o
                var_f8 = zmm1
                
                if (rdx_3 != r10_1)
                    void* rax_18 = *(i_3 + 0x270)
                    void* r11_3 = i_3 + 0x260
                    
                    if (rax_18 != 0)
                        r11_3 = rax_18
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r10_1 - 1)
                    int32_t rcx_8 = *(r11_3 + (sx.q(r8_4) << 2)) & rbx
                    
                    if (rcx_8 != 0)
                    label_14181fbd3:
                        int32_t rax_25 = neg.d(rcx_8) & rcx_8
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rax_25)
                        int32_t rax_26
                        
                        if (rax_25 == 0)
                            rax_26 = 0x20
                        else
                            rax_26 = 0x1f - temp0_3
                        
                        var_1d0:0xc.d = r9_3 - rax_26 + 0x1f
                        
                        if (r9_3 - rax_26 + 0x1f s> r10_1)
                            var_1d0:0xc.d = r10_1
                    else
                        while (true)
                            int64_t rax_22 = sx.q(r8_4)
                            r9_3 += 0x20
                            r8_4 += 1
                            
                            if (rax_22.d s>= ((temp3_1 & 0x1f) + temp4_1) s>> 5)
                                break
                            
                            rcx_8 = *(r11_3 + (rax_22 << 2) + 4)
                            var_1d0:8.d = 0xffffffff
                            
                            if (rcx_8 != 0)
                                goto label_14181fbd3
                        
                        var_1d0:0xc.d = r10_1
                
                while (true)
                    int64_t rcx_10 = sx.q(var_f8:0xc.d)
                    int64_t rax_28 = var_108.q
                    
                    if (rcx_10.d == (var_1d0:8.q u>> 0x20).d && var_f8.q == i_3 + 0x260
                            && rax_28 == i_3 + 0x250)
                        break
                    
                    void* i_4 = i_3
                    int128_t* rdx_10 = (rcx_10 << 5) + *rax_28
                    var_138 = rdx_10[1].q
                    sub_1418185b0(&arg1[1], rdx_10, &var_138)
                    var_f8:8.d &= not.d(var_108:0xc.d)
                    sub_14059bdd0(&var_108:8)
                
                i = *(r15 + 0x88)
                
                if (i == i_3)
                    break
                
                i_3 = i
            while (i != 0)
            r14 = var_150
        else
            i_3 = *(r15 + 0x88)
            
            if (i_3 != 0)
                goto label_14181fc74
        
        if (*(r15 + 0x70) != 0)
            int32_t rcx_13 = 0
            void* rsi_2 = *(r15 + 0x78) + 0x1b0
            var_1b0 = 0
            int32_t r10_2 = *(rsi_2 + 0x28)
            int32_t var_1ac_3 = 1
            int32_t r8_6 = 0
            void* var_1a8_2 = rsi_2 + 0x10
            int32_t var_1a0_2 = 0xffffffff
            int64_t var_19c_2 = 0
            
            if (r10_2 != 0)
                void* rax_32 = *(rsi_2 + 0x20)
                void* r9_5 = rsi_2 + 0x10
                
                if (rax_32 != 0)
                    r9_5 = rax_32
                
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = sx.q(r10_2 - 1)
                int32_t rdx_13 = *r9_5
                
                if (rdx_13 != 0)
                label_14181fd1d:
                    int32_t rax_39 = neg.d(rdx_13) & rdx_13
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_39)
                    int32_t var_1ac_4 = rax_39
                    int32_t rax_40
                    
                    if (rax_39 == 0)
                        rax_40 = 0x20
                    else
                        rax_40 = 0x1f - temp0_4
                    
                    var_19c_2.d = r8_6 - rax_40 + 0x1f
                    
                    if (r8_6 - rax_40 + 0x1f s> r10_2)
                        var_19c_2.d = r10_2
                else
                    while (true)
                        int64_t rdx_14 = sx.q(rcx_13)
                        r8_6 += 0x20
                        rcx_13 += 1
                        var_19c_2:4.d = r8_6
                        var_1b0 = rcx_13
                        
                        if (rdx_14.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_13 = *(r9_5 + (rdx_14 << 2) + 4)
                        var_1a0_2 = 0xffffffff
                        
                        if (rdx_13 != 0)
                            goto label_14181fd1d
                    
                    var_19c_2.d = r10_2
            
            int32_t rdx_15 = *(rsi_2 + 0x28)
            zmm2 = var_1a0_2.o
            int32_t rbx_3 = 0xffffffff << (rdx_15.b & 0x1f)
            var_1d0 = var_1b0.o
            int32_t rcx_18 = rdx_15 & 0xffffffe0
            int32_t r8_9 = rdx_15 s>> 5
            var_1c0 = zmm2
            int64_t var_158_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            zmm1 = var_1d0
            var_1d0:8.d = rbx_3
            var_1d0:0xc.d = rdx_15
            var_178 = rsi_2.o
            int128_t var_168_1 = zmm1
            
            if (rdx_15 != r10_2)
                void* rax_42 = *(rsi_2 + 0x20)
                void* r9_6 = rsi_2 + 0x10
                
                if (rax_42 != 0)
                    r9_6 = rax_42
                
                int32_t temp11_1
                int32_t temp12_1
                temp11_1:temp12_1 = sx.q(r10_2 - 1)
                int32_t rdx_19 = *(r9_6 + (sx.q(r8_9) << 2)) & rbx_3
                
                if (rdx_19 != 0)
                label_14181fe03:
                    int32_t rax_48 = neg.d(rdx_19) & rdx_19
                    uint64_t rflags_4
                    int32_t temp0_6
                    temp0_6, rflags_4 = _bit_scan_reverse(rax_48)
                    int32_t rax_49
                    
                    if (rax_48 == 0)
                        rax_49 = 0x20
                    else
                        rax_49 = 0x1f - temp0_6
                    
                    var_1d0:0xc.d = rcx_18 - rax_49 + 0x1f
                    
                    if (rcx_18 - rax_49 + 0x1f s> r10_2)
                        var_1d0:0xc.d = r10_2
                else
                    while (true)
                        int64_t rdx_20 = sx.q(r8_9)
                        rcx_18 += 0x20
                        r8_9 += 1
                        
                        if (rdx_20.d s>= ((temp11_1 & 0x1f) + temp12_1) s>> 5)
                            break
                        
                        rdx_19 = *(r9_6 + (rdx_20 << 2) + 4)
                        var_1d0:8.d = 0xffffffff
                        
                        if (rdx_19 != 0)
                            goto label_14181fe03
                    
                    var_1d0:0xc.d = r10_2
            
            while (true)
                int64_t rcx_20 = sx.q(var_168_1:0xc.d)
                int64_t rax_51 = var_178.q
                
                if (rcx_20.d == (var_1d0:8.q u>> 0x20).d && var_168_1.q == rsi_2 + 0x10
                        && rax_51 == rsi_2)
                    break
                
                void* rcx_22 = (rcx_20 << 5) + *rax_51
                var_128 = rcx_22
                i_2 = *(rcx_22 + 0x10)
                int64_t var_140_1 = *(r15 + 0x78)
                int64_t* var_120_1 = &i_2
                sub_1417c66b0(r14, &var_190, &var_128, nullptr)
                var_168_1:8.d &= not.d(var_178:0xc.d)
                sub_14059bdd0(&var_178:8)
        
        r15 += 0x138
    while (r15 != r13_1)
    
    result = arg1

int32_t rax_56 = result[0x20].d
int64_t rcx_25 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int64_t i_5 = sx.q(rax_56 - 1)
i_2 = i_5
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (rax_56 - 1 s>= 0)
    int64_t rsi_3 = i_5 * 0x138
    var_138 = rsi_3
    int64_t i_1
    
    do
        void* rbx_7 = result[0x1f] + rsi_3
        
        if (*(rbx_7 + 0x70) != 3)
            int64_t* rax_58 = sub_141835260(rbx_7 + 0xe8, &var_108, &var_98)
            sub_141823570(rbx_7 + 0xe8, rax_58)
            rax_58[9].d = 0
            int64_t rcx_28 = rax_58[8]
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            sub_14059ad90(rax_58, 0)
            int64_t rcx_30 = rax_58[4]
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = *rax_58
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            sub_141814890(&var_98, rbx_7 + 0xe8)
        
        int32_t rcx_33 = 0
        void* var_1d8
        var_1d8:4.d = 1
        var_1d8.d = 0
        var_1d0:8.d = 0xffffffff
        int32_t r8_12 = 0
        var_1d0.q = rbx_7 + 0xf8
        int32_t r9_7 = *(rbx_7 + 0x110)
        var_1d0:0xc.q = 0
        
        if (r9_7 != 0)
            void* rax_59 = *(rbx_7 + 0x108)
            void* r10_3 = rbx_7 + 0xf8
            
            if (rax_59 != 0)
                r10_3 = rax_59
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r9_7 - 1)
            int32_t rdx_28 = *r10_3
            
            if (rdx_28 != 0)
            label_14182003c:
                int32_t rax_66 = neg.d(rdx_28) & rdx_28
                uint64_t rflags_5
                int32_t temp0_8
                temp0_8, rflags_5 = _bit_scan_reverse(rax_66)
                var_1d8:4.d = rax_66
                int32_t rax_67
                
                if (rax_66 == 0)
                    rax_67 = 0x20
                else
                    rax_67 = 0x1f - temp0_8
                
                var_1d0:0xc.d = r8_12 - rax_67 + 0x1f
                
                if (r8_12 - rax_67 + 0x1f s> r9_7)
                    var_1d0:0xc.d = r9_7
            else
                while (true)
                    int64_t rdx_29 = sx.q(rcx_33)
                    r8_12 += 0x20
                    rcx_33 += 1
                    var_1c0[0].d = r8_12
                    var_1d8.d = rcx_33
                    
                    if (rdx_29.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_28 = *(r10_3 + (rdx_29 << 2) + 4)
                    var_1d0:8.d = 0xffffffff
                    
                    if (rdx_28 != 0)
                        goto label_14182003c
                
                var_1d0:0xc.d = r9_7
        
        int32_t rdx_30 = *(rbx_7 + 0x110)
        zmm2 = var_1d0
        var_108.q = rbx_7 + 0xe8
        var_1d0:0xc.d = rdx_30
        int32_t rdi_4 = 0xffffffff << (rdx_30.b & 0x1f)
        var_108 = var_1d8.o
        int32_t r8_15 = rdx_30 s>> 5
        int128_t zmm0 = var_108
        int32_t rcx_38 = rdx_30 & 0xffffffe0
        var_1d0:8.d = rdi_4
        var_f8 = zmm2
        int64_t var_158_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_178 = zmm0
        int128_t var_168_2 = var_f8
        
        if (rdx_30 != r9_7)
            void* rax_69 = *(rbx_7 + 0x108)
            void* r10_4 = rbx_7 + 0xf8
            
            if (rax_69 != 0)
                r10_4 = rax_69
            
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(r9_7 - 1)
            int32_t rdx_34 = *(r10_4 + (sx.q(r8_15) << 2)) & rdi_4
            
            if (rdx_34 != 0)
            label_141820113:
                int32_t rax_75 = neg.d(rdx_34) & rdx_34
                uint64_t rflags_6
                int32_t temp0_10
                temp0_10, rflags_6 = _bit_scan_reverse(rax_75)
                int32_t rax_76
                
                if (rax_75 == 0)
                    rax_76 = 0x20
                else
                    rax_76 = 0x1f - temp0_10
                
                var_1d0:0xc.d = rcx_38 - rax_76 + 0x1f
                
                if (rcx_38 - rax_76 + 0x1f s> r9_7)
                    var_1d0:0xc.d = r9_7
            else
                while (true)
                    int64_t rdx_35 = sx.q(r8_15)
                    rcx_38 += 0x20
                    r8_15 += 1
                    
                    if (rdx_35.d s>= ((temp9_1 & 0x1f) + temp10_1) s>> 5)
                        break
                    
                    rdx_34 = *(r10_4 + (rdx_35 << 2) + 4)
                    var_1d0:8.d = 0xffffffff
                    
                    if (rdx_34 != 0)
                        goto label_141820113
                
                var_1d0:0xc.d = r9_7
        
        while (true)
            int64_t rax_78 = sx.q(var_168_2:0xc.d)
            int64_t* rdx_37 = var_178.q
            
            if (rax_78.d == (var_1d0:8.q u>> 0x20).d && var_168_2.q == rbx_7 + 0xf8
                    && rdx_37 == rbx_7 + 0xe8)
                break
            
            void* rsi_4 = *(rbx_7 + 0x88)
            int64_t* rdi_5 = *rdx_37 + rax_78 * 0x18
            int32_t var_180
            sub_1408f1b50(rsi_4 + 0x1b0, &var_180, rdi_5)
            int64_t rax_80 = sx.q(var_180)
            void* const rax_82
            
            if (rax_80.d == 0xffffffff)
                rax_82 = nullptr
            else
                rax_82 = (rax_80 << 5) + *(rsi_4 + 0x1b0)
            
            var_128 = *(rax_82 + 0x10)
            int64_t var_120_2 = *(rbx_7 + 0x88)
            void** var_b0_1 = &var_128
            int64_t* var_b8 = rdi_5
            void var_118
            sub_1417c66b0(&arg1[0x15], &var_118, &var_b8, nullptr)
            void var_114
            
            if (*(rbx_7 + 0x70) != 0
                    && *sub_1408f1b50(*(rbx_7 + 0x78) + 0x1b0, &var_114, rdi_5) != 0xffffffff)
                void* rsi_5 = *(rbx_7 + 0x78)
                sub_1408f1b50(rsi_5 + 0x1b0, &var_190, rdi_5)
                int64_t rax_86 = sx.q(var_190)
                void* const rax_88
                
                if (rax_86.d == 0xffffffff)
                    rax_88 = nullptr
                else
                    rax_88 = (rax_86 << 5) + *(rsi_5 + 0x1b0)
                
                int64_t var_a8 = *(rax_88 + 0x10)
                int64_t var_a0_1 = *(rbx_7 + 0x78)
                var_1b0.q = rdi_5
                int64_t* var_1a8_3 = &var_a8
                void var_110
                sub_1417c66b0(var_150, &var_110, &var_1b0, nullptr)
            
            var_168_2:8.d &= not.d(var_178:0xc.d)
            sub_14059bdd0(&var_178:8)
        
        i_1 = i_2 - 1
        result = arg1
        rsi_3 = var_138 - 0x138
        i_2 = i_1
        var_138 = rsi_3
    while (i_1 s>= 0)
    rcx_25 = var_58

int32_t var_50_1 = 0

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_51 = var_98

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
