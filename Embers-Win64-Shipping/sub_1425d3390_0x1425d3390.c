// 函数: sub_1425d3390
// 地址: 0x1425d3390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t r15 = 0
int64_t* rbx = arg1[0x17]
int64_t r14 = 0
uint64_t r12_1 = sx.q(arg1[0x18].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x18]])
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rsi_1 = *rbx
        
        if (rsi_1 != 0)
            sub_140cd85e0(rsi_1)
            sub_1425d3150(rsi_1, sx.q((*(*arg1 + 0x298))(arg1)) * 0x158 + arg1[0x19])
        
        rbx = &rbx[1]
        r14 += 1
    while (r14 != r12_1)

arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405c5570(&arg1[0x17], 0)

int128_t var_178 = data_1439a94b8

if (sub_140cdd5d0(arg1, &var_178) s< 4)
    arg1[1].d |= 8

var_178 = data_143b4db70
int32_t rax_6 = sub_140cdd5d0(arg1, &var_178)
int32_t r10 = arg1[0xf].d
var_178:4.d = 1
int32_t rcx_6 = 0
var_178.d = 0
int32_t r8 = 0
var_178:8.q = &arg1[0xc]
int32_t var_168 = 0xffffffff
int64_t var_164 = 0

if (r10 != 0)
    void* rax_7 = arg1[0xe]
    void* r9_1 = &arg1[0xc]
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_7 = *r9_1
    
    if (rdx_7 != 0)
    label_1425d351c:
        int32_t rax_14 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
        var_178:4.d = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_2
        
        var_164.d = r8 - rax_15 + 0x1f
        
        if (r8 - rax_15 + 0x1f s> r10)
            var_164.d = r10
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_6)
            r8 += 0x20
            rcx_6 += 1
            var_164:4.d = r8
            var_178.d = rcx_6
            
            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
            var_168 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1425d351c
        
        var_164.d = r10

int32_t rdx_9 = arg1[0xf].d
double zmm2[0x2] = var_168.o
var_164.d = rdx_9
double var_118[0x2] = zmm2
int128_t var_128 = var_178
int32_t rsi_2 = 0xffffffff << (rdx_9 & 0x1f).b
int32_t r8_3 = rdx_9 s>> 5
int32_t r9_3 = rdx_9 & 0xffffffe0
int64_t var_138 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_168_1 = rsi_2
int128_t var_158 = (&arg1[0xa]).o
int128_t var_148 = var_128

if (rdx_9 != r10)
    void* rax_19 = arg1[0xe]
    void* r11_1 = &arg1[0xc]
    
    if (rax_19 != 0)
        r11_1 = rax_19
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_13 = *(r11_1 + (sx.q(r8_3) << 2)) & rsi_2
    
    if (rdx_13 != 0)
    label_1425d3607:
        int32_t rax_25 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t rax_26
        
        if (rax_25 == 0)
            rax_26 = 0x20
        else
            rax_26 = 0x1f - temp0_4
        
        var_164.d = r9_3 - rax_26 + 0x1f
        
        if (r9_3 - rax_26 + 0x1f s> r10)
            var_164.d = r10
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r11_1 + (rcx_10 << 2) + 4)
            var_168_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1425d3607
        
        var_164.d = r10

while (true)
    int64_t rcx_12 = sx.q(var_148:0xc.d)
    int32_t rax_18
    
    if (rcx_12.d != (var_168_1.q u>> 0x20).d || var_148.q != &arg1[0xc])
        rax_18.b = 0
    else
        rax_18.b = 1
    
    int64_t* rdx_14 = var_158.q
    
    if (rax_18.b == 0 || rdx_14 != &arg1[0xa])
        rax_18.b = 1
    else
        rax_18.b = 0
    
    if (rax_18.b == 0)
        break
    
    int64_t* rcx_14 = *(*rdx_14 + rcx_12 * 0x18 + 8)
    
    if (rcx_14 != 0)
        sub_140cd85e0(rcx_14)
    
    var_148:8.d &= not.d(var_158:0xc.d)
    sub_14059bdd0(&var_158:8)

int64_t* rcx_16 = arg1[0x15]

if (rcx_16 != 0)
    sub_140cd85e0(rcx_16)

int64_t* rcx_17 = arg1[0x16]

if (rcx_17 != 0)
    sub_140cd85e0(rcx_17)

int64_t* rcx_18 = arg1[0x14]

if (rcx_18 != 0)
    sub_140cd85e0(rcx_18)

sub_1425d1620(arg1)
int64_t* rdx_15
rdx_15.b = 1
double zmm2_1[0x2]

if (rax_6 s>= 2)
    int64_t* rbx_6 = arg1[0x15]
    
    if (rbx_6 != 0)
        void* rax_55 = sub_1425d5030()
        void* rcx_32 = rbx_6[2]
        int64_t rax_56 = sx.q(*(rax_55 + 0x38))
        
        if (rax_56.d s<= *(rcx_32 + 0x38) && *(*(rcx_32 + 0x30) + (rax_56 << 3)) == rax_55 + 0x30)
            void var_108
            sub_1425d0b90(&var_108)
            
            if ((*(*rbx_6 + 0x280))(rbx_6, &var_108) != 0)
                int32_t r10_2 = arg1[0xf].d
                var_178:4.d = 1
                int32_t rcx_35 = 0
                var_178.d = 0
                int32_t r8_9 = 0
                var_178:8.q = &arg1[0xc]
                int32_t var_168_4 = 0xffffffff
                int64_t var_164_1 = 0
                
                if (r10_2 != 0)
                    void* rax_60 = arg1[0xe]
                    void* r9_8 = &arg1[0xc]
                    
                    if (rax_60 != 0)
                        r9_8 = rax_60
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r10_2 - 1)
                    int32_t rdx_33 = *r9_8
                    
                    if (rdx_33 != 0)
                    label_1425d39fc:
                        int32_t rax_67 = ((rdx_33 - 1) & rdx_33) ^ rdx_33
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_67)
                        var_178:4.d = rax_67
                        int32_t rax_68
                        
                        if (rax_67 == 0)
                            rax_68 = 0x20
                        else
                            rax_68 = 0x1f - temp0_8
                        
                        var_164_1.d = r8_9 - rax_68 + 0x1f
                        
                        if (r8_9 - rax_68 + 0x1f s> r10_2)
                            var_164_1.d = r10_2
                    else
                        while (true)
                            int64_t rdx_34 = sx.q(rcx_35)
                            r8_9 += 0x20
                            rcx_35 += 1
                            var_164_1:4.d = r8_9
                            var_178.d = rcx_35
                            
                            if (rdx_34.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_33 = *(r9_8 + (rdx_34 << 2) + 4)
                            var_168_4 = 0xffffffff
                            
                            if (rdx_33 != 0)
                                goto label_1425d39fc
                        
                        var_164_1.d = r10_2
                
                int32_t rdx_35 = arg1[0xf].d
                zmm2_1 = var_168_4.o
                var_164_1.d = rdx_35
                double var_118_2[0x2] = zmm2_1
                int128_t var_128_2 = var_178
                int32_t rsi_6 = 0xffffffff << (rdx_35 & 0x1f).b
                int32_t r8_12 = rdx_35 s>> 5
                int32_t r9_10 = rdx_35 & 0xffffffe0
                int64_t var_138_2 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int32_t var_168_5 = rsi_6
                var_158 = (&arg1[0xa]).o
                int128_t var_148_2 = var_128_2
                
                if (rdx_35 != r10_2)
                    void* rax_72 = arg1[0xe]
                    void* r11_3 = &arg1[0xc]
                    
                    if (rax_72 != 0)
                        r11_3 = rax_72
                    
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(r10_2 - 1)
                    int32_t rdx_39 = *(r11_3 + (sx.q(r8_12) << 2)) & rsi_6
                    
                    if (rdx_39 != 0)
                    label_1425d3ae7:
                        int32_t rax_78 = ((rdx_39 - 1) & rdx_39) ^ rdx_39
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_78)
                        int32_t r12_3
                        
                        if (rax_78 == 0)
                            r12_3 = 0x20
                        else
                            r12_3 = 0x1f - temp0_10
                        
                        var_164_1.d = r9_10 - r12_3 + 0x1f
                        
                        if (r9_10 - r12_3 + 0x1f s> r10_2)
                            var_164_1.d = r10_2
                    else
                        while (true)
                            int64_t rcx_39 = sx.q(r8_12)
                            r9_10 += 0x20
                            r8_12 += 1
                            
                            if (rcx_39.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_39 = *(r11_3 + (rcx_39 << 2) + 4)
                            var_168_5 = 0xffffffff
                            
                            if (rdx_39 != 0)
                                goto label_1425d3ae7
                        
                        var_164_1.d = r10_2
                
                while (true)
                    int64_t rcx_41 = sx.q(var_148_2:0xc.d)
                    int32_t rax_71
                    
                    if (rcx_41.d != (var_168_5.q u>> 0x20).d || var_148_2.q != &arg1[0xc])
                        rax_71.b = 0
                    else
                        rax_71.b = 1
                    
                    int64_t* rdx_40 = var_158.q
                    
                    if (rax_71.b == 0 || rdx_40 != &arg1[0xa])
                        rax_71.b = 1
                    else
                        rax_71.b = 0
                    
                    if (rax_71.b == 0)
                        break
                    
                    int64_t* rbx_8 = *(*rdx_40 + rcx_41 * 0x18 + 8)
                    
                    if (rbx_8 != 0)
                        void* rax_79 = sub_1425d5030()
                        void* rcx_43 = rbx_8[2]
                        int64_t rax_80 = sx.q(*(rax_79 + 0x38))
                        
                        if (rax_80.d s<= *(rcx_43 + 0x38)
                                && *(*(rcx_43 + 0x30) + (rax_80 << 3)) == rax_79 + 0x30)
                            sub_140cd85e0(rbx_8, rax_80)
                            (*(*rbx_8 + 0x278))(rbx_8, &var_108)
                    
                    var_148_2:8.d &= not.d(var_158:0xc.d)
                    sub_14059bdd0(&var_158:8)
        
        sub_1425cf8d0(arg1, arg1[0x15])
        rdx_15.b = 0
        arg1[0x15] = 0
    
    void* rax_85 = arg1[0x16]
    
    if (rax_85 != 0)
        sub_1425cf8d0(arg1, rax_85)
        rdx_15.b = 0
        arg1[0x16] = 0
    
    void* rax_86 = arg1[0x14]
    
    if (rax_86 != 0)
        sub_1425cf8d0(arg1, rax_86)
        arg1[0x14] = 0
        rdx_15.b = 0
else
    int32_t r10_1 = arg1[0xf].d
    var_178.d = 0
    int32_t rcx_20 = 0
    var_178:4.d = 1
    var_178:8.q = &arg1[0xc]
    int32_t var_168_2 = 0xffffffff
    var_164.d = 0
    var_164:4.d = 0
    
    if (r10_1 != 0)
        void* rax_30 = arg1[0xe]
        void* r8_4 = &arg1[0xc]
        
        if (rax_30 != 0)
            r8_4 = rax_30
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_1 - 1)
        int32_t rdx_18 = *r8_4
        
        if (rdx_18 != 0)
        label_1425d376c:
            int32_t rax_37 = ((rdx_18 - 1) & rdx_18) ^ rdx_18
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
            var_178:4.d = rax_37
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_5
            
            var_164.d = rcx_20 - rax_38 + 0x1f
            
            if (rcx_20 - rax_38 + 0x1f s> r10_1)
                var_164.d = r10_1
        else
            while (true)
                int64_t rdx_19 = sx.q(r15)
                rcx_20 += 0x20
                r15 += 1
                var_164:4.d = rcx_20
                var_178.d = r15
                
                if (rdx_19.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_18 = *(r8_4 + (rdx_19 << 2) + 4)
                var_168_2 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_1425d376c
            
            var_164.d = r10_1
    
    int32_t rdx_21 = arg1[0xf].d
    zmm2_1 = var_168_2.o
    var_164.d = rdx_21
    double var_118_1[0x2] = zmm2_1
    int128_t var_128_1 = var_178
    int32_t rsi_3 = 0xffffffff << (rdx_21 & 0x1f).b
    int32_t r8_6 = rdx_21 s>> 5
    int32_t r9_6 = rdx_21 & 0xffffffe0
    int64_t var_138_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int32_t var_168_3 = rsi_3
    var_158 = (&arg1[0xa]).o
    int128_t var_148_1 = var_128_1
    
    if (rdx_21 != r10_1)
        void* rax_42 = arg1[0xe]
        void* r11_2 = &arg1[0xc]
        
        if (rax_42 != 0)
            r11_2 = rax_42
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_1 - 1)
        int32_t rdx_25 = *(r11_2 + (sx.q(r8_6) << 2)) & rsi_3
        
        if (rdx_25 != 0)
        label_1425d3849:
            int32_t rax_48 = ((rdx_25 - 1) & rdx_25) ^ rdx_25
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_48)
            int32_t r12_2
            
            if (rax_48 == 0)
                r12_2 = 0x20
            else
                r12_2 = 0x1f - temp0_7
            
            var_164.d = r9_6 - r12_2 + 0x1f
            
            if (r9_6 - r12_2 + 0x1f s> r10_1)
                var_164.d = r10_1
        else
            while (true)
                int64_t rcx_24 = sx.q(r8_6)
                r9_6 += 0x20
                r8_6 += 1
                
                if (rcx_24.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_25 = *(r11_2 + (rcx_24 << 2) + 4)
                var_168_3 = 0xffffffff
                
                if (rdx_25 != 0)
                    goto label_1425d3849
            
            var_164.d = r10_1
    
    while (true)
        int64_t rcx_26 = sx.q(var_148_1:0xc.d)
        int32_t rax_41
        
        if (rcx_26.d != (var_168_3.q u>> 0x20).d || var_148_1.q != &arg1[0xc])
            rax_41.b = 0
        else
            rax_41.b = 1
        
        rdx_15 = var_158.q
        
        if (rax_41.b == 0 || rdx_15 != &arg1[0xa])
            rax_41.b = 1
        else
            rax_41.b = 0
        
        if (rax_41.b == 0)
            break
        
        int64_t* rbx_5 = *(*rdx_15 + rcx_26 * 0x18 + 8)
        
        if (rbx_5 != 0)
            void* rax_49 = sub_1425d5030()
            void* rcx_28 = rbx_5[2]
            int64_t rax_50 = sx.q(*(rax_49 + 0x38))
            
            if (rax_50.d s<= *(rcx_28 + 0x38)
                    && *(*(rcx_28 + 0x30) + (rax_50 << 3)) == rax_49 + 0x30)
                sub_140cd85e0(rbx_5, rax_50)
                (*(*rbx_5 + 0x278))(rbx_5, &arg1[0x23])
        
        var_148_1:8.d &= not.d(var_158:0xc.d)
        sub_14059bdd0(&var_158:8)
    
    rdx_15.b = 0
sub_1425d3c60(arg1, rdx_15.b)
jump(*(*arg1 + 0x2a0))
