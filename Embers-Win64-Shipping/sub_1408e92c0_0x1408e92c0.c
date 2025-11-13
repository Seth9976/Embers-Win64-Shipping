// 函数: sub_1408e92c0
// 地址: 0x1408e92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount = arg1
int64_t performanceCount_1 = arg1
int64_t* rsi = arg1 + 0x18
int32_t r11 = rsi[5].d
void* r9 = &rsi[2]
int32_t r15 = 0
int64_t* var_f8 = rsi
int32_t rcx = 0
int32_t var_130 = 0
int32_t r8 = 0
int32_t var_12c = 1
void* var_128 = r9
int32_t var_120 = 0xffffffff
int32_t var_11c = 0
int32_t var_118 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_11c_2
    
    if (rdx_3 != 0)
    label_1408e937b:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_12c_1 = rax_8
        int32_t var_58_1 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_11c_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_11c_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_118 = rcx
            var_130 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_120_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1408e937b
        
        var_11c_2 = r11

int64_t* var_138 = rsi
int128_t zmm0 = var_130.o
int128_t var_148 = 0xffffffff
int16_t var_a0 = 0
void* rax_11 = zmm0.q
int128_t var_c8 = zmm0
float var_d8[0x4] = rsi.o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_148 = zmm0
int128_t var_b8 = zmm0

if (_mm_bsrli_si128(0xffffffff, 4) s< *(rax_11 + 0x18))
    int32_t i = var_c8:0xc.d
    
    do
        uint64_t* rcx_5 = *(*var_d8[0].q + sx.q(i) * 0x18 + 8) + 8
        rcx_5[1].d = 0
        
        if (*(rcx_5 + 0xc) != 0)
            sub_1405dadb0(rcx_5, 0)
        
        var_c8:8.d &= not.d(var_d8[3])
        sub_14059bdd0(&var_d8[2])
        i = var_c8:0xc.d
    while (i s< *(var_c8.q + 0x18))
    
    if (var_a0.b != 0 && var_a0:1.b != 0)
        sub_1405b6470(rsi, rsi[1].d - *(rsi + 0x34), 1)

int64_t* rcx_8 = *(performanceCount_1 + 0x68)
int64_t* var_e0 = rcx_8
void* rax_20 = &rcx_8[sx.q(*(performanceCount_1 + 0x70))]

if (rcx_8 != rax_20)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    
    do
        void* r14_1 = *rcx_8
        void* var_f0_1 = r14_1
        void* rax_21 = *(r14_1 + 0x430)
        
        if (rax_21 != 0)
            int64_t* rdi_1 = *(rax_21 + 0x40)
            int64_t* var_e8_1 = rdi_1
            void* rbx = &rdi_1[sx.q(*(rax_21 + 0x48))]
            
            if (rdi_1 != rbx)
                void* rax_23 = rbx
                
                do
                    void* rbx_1 = *rdi_1
                    
                    if (rbx_1 != 0)
                        void* rax_24 = sub_1408ea9e0()
                        void* rdx_8 = *(rbx_1 + 0x10)
                        int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                        
                        if (rax_25.d s<= *(rdx_8 + 0x38)
                                && *(*(rdx_8 + 0x30) + (rax_25 << 3)) == rax_24 + 0x30)
                            int32_t arg_20
                            sub_140865c40(rsi, &arg_20, rbx_1)
                            int64_t rax_27 = sx.q(arg_20)
                            
                            if (rax_27.d != 0xffffffff)
                                void* rcx_11 = *rsi + rax_27 * 0x18
                                
                                if (rcx_11 != 0 && rcx_11 != -8)
                                    zmm6 = *(r14_1 + 0x478)
                                    float zmm0_1 = sub_1408e41f0(r14_1)
                                    char r9_1 = *(r14_1 + 0x439)
                                    zmm6[0] = zmm6[0] f* *data_143cec058
                                    zmm0_1 = zmm0_1 - zmm6[0]
                                    zmm6[0] = zmm6[0] f* *data_143cec040
                                    int32_t* var_108 = nullptr
                                    int32_t var_100_1 = 0
                                    zmm6[0] = zmm6[0] + zmm0_1
                                    sub_1408e4340(rbx_1, _mm_min_ss(zmm6[0], zmm0_1), 
                                        _mm_max_ss(zmm6[0], zmm0_1), r9_1, &var_108)
                                    int32_t* rsi_1 = var_108
                                    int64_t r14_2 = 0
                                    void* rcx_14 = &rsi_1[sx.q(var_100_1)]
                                    uint64_t r12_4 = (rcx_14 - rsi_1 + 3) u>> 2
                                    
                                    if (rsi_1 u> rcx_14)
                                        r12_4 = 0
                                    
                                    if (r12_4 != 0)
                                        do
                                            void* rbx_2 = *(rcx_11 + 8)
                                            int32_t i_1 = *rsi_1
                                            int32_t* rdx_11 = *(rbx_2 + 8)
                                            int64_t r8_4 = sx.q(*(rbx_2 + 0x10))
                                            int32_t* rax_32 = rdx_11
                                            void* rcx_15 = &rdx_11[r8_4]
                                            
                                            if (rdx_11 != rcx_15)
                                                while (*rax_32 != i_1)
                                                    rax_32 = &rax_32[1]
                                                    
                                                    if (rax_32 == rcx_15)
                                                        goto label_1408e963b
                                            
                                            if (rdx_11 == rcx_15
                                                || ((rax_32 - rdx_11) s>> 2).d == 0xffffffff)
                                            label_1408e963b:
                                                int32_t rax_35 = (r8_4 + 1).d
                                                *(rbx_2 + 0x10) = rax_35
                                                
                                                if (rax_35 s> *(rbx_2 + 0x14))
                                                    sub_1405a4cf0(rbx_2 + 8)
                                                
                                                *(*(rbx_2 + 8) + (r8_4 << 2)) = i_1
                                            
                                            rsi_1 = &rsi_1[1]
                                            r14_2 += 1
                                        while (r14_2 != r12_4)
                                        
                                        rsi_1 = var_108
                                        r15 = 0
                                        rdi_1 = var_e8_1
                                    
                                    if (rsi_1 != 0)
                                        sub_140a74f90(rsi_1)
                                    
                                    r14_1 = var_f0_1
                                    rsi = var_f8
                        
                        rax_23 = rbx
                    
                    rdi_1 = &rdi_1[1]
                    var_e8_1 = rdi_1
                while (rdi_1 != rax_23)
                
                rcx_8 = var_e0
        
        rcx_8 = &rcx_8[1]
        var_e0 = rcx_8
    while (rcx_8 != rax_20)
    
    performanceCount_1 = performanceCount

QueryPerformanceCounter(&performanceCount)
void* r8_5 = &rsi[2]
zmm0.q = float.d(performanceCount)
int32_t rcx_19 = 0
zmm0.q = zmm0.q f* data_143d796f8
*(performanceCount_1 + 0x10)
*(performanceCount_1 + 0x10) = 0
int64_t* var_160
var_160.d = 0
var_160:4.d = 1
int128_t var_158
var_158.q = r8_5
zmm0.q = zmm0.q f+ 16777216.0
var_158:8.d = 0xffffffff
var_158:0xc.d = 0
var_148.d = 0
*(performanceCount_1 + 0xa0) = zmm0.q
int32_t r10 = *(r8_5 + 0x18)

if (r10 != 0)
    void* rax_38 = *(r8_5 + 0x10)
    
    if (rax_38 != 0)
        r8_5 = rax_38
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_15 = *r8_5
    
    if (rdx_15 != 0)
    label_1408e979b:
        int32_t rax_45 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_7
        temp0_7, rflags_2 = _bit_scan_reverse(rax_45)
        var_160:4.d = rax_45
        int32_t rdi_2
        
        if (rax_45 == 0)
            rdi_2 = 0x20
        else
            rdi_2 = 0x1f - temp0_7
        
        var_158:0xc.d = rcx_19 - rdi_2 + 0x1f
        
        if (rcx_19 - rdi_2 + 0x1f s> r10)
            var_158:0xc.d = r10
    else
        while (true)
            int64_t rdx_16 = sx.q(r15)
            rcx_19 += 0x20
            r15 += 1
            var_148.d = rcx_19
            var_160.d = r15
            
            if (rdx_16.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r8_5 + (rdx_16 << 2) + 4)
            var_158:8.d = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_1408e979b
        
        var_158:0xc.d = r10

double zmm4_1[0x2] = var_158
int64_t* var_138_1 = rsi
var_128.o = var_160.o
var_130.q = rsi
var_118.o = zmm4_1
int16_t var_60 = 0
double temp0_8[0x2] = _mm_unpackhi_pd(zmm4_1, zmm4_1[0])
void* result = 0xffffffff
int32_t rcx_21 = _mm_bsrli_si128(zmm4_1, 4)[0].d
zmm0.q = temp0_8.q
float var_98[0x4] = var_130.o
int128_t var_88 = 0xffffffff
int128_t var_78 = zmm0

if (rcx_21 s< *0x100000017)
    int32_t i_2 = 0
    
    do
        sub_1408e98a0(*(*var_98[0].q + sx.q(i_2) * 0x18 + 8))
        var_88:8.d &= not.d(var_98[3])
        sub_14059bdd0(&var_98[2])
        result = var_88.q
        i_2 = var_88:0xc.d
    while (i_2 s< *(result + 0x18))
    
    if (var_60.b != 0 && var_60:1.b != 0)
        return sub_1405b6470(rsi, rsi[1].d - *(rsi + 0x34), 1)

return result
