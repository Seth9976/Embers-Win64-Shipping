// 函数: sub_1413df470
// 地址: 0x1413df470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_1d4 = 1
int32_t var_1c8 = 0xffffffff
int32_t r10 = arg1[5].d
void* r9 = &arg1[2]
void* var_1d0 = r9
int32_t rcx = 0
int32_t var_1d8 = 0
int32_t r8 = 0
int64_t var_1c4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1413df50b:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_1d4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_1c4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_1c4.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_1c4:4.d = r8
            var_1d8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_1c8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1413df50b
        
        var_1c4.d = r10

double zmm2[0x2] = var_1c8.o
uint64_t* var_1b8 = arg1
double var_1a0[0x2] = zmm2
double var_1b0[0x2] = var_1d8.o
double var_190[0x2] = var_1b8.o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_170 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (rax_12 s< r10)
    int32_t i = var_1b0[1]:4.d
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    
    do
        char arg_8 = 0
        char* var_1d0_1 = &arg_8
        var_1d8.q = j_sub_140597fc0
        int64_t* rax_14 = sub_140a756e0(&var_1d8, &data_143958018) + 0x10
        var_1b8 = rax_14
        var_1b0[0] = *rax_14
        var_1b0[1] = rax_14[2]
        var_1a0[0].b = 0
        var_1a0[1] = rax_14[3]
        rax_14[3] = &var_1b8
        uint64_t* rax_15 = var_1b8
        rax_15[4].d += 1
        void* rdx_7 = *(*var_190[0] + sx.q(i) * 0x10)
        int128_t* rbx_2 = *(rdx_7 + 8) + 0xc0
        void var_a8
        sub_141385200(&var_a8, rdx_7)
        zmm2 = *(rbx_2 + 8)
        float zmm0_1[0x4] = *rbx_2
        float zmm3[0x4] = zmm2
        double zmm4_1[0x2] = *(rbx_2 + 0xc)
        float zmm1_1[0x4] = *(rbx_2 + 4)
        zmm0_1[0] = zmm0_1[0] f- zmm4_1[0].d
        zmm7 = *(rbx_2 + 0x14)
        zmm4_1[0].d = zmm4_1[0].d f+ zmm0_1[0]
        zmm6 = rbx_2[1].d
        zmm3[0] = zmm3[0] f- zmm7.d
        int32_t var_15c_1 = 0
        zmm7.d = zmm7.d f+ zmm2[0].d
        int32_t var_14c_1 = 0
        int64_t zmm5_1
        zmm5_1.d = zmm1_1[0].q.d f- zmm6.d
        zmm6.d = zmm6.d f+ zmm1_1[0]
        zmm4_1[0].d = zmm4_1[0].d f- zmm0_1[0]
        zmm7.d = zmm7.d f- zmm3[0]
        zmm6.d = zmm6.d f- zmm5_1.d
        zmm4_1[0].d = zmm4_1[0].d f* 0.5f
        zmm7.d = zmm7.d f* 0.5f
        zmm6.d = zmm6.d f* 0.5f
        zmm0_1[0] = zmm0_1[0] f+ zmm4_1[0].d
        zmm3[0] = zmm3[0] f+ zmm7.d
        int32_t var_150_1 = zmm7.d
        zmm5_1.d = zmm5_1.d f+ zmm6.d
        zmm1_1 = zmm0_1
        zmm2 = _mm_unpacklo_ps(zmm4_1, zmm6.q)
        float var_160_1 = zmm3[0]
        float var_168[0x4]
        zmm0_1 = var_168
        void* j = arg1[0xa]
        zmm0_1[0].q = (_mm_unpacklo_ps(zmm1_1, zmm5_1)).q
        float var_158[0x4]
        zmm1_1 = var_158
        zmm1_1[0].q = zmm2.q
        var_168 = zmm0_1
        float var_128[0x4] = zmm0_1
        var_158 = zmm1_1
        float var_118_1[0x4] = zmm1_1
        float var_f8_1[0x4] = *(j + 0x20d0)
        float var_e8_1[0x4] = *(j + 0x20e0)
        float var_d8_1[0x4] = *(j + 0x20f0)
        int64_t var_c8_1 = 0
        int64_t var_c0_1 = 0
        int32_t var_b0_1 = 0
        sub_1413efe00(&var_128)
        zmm2, zmm3 = sub_1413ceb60(&var_128)
        
        while (j != -0x1d60)
            void* rcx_10 = j + 0x1d60
            int64_t rbx_3 = sx.q(var_b0_1)
            void* rax_20 = *(rcx_10 + 0x300)
            
            if (rax_20 != 0)
                rcx_10 = rax_20
            
            void* rcx_11 = rcx_10 + rbx_3 * 0x30
            sub_141223450(*(rcx_11 + 0x20), rcx_11, &var_a8, zmm3, zmm2)
            var_b0_1 = rbx_3.d + 1
            zmm2, zmm3 = sub_1413ceb60(&var_128)
        
        void* rax_21 = arg1[0xa]
        int64_t rdi_1 = 0
        int32_t* rbx_5 = *(rax_21 + 0x2110)
        uint64_t rsi_2 = sx.q(*(rax_21 + 0x2118)) << 2 u>> 2
        
        if (rbx_5 u> &rbx_5[sx.q(*(rax_21 + 0x2118))])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int128_t* rcx_16 = sx.q(*rbx_5) * 0x30 + *(arg1[0xa] + 0xee8)
                zmm2, zmm3 = sub_141223450(rcx_16[2].q, rcx_16, &var_a8, zmm3, zmm2)
                rdi_1 += 1
                rbx_5 = &rbx_5[1]
            while (rdi_1 != rsi_2)
        
        if (var_1a0[0].b == 0)
            uint64_t* rax_26 = var_1b8
            var_1a0[0].b = 1
            rax_26[4].d -= 1
            uint64_t* rcx_18 = var_1b8
            double rdx_12 = var_1b0[1]
            
            if (rdx_12 != rcx_18[2])
                sub_140b16b40(rcx_18, rdx_12)
                rcx_18 = var_1b8
            
            *rcx_18 = var_1b0[0]
            var_1b8[3] = var_1a0[1]
        
        var_1b0[1].d &= not.d(var_190[1]:4.d)
        sub_14059bdd0(&var_190[1])
        i = var_1b0[1]:4.d
    while (i s< *(var_1b0[0] i+ 0x18))

uint64_t result = sub_140908eb0(arg1)
arg1[0xa] = 0
return result
