// 函数: sub_1423ac150
// 地址: 0x1423ac150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141837120(arg1 + 0x80, 0)
sub_140865470(arg1 + 0xd0, 0)
int32_t var_114 = 1
*(arg1 + 0x120) = 0
int32_t rsi = *(arg1 + 0x58)
void* r9 = arg1 + 0x40
void* var_110 = r9
int32_t rcx_2 = 0
int32_t var_118 = 0
int32_t r10 = 0
int32_t var_108 = 0xffffffff
int32_t r8 = 0
int64_t var_104 = 0

if (rsi != 0)
    void* rax_1 = *(r9 + 0x10)
    r10 = rsi
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1423ac21c:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_114_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> rsi)
            rax_10 = rsi
        
        r10 = rax_10
        var_104.d = rax_10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_104:4.d = r8
            var_118 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_104.d = rsi
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_108 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423ac21c

double zmm2[0x2] = var_108.o
uint128_t var_e0 = var_118.o
double var_d0[0x2] = zmm2
int64_t var_f8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_118.o = (arg1 + 0x30).o
var_108.o = var_e0
int64_t arg_8

if (r10 s< rsi)
    int32_t i_2
    int32_t i = i_2
    
    do
        arg_8 = *(*var_118.q + sx.q(i) * 0x18)
        sub_14239d800(arg1 + 0x80, &arg_8)
        var_104:4.d &= not.d(var_110:4.d)
        sub_14059bdd0(&var_110)
        i = i_2
    while (i s< *(var_108.q + 0x18))

int32_t r11 = *(arg1 + 0xa8)
void* r9_1 = arg1 + 0x90
int32_t var_114_2 = 1
int32_t rcx_7 = 0
var_118 = 0
int32_t r8_2 = 0
var_110 = r9_1
int32_t var_108_1 = 0xffffffff
int64_t var_104_1 = 0

if (r11 != 0)
    void* rax_17 = *(r9_1 + 0x10)
    
    if (rax_17 != 0)
        r9_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *r9_1
    
    if (rdx_9 != 0)
    label_1423ac35c:
        int32_t rax_24 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_114_3 = rax_24
        int32_t rbx_1
        
        if (rax_24 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_104_1.d = r8_2 - rbx_1 + 0x1f
        
        if (r8_2 - rbx_1 + 0x1f s> r11)
            var_104_1.d = r11
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_7)
            r8_2 += 0x20
            rcx_7 += 1
            var_104_1:4.d = r8_2
            var_118 = rcx_7
            
            if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
            var_108_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1423ac35c
        
        var_104_1.d = r11

uint128_t zmm4 = var_108_1.o
uint64_t* var_c0 = arg1 + 0x80
uint128_t zmm0 = var_118.o
uint128_t var_d0_1 = zmm4
int16_t var_80 = 0
void* rax_26 = zmm0.q
uint128_t var_a8 = zmm0
double var_b8[0x2] = (arg1 + 0x80).o
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
uint128_t var_98 = zmm0

if (_mm_bsrli_si128(zmm4, 4).d s< *(rax_26 + 0x18))
    int32_t i_1 = var_a8:0xc.d
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    do
        double rsi_1 = var_b8[0]
        int64_t rbx_3 = sx.q(i_1) << 5
        void* rdi_1 = *(rbx_3 + *rsi_1)
        void* var_f0 = rdi_1
        void* rax_29
        int64_t rax_30
        void* rdx_11
        
        if (rdi_1 != 0)
            rax_29 = sub_1425b3bb0()
            rdx_11 = *(rdi_1 + 0x10)
            rax_30 = sx.q(*(rax_29 + 0x38))
        
        char r13_1
        
        if (rdi_1 != 0 && (rax_30.d s> *(rdx_11 + 0x38)
                || *(*(rdx_11 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30))
            r13_1 = 1
        else
            r13_1 = 0
        
        void* r14_2 = *rsi_1 + rbx_3
        int32_t rbx_4 = 0
        sub_140865c40(arg1 + 0x30, &arg_8, var_f0)
        int64_t rax_32 = sx.q(arg_8.d)
        
        if (rax_32.d != 0xffffffff)
            void* rax_34 = *(arg1 + 0x30) + rax_32 * 0x18
            
            if (rax_34 != 0 && rax_34 != -8)
                for (int32_t j = *(rax_34 + 8); j != 0xffffffff; 
                        j = *(*(arg1 + 0x20) + sx.q(j) * 0x28 + 0x20))
                    rbx_4 += 1
        
        int32_t rax_37 = *(r14_2 + 0x10) + rbx_4
        *(r14_2 + 0x10) = rax_37
        
        if (rax_37 s> *(r14_2 + 0x14))
            sub_14083a7e0(r14_2 + 8)
        
        void* rdi_2 = var_f0
        int32_t arg_10
        sub_140865c40(arg1 + 0x30, &arg_10, rdi_2)
        int64_t rax_38 = sx.q(arg_10)
        
        if (rax_38.d != 0xffffffff)
            void* rax_40 = *(arg1 + 0x30) + rax_38 * 0x18
            
            if (rax_40 != 0 && rax_40 != -8)
                int32_t rax_42 = *(rax_40 + 8)
                
                if (rax_42 != 0xffffffff)
                    int64_t rcx_15 = *(arg1 + 0x20)
                    int32_t* rsi_2 = nullptr
                    
                    while (true)
                        int64_t rbx_5 = sx.q(rax_42) * 5
                        zmm6 = *(rcx_15 + (rbx_5 << 3) + 0x14)
                        
                        if (r13_1 != 0 && not(zmm6.d f>= 0f))
                            int32_t arg_18
                            sub_140865c40(arg1 + 0xd0, &arg_18, rdi_2)
                            int64_t rax_44 = sx.q(arg_18)
                            void* rax_46
                            
                            if (rax_44.d != 0xffffffff)
                                rax_46 = *(arg1 + 0xd0) + rax_44 * 0x18
                            
                            if (rax_44.d == 0xffffffff || rax_46 == 0 || rax_46 == -8)
                                int32_t arg_20 = 1
                                var_118.q = &var_f0
                                var_110 = &arg_20
                                int32_t var_78[0x4]
                                sub_1405a7a30(arg1 + 0xd0, &var_78, &var_118, nullptr)
                            else
                                *(rax_46 + 8) += 1
                        
                        int64_t rax_48 = *(arg1 + 0x20)
                        *(arg1 + 0x120) = _mm_max_ss((*(arg1 + 0x120)).d, zmm6.d).d
                        *(rsi_2 + *(r14_2 + 8)) = *(rax_48 + (rbx_5 << 3) + 0x10)
                        *(*(r14_2 + 8) + rsi_2 + 4) = zmm6.d
                        *(*(r14_2 + 8) + rsi_2 + 8) = *(*(arg1 + 0x20) + (rbx_5 << 3) + 0x18)
                        rsi_2 = &rsi_2[3]
                        rcx_15 = *(arg1 + 0x20)
                        rax_42 = *(rcx_15 + (rbx_5 << 3) + 0x20)
                        
                        if (rax_42 == 0xffffffff)
                            break
                        
                        rdi_2 = var_f0
        
        var_a8:8.d &= not.d(var_b8[1]:4.d)
        sub_14059bdd0(&var_b8[1])
        i_1 = var_a8:0xc.d
    while (i_1 s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_1405b6520(arg1 + 0x80, *(arg1 + 0x88) - *(arg1 + 0xb4), 1)

return zx.q(*(arg1 + 0x88) - *(arg1 + 0xb4))
