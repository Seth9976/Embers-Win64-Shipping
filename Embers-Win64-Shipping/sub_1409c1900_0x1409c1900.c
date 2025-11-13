// 函数: sub_1409c1900
// 地址: 0x1409c1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
void* arg_18
sub_14090aa40(*(arg1 + 0x28) + 0x2b0, &arg_18, data_143f36130)
void* arg_20
sub_14090aa40(*(rsi + 0x28) + 0x2b0, &arg_20, data_143f36138)
void* var_1b8
sub_14090aa40(*(rsi + 0x28) + 0x2b0, &var_1b8, data_143f36140)
void* r13 = rsi + 0x3d8
int32_t* i_7
double zmm8[0x2] = sub_1409c1000(rsi, sub_1409afea0(r13, &i_7))
int32_t* i_9 = i_7

if (i_9 != 0)
    sub_140a74f90(i_9)

TEB* gsbase
void* rax_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ceec34 s> *(rax_2 + 0x14))
    _Init_thread_header(&data_143ceec34)
    
    if (data_143ceec34 == 0xffffffff)
        atexit(sub_142cba240)
        _Init_thread_footer(&data_143ceec34)

if (data_143991038 != data_143991064)
    int32_t rax_5 = data_14399103c
    data_143991038 = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_140638cc0(&data_143991030, 0)
    
    data_143991060 = 0xffffffff
    data_143991064 = 0
    sub_140774790(&data_143991040)
    int64_t rcx_9 = sx.q(data_143991078)
    
    if (rcx_9 s> 0)
        void* rax_6 = data_143991070
        void* rdi_1 = &data_143991068
        
        if (rax_6 != 0)
            rdi_1 = rax_6
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_9 << 2)

int32_t r10 = *(r13 + 0x28)
i_7.d = 0
int32_t rcx_10 = 0
i_7:4.d = 1
int32_t rdi_2 = 0
void* var_1d0 = r13 + 0x10
int32_t var_1c8 = 0xffffffff
int64_t var_1c4 = 0

if (r10 != 0)
    void* rax_7 = *(r13 + 0x20)
    void* r8_3 = r13 + 0x10
    
    if (rax_7 != 0)
        r8_3 = rax_7
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_7 = *r8_3
    
    if (rdx_7 != 0)
    label_1409c1b17:
        int32_t rax_14 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
        i_7:4.d = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_2
        
        var_1c4.d = rdi_2 - rax_15 + 0x1f
        
        if (rdi_2 - rax_15 + 0x1f s> r10)
            var_1c4.d = r10
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_10)
            rdi_2 += 0x20
            rcx_10 += 1
            var_1c4:4.d = rdi_2
            i_7.d = rcx_10
            
            if (rdx_8.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r8_3 + (rdx_8 << 2) + 4)
            var_1c8 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1409c1b17
        
        var_1c4.d = r10

int32_t rdx_9 = *(r13 + 0x28)
double zmm2[0x2] = var_1c8.o
double var_130[0x2] = zmm2
int32_t rbx = 0xffffffff << (rdx_9.b & 0x1f)
int128_t var_140 = i_7.o
int32_t rdi_5 = rdx_9 s>> 5
int32_t r8_5 = rdx_9 & 0xffffffe0
int64_t var_150 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_1c8_1 = rbx
var_1c4.d = rdx_9
int128_t var_170 = r13.o
int128_t var_160 = var_140

if (rdx_9 != r10)
    void* rax_17 = *(r13 + 0x20)
    void* r9_1 = r13 + 0x10
    
    if (rax_17 != 0)
        r9_1 = rax_17
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_13 = *(r9_1 + (sx.q(rdi_5) << 2)) & rbx
    
    if (rdx_13 != 0)
    label_1409c1be0:
        int32_t rax_24 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_4
        
        var_1c4.d = r8_5 - rax_25 + 0x1f
        
        if (r8_5 - rax_25 + 0x1f s> r10)
            var_1c4.d = r10
    else
        while (true)
            int64_t rcx_15 = sx.q(rdi_5)
            r8_5 += 0x20
            rdi_5 += 1
            
            if (rcx_15.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r9_1 + (rcx_15 << 2) + 4)
            var_1c8_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1409c1be0
        
        var_1c4.d = r10

while (true)
    int64_t rax_27 = sx.q(var_160:0xc.d)
    int64_t* rdx_14 = var_170.q
    int32_t arg_10
    
    if (rax_27.d == (var_1c8_1.q u>> 0x20).d && var_160.q == r13 + 0x10 && rdx_14 == r13)
        if (data_143ceec48 s> *(rax_2 + 0x14))
            _Init_thread_header(&data_143ceec48)
            
            if (data_143ceec48 == 0xffffffff)
                atexit(sub_142cb7d00)
                _Init_thread_footer(&data_143ceec48)
        
        int32_t rsi_3 = data_143991038 - data_143991064
        int32_t rax_41 = data_143ceec44
        int32_t i_5 = data_143ceec40
        
        if (rsi_3 s> rax_41)
            if (i_5 != 0)
                int64_t* rdi_14 = data_143ceec38 + 8
                int32_t i
                
                do
                    int64_t rcx_27 = *rdi_14
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    rdi_14 = &rdi_14[3]
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                rax_41 = data_143ceec44
            
            data_143ceec40 = 0
            
            if (rax_41 != rsi_3)
                sub_1405a5130(&data_143ceec38, rsi_3)
        else
            if (i_5 != 0)
                int64_t* rdi_12 = data_143ceec38 + 8
                int32_t i_1
                
                do
                    int64_t rcx_26 = *rdi_12
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    rdi_12 = &rdi_12[3]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            data_143ceec40 = 0
        
        int32_t r10_1 = data_143991058
        void* r8_8 = &data_143991040
        void* var_1d0_1 = &data_143991040
        int32_t rcx_28 = 0
        i_7.d = 0
        int32_t var_1c8_2 = 0xffffffff
        int32_t rdi_15 = 0
        i_7:4.d = 1
        int64_t var_1c4_1 = 0
        int32_t var_178 = r10_1
        
        if (r10_1 != 0)
            void* rax_42 = data_143991050
            
            if (rax_42 != 0)
                r8_8 = rax_42
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r10_1 - 1)
            int32_t rdx_22 = *r8_8
            
            if (rdx_22 != 0)
            label_1409c1e67:
                int32_t rax_49 = ((rdx_22 - 1) & rdx_22) ^ rdx_22
                uint64_t rflags_5
                int32_t temp0_7
                temp0_7, rflags_5 = _bit_scan_reverse(rax_49)
                i_7:4.d = rax_49
                int32_t r14_1
                
                if (rax_49 == 0)
                    r14_1 = 0x20
                else
                    r14_1 = 0x1f - temp0_7
                
                int32_t rax_50 = rdi_15 - r14_1 + 0x1f
                
                if (rax_50 s> r10_1)
                    rax_50 = r10_1
                
                var_1c4_1.d = rax_50
            else
                while (true)
                    int64_t rdx_23 = sx.q(rcx_28)
                    rdi_15 += 0x20
                    rcx_28 += 1
                    var_1c4_1:4.d = rdi_15
                    i_7.d = rcx_28
                    
                    if (rdx_23.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        var_1c4_1.d = r10_1
                        break
                    
                    rdx_22 = *(r8_8 + (rdx_23 << 2) + 4)
                    var_1c8_2 = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_1409c1e67
        
        void* r15_1 = var_1b8
        zmm2 = var_1c8_2.o
        void* r13_1 = arg_18
        void* r14_2 = arg_20
        int128_t var_140_1 = i_7.o
        void* var_f0 = r15_1
        double var_130_1[0x2] = zmm2
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_170 = (&data_143991030).o
        int128_t var_160_1 = var_140_1
        int64_t var_150_1 = zmm2.q
        double var_78[0x2] = zmm8
        
        while (true)
            int64_t rax_51 = sx.q(var_160_1:0xc.d)
            int64_t* rdx_24 = var_170.q
            
            if (rax_51.d == r10_1 && var_160_1.q == &data_143991040 && rdx_24 == &data_143991030)
                return sub_1409de410(arg1, &data_143ceec38) __tailcall
            
            double zmm13_1[0x2] = data_143dbb1fc
            double zmm14_1[0x2] = data_143dbb200
            double zmm12_1[0x2] = data_143dbb1f8
            double zmm10_1[0x2] = zmm12_1
            double zmm9_1[0x2] = zmm13_1
            arg_18.d = zmm13_1[0].d
            double zmm11_1[0x2] = zmm14_1
            arg_20.d = zmm14_1[0].d
            float zmm15_1 = zmm12_1[0].d
            void* rax_52 = *(arg1 + 0x28)
            int64_t rsi_4 = sx.q(*(*rdx_24 + rax_51 * 0xc))
            arg_10 = rsi_4.d
            int64_t rdi_17 = rsi_4 * 3
            int32_t rbx_3 = *(*(rax_52 + 0x38) + (rdi_17 << 3))
            
            if (data_143ceec60 s> *(rax_2 + 0x14))
                _Init_thread_header(&data_143ceec60)
                
                if (data_143ceec60 == 0xffffffff)
                    atexit(sub_142cb7a00)
                    _Init_thread_footer(&data_143ceec60)
            
            void* r12_3 = *(arg1 + 0x28)
            int32_t* i_6 = nullptr
            int32_t* i_4 = nullptr
            i_7 = nullptr
            int64_t rax_55 = *(r12_3 + 0x38)
            var_1d0_1:4.d = 0
            int32_t rdx_26 = *(rax_55 + (rdi_17 << 3) + 0x10)
            int32_t r12_4
            
            if (rdx_26 s> 0)
                var_1d0_1.d = 0
                sub_1405dadb0(&i_7, rdx_26)
                i_6 = i_7
                rax_55 = *(r12_3 + 0x38)
                r12_4 = var_1d0_1.d
                i_4 = i_6
            else
                r12_4 = 0
            
            int32_t* r8_9 = *(rax_55 + (rdi_17 << 3) + 8)
            void* r9_2 = nullptr
            int64_t rax_56 = sx.q(*(rax_55 + (rdi_17 << 3) + 0x10))
            int32_t* var_f8_1 = r8_9
            var_1b8 = nullptr
            uint64_t rcx_34 = rax_56 << 2 u>> 2
            
            if (r8_9 u> &r8_9[rax_56])
                rcx_34 = 0
            
            if (rcx_34 != 0)
                do
                    int32_t* i_8 = i_6
                    int64_t r10_2 = *(r12_3 + 0xa8)
                    int64_t rdi_19 = sx.q(*r8_9) << 4
                    void* rdx_27 = &i_6[sx.q(r12_4)]
                    
                    if (i_6 != rdx_27)
                        while (*i_8 != *(rdi_19 + r10_2 + 0xc))
                            i_8 = &i_8[1]
                            
                            if (i_8 == rdx_27)
                                goto label_1409c207b
                    
                    if (i_6 == rdx_27 || ((i_8 - i_6) s>> 2).d == 0xffffffff)
                    label_1409c207b:
                        int64_t rdi_20 = sx.q(r12_4)
                        r12_4 = (rdi_20 + 1).d
                        var_1d0_1.d = r12_4
                        
                        if (r12_4 s> var_1d0_1:4.d)
                            sub_1405a4cf0(&i_7)
                            i_6 = i_7
                            r8_9 = var_f8_1
                            r9_2 = var_1b8
                            r12_4 = var_1d0_1.d
                        
                        i_6[rdi_20] = *(rdi_19 + r10_2 + 0xc)
                    
                    r8_9 = &r8_9[1]
                    r9_2 += 1
                    var_f8_1 = r8_9
                    var_1b8 = r9_2
                while (r9_2 != rcx_34)
                
                rsi_4 = zx.q(arg_10)
                r15_1 = var_f0
                i_4 = i_6
            
            int32_t rdi_21 = *i_6
            
            if (data_143cedec0 s> *(rax_2 + 0x14))
                _Init_thread_header(&data_143cedec0)
                
                if (data_143cedec0 == 0xffffffff)
                    data_143cedeb0 = 0
                    data_143cedeb8 = 0
                    atexit(sub_142cb8100)
                    _Init_thread_footer(&data_143cedec0)
            
            sub_1409c46d0(arg1, rbx_3, &data_143cedeb0)
            
            if (data_143ceded8 s> *(rax_2 + 0x14))
                _Init_thread_header(&data_143ceded8)
                
                if (data_143ceded8 == 0xffffffff)
                    data_143cedec8 = 0
                    data_143ceded0 = 0
                    atexit(sub_142cb8140)
                    _Init_thread_footer(&data_143ceded8)
            
            sub_1409c29c0(arg1, rbx_3, &data_143cedec8)
            sub_1409c3ea0(arg1, rdi_21, &data_143cedeb0, &data_143cedec8, &data_143ceec50)
            int32_t* rdx_32 = data_143ceec50
            int64_t rax_65 = sx.q(data_143ceec58)
            var_1b8 = nullptr
            void* rcx_42 = &rdx_32[rax_65]
            uint64_t rax_69 = (rcx_42 - rdx_32 + 3) u>> 2
            
            if (rdx_32 u> rcx_42)
                rax_69 = 0
            
            double zmm0_1[0x2]
            double zmm6_1[0x2]
            double zmm7_1[0x2]
            
            if (rax_69 != 0)
                int32_t* rsi_6 = rdx_32
                void* rax_76
                
                do
                    int64_t rdi_22 = sx.q(*rsi_6)
                    zmm0_1, zmm6_1, zmm7_1, zmm9_1, zmm10_1, zmm11_1 =
                        sub_141cde150(*(arg1 + 0x28), rdi_22.d, rbx_3)
                    int64_t rdx_34 = rdi_22 * 3
                    int64_t rcx_45 = **(r13_1 + 0x18)
                    int32_t* i_2 = i_4
                    zmm0_1[0].d = zmm0_1[0].d f* *(rcx_45 + (rdx_34 << 2))
                    zmm0_1[0].d = zmm0_1[0].d f* *(rcx_45 + (rdx_34 << 2) + 4)
                    zmm12_1[0].d = zmm12_1[0].d f+ zmm0_1[0].d
                    zmm0_1[0].d = zmm0_1[0].d f* *(rcx_45 + (rdx_34 << 2) + 8)
                    zmm13_1[0].d = zmm13_1[0].d f+ zmm0_1[0].d
                    zmm14_1[0].d = zmm14_1[0].d f+ zmm0_1[0].d
                    
                    for (; i_2 != &i_4[sx.q(r12_4)]; i_2 = &i_2[1])
                        if (*i_2 == rdi_22.d)
                            int64_t rcx_46 = **(r14_2 + 0x18)
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_46 + (rdx_34 << 2))
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_46 + (rdx_34 << 2) + 4)
                            zmm10_1[0].d = zmm10_1[0].d f+ zmm0_1[0].d
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_46 + (rdx_34 << 2) + 8)
                            int64_t rcx_47 = **(r15_1 + 0x18)
                            zmm9_1[0].d = zmm9_1[0].d f+ zmm0_1[0].d
                            zmm11_1[0].d = zmm11_1[0].d f+ zmm0_1[0].d
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_47 + (rdx_34 << 2))
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_47 + (rdx_34 << 2) + 4)
                            zmm0_1[0].d = zmm0_1[0].d f* *(rcx_47 + (rdx_34 << 2) + 8)
                            zmm15_1 = zmm15_1 f+ zmm0_1[0].d
                            zmm6_1[0].d = zmm6_1[0].d f+ zmm0_1[0].d
                            zmm7_1[0].d = zmm7_1[0].d f+ zmm0_1[0].d
                            break
                    
                    rsi_6 = &rsi_6[1]
                    rax_76 = var_1b8 + 1
                    var_1b8 = rax_76
                while (rax_76 != rax_69)
                rsi_4 = zx.q(arg_10)
                arg_20.d = zmm7_1[0].d
                arg_18.d = zmm6_1[0].d
            
            double zmm3_1[0x2] = 0x3f800000
            zmm6_1 = data_143dbb200
            zmm7_1 = data_143dbb1fc
            zmm8 = data_143dbb1f8
            float zmm4_1 = 9.99999994e-09f
            zmm13_1[0].d = zmm13_1[0].d f* zmm13_1[0].d
            zmm12_1[0].d = zmm12_1[0].d f* zmm12_1[0].d
            zmm14_1[0].d = zmm14_1[0].d f* zmm14_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f+ zmm12_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f+ zmm14_1[0].d
            
            if (zmm13_1[0].d f== 1f)
                goto label_1409c23b5
            
            int32_t var_1b0_1
            int32_t var_1a8_1
            double zmm5_1[0x2]
            
            if (zmm13_1[0].d f>= 9.99999994e-09f)
                zmm3_1 = zx.o(0)
                zmm2 = 0x3f000000
                zmm3_1[0].d = zmm13_1[0].d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1[0].d, zmm3_1[0].d)
                zmm3_1[0].d = zmm3_1[0].d f* 0.5f
                zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                zmm2[0].d = 0.5f f- zmm3_1[0].d
                zmm5_1[0].d = zmm5_1[0].d f* zmm2[0].d
                zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                zmm4_1 = 0.5f f- zmm3_1[0].d
                zmm3_1 = 0x3f800000
                zmm5_1[0].d = zmm5_1[0].d f* zmm4_1
                zmm4_1 = 9.99999994e-09f
                zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                arg_10 = zmm5_1[0].d
                zmm12_1[0].d = zmm12_1[0].d f* zmm5_1[0].d
                zmm13_1[0].d = zmm13_1[0].d f* zmm5_1[0].d
                zmm14_1[0].d = zmm14_1[0].d f* zmm5_1[0].d
            label_1409c23b5:
                var_1a8_1 = zmm14_1[0].d
                int32_t var_1ac_2 = zmm13_1[0].d
                var_1b0_1 = zmm12_1[0].d
            else
                var_1b0_1 = zmm8[0].d
                zmm12_1 = zmm8
                int32_t var_1ac_1 = zmm7_1[0].d
                zmm13_1 = zmm7_1
                var_1a8_1 = zmm6_1[0].d
                zmm14_1 = zmm6_1
            
            zmm13_1[0].d = zmm13_1[0].d f* zmm9_1[0].d
            zmm12_1[0].d = zmm12_1[0].d f* zmm10_1[0].d
            zmm14_1[0].d = zmm14_1[0].d f* zmm11_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f+ zmm12_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f+ zmm14_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f* zmm12_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f- zmm13_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f* zmm14_1[0].d
            zmm13_1[0].d = zmm13_1[0].d f* zmm13_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f- zmm13_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f- zmm13_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm10_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm11_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm9_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f+ zmm10_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f+ zmm11_1[0].d
            
            if (zmm9_1[0].d f== zmm3_1[0].d)
                goto label_1409c24dc
            
            int32_t var_1a4_1
            int32_t var_19c_1
            
            if (zmm9_1[0].d f>= zmm4_1)
                zmm3_1 = zx.o(0)
                zmm2 = 0x3f000000
                zmm3_1[0].d = zmm9_1[0].d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1[0].d, zmm3_1[0].d)
                zmm3_1[0].d = zmm3_1[0].d f* 0.5f
                zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                zmm2[0].d = 0.5f f- zmm3_1[0].d
                zmm5_1[0].d = zmm5_1[0].d f* zmm2[0].d
                zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                zmm4_1 = 0.5f f- zmm3_1[0].d
                zmm3_1 = 0x3f800000
                zmm5_1[0].d = zmm5_1[0].d f* zmm4_1
                zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                arg_10 = zmm5_1[0].d
                zmm10_1[0].d = zmm10_1[0].d f* zmm5_1[0].d
                zmm9_1[0].d = zmm9_1[0].d f* zmm5_1[0].d
                zmm11_1[0].d = zmm11_1[0].d f* zmm5_1[0].d
            label_1409c24dc:
                var_19c_1 = zmm11_1[0].d
                int32_t var_1a0_2 = zmm9_1[0].d
                var_1a4_1 = zmm10_1[0].d
            else
                var_1a4_1 = zmm8[0].d
                zmm10_1 = zmm8
                int32_t var_1a0_1 = zmm7_1[0].d
                zmm9_1 = zmm7_1
                var_19c_1 = zmm6_1[0].d
                zmm11_1 = zmm6_1
            
            zmm9_1[0].d = zmm9_1[0].d f* zmm14_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm13_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm12_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f- zmm9_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm12_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm13_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm14_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm15_1
            zmm9_1[0].d = zmm9_1[0].d f- zmm10_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f- zmm11_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* arg_20.d
            zmm10_1[0].d = zmm10_1[0].d f* arg_18.d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm10_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm9_1[0].d
            
            if (zmm11_1[0].d f>= 0f)
                zmm6_1 = zmm3_1
            else
                zmm6_1 = 0xbf800000
            
            int64_t rdi_23 = sx.q(data_143ceec40)
            int32_t rax_77 = (rdi_23 + 1).d
            bool cond:8_1 = rax_77 s<= data_143ceec44
            data_143ceec40 = rax_77
            
            if (not(cond:8_1))
                sub_1405a4df0(&data_143ceec38)
            
            int64_t rax_78 = data_143ceec38
            int64_t rcx_48 = rdi_23 * 3
            *(rax_78 + (rcx_48 << 3)) = 0
            *(rax_78 + (rcx_48 << 3) + 8) = 0
            *(rax_78 + (rcx_48 << 3) + 0x10) = 0
            int64_t rax_81 = data_143ceec38
            int64_t rdx_36 = sx.q(data_143ceec40 - 1) * 3
            *(rax_81 + (rdx_36 << 3)) = rsi_4.d
            int64_t* rdi_25 = rax_81 + 8 + (rdx_36 << 3)
            rdi_25[1].d = 0
            
            if (*(rdi_25 + 0xc) s<= 2)
                sub_14090a730(rdi_25, 3)
            
            int64_t rbx_4 = sx.q(rdi_25[1].d)
            zmm7_1 = data_142d3f660
            int32_t var_120_1 = var_1a8_1
            int32_t rax_83 = (rbx_4 + 1).d
            int64_t* var_148_1
            var_148_1.b = 2
            var_130_1[1] = var_1b0_1.q
            int64_t var_108_1 = 0
            rdi_25[1].d = rax_83
            
            if (rax_83 s> *(rdi_25 + 0xc))
                sub_14090a6a0(rdi_25)
            
            int64_t rax_84 = data_143f360f8
            zmm0_1 = var_148_1.o
            int64_t* rcx_54 = rbx_4 * 0x60 + *rdi_25
            var_148_1.b = 2
            *(rcx_54 + 0x10) = zmm0_1
            *rcx_54 = rax_84
            *(rcx_54 + 0x20) = zmm7_1
            rcx_54[1].d = 0
            zmm7_1 = data_142d3f660
            *(rcx_54 + 0x30) = var_130_1
            int32_t var_120_2 = var_19c_1
            double var_118[0x2]
            *(rcx_54 + 0x40) = var_118
            int64_t var_108_2 = 0
            *(rcx_54 + 0x50) = var_108_1.o
            int64_t rbx_5 = sx.q(rdi_25[1].d)
            var_130_1[1] = var_1a4_1.q
            int32_t rax_86 = (rbx_5 + 1).d
            rdi_25[1].d = rax_86
            
            if (rax_86 s> *(rdi_25 + 0xc))
                sub_14090a6a0(rdi_25)
            
            int64_t rax_87 = data_143f36100
            zmm0_1 = var_148_1.o
            int64_t* rcx_58 = rbx_5 * 0x60 + *rdi_25
            var_118[0]:4.d = zmm6_1[0].d
            var_148_1.b = 4
            *(rcx_58 + 0x10) = zmm0_1
            *rcx_58 = rax_87
            *(rcx_58 + 0x20) = zmm7_1
            rcx_58[1].d = 0
            zmm7_1 = data_142d3f660
            *(rcx_58 + 0x30) = var_130_1
            *(rcx_58 + 0x40) = var_118
            int64_t var_108_3 = 0
            *(rcx_58 + 0x50) = var_108_2.o
            int64_t rbx_6 = sx.q(rdi_25[1].d)
            int32_t rax_88 = (rbx_6 + 1).d
            rdi_25[1].d = rax_88
            
            if (rax_88 s> *(rdi_25 + 0xc))
                sub_14090a6a0(rdi_25)
            
            int64_t rax_89 = data_143f36108
            int64_t* rdx_42 = rbx_6 * 0x60 + *rdi_25
            *(rdx_42 + 0x10) = var_148_1.o
            *rdx_42 = rax_89
            *(rdx_42 + 0x20) = zmm7_1
            rdx_42[1].d = 0
            *(rdx_42 + 0x30) = var_130_1
            *(rdx_42 + 0x40) = var_118
            *(rdx_42 + 0x50) = var_108_3.o
            sub_140a74f90(i_4)
            var_160_1:8.d &= not.d(var_170:0xc.d)
            sub_14059bdd0(&var_170:8)
            r10_1 = var_178
    
    int64_t rbx_1 = sx.q(*(*rdx_14 + rax_27 * 0xc)) * 5
    int64_t rsi_1 = *(*(rsi + 0x28) + 0xe0)
    int32_t rax_30 = data_143991038
    int32_t rdi_8 = *(rsi_1 + (rbx_1 << 3) + 8) - data_143991064 + rax_30
    
    if (rdi_8 s> rax_30 - data_143991064)
        sub_1407c2fa0(&data_143991030, rdi_8)
        int32_t rdx_17
        
        if (rdi_8 u< 4)
            rdx_17 = 1
        else
            uint32_t rdi_9 = rdi_8 u>> 1
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rdi_9 + 8)
            int32_t rcx_19
            
            if (rdi_9 == 0xfffffff8)
                rcx_19 = 0x20
            else
                rcx_19 = 0x1f - temp0_5
            
            int32_t rcx_21 = rcx_19 << 0x1a s>> 0x1f
            uint64_t rflags_4
            char temp0_6
            temp0_6, rflags_4 = _bit_scan_reverse(rdi_9 + 7)
            char rdx_16
            
            if (rcx_21 == 0)
                rdx_16 = 0x20
            else
                rdx_16 = 0x1f - temp0_6
            
            rdx_17 = 1 << ((not.d(rcx_21)).b & (0x20 - rdx_16))
        
        int32_t rax_36 = data_143991078
        
        if (rax_36 == 0 || rax_36 s< rdx_17)
            data_143991078 = rdx_17
            sub_140771f10(&data_143991030)
    
    int32_t* i_3 = *(rsi_1 + (rbx_1 << 3))
    
    for (void* rbx_2 = &i_3[sx.q(*(rsi_1 + (rbx_1 << 3) + 8))]; i_3 != rbx_2; i_3 = &i_3[1])
        sub_140998ff0(&data_143991030, &arg_10, i_3, nullptr)
    
    var_160:8.d &= not.d(var_170:0xc.d)
    sub_14059bdd0(&var_170:8)
    rsi = arg1
