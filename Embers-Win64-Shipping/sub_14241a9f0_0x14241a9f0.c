// 函数: sub_14241a9f0
// 地址: 0x14241a9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1

if ((*(arg1 + 0x2b4) & 1) == 0)
    sub_142403b00(arg1)

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f5d848 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d848)
    
    if (data_143f5d848 == 0xffffffff)
        atexit(sub_142d106a0)
        _Init_thread_footer(&data_143f5d848)

if (data_143f5d860 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d860)
    
    if (data_143f5d860 == 0xffffffff)
        atexit(sub_142d10c70)
        _Init_thread_footer(&data_143f5d860)

if (data_143f5d878 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d878)
    
    if (data_143f5d878 == 0xffffffff)
        atexit(sub_142d10b90)
        _Init_thread_footer(&data_143f5d878)

if (data_143f5d890 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d890)
    
    if (data_143f5d890 == 0xffffffff)
        atexit(sub_142d10a20)
        _Init_thread_footer(&data_143f5d890)

if (data_143f5d8a8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d8a8)
    
    if (data_143f5d8a8 == 0xffffffff)
        atexit(sub_142d10980)
        _Init_thread_footer(&data_143f5d8a8)

if (data_143f5d8c0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d8c0)
    
    if (data_143f5d8c0 == 0xffffffff)
        atexit(sub_142d10ab0)
        _Init_thread_footer(&data_143f5d8c0)

if (data_143f5d8d8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5d8d8)
    
    if (data_143f5d8d8 == 0xffffffff)
        atexit(sub_142d10ba0)
        _Init_thread_footer(&data_143f5d8d8)

int64_t* rcx_1 = nullptr

if (((r12[1].d u>> 4).b & 1) == 0)
    rcx_1 = r12[4]

(*(*rcx_1 + 0xa98))(rcx_1, arg3, zx.q(arg4))
int32_t var_2c4 = 1
void* r13 = &r12[0x4c]
int32_t var_2b8 = 0xffffffff
int32_t r11 = *(r13 + 0x28)
int32_t rcx_2 = 0
int32_t var_2c8 = 0
int32_t r8_1 = 0
void* var_2c0 = r13 + 0x10
int64_t var_2b4 = 0

if (r11 != 0)
    void* rax_11 = *(r13 + 0x20)
    void* r9 = r13 + 0x10
    
    if (rax_11 != 0)
        r9 = rax_11
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14241ab8b:
        int32_t rax_18 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_2c4_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_1
        
        var_2b4.d = r8_1 - rax_19 + 0x1f
        
        if (r8_1 - rax_19 + 0x1f s> r11)
            var_2b4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8_1 += 0x20
            rcx_2 += 1
            var_2b4:4.d = r8_1
            var_2c8 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_2b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14241ab8b
        
        var_2b4.d = r11

double zmm3[0x2] = var_2b8.o
void* var_2a0 = r13
double zmm0[0x2] = var_2c8.o
void* var_288 = r13
double var_280[0x2] = zmm0
int16_t var_1b0 = 0
double zmm4[0x2] = var_280
double rax_21 = zmm4[0]
uint128_t var_1e8 = var_288.o
double rcx_4 = zmm3[0]
double var_2a8[0x2]
var_2a8[0] = (_mm_unpackhi_pd(zmm3, zmm3[0])).q
double var_1c8[0x2] = var_2a8
void* var_228
int64_t var_208
int64_t var_1f8

if ((rcx_4 u>> 0x20).d s< *(rax_21 i+ 0x18))
    int32_t i = zmm4[1]:4.d
    
    do
        int64_t rsi
        rsi.b = 0
        int64_t j_3 = 5
        int64_t* r14_2 = sx.q(i) * 0xf0 + *var_1e8.q
        void* rbx_1 = &r14_2[7]
        int64_t j
        
        do
            int32_t rax_24 = *(rbx_1 + 0xc)
            *(rbx_1 + 8) = 0
            
            if (rax_24 s< 0 && rax_24 != 0)
                sub_1405dadb0(rbx_1, 0)
            
            if (rbx_1 != rbx_1 + 0x50)
                double zmm1[0x2] = *rbx_1
                *rbx_1 = *(rbx_1 + 0x50)
                *(rbx_1 + 0x50) = zmm1
            
            if (rsi.b == 0 && *(rbx_1 + 8) s> 0)
                rsi = sx.q(data_143f5d8b8)
                int32_t rax_26 = (rsi + 1).d
                bool cond:6_1 = rax_26 s<= data_143f5d8bc
                data_143f5d8b8 = rax_26
                
                if (not(cond:6_1))
                    sub_1405c4e40(&data_143f5d8b0)
                
                int64_t* rcx_9 = (rsi << 5) + data_143f5d8b0
                *rcx_9 = *r14_2
                rcx_9[1] = r14_2[1]
                void* rax_29 = r14_2[2]
                rcx_9[2] = rax_29
                
                if (rax_29 != 0)
                    *(rax_29 + 8) += 1
                
                rcx_9[3] = &r14_2[3]
                rsi.b = 1
            
            rbx_1 += 0x10
            j = j_3
            j_3 -= 1
        while (j != 1)
        char rax_30
        
        if (*(r14_2 + 0x35) u<= 0)
            rax_30 = sub_140d6e670(r14_2)
        
        if (*(r14_2 + 0x35) u> 0 || rax_30 != 0)
            int32_t rax_31 = r14_2[0x1c].d
            r14_2[3] = r14_2[0x1b]
            r14_2[4].d = rax_31
            
            if (*(r14_2 + 0x35) == 0)
                r12[0x74].d += 1
                int64_t r15_1 = sx.q(r14_2[0xa].d)
                int32_t rax_32 = (r15_1 + 1).d
                r14_2[0xa].d = rax_32
                
                if (rax_32 s> *(r14_2 + 0x54))
                    sub_1405a4cf0(&r14_2[9])
                
                *(r14_2[9] + (r15_1 << 2)) = r12[0x74].d
                
                if (rsi.b == 0)
                    int64_t rbx_2 = sx.q(data_143f5d8b8)
                    int32_t rax_34 = (rbx_2 + 1).d
                    bool cond:9_1 = rax_34 s<= data_143f5d8bc
                    data_143f5d8b8 = rax_34
                    
                    if (not(cond:9_1))
                        sub_1405c4e40(&data_143f5d8b0)
                    
                    int64_t* rcx_15 = (rbx_2 << 5) + data_143f5d8b0
                    *rcx_15 = *r14_2
                    rcx_15[1] = r14_2[1]
                    void* rax_37 = r14_2[2]
                    rcx_15[2] = rax_37
                    
                    if (rax_37 != 0)
                        *(rax_37 + 8) += 1
                    
                    rcx_15[3] = &r14_2[3]
        
        void* rax_38 = *r14_2
        void* rcx_16 = rax_38
        
        if (rax_38 == data_143e1df90 && not(0f f== r14_2[3].d) && not(0f f== r12[0x21].d))
            double temp0_3[0x2] = _mm_cvtps_pd((*(r12 + 0x114))[0])
            temp0_3[0] = temp0_3[0] f+ data_14399f938
            *(r12 + 0x114) = _mm_cvtpd_ps(temp0_3)[0].d
            r12[0x22].d += zx.d(*(r14_2 + 0x35))
            rcx_16 = *r14_2
        
        int64_t* rax_40 = r14_2[1]
        int64_t* rax_41 = r14_2[2]
        var_228 = rcx_16
        
        if (rax_41 != 0)
            rax_41[1].d += 1
        
        char rax_42
        rax_42, zmm0 = sub_140d6df40(&var_228)
        
        if (rax_42 == 0)
            var_288 = var_228
            var_280[0] = rax_40
            var_280[1] = rax_41
            
            if (rax_41 != 0)
                rax_41[1].d += 1
            
            (*(*r12 + 0x288))(r12, &var_288, r14_2[3].d)
            *(r14_2 + 0x24) = zmm0[0].d
        else
            zmm0 = zx.o(r14_2[3])
            int32_t var_200_1 = r14_2[4].d
            var_288 = var_228
            var_280[0] = rax_40
            var_208 = zmm0.q
            var_280[1] = rax_41
            
            if (rax_41 != 0)
                rax_41[1].d += 1
            
            int64_t* rax_48 = (*(*r12 + 0x280))(r12, &var_1f8, &var_288, &var_208)
            *(r14_2 + 0x24) = *rax_48
            *(r14_2 + 0x2c) = rax_48[1].d
        
        int32_t rax_54 = r14_2[8].d
        uint8_t rcx_20 = *(r14_2 + 0x34)
        
        if (rax_54 - r14_2[0xa].d s< 0)
            rcx_20 &= 0xfe
        else if (rax_54 - r14_2[0xa].d s<= 0)
            rcx_20 ^= (rcx_20 u>> 1 ^ rcx_20) & 1
        else
            rcx_20 |= 1
        
        *(r14_2 + 0x34) = rcx_20
        
        if (rax_41 != 0)
            rax_41[1].d -= 1
            
            if (rax_41[1].d == 1)
                (**rax_41)(rax_41)
                int32_t temp28_1 = *(rax_41 + 0xc)
                *(rax_41 + 0xc) -= 1
                
                if (temp28_1 == 1)
                    (*(*rax_41 + 8))(rax_41, 1)
        
        int32_t var_240_1 = 0
        *(r14_2 + 0x35) = 0
        r14_2[0x1b] = (_mm_unpacklo_ps(zx.o(0), 0)).q
        r14_2[0x1c].d = 0
        zmm4[1].d &= not.d(var_1e8:0xc.d)
        sub_14059bdd0(&var_1e8:8)
        i = zmm4[1]:4.d
    while (i s< *(zmm4[0] i+ 0x18))
    
    if (var_1b0.b != 0 && var_1b0:1.b != 0)
        sub_141c9a080(r13, *(r13 + 8) - *(r13 + 0x34), 1)

int64_t* rax_218 = arg2
r12[0x74].d = 0
uint128_t zmm6
uint128_t var_58 = zmm6
int32_t r15_2 = rax_218[1].d
int32_t r15_3 = r15_2 - 1
int64_t rcx_25 = sx.q(r15_3)
int64_t var_198 = rcx_25
int32_t var_254 = r15_3
void* var_2e8
int64_t var_2e0
char var_2d8
char* var_2d0
int32_t var_298
uint64_t var_248

if (r15_2 - 1 s>= 0)
    char rdi_2 = arg4
    var_2d8 = rdi_2
    
    while (true)
        void* r15_4 = *(*rax_218 + (rcx_25 << 3))
        void* var_230_1 = r15_4
        
        if (r15_4 != 0)
            sub_141f0ce20(r15_4, r12)
            void* rsi_1 = data_143f5d8b0
            void* i_1 = (sx.q(data_143f5d8b8) << 5) + rsi_1
            
            if (rsi_1 != i_1)
                int64_t* rsi_2 = rsi_1 + 0x18
                
                do
                    if ((*(*rsi_2 + 0x1c) & 4) == 0)
                        int64_t* rbx_4 = rsi_2[-1]
                        int64_t rcx_27 = rsi_2[-2]
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        var_288 = rsi_2[-3]
                        var_280[0] = rcx_27
                        var_280[1] = rbx_4
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        sub_141f12820(r15_4, r12, &var_288, &data_143f5d8c8)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp18_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp18_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    rsi_2 = &rsi_2[4]
                while (&rsi_2[-3] != i_1)
            
            int64_t* rbx_5 = data_143f5d8c8
            int64_t rsi_3 = sx.q(data_143f5d8d0)
            void* r14_7 = &rbx_5[rsi_3 * 2]
            
            if (rbx_5 != r14_7)
                do
                    var_2e8 = &data_143f5d880
                    sub_1424108c0(r12, *rbx_5, arg4, &data_143f5d898, &data_143f5d880)
                    rbx_5 = &rbx_5[2]
                while (rbx_5 != r14_7)
                
                rdi_2 = var_2d8
                rsi_3 = zx.q(data_143f5d8d0)
                rbx_5 = data_143f5d8c8
            
            int32_t rax_72 = data_143f5d8d4
            
            if (rax_72 s< 0)
                if (rsi_3.d != 0)
                    void* r14_9 = &rbx_5[1]
                    int32_t i_2
                    
                    do
                        int64_t* rbx_7 = *r14_9
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                (**rbx_7)(rbx_7)
                                int32_t temp16_1 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    (*(*rbx_7 + 8))(rbx_7, 1)
                        
                        r14_9 += 0x10
                        i_2 = rsi_3.d
                        rsi_3 = zx.q(rsi_3.d - 1)
                    while (i_2 != 1)
                    rax_72 = data_143f5d8d4
                
                data_143f5d8d0 = 0
                
                if (rax_72 != 0)
                    sub_1405a5410(&data_143f5d8c8, 0)
            else
                if (rsi_3.d != 0)
                    void* r14_8 = &rbx_5[1]
                    int32_t i_3
                    
                    do
                        int64_t* rbx_6 = *r14_8
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp17_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        r14_8 += 0x10
                        i_3 = rsi_3.d
                        rsi_3 = zx.q(rsi_3.d - 1)
                    while (i_3 != 1)
                
                data_143f5d8d0 = 0
            
            char* rbx_8 = *(r15_4 + 0xb0)
            void* rsi_6 = &rbx_8[sx.q(*(r15_4 + 0xb8)) * 0x60]
            
            if (rbx_8 != rsi_6)
                do
                    var_2e0 = 0
                    var_2e8 = &data_143f5d880
                    sub_1424100e0(r12, rbx_8, arg4, &data_143f5d898, &data_143f5d880, nullptr)
                    rbx_8 = &rbx_8[0x60]
                while (rbx_8 != rsi_6)
                
                rdi_2 = var_2d8
            
            sub_1423f8cf0(data_143f5d898, data_143f5d8a0, rdi_2)
            int32_t i_4 = 0
            int32_t i_21
            
            if (data_143f5d8a0 s> 0)
                void* r15_5 = nullptr
                
                do
                    int64_t r12_1 = data_143f5d898
                    void* rbx_9 = *(r15_5 + r12_1 + 0x40)
                    
                    if (rbx_9 == 0 || (*(rbx_9 + 1) & 1) == 0)
                        goto label_14241b3e7
                    
                    int64_t rbx_10 = *(rbx_9 + 4)
                    i_21.q = rbx_10
                    int64_t* rsi_9
                    
                    if (arg1[0x39].d == *(arg1 + 0x1f4))
                    label_14241b29f:
                        rsi_9 = nullptr
                    else
                        int32_t var_234
                        int32_t rax_76 = sub_140b5ead0(rbx_10.d) + var_234
                        void* r8_9 = &arg1[0x3f]
                        void* rcx_39 = *(r8_9 + 8)
                        
                        if (rcx_39 != 0)
                            r8_9 = rcx_39
                        
                        int32_t rax_78 = *(r8_9 + (((sx.q(arg1[0x41].d) - 1) & sx.q(rax_76)) << 2))
                        
                        if (rax_78 == 0xffffffff)
                        label_14241b29f_1:
                            rsi_9 = nullptr
                        else
                            while (true)
                                rsi_9 = (sx.q(rax_78) << 6) + arg1[0x38]
                                
                                if (*rsi_9 == rbx_10)
                                    break
                                
                                rax_78 = rsi_9[7].d
                                
                                if (rax_78 == 0xffffffff)
                                    goto label_14241b29f_2
                            
                            if (rax_78 == 0xffffffff)
                            label_14241b29f_2:
                                rsi_9 = nullptr
                    
                    if (sub_140d6df00(&rsi_9[3]) == 0)
                    label_14241b323:
                        
                        if (*(*(r15_5 + r12_1 + 0x40) + 2) != 0)
                            rsi_9[3] = data_143e202b8
                            int64_t* rbx_12 = data_143e202c8
                            var_228 = data_143e202c0
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d += 1
                            
                            if (&var_228 != &rsi_9[4])
                                var_228.o = *(rsi_9 + 0x20)
                                *(rsi_9 + 0x20) = var_228.o
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    (**rbx_12)(rbx_12)
                                    int32_t temp32_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp32_1 == 1)
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                            
                            goto label_14241b3e7
                        
                        void* rbx_11 = r15_5 + r12_1
                        sub_140627710(&rsi_9[3], rbx_11 + 0x48)
                        rsi_9[6].d ^= (rsi_9[6].d ^ *(rbx_11 + 0x60)) & 1
                        int32_t rcx_48 = ((rsi_9[6].d ^ *(rbx_11 + 0x60)) & 2) ^ rsi_9[6].d
                        rsi_9[6].d = rcx_48
                        int32_t rdx_27 = ((rcx_48 ^ *(rbx_11 + 0x60)) & 4) ^ rcx_48
                        rsi_9[6].d = rdx_27
                        rsi_9[6].d = ((rdx_27 ^ *(rbx_11 + 0x60)) & 8) ^ rdx_27
                    label_14241b3e7:
                        int64_t rdx_28 = data_143f5d898
                        uint32_t rcx_51 = zx.d(*(r15_5 + rdx_28 + 0x38))
                        int64_t rax_100
                        
                        if (rcx_51 == 1)
                            int64_t* rcx_59 = *(r15_5 + rdx_28 + 8)
                            
                            if (rcx_59[1].d != 0)
                                int64_t* rcx_60 = *rcx_59
                                
                                if (rcx_60 != 0)
                                    rax_100 = (*(*rcx_60 + 0x28))(rcx_60)
                                label_14241b48f:
                                    
                                    if (rax_100.b != 0)
                                    label_14241b4a0:
                                        *(r15_5 + data_143f5d898 + 4) = data_143f5d870
                                        int64_t rbx_14 = sx.q(data_143f5d870)
                                        int64_t rsi_10 = data_143f5d898
                                        int32_t rax_105 = (rbx_14 + 1).d
                                        bool cond:16_1 = rax_105 s<= data_143f5d874
                                        data_143f5d870 = rax_105
                                        
                                        if (not(cond:16_1))
                                            sub_1405c5190(&data_143f5d868)
                                        
                                        sub_1423fb320(rbx_14 * 0xc8 + data_143f5d868, 
                                            sx.q(i_4) * 0xc8 + rsi_10)
                        else if (rcx_51 == 2)
                            int64_t* rcx_57 = *(r15_5 + rdx_28 + 0x18)
                            
                            if (rcx_57[1].d != 0)
                                int64_t* rcx_58 = *rcx_57
                                
                                if (rcx_58 != 0 && (*(*rcx_58 + 0x28))(rcx_58) != 0)
                                    goto label_14241b4a0
                        else if (rcx_51 == 3)
                            int32_t* rbx_13 = *(r15_5 + rdx_28 + 0x28)
                            int32_t rcx_54
                            rcx_54.b = sub_140b5b8a0(rbx_13[2], 0) == 0
                            
                            if ((rbx_13[3] != 0 | rcx_54.b) != 0)
                                void* rax_99 = sub_140d3c6e0(rbx_13)
                                
                                if (rax_99 != 0)
                                    rax_100.b = sub_140d1fd20(rax_99, *(rbx_13 + 8)) != 0
                                    goto label_14241b48f
                    else
                        void* r8_10 = rsi_9[3]
                        char rcx_41
                        char rdx_21
                        
                        if (r8_10 == *(r15_5 + r12_1 + 0x48))
                            rcx_41 = (rsi_9[6].d).b
                            rdx_21 = (*(r15_5 + r12_1 + 0x60)).b
                        
                        bool rax_79
                        
                        if (r8_10 != *(r15_5 + r12_1 + 0x48) || ((rcx_41 ^ rdx_21) & 1) != 0
                                || ((rcx_41 ^ rdx_21) & 2) != 0 || ((rcx_41 ^ rdx_21) & 4) != 0
                                || ((rcx_41 ^ rdx_21) & 8) != 0)
                            rax_79 = false
                        else
                            rax_79 = true
                        
                        if (rax_79 != 0)
                            goto label_14241b323
                        
                        var_280[0] = rsi_9[4]
                        void* rax_84 = rsi_9[5]
                        var_288 = r8_10
                        var_280[1] = rax_84
                        
                        if (rax_84 != 0)
                            *(rax_84 + 8) += 1
                        
                        if (sub_142415f50(arg1, &var_288) == 0)
                            goto label_14241b323
                    
                    i_4 += 1
                    r15_5 += 0xc8
                while (i_4 s< data_143f5d8a0)
                
                rdi_2 = var_2d8
                r12 = arg1
                r15_4 = var_230_1
            
            i_21 = 0
            int32_t var_168
            int64_t var_160
            int32_t var_108
            int128_t var_f8
            int64_t var_c8
            
            if (*(r15_4 + 0xc8) s> 0)
                void* r14_12 = &r12[0x72]
                int64_t r13_2 = 0
                void* rdi_4 = &r12[0x4c]
                int32_t i_5
                
                do
                    char* rsi_11 = *(r15_4 + 0xc0)
                    int64_t* r15_6 = &data_143e1eef0
                    var_2d0 = rsi_11
                    int32_t j_2 = 0
                    int32_t j_1
                    
                    do
                        int32_t var_1a8
                        sub_14240da20(rdi_4, &var_1a8, r15_6)
                        int64_t rax_107 = sx.q(var_1a8)
                        void* const rax_109
                        
                        if (rax_107.d == 0xffffffff)
                            rax_109 = nullptr
                        else
                            rax_109 = rax_107 * 0xf0 + *rdi_4
                        
                        uint32_t r8_12 = zx.d(rsi_11[r13_2 + 1])
                        void* rbx_15 = rax_109 + 0x18
                        
                        if (rax_109 == 0)
                            rbx_15 = nullptr
                        
                        var_288 = *r15_6
                        var_280[0] = r15_6[1]
                        void* rax_112 = r15_6[2]
                        var_280[1] = rax_112
                        
                        if (rax_112 != 0)
                            *(rax_112 + 8) += 1
                        
                        var_2e8 = rbx_15
                        
                        if (sub_142417060(r12, &var_288, r8_12, r14_12, var_2e8) != 0)
                            var_2c8.q = *r15_6
                            int64_t var_2c0_1 = r15_6[1]
                            void* rax_116 = r15_6[2]
                            var_2b8.q = rax_116
                            
                            if (rax_116 != 0)
                                *(rax_116 + 8) += 1
                            
                            if (sub_142415bf0(r12, &var_2c8, rbx_15) == 0)
                                char rax_118 = rsi_11[r13_2]
                                
                                if ((rax_118 & 2) != 0 || arg4 == 0)
                                    void* const rcx_71
                                    
                                    if (r12[0x17].d == *(r12 + 0xe4))
                                    label_14241b69b:
                                        rcx_71 = nullptr
                                    else
                                        void* r8_14 = &r12[0x1d]
                                        void* rdx_36 = *(r8_14 + 8)
                                        int64_t r9_3 = sx.q(**r14_12)
                                        
                                        if (rdx_36 != 0)
                                            r8_14 = rdx_36
                                        
                                        int32_t rax_121 =
                                            *(r8_14 + (((sx.q(r12[0x1f].d) - 1) & r9_3) << 2))
                                        
                                        if (rax_121 == 0xffffffff)
                                        label_14241b69b_1:
                                            rcx_71 = nullptr
                                        else
                                            int64_t r8_15 = r12[0x16]
                                            
                                            while (true)
                                                int64_t rdx_37 = sx.q(rax_121) * 3
                                                rcx_71 = r8_15 + (rdx_37 << 3)
                                                
                                                if (*(r8_15 + (rdx_37 << 3)) == r9_3.d)
                                                    break
                                                
                                                rax_121 = *(rcx_71 + 0x10)
                                                
                                                if (rax_121 == 0xffffffff)
                                                    goto label_14241b69b_2
                                            
                                            if (rax_121 == 0xffffffff)
                                            label_14241b69b_2:
                                                rcx_71 = nullptr
                                    
                                    void* rax_122 = rcx_71 + 4
                                    
                                    if (rcx_71 == 0)
                                        rax_122 = nullptr
                                    
                                    int64_t* r9_4
                                    
                                    if (rax_122 == 0)
                                        int32_t var_180 = 0xbf800000
                                        r9_4 = &var_180
                                        int32_t var_17c_1 = 0xbf800000
                                        int32_t var_178_1 = 0
                                    else
                                        int64_t var_90
                                        r9_4 = &var_90
                                        int32_t rax_123 = *(rax_122 + 8)
                                        var_90 = *rax_122
                                        int32_t var_88_1 = rax_123
                                    
                                    void* r8_16 = *(rsi_11 + r13_2 + 0x10)
                                    int64_t r11_1 = *(rsi_11 + r13_2 + 8)
                                    
                                    if (r8_16 != 0)
                                        *(r8_16 + 8) += 1
                                    
                                    void* rdx_38 = *(rsi_11 + r13_2 + 0x20)
                                    int64_t r10_1 = *(rsi_11 + r13_2 + 0x18)
                                    
                                    if (rdx_38 != 0)
                                        *(rdx_38 + 8) += 1
                                    
                                    int32_t* rax_124 = *r14_12
                                    __builtin_memset(&var_160, 0, 0x31)
                                    int32_t var_164_1 = data_143f5d870
                                    int64_t var_120_1 = data_143e202b8
                                    int64_t var_118_1 = data_143e202c0
                                    int64_t* rax_128 = data_143e202c8
                                    var_168 = *rax_124
                                    
                                    if (rax_128 != 0)
                                        rax_128[1].d += 1
                                    
                                    var_108 &= 0xfffffff0
                                    int64_t var_d8_1 = *r9_4
                                    int32_t var_d0_1 = r9_4[1].d
                                    __builtin_memset(&var_c8, 0, 0x20)
                                    var_f8.q = r11_1
                                    var_f8:8.q = r8_16
                                    __builtin_memset(&var_2c8, 0, 0x20)
                                    int128_t var_e8
                                    var_e8.q = r10_1
                                    var_e8:8.q = rdx_38
                                    int32_t j_4 = j_2
                                    sub_140e53610(&var_2c8)
                                    int64_t rbx_16 = sx.q(data_143f5d870)
                                    int32_t rax_131 = (rbx_16 + 1).d
                                    bool cond:26_1 = rax_131 s<= data_143f5d874
                                    data_143f5d870 = rax_131
                                    
                                    if (not(cond:26_1))
                                        sub_1405c5190(&data_143f5d868)
                                    
                                    sub_1423fb320(rbx_16 * 0xc8 + data_143f5d868, &var_168)
                                    int32_t k = 1
                                    
                                    if (r12[0x73].d s> 1)
                                        void* rsi_12 = 4
                                        
                                        do
                                            int64_t r9_5 = sx.q(*(rsi_12 + r12[0x72]))
                                            int32_t rax_134 = r12[0x17].d
                                            var_168 = r9_5.d
                                            void* const rcx_78
                                            
                                            if (rax_134 == *(r12 + 0xe4))
                                            label_14241b8e0:
                                                rcx_78 = nullptr
                                            else
                                                void* r8_17 = &r12[0x1d]
                                                void* rcx_76 = *(r8_17 + 8)
                                                
                                                if (rcx_76 != 0)
                                                    r8_17 = rcx_76
                                                
                                                int32_t rax_135 = *(r8_17
                                                    + (((sx.q(r12[0x1f].d) - 1) & r9_5) << 2))
                                                
                                                if (rax_135 == 0xffffffff)
                                                label_14241b8e0_1:
                                                    rcx_78 = nullptr
                                                else
                                                    int64_t r8_18 = r12[0x16]
                                                    
                                                    while (true)
                                                        int64_t rdx_44 = sx.q(rax_135) * 3
                                                        rcx_78 = r8_18 + (rdx_44 << 3)
                                                        
                                                        if (*(r8_18 + (rdx_44 << 3)) == r9_5.d)
                                                            break
                                                        
                                                        rax_135 = *(rcx_78 + 0x10)
                                                        
                                                        if (rax_135 == 0xffffffff)
                                                            goto label_14241b8e0_2
                                                    
                                                    if (rax_135 == 0xffffffff)
                                                    label_14241b8e0_2:
                                                        rcx_78 = nullptr
                                            
                                            void* rax_136 = rcx_78 + 4
                                            
                                            if (rcx_78 == 0)
                                                rax_136 = nullptr
                                            
                                            int64_t* rax_138
                                            
                                            if (rax_136 == 0)
                                                int32_t var_174 = 0xbf800000
                                                rax_138 = &var_174
                                                int32_t var_170_1 = 0xbf800000
                                                int32_t var_16c_1 = 0
                                            else
                                                int32_t var_1f0_1 = *(rax_136 + 8)
                                                rax_138 = &var_1f8
                                                var_1f8 = *rax_136
                                            
                                            int64_t rbx_17 = sx.q(data_143f5d870)
                                            int32_t var_d0_2 = rax_138[1].d
                                            int64_t var_d8_2 = *rax_138
                                            int32_t rax_140 = (rbx_17 + 1).d
                                            bool cond:28_1 = rax_140 s<= data_143f5d874
                                            data_143f5d870 = rax_140
                                            
                                            if (not(cond:28_1))
                                                sub_1405c5190(&data_143f5d868)
                                            
                                            sub_1423fb320(rbx_17 * 0xc8 + data_143f5d868, &var_168)
                                            k += 1
                                            rsi_12 += 4
                                        while (k s< r12[0x73].d)
                                        
                                        rsi_11 = var_2d0
                                        rdi_4 = &r12[0x4c]
                                    
                                    sub_140e53610(&var_c8)
                                    sub_140e53610(&var_f8)
                                    
                                    if (rax_128 != 0)
                                        rax_128[1].d -= 1
                                        
                                        if (rax_128[1].d == 1)
                                            (**rax_128)(rax_128)
                                            int32_t temp38_1 = *(rax_128 + 0xc)
                                            *(rax_128 + 0xc) -= 1
                                            
                                            if (temp38_1 == 1)
                                                (*(*rax_128 + 8))(rax_128, 1)
                                    
                                    sub_141b84450(&var_160)
                                    rax_118 = rsi_11[r13_2]
                                    r14_12 = &r12[0x72]
                                
                                if ((rax_118 & 1) != 0)
                                    sub_141b6d510(&data_143f5d880, r15_6)
                        
                        r15_6 = &r15_6[3]
                        j_1 = j_2 + 1
                        j_2 = j_1
                    while (j_1 s< 0xb)
                    int32_t rax_144 = *(r14_12 + 0xc)
                    *(r14_12 + 8) = 0
                    
                    if (rax_144 s< 0 && rax_144 != 0)
                        sub_1405dadb0(r14_12, 0)
                    
                    r13_2 += 0x28
                    r15_4 = var_230_1
                    i_5 = i_21 + 1
                    i_21 = i_5
                while (i_5 s< *(r15_4 + 0xc8))
                rdi_2 = var_2d8
            
            char* r13_3 = *(r15_4 + 0x100)
            void* r12_4 = &r13_3[sx.q(*(r15_4 + 0x108)) << 6]
            
            if (r13_3 != r12_4)
                void* rsi_13 = &r13_3[0x18]
                
                do
                    int32_t var_1a4
                    sub_14240da20(&arg1[0x4c], &var_1a4, rsi_13 - 0x10)
                    int64_t rax_146 = sx.q(var_1a4)
                    void* const rax_148
                    
                    if (rax_146.d == 0xffffffff)
                        rax_148 = nullptr
                    else
                        rax_148 = rax_146 * 0xf0 + arg1[0x4c]
                    
                    void* rbx_20 = rax_148 + 0x18
                    
                    if (rax_148 == 0)
                        rbx_20 = nullptr
                    
                    var_2c8.q = *(rsi_13 - 0x10)
                    int64_t var_2c0_2 = *(rsi_13 - 8)
                    void* rax_151 = *rsi_13
                    var_2b8.q = rax_151
                    
                    if (rax_151 != 0)
                        *(rax_151 + 8) += 1
                    
                    var_2e8 = rbx_20
                    
                    if (sub_142417060(arg1, &var_2c8, 0, &arg1[0x72], var_2e8) != 0)
                        var_288 = *(rsi_13 - 0x10)
                        var_280[0] = *(rsi_13 - 8)
                        void* rax_155 = *rsi_13
                        var_280[1] = rax_155
                        
                        if (rax_155 != 0)
                            *(rax_155 + 8) += 1
                        
                        if (sub_142415bf0(arg1, &var_288, rbx_20) == 0 && rbx_20 != 0)
                            void* r8_21 = *(rsi_13 + 0x10)
                            int64_t r10_2 = *(rsi_13 + 8)
                            
                            if (r8_21 != 0)
                                *(r8_21 + 8) += 1
                            
                            void* rdx_51 = *(rsi_13 + 0x20)
                            int64_t r9_7 = *(rsi_13 + 0x18)
                            
                            if (rdx_51 != 0)
                                *(rdx_51 + 8) += 1
                            
                            int32_t zmm2 = *(rbx_20 + 0xc)
                            int32_t var_164_2 = data_143f5d870
                            int64_t var_120_2 = data_143e202b8
                            int64_t var_118_2 = data_143e202c0
                            int64_t* rax_161 = data_143e202c8
                            var_168 = *arg1[0x72]
                            __builtin_memset(&var_160, 0, 0x31)
                            
                            if (rax_161 != 0)
                                rax_161[1].d += 1
                            
                            var_108 &= 0xfffffff0
                            __builtin_memset(&var_2c8, 0, 0x20)
                            int32_t var_a8_1 = zmm2
                            __builtin_memset(&var_f8, 0, 0x20)
                            var_c8 = r10_2
                            void* var_c0_1 = r8_21
                            int64_t var_b8 = r9_7
                            void* var_b0_1 = rdx_51
                            sub_140e53610(&var_2c8)
                            int64_t rbx_21 = sx.q(data_143f5d870)
                            int32_t rax_162 = (rbx_21 + 1).d
                            bool cond:23_1 = rax_162 s<= data_143f5d874
                            data_143f5d870 = rax_162
                            
                            if (not(cond:23_1))
                                sub_1405c5190(&data_143f5d868)
                            
                            sub_1423fb170(rbx_21 * 0xc8 + data_143f5d868, &var_168)
                            
                            if ((*r13_3 & 1) != 0)
                                sub_141b6d510(&data_143f5d880, rsi_13 - 0x10)
                            
                            sub_140e53610(&var_c8)
                            sub_140e53610(&var_f8)
                            
                            if (rax_161 != 0)
                                rax_161[1].d -= 1
                                
                                if (rax_161[1].d == 1)
                                    (**rax_161)(rax_161)
                                    int32_t temp36_1 = *(rax_161 + 0xc)
                                    *(rax_161 + 0xc) -= 1
                                    
                                    if (temp36_1 == 1)
                                        (*(*rax_161 + 8))(rax_161, 1)
                            
                            sub_141b84450(&var_160)
                    
                    int32_t rax_165 = *(arg1 + 0x39c)
                    arg1[0x73].d = 0
                    
                    if (rax_165 s< 0 && rax_165 != 0)
                        sub_1405dadb0(&arg1[0x72], 0)
                    
                    r13_3 = &r13_3[0x40]
                    rsi_13 += 0x40
                while (r13_3 != r12_4)
                
                rdi_2 = var_2d8
                r15_4 = var_230_1
            
            char* r13_4 = *(r15_4 + 0xd0)
            void* rax_168 = sx.q(*(r15_4 + 0xd8)) * 0x38 + r13_4
            
            if (r13_4 != rax_168)
                void* rbx_23 = &r13_4[0x20]
                
                do
                    *(rbx_23 + 0x10) = sub_142405470(arg1, r13_4, arg4, &data_143f5d880)[0].d
                    int64_t* rcx_101 = *(rbx_23 - 0x10)
                    char rax_169
                    
                    if (rcx_101 == 0 || rcx_101[1].d == 0)
                    label_14241bdb3:
                        int32_t* rcx_103 = *rbx_23
                        
                        if (rcx_103 != 0)
                            rax_169 = sub_141b28ce0(rcx_103)
                        
                        if (rcx_103 == 0 || rax_169 == 0)
                            rax_169 = 0
                        else
                            rax_169 = 1
                    else
                        int64_t* rcx_102 = *rcx_101
                        
                        if (rcx_102 == 0)
                            goto label_14241bdb3
                        
                        rax_169 = (*(*rcx_102 + 0x28))(rcx_102)
                        
                        if (rax_169 == 0)
                            goto label_14241bdb3
                        
                        rax_169 = 1
                    
                    if (rax_169 != 0)
                        void* r14_13 = *(rbx_23 - 8)
                        var_2d0 = *(rbx_23 - 0x10)
                        
                        if (r14_13 != 0)
                            *(r14_13 + 8) += 1
                        
                        void* rsi_14 = *(rbx_23 + 8)
                        int64_t r12_5 = *rbx_23
                        
                        if (rsi_14 != 0)
                            *(rsi_14 + 8) += 1
                        
                        zmm6 = *(rbx_23 + 0x10)
                        zmm3[1].d = zmm6.d
                        __builtin_memset(&var_2c8, 0, 0x20)
                        sub_140e53610(&var_2c8)
                        int64_t r15_7 = sx.q(data_143f5d840)
                        int32_t rax_172 = (r15_7 + 1).d
                        bool cond:18_1 = rax_172 s<= data_143f5d844
                        data_143f5d840 = rax_172
                        
                        if (not(cond:18_1))
                            sub_140b52a30(&data_143f5d838)
                        
                        int64_t rax_173 = data_143f5d838
                        int64_t rcx_105 = r15_7 * 5
                        *(rax_173 + (rcx_105 << 3)) = var_2d0
                        *(rax_173 + (rcx_105 << 3) + 8) = r14_13
                        *(rax_173 + (rcx_105 << 3) + 0x10) = r12_5
                        *(rax_173 + (rcx_105 << 3) + 0x18) = rsi_14
                        *(rax_173 + (rcx_105 << 3) + 0x20) = zmm6.d
                        __builtin_memset(&var_280, 0, 0x18)
                        var_288 = nullptr
                        sub_140e53610(&var_288)
                    
                    r13_4 = &r13_4[0x38]
                    rbx_23 += 0x38
                while (r13_4 != rax_168)
                
                rdi_2 = var_2d8
                r15_4 = var_230_1
            
            char* r13_5 = *(r15_4 + 0xe0)
            void* rax_176 = &r13_5[sx.q(*(r15_4 + 0xe8)) << 6]
            
            if (r13_5 != rax_176)
                int64_t* rbx_24 = &r13_5[0x18]
                
                do
                    var_2c8.q = rbx_24[-2]
                    int64_t var_2c0_3 = rbx_24[-1]
                    void* rax_179 = *rbx_24
                    var_2b8.q = rax_179
                    
                    if (rax_179 != 0)
                        *(rax_179 + 8) += 1
                    
                    char rax_180 = sub_142415bf0(arg1, &var_2c8, nullptr)
                    
                    if (rax_180 == 0)
                        if (arg4 == rax_180 || (*r13_5 & 2) != 0)
                            var_2c8.q = rbx_24[-2]
                            int64_t var_2c0_4 = rbx_24[-1]
                            void* rax_183 = *rbx_24
                            var_2b8.q = rax_183
                            
                            if (rax_183 != 0)
                                *(rax_183 + 8) += 1
                            
                            zmm0 = sub_142411a80(arg1, &var_2c8)
                        else
                            zmm0 = zx.o(0)
                        
                        *(rbx_24 - 0x14) = zmm0[0].d
                        
                        if ((*r13_5 & 1) != 0)
                            sub_141b6d510(&data_143f5d880, &rbx_24[-2])
                    
                    int64_t* rax_185 = rbx_24[1]
                    
                    if (rax_185 == 0 || rax_185[1].d == 0)
                    label_14241bf89:
                        int32_t* rcx_110 = rbx_24[3]
                        
                        if (rcx_110 != 0)
                            rax_185 = sub_141b28ce0(rcx_110)
                        
                        if (rcx_110 == 0 || rax_185.b == 0)
                            rax_185.b = 0
                        else
                            rax_185.b = 1
                    else
                        int64_t* rcx_109 = *rax_185
                        
                        if (rcx_109 == 0)
                            goto label_14241bf89
                        
                        rax_185 = (*(*rcx_109 + 0x28))(rcx_109)
                        
                        if (rax_185.b == 0)
                            goto label_14241bf89
                        
                        rax_185.b = 1
                    
                    if (rax_185.b != 0)
                        void* r14_15 = rbx_24[2]
                        var_2d0 = rbx_24[1]
                        
                        if (r14_15 != 0)
                            *(r14_15 + 8) += 1
                        
                        void* rsi_15 = rbx_24[4]
                        int64_t r12_6 = rbx_24[3]
                        
                        if (rsi_15 != 0)
                            *(rsi_15 + 8) += 1
                        
                        zmm6 = *(rbx_24 - 0x14)
                        zmm3[1].d = zmm6.d
                        __builtin_memset(&var_2c8, 0, 0x20)
                        sub_140e53610(&var_2c8)
                        int64_t r15_8 = sx.q(data_143f5d840)
                        int32_t rax_187 = (r15_8 + 1).d
                        bool cond:22_1 = rax_187 s<= data_143f5d844
                        data_143f5d840 = rax_187
                        
                        if (not(cond:22_1))
                            sub_140b52a30(&data_143f5d838)
                        
                        int64_t rax_188 = data_143f5d838
                        int64_t rcx_112 = r15_8 * 5
                        *(rax_188 + (rcx_112 << 3)) = var_2d0
                        *(rax_188 + (rcx_112 << 3) + 8) = r14_15
                        *(rax_188 + (rcx_112 << 3) + 0x10) = r12_6
                        *(rax_188 + (rcx_112 << 3) + 0x18) = rsi_15
                        *(rax_188 + (rcx_112 << 3) + 0x20) = zmm6.d
                        __builtin_memset(&var_280, 0, 0x18)
                        var_288 = nullptr
                        sub_140e53610(&var_288)
                    
                    r13_5 = &r13_5[0x40]
                    rbx_24 = &rbx_24[8]
                while (r13_5 != rax_176)
                
                rdi_2 = var_2d8
                r15_4 = var_230_1
            
            void* r13_6 = *(r15_4 + 0xf0)
            void* rax_191 = sx.q(*(r15_4 + 0xf8)) * 0x48 + r13_6
            
            if (r13_6 != rax_191)
                void* rbx_25 = r13_6 + 0x20
                
                do
                    var_2c8.q = *(rbx_25 - 0x10)
                    int64_t var_2c0_5 = *(rbx_25 - 8)
                    void* rax_194 = *rbx_25
                    var_2b8.q = rax_194
                    
                    if (rax_194 != 0)
                        *(rax_194 + 8) += 1
                    
                    char rax_195 = sub_142415bf0(arg1, &var_2c8, nullptr)
                    
                    if (rax_195 == 0)
                        int32_t rax_196
                        
                        if (arg4 == rax_195 || (*r13_6 & 2) != 0)
                            var_288 = *(rbx_25 - 0x10)
                            var_280[0] = *(rbx_25 - 8)
                            void* rax_199 = *rbx_25
                            var_280[1] = rax_199
                            
                            if (rax_199 != 0)
                                *(rax_199 + 8) += 1
                            
                            int32_t var_1a0
                            sub_14240da20(r13, &var_1a0, &var_288)
                            int64_t rax_200 = sx.q(var_1a0)
                            void* const rax_202
                            
                            if (rax_200.d == 0xffffffff)
                                rax_202 = nullptr
                            else
                                rax_202 = rax_200 * 0xf0 + *r13
                            
                            void* rcx_117 = rax_202 + 0x18
                            
                            if (rax_202 == 0)
                                rcx_117 = nullptr
                            
                            int64_t* rsi_17
                            
                            if (rcx_117 == 0)
                                var_208 = 0
                                rsi_17 = &var_208
                                int32_t var_200_2 = 0
                            else
                                rsi_17 = &var_248
                                int32_t rax_203 = *(rcx_117 + 0x14)
                                var_248 = *(rcx_117 + 0xc)
                                int32_t var_240_2 = rax_203
                            
                            sub_140d430a0(&var_288)
                            rax_196 = rsi_17[1].d
                            *(rbx_25 - 0x1c) = *rsi_17
                        else
                            *(rbx_25 - 0x1c) = data_143dbb1f8.q
                            rax_196 = data_143dbb200
                        
                        bool cond:20_1 = (*r13_6 & 1) == 0
                        *(rbx_25 - 0x14) = rax_196
                        
                        if (not(cond:20_1))
                            sub_141b6d510(&data_143f5d880, rbx_25 - 0x10)
                    
                    int64_t* rax_205 = *(rbx_25 + 8)
                    
                    if (rax_205 == 0 || rax_205[1].d == 0)
                    label_14241c1e1:
                        int32_t* rcx_120 = *(rbx_25 + 0x18)
                        
                        if (rcx_120 != 0)
                            rax_205 = sub_141b28ce0(rcx_120)
                        
                        if (rcx_120 == 0 || rax_205.b == 0)
                            rax_205.b = 0
                        else
                            rax_205.b = 1
                    else
                        int64_t* rcx_119 = *rax_205
                        
                        if (rcx_119 == 0)
                            goto label_14241c1e1
                        
                        rax_205 = (*(*rcx_119 + 0x28))(rcx_119)
                        
                        if (rax_205.b == 0)
                            goto label_14241c1e1
                        
                        rax_205.b = 1
                    
                    if (rax_205.b != 0)
                        void* r14_16 = *(rbx_25 + 0x10)
                        zmm6 = zx.o(*(rbx_25 - 0x1c))
                        int32_t r12_7 = *(rbx_25 - 0x14)
                        var_2d0 = *(rbx_25 + 8)
                        
                        if (r14_16 != 0)
                            *(r14_16 + 8) += 1
                        
                        void* rsi_18 = *(rbx_25 + 0x20)
                        i_21.q = *(rbx_25 + 0x18)
                        
                        if (rsi_18 != 0)
                            *(rsi_18 + 8) += 1
                        
                        zmm3[1] = zmm6.q
                        __builtin_memset(&var_2c8, 0, 0x20)
                        int32_t var_260_1 = r12_7
                        sub_140e53610(&var_2c8)
                        int64_t r15_9 = sx.q(data_143f5d858)
                        int32_t rax_208 = (r15_9 + 1).d
                        bool cond:25_1 = rax_208 s<= data_143f5d85c
                        data_143f5d858 = rax_208
                        
                        if (not(cond:25_1))
                            sub_1411ec700(&data_143f5d850)
                        
                        char** rcx_124 = r15_9 * 0x30 + data_143f5d850
                        __builtin_memset(&var_280, 0, 0x18)
                        var_288 = nullptr
                        *rcx_124 = var_2d0
                        rcx_124[1] = r14_16
                        rcx_124[2] = i_21.q
                        rcx_124[3] = rsi_18
                        rcx_124[4] = zmm6.q
                        rcx_124[5].d = r12_7
                        sub_140e53610(&var_288)
                    
                    r13_6 += 0x48
                    rbx_25 += 0x48
                while (r13_6 != rax_191)
                
                rdi_2 = var_2d8
                r15_4 = var_230_1
            
            if ((*(r15_4 + 0x134) & 1) != 0)
                r15_3 = var_254 - 1
                sub_14241e740(&data_143f5d880, 0)
                sub_14241e620(&data_143f5d898, 0)
                rax_218 = arg2
                break
            
            int32_t i_22 = data_143f5d888
            int32_t r14_17 = 0
            
            if (i_22 s> 0)
                int64_t* rsi_19 = nullptr
                
                do
                    int64_t rcx_126 = data_143f5d880
                    var_288 = *(rsi_19 + rcx_126)
                    var_280[0] = *(rsi_19 + rcx_126 + 8)
                    void* rax_213 = *(rsi_19 + rcx_126 + 0x10)
                    var_280[1] = rax_213
                    
                    if (rax_213 != 0)
                        *(rax_213 + 8) += 1
                    
                    sub_14240da20(r13, &var_298, &var_288)
                    int64_t rax_214 = sx.q(var_298)
                    void* const rax_216
                    
                    if (rax_214.d == 0xffffffff)
                        rax_216 = nullptr
                    else
                        rax_216 = rax_214 * 0xf0 + *r13
                    
                    void* rcx_128 = rax_216 + 0x18
                    
                    if (rax_216 == 0)
                        rcx_128 = nullptr
                    
                    if (rcx_128 != 0)
                        *(rcx_128 + 0x1c) |= 4
                    
                    sub_140d430a0(&var_288)
                    i_22 = data_143f5d888
                    r14_17 += 1
                    rsi_19 = &rsi_19[3]
                while (r14_17 s< i_22)
            
            if (data_143f5d88c s< 0)
                sub_14240c810(&data_143f5d880, 0)
            else
                if (i_22 != 0)
                    void* rsi_21 = data_143f5d880 + 8
                    int32_t i_6
                    
                    do
                        sub_140597060(rsi_21)
                        rsi_21 += 0x18
                        i_6 = i_22
                        i_22 -= 1
                    while (i_6 != 1)
                
                data_143f5d888 = 0
            
            int32_t rax_217 = data_143f5d8a4
            int32_t i_23 = data_143f5d8a0
            
            if (rax_217 s< 0)
                if (i_23 != 0)
                    void* rbx_29 = data_143f5d898 + 0x70
                    int32_t i_7
                    
                    do
                        sub_140e53610(rbx_29 + 0x30)
                        sub_140e53610(rbx_29)
                        sub_140d430a0(rbx_29 - 0x28)
                        sub_141b84450(rbx_29 - 0x68)
                        rbx_29 += 0xc8
                        i_7 = i_23
                        i_23 -= 1
                    while (i_7 != 1)
                    rax_217 = data_143f5d8a4
                
                data_143f5d8a0 = 0
                
                if (rax_217 != 0)
                    sub_141a641d0(&data_143f5d898, 0)
            else
                if (i_23 != 0)
                    void* rbx_27 = data_143f5d898 + 0x70
                    int32_t i_8
                    
                    do
                        sub_140e53610(rbx_27 + 0x30)
                        sub_140e53610(rbx_27)
                        sub_140d430a0(rbx_27 - 0x28)
                        sub_141b84450(rbx_27 - 0x68)
                        rbx_27 += 0xc8
                        i_8 = i_23
                        i_23 -= 1
                    while (i_8 != 1)
                
                data_143f5d8a0 = 0
            
            r12 = arg1
        
        rax_218 = arg2
        r15_3 = var_254 - 1
        int64_t temp4_1 = var_198
        var_198 -= 1
        var_254 = r15_3
        
        if (temp4_1 - 1 s< 0)
            break
        
        rcx_25 = var_198

int64_t r9_8 = sx.q(r15_3)

if (r15_3 s>= 0)
    int64_t temp6_1
    
    do
        void* r8_25 = *(*rax_218 + (r9_8 << 3))
        
        if (r8_25 != 0)
            void* i_9 = *(r8_25 + 0xd0)
            
            for (void* rdx_69 = sx.q(*(r8_25 + 0xd8)) * 0x38 + i_9; i_9 != rdx_69; i_9 += 0x38)
                *(i_9 + 0x30) = 0
            
            void* i_10 = *(r8_25 + 0xe0)
            
            for (void* rcx_141 = (sx.q(*(r8_25 + 0xe8)) << 6) + i_10; i_10 != rcx_141; i_10 += 0x40)
                *(i_10 + 4) = 0
            
            void* rdx_70 = *(r8_25 + 0xf0)
            void* r8_26 = rdx_70 + sx.q(*(r8_25 + 0xf8)) * 0x48
            
            if (rdx_70 != r8_26)
                int64_t* rcx_143 = rdx_70 + 4
                
                do
                    rdx_70 += 0x48
                    *rcx_143 = data_143dbb1f8.q
                    rcx_143 = &rcx_143[9]
                    rcx_143[-8].d = data_143dbb200
                while (rdx_70 != r8_26)
        
        temp6_1 = r9_8
        r9_8 -= 1
        rax_218 = arg2
    while (temp6_1 - 1 s>= 0)

char var_2d6
sub_1423f8cf0(data_143f5d868, data_143f5d870, var_2d6)
void* rsi_22 = data_143f5d868
void* i_11 = sx.q(data_143f5d870) * 0xc8 + rsi_22

if (rsi_22 != i_11)
    void* rsi_23 = rsi_22 + 0x38
    
    do
        uint32_t rcx_145 = zx.d(*rsi_23)
        void* rax_223
        int64_t* rcx_149
        
        if (rcx_145 == 1)
            rcx_149 = *(rsi_23 - 0x30)
        label_14241c639:
            
            if (rcx_149[1].d == 0)
                rax_223.b = 0
            else
                int64_t* rcx_150 = *rcx_149
                
                if (rcx_150 == 0)
                    rax_223.b = 0
                else if ((*(*rcx_150 + 0x28))(rcx_150).b == 0)
                    rax_223.b = 0
                else
                    rax_223.b = 1
        else
            if (rcx_145 == 2)
                rcx_149 = *(rsi_23 - 0x20)
                goto label_14241c639
            
            if (rcx_145 != 3)
                rax_223.b = 0
            else
                rax_223 = sub_141b28ce0(*(rsi_23 - 0x10))
        
        if (rax_223.b == 0)
            int64_t* rax_228 = *(rsi_23 + 0x38)
            
            if (rax_228 != 0 && rax_228[1].d != 0)
                int64_t* rcx_152 = *rax_228
                
                if (rcx_152 == 0)
                    goto label_14241c6b2
                
                if ((*(*rcx_152 + 0x28))(rcx_152) != 0)
                    goto label_14241c6cc
                
                goto label_14241c6b2
            
        label_14241c6b2:
            int32_t* rcx_153 = *(rsi_23 + 0x48)
            char rax_231
            
            if (rcx_153 != 0)
                rax_231 = sub_141b28ce0(rcx_153)
            
            int64_t rax_238
            int64_t r9_9
            
            if (rcx_153 == 0 || rax_231 == 0)
                int64_t* rax_239 = *(rsi_23 + 0x68)
                
                if (rax_239 != 0 && rax_239[1].d != 0)
                    int64_t* rcx_161 = *rax_239
                    
                    if (rcx_161 == 0)
                        goto label_14241c7a2
                    
                    if ((*(*rcx_161 + 0x28))(rcx_161) != 0)
                        goto label_14241c7bc
                    
                    goto label_14241c7a2
                
            label_14241c7a2:
                int32_t* rcx_162 = *(rsi_23 + 0x78)
                
                if (rcx_162 != 0 && sub_141b28ce0(rcx_162) != 0)
                label_14241c7bc:
                    int64_t* rax_243 = *(rsi_23 + 0x68)
                    zmm6 = *(rsi_23 + 0x88)
                    
                    if (rax_243 == 0)
                        int32_t* rcx_166 = *(rsi_23 + 0x78)
                        
                        if (rcx_166 != 0 && sub_141b28ce0(rcx_166) != 0)
                            int32_t* rbx_32 = *(rsi_23 + 0x78)
                            var_298 = zmm6.d
                            int64_t* rax_249 = sub_140d3c6e0(rbx_32)
                            rax_238 = sub_140d1fd30(rax_249, *(rbx_32 + 8))
                            r9_9 = *rax_249
                            (*(r9_9 + 0x210))(rax_249, rax_238, &var_298, r9_9, var_2e8, var_2e0, 
                                var_2d8, var_2d0)
                    else if (rax_243[1].d != 0)
                        int64_t* rcx_163 = *rax_243
                        
                        if (rcx_163 != 0 && (*(*rcx_163 + 0x28))(rcx_163) != 0)
                            int64_t* rcx_164 = *(rsi_23 + 0x68)
                            
                            if (rcx_164[1].d == 0)
                                (*(*nullptr + 0x48))(0, zmm6)
                            else
                                int64_t* rcx_165 = *rcx_164
                                (*(*rcx_165 + 0x48))(rcx_165, zmm6)
            else
            label_14241c6cc:
                int64_t* rax_232 = *(rsi_23 + 0x38)
                zmm6 = zx.o(*(rsi_23 + 0x58))
                int32_t rbx_30 = *(rsi_23 + 0x60)
                int32_t r14_18 = *(rsi_23 + 0x64)
                
                if (rax_232 == 0)
                    int32_t* rcx_157 = *(rsi_23 + 0x48)
                    
                    if (rcx_157 != 0 && sub_141b28ce0(rcx_157) != 0)
                        int32_t* rdi_9 = *(rsi_23 + 0x48)
                        var_228.b = r14_18.b
                        var_228 = zmm6.q
                        int64_t* var_220
                        var_220:4.d = rbx_30
                        int64_t* rax_237 = sub_140d3c6e0(rdi_9)
                        rax_238 = sub_140d1fd30(rax_237, *(rdi_9 + 8))
                        r9_9 = *rax_237
                        (*(r9_9 + 0x210))(rax_237, rax_238, &var_228, r9_9, var_2e8, var_2e0, 
                            var_2d8, var_2d0)
                else if (rax_232[1].d != 0)
                    int64_t* rcx_154 = *rax_232
                    
                    if (rcx_154 != 0 && (*(*rcx_154 + 0x28))(rcx_154) != 0)
                        int64_t* rcx_155 = *(rsi_23 + 0x38)
                        int64_t* rcx_156
                        
                        if (rcx_155[1].d == 0)
                            rcx_156 = nullptr
                        else
                            rcx_156 = *rcx_155
                        
                        int64_t rax_235 = *rcx_156
                        var_248 = zmm6.q
                        int32_t var_240_3 = rbx_30
                        (*(rax_235 + 0x48))(rcx_156, zx.q(r14_18), &var_248)
        else
            var_2c8.q = *(rsi_23 + 0x10)
            int64_t var_2c0_6 = *(rsi_23 + 0x18)
            void* rax_227 = *(rsi_23 + 0x20)
            var_2b8.q = rax_227
            
            if (rax_227 != 0)
                *(rax_227 + 8) += 1
            
            sub_14240ca60(rsi_23 - 0x30, &var_2c8)
        
        rsi_23 += 0xc8
    while (rsi_23 - 0x38 != i_11)

int64_t* i_12 = data_143f5d838

for (void* r14_19 = &i_12[sx.q(data_143f5d840) * 5]; i_12 != r14_19; i_12 = &i_12[5])
    int64_t* rax_251 = *i_12
    
    if (rax_251 != 0 && rax_251[1].d != 0)
        int64_t* rcx_170 = *rax_251
        
        if (rcx_170 == 0)
            goto label_14241c8b7
        
        if ((*(*rcx_170 + 0x28))(rcx_170) != 0)
            goto label_14241c8d1
        
        goto label_14241c8b7
    
label_14241c8b7:
    int32_t* rcx_171 = i_12[2]
    
    if (rcx_171 != 0 && sub_141b28ce0(rcx_171) != 0)
    label_14241c8d1:
        int64_t* rax_255 = *i_12
        zmm6 = i_12[4].d
        
        if (rax_255 == 0)
            int32_t* rcx_175 = i_12[2]
            
            if (rcx_175 != 0 && sub_141b28ce0(rcx_175) != 0)
                int32_t* rbx_33 = i_12[2]
                var_298 = zmm6.d
                int64_t* rax_261 = sub_140d3c6e0(rbx_33)
                int64_t rax_262 = sub_140d1fd30(rax_261, *(rbx_33 + 8))
                int64_t r9_10 = *rax_261
                (*(r9_10 + 0x210))(rax_261, rax_262, &var_298, r9_10, var_2e8, var_2e0, var_2d8, 
                    var_2d0)
        else if (rax_255[1].d != 0)
            int64_t* rcx_172 = *rax_255
            
            if (rcx_172 != 0 && (*(*rcx_172 + 0x28))(rcx_172) != 0)
                int64_t* rcx_173 = *i_12
                
                if (rcx_173[1].d == 0)
                    (*(*nullptr + 0x48))(0, zmm6)
                else
                    int64_t* rcx_174 = *rcx_173
                    (*(*rcx_174 + 0x48))(rcx_174, zmm6)

int64_t* i_13 = data_143f5d850

for (void* r14_22 = &i_13[sx.q(data_143f5d858) * 6]; i_13 != r14_22; i_13 = &i_13[6])
    int64_t* rax_264 = *i_13
    
    if (rax_264 != 0 && rax_264[1].d != 0)
        int64_t* rcx_179 = *rax_264
        
        if (rcx_179 == 0)
            goto label_14241c9c0
        
        if ((*(*rcx_179 + 0x28))(rcx_179) != 0)
            goto label_14241c9da
        
        goto label_14241c9c0
    
label_14241c9c0:
    int32_t* rcx_180 = i_13[2]
    
    if (rcx_180 != 0 && sub_141b28ce0(rcx_180) != 0)
    label_14241c9da:
        int64_t* rax_268 = *i_13
        zmm6 = zx.o(i_13[4])
        int32_t rdi_12 = i_13[5].d
        
        if (rax_268 == 0)
            int32_t* rcx_184 = i_13[2]
            
            if (rcx_184 != 0 && sub_141b28ce0(rcx_184) != 0)
                int32_t* rbx_34 = i_13[2]
                var_1f8 = zmm6.q
                int32_t var_1f0_2 = rdi_12
                int64_t* rax_273 = sub_140d3c6e0(rbx_34)
                int64_t rax_274 = sub_140d1fd30(rax_273, *(rbx_34 + 8))
                int64_t r9_11 = *rax_273
                (*(r9_11 + 0x210))(rax_273, rax_274, &var_1f8, r9_11, var_2e8, var_2e0, var_2d8, 
                    var_2d0)
        else if (rax_268[1].d != 0)
            int64_t* rcx_181 = *rax_268
            
            if (rcx_181 != 0 && (*(*rcx_181 + 0x28))(rcx_181) != 0)
                int64_t* rcx_182 = *i_13
                int64_t* rcx_183
                
                if (rcx_182[1].d == 0)
                    rcx_183 = nullptr
                else
                    rcx_183 = *rcx_182
                
                int64_t rax_271 = *rcx_183
                var_248 = zmm6.q
                int32_t var_240_4 = rdi_12
                (*(rax_271 + 0x48))(rcx_183, &var_248)

(*(*rcx_1 + 0xaa0))(rcx_1, arg3, zx.q(arg4))
var_2c8 = 0
int32_t var_2c4_2 = 1
void* var_2c0_7 = r13 + 0x10
int32_t var_2b8_1 = 0xffffffff
int64_t var_2b4_1 = 0

if (*(r13 + 0x28) != 0)
    sub_14059bdd0(&var_2c8)

uint128_t zmm4_1 = var_2b8_1.o
void* var_2a0_1 = r13
double zmm0_1[0x2] = var_2c8.o
var_288 = r13
uint128_t var_270_1 = zmm4_1
int16_t var_1b0_1 = 0
double rax_277 = zmm0_1[0]
var_1e8 = var_288.o
var_2a8[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
double var_1c8_1[0x2] = var_2a8

if ((zmm4_1.q u>> 0x20).d s< *(rax_277 i+ 0x18))
    int32_t i_14 = zmm0_1[1]:4.d
    
    do
        int64_t r8_33 = sx.q(i_14) * 0xf0
        int64_t rdx_82 = *var_1e8.q
        char rax_280 = *(r8_33 + rdx_82 + 0x34)
        int32_t rax_282 = not.d(var_1e8:0xc.d)
        *(r8_33 + rdx_82 + 0x34) = ((rax_280 & 1) * 2) | (rax_280 & 0xf9)
        zmm0_1[1].d &= rax_282
        sub_14059bdd0(&var_1e8:8)
        i_14 = zmm0_1[1]:4.d
    while (i_14 s< *(zmm0_1[0] i+ 0x18))
    
    if (var_1b0_1.b != 0 && var_1b0_1:1.b != 0)
        sub_141c9a080(r13, *(r13 + 8) - *(r13 + 0x34), 1)

int32_t rax_284 = data_143f5d844
int32_t i_24 = data_143f5d840
void* rbx_36 = data_143f5d838

if (rax_284 s< 0)
    if (i_24 != 0)
        int32_t i_15
        
        do
            sub_140e53610(rbx_36)
            rbx_36 += 0x28
            i_15 = i_24
            i_24 -= 1
        while (i_15 != 1)
        rax_284 = data_143f5d844
    
    data_143f5d840 = 0
    
    if (rax_284 != 0)
        sub_1411050d0(&data_143f5d838, 0)
else
    if (i_24 != 0)
        int32_t i_16
        
        do
            sub_140e53610(rbx_36)
            rbx_36 += 0x28
            i_16 = i_24
            i_24 -= 1
        while (i_16 != 1)
    
    data_143f5d840 = 0

int32_t rax_285 = data_143f5d85c
int32_t i_25 = data_143f5d858
void* rbx_37 = data_143f5d850

if (rax_285 s< 0)
    if (i_25 != 0)
        int32_t i_17
        
        do
            sub_140e53610(rbx_37)
            rbx_37 += 0x30
            i_17 = i_25
            i_25 -= 1
        while (i_17 != 1)
        rax_285 = data_143f5d85c
    
    data_143f5d858 = 0
    
    if (rax_285 != 0)
        sub_14241ec70(&data_143f5d850, 0)
else
    if (i_25 != 0)
        int32_t i_18
        
        do
            sub_140e53610(rbx_37)
            rbx_37 += 0x30
            i_18 = i_25
            i_25 -= 1
        while (i_18 != 1)
    
    data_143f5d858 = 0

sub_14241e620(&data_143f5d868, 0)
sub_1408d84f0(&arg1[0x16])
int32_t result = data_143f5d8bc
int32_t i_26 = data_143f5d8b8
void* rbx_38 = data_143f5d8b0

if (result s>= 0)
    if (i_26 != 0)
        int32_t i_19
        
        do
            result = sub_140d430a0(rbx_38)
            rbx_38 += 0x20
            i_19 = i_26
            i_26 -= 1
        while (i_19 != 1)
    
    data_143f5d8b8 = 0
    return result

if (i_26 != 0)
    int32_t i_20
    
    do
        sub_140d430a0(rbx_38)
        rbx_38 += 0x20
        i_20 = i_26
        i_26 -= 1
    while (i_20 != 1)
    result = data_143f5d8bc

data_143f5d8b8 = 0

if (result == 0)
    return result

return sub_1405a51b0(&data_143f5d8b0, 0)
