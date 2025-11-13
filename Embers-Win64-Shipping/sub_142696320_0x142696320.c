// 函数: sub_142696320
// 地址: 0x142696320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2
int64_t zmm1 = *(arg2 + 0xc8)
void* rbx = arg1
int64_t* r13 = arg3
int32_t rax = *(arg2 + 0x288)
uint128_t zmm6 = zx.o(*(arg1 + 0xd0))
uint64_t var_c8 = *(arg2 + 0x280)
int32_t var_c0 = rax
zmm6 = _mm_cvtepi32_ps(zmm6)
char* rdx_1 = *(arg2 + 0xe8) + 0x230
int32_t var_80 = *(arg2 + 0xd0)
int64_t var_88 = zmm1
zmm6.d = zmm6.d f* *(arg1 + 0xd8)
uint128_t var_98 = *(arg2 + 0xb8)
sub_1426459e0(arg1 + 0x350, rdx_1)
uint64_t var_78[0x2]
uint64_t* rax_2 = sub_142676ba0(&var_78, *(rbx + 0x60), *(rbx + 0x64), &var_c8, &var_98, zmm6.d)
uint128_t zmm3 = *(rbx + 0x354)
zmm3.d = zmm3.d f+ zmm3.d
char var_100 = 1
zmm3.d = zmm3.d f+ *(rbx + 0xd8)
*(rbx + 0x6c) = *rax_2
*(rbx + 0x7c) = rax_2[2]
*(rbx + 0x84) = rax_2[3].d
uint128_t zmm0_1
zmm0_1.d = zmm3.d f+ *(rbx + 0x80)
uint128_t zmm1_1
zmm1_1.d = (*(rbx + 0x6c)).d f- zmm3.d
uint128_t zmm5
zmm5.d = zmm3.d f+ *(rbx + 0x78)
int64_t zmm4
zmm4.d = zmm3.q.d f+ *(rbx + 0x7c)
int32_t var_130 = zmm0_1.d
int64_t zmm2
zmm2.d = (*(rbx + 0x70)).d f- zmm3.d
zmm0_1.d = (*(rbx + 0x74)).d f- zmm3.d
zmm3 = _mm_unpacklo_ps(zmm1_1, zmm2)
int32_t var_120 = zmm0_1.d
uint64_t var_10c = (_mm_unpacklo_ps(zmm5, zmm4)).q
int32_t var_110 = var_120
int32_t var_104 = var_130
zmm0_1.q = zmm3.q
uint128_t var_118 = zmm0_1
*(rbx + 0x88) = zmm0_1
*(rbx + 0x98) = var_10c
*(rbx + 0xa0) = var_100.d
var_118.d = (*(rbx + 0x6c) ^ 0x80000000).d
var_118:4.d = (*(rbx + 0x74)).d
int32_t var_110_1 = (*(rbx + 0x70) ^ 0x80000000).d
var_10c.d = (*(rbx + 0x78) ^ 0x80000000).d
int32_t var_104_1 = (*(rbx + 0x7c) ^ 0x80000000).d
var_10c:4.d = (*(rbx + 0x80)).d
float var_b8[0x4]
sub_140acc6d0(&var_b8, &var_118, 2)
int32_t r15 = 0
*(rbx + 0xe0) = var_b8
int32_t var_a8
*(rbx + 0xf0) = var_a8[0]
int32_t var_a4
*(rbx + 0xf4) = var_a4.d
int32_t rax_8 = *(rbx + 0x14) | 2
*(rbx + 0x14) = rax_8
uint128_t zmm1_2

if (*(r12 + 0xe0) s> 0)
    *(rbx + 0x14) = rax_8 & 0xfffffffd
    int32_t rdx_4 = *(r12 + 0xe0)
    
    if (rdx_4 s> *(rbx + 0x15c))
        sub_1413f6f70(rbx + 0x150, rdx_4)
    
    int32_t* i = *(r12 + 0xd8)
    
    for (void* r12_2 = sx.q(*(r12 + 0xe0)) * 0x1c + i; i != r12_2; i = &i[7])
        if (not((*(rbx + 0x78))[0] f< *i) && not(i[3][0] f< *(rbx + 0x6c))
                && not((*(rbx + 0x7c))[0] f< i[1]) && not(i[4][0] f< *(rbx + 0x70))
                && not((*(rbx + 0x80))[0] f< i[2]) && not(i[5][0] f< *(rbx + 0x74)))
            int64_t r14_1 = sx.q(*(rbx + 0x158))
            int32_t rax_11 = (r14_1 + 1).d
            *(rbx + 0x158) = rax_11
            
            if (rax_11 s> *(rbx + 0x15c))
                sub_1405c50f0(rbx + 0x150)
            
            int64_t rcx_5 = *(rbx + 0x150)
            float (* rdx_6)[0x4] = r14_1 * 0x1c
            *(rdx_6 + rcx_5) = *i
            *(rdx_6 + rcx_5 + 0x10) = *(i + 0x10)
            *(rdx_6 + rcx_5 + 0x18) = i[6]
            float zmm0_2[0x4] = *(rbx + 0x6c)
            int32_t zmm6_1 = *i
            int32_t rax_13
            
            if (zmm0_2[0] f< zmm6_1)
                rax_13 = 0
            else
                int32_t zmm5_1 = i[3]
                
                if (zmm0_2[0] f> zmm5_1)
                    rax_13 = 0
                else
                    zmm0_2 = *(rbx + 0x70)
                    int32_t zmm4_1 = i[1]
                    
                    if (zmm0_2[0] f< zmm4_1)
                        rax_13 = 0
                    else
                        int32_t zmm3_1 = i[4]
                        
                        if (zmm0_2[0] f> zmm3_1)
                            rax_13 = 0
                        else
                            zmm0_2 = *(rbx + 0x74)
                            int32_t zmm2_1 = i[2]
                            
                            if (zmm0_2[0] f< zmm2_1)
                                rax_13 = 0
                            else
                                zmm1_2 = i[5]
                                
                                if (zmm0_2[0] f> zmm1_2.d)
                                    rax_13 = 0
                                else
                                    zmm0_2 = *(rbx + 0x78)
                                    
                                    if (zmm0_2[0] f< zmm6_1 || zmm0_2[0] f> zmm5_1)
                                        rax_13 = 0
                                    else
                                        zmm0_2 = *(rbx + 0x7c)
                                        
                                        if (zmm0_2[0] f< zmm4_1 || zmm0_2[0] f> zmm3_1)
                                            rax_13 = 0
                                        else
                                            zmm0_2 = *(rbx + 0x80)
                                            
                                            if (zmm0_2[0] f< zmm2_1)
                                                rax_13 = 0
                                            else
                                                rax_13 = 2
                                                
                                                if (not(zmm0_2[0] f<= zmm1_2.d))
                                                    rax_13 = 0
            
            *(rbx + 0x14) &= 0xfffffffd
            *(rbx + 0x14) |= rax_13
    
    r12 = arg2

if (r13[1].d == 0)
    r15 = 1
else
    void* rcx_6 = *(*(r12 + 0xe8) + 0x4a8)
    void* const var_138
    
    if (rcx_6 == 0)
        var_130.q = 0
        var_138 = nullptr
    else
        int32_t arg_20 = *(rbx + 0x60)
        int32_t arg_24 = *(rbx + 0x64)
        sub_142681570(rcx_6 + 0x10, &arg_20, arg_20.q)
        int64_t rax_17 = sx.q(arg_20)
        
        if (rax_17.d == 0xffffffff)
            var_130.q = 0
            var_138 = nullptr
        else
            int64_t rdi_2 = rax_17 << 5
            void* rdi_3 = rdi_2 + *(rcx_6 + 0x10)
            
            if (rdi_2 == neg.q(*(rcx_6 + 0x10)))
                var_130.q = 0
                var_138 = nullptr
            else
                int32_t i_3 = *(rdi_3 + 0x10)
                int64_t rdi_4 = *(rdi_3 + 8)
                var_138 = nullptr
                int32_t i_4 = i_3
                
                if (i_3 != 0)
                    sub_140874c00(&var_138, i_3, 0)
                    void* const rax_18 = var_138
                    int128_t* rdi_5 = rdi_4 - rax_18
                    void* rcx_9 = rax_18 + 4
                    int32_t i_1
                    
                    do
                        *(rcx_9 - 4) = *(rdi_5 + rcx_9 - 4)
                        *rcx_9 = *(rdi_5 + rcx_9)
                        *(rcx_9 + 0x10) = *(rdi_5 + rcx_9 + 0x10)
                        *(rcx_9 + 0x18) = *(rdi_5 + rcx_9 + 0x18)
                        *(rcx_9 + 0x1c) = *(rdi_5 + rcx_9 + 0x1c)
                        *(rcx_9 + 0x24) = *(rdi_5 + rcx_9 + 0x24)
                        void* rax_23 = *(rdi_5 + rcx_9 + 0x2c)
                        *(rcx_9 + 0x2c) = rax_23
                        
                        if (rax_23 != 0)
                            *(rax_23 + 8) += 1
                        
                        rcx_9 += 0x38
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                else
                    int32_t var_12c_1 = 0
    
    sub_142671d90(rbx + 0x2c0, &var_138)
    sub_142671860(&var_138)
    void* r14_2 = *(rbx + 0x2c0)
    void* rdx_11 = sx.q(*(rbx + 0x2c8)) * 0x38 + r14_2
    void* var_128_1 = rdx_11
    
    if (r14_2 != rdx_11)
        do
            if (*(r14_2 + 0x20) s> 0)
                void* rcx_12 = *(r14_2 + 0x30)
                int32_t rax_25
                
                if (rcx_12 != 0)
                    rax_25 = 0
                    
                    if (0 == *(rcx_12 + 8))
                        *(rcx_12 + 8) = 0
                    else
                        rax_25 = *(rcx_12 + 8)
                
                if (rcx_12 == 0 || rax_25 != 1)
                    int64_t rax_26 = j_sub_1426075c0(zx.q(*(r14_2 + 0x20)), 0)
                    memcpy(rax_26, **(r14_2 + 0x28), *(r14_2 + 0x20))
                    int64_t* rax_27 = j_sub_140a82f30(8)
                    int64_t* rsi_3 = rax_27
                    
                    if (rax_27 == 0)
                        rsi_3 = nullptr
                    else
                        *rax_27 = rax_26
                    
                    void*** rax_28 = j_sub_140a82f30(0x18)
                    void*** rdi_7 = rax_28
                    
                    if (rax_28 == 0)
                        rdi_7 = nullptr
                    else
                        rax_28[1].d = 1
                        *(rax_28 + 0xc) = 1
                        *rax_28 = &data_14345a2a8
                        rax_28[2] = rsi_3
                    
                    int64_t* var_f8 = rsi_3
                    void*** var_f0 = rdi_7
                    
                    if (r14_2 + 0x28 != &var_f8)
                        *(r14_2 + 0x28) = rsi_3
                        var_f8 = nullptr
                        sub_1405aeff0(r14_2 + 0x30, &var_f0)
                        rdi_7 = var_f0
                    
                    if (rdi_7 != 0)
                        rdi_7[1].d -= 1
                        
                        if (rdi_7[1].d == 1)
                            (**rdi_7)(rdi_7)
                            int32_t rax_31 = *(rdi_7 + 0xc)
                            *(rdi_7 + 0xc) -= 1
                            
                            if (rax_31 == 1)
                                (*rdi_7)[1](rdi_7, 1)
                    
                    rdx_11 = var_128_1
            
            r14_2 += 0x38
        while (r14_2 != rdx_11)
        
        rbx = arg1
        r13 = arg3
        r12 = arg2
    
    if (*(rbx + 0x2c8) == 0)
        r15 = 1

int32_t rax_35 = (*(rbx + 0x14) & 0xfffffffe) | r15
bool cond:0 = *(rbx + 0x158) == 0
*(rbx + 0x14) = rax_35

if (not(cond:0))
    if ((rax_35.b & 1) == 0)
        int32_t rax_36 = *(rbx + 0x2c8)
        int32_t rcx_19 = *(rbx + 0xc4) + 0x1f
        *(rbx + 0xc0) = rax_36
        uint64_t rcx_20 = zx.q(rcx_19 u>> 5)
        uint32_t r14_4 = (rax_36 + 0x1f) u>> 5
        
        if (r14_4 u<= rcx_20.d)
            void* rax_41 = *(rbx + 0xb8)
            void* rdi_9 = rbx + 0xa8
            
            if (rax_41 != 0)
                rdi_9 = rax_41
            
            if (rcx_20.d u> 8)
                memset(rdi_9, 0, zx.q(rcx_20.d) << 2)
            else if (rcx_20.d != 0)
                __builtin_memset(rdi_9, 0, rcx_20 << 2)
        else
            sub_1405a4a00(rbx + 0xa8, 0, r14_4, 4)
            void* r15_1 = rbx + 0xa8
            *(rbx + 0xc4) = r14_4 << 5
            void* rax_39 = *(rbx + 0xb8)
            
            if (rax_39 != 0)
                r15_1 = rax_39
            
            if (r14_4 u> 8)
                memset(r15_1, 0, zx.q(r14_4) << 2)
            else if (r14_4 != 0)
                __builtin_memset(r15_1, 0, zx.q(r14_4) << 2)
            
            uint64_t rdx_15 = zx.q(r14_4 - 1)
            *(r15_1 + (rdx_15 << 2)) &= 0xffffffff u>> ((neg.d(*(rbx + 0xc0))).b & 0x1f)
        
        int32_t* r11_1 = *(rbx + 0x2c0)
        void* r14_6 = sx.q(*(rbx + 0x2c8)) * 0x38 + r11_1
        
        if (r11_1 != r14_6)
            int32_t* rdi_10 = &r11_1[2]
            
            do
                uint128_t* i_2 = *r13
                
                for (void* r10_2 = sx.q(r13[1].d) * 0x1c + i_2; i_2 != r10_2; i_2 += 0x1c)
                    zmm1_2 = *i_2
                    int64_t var_d8_1 = i_2[1].q
                    
                    if (not(zmm1_2.d f> rdi_10[2]) && not(zmm1_2:0xc.d[0] f< rdi_10[-1])
                            && not(zmm1_2:4.d[0] f> rdi_10[3]) && not(var_d8_1.d[0] f< *rdi_10)
                            && not(zmm1_2:8.d[0] f> rdi_10[4])
                            && not(var_d8_1:4.d[0] f< rdi_10[1]))
                        void* rax_44 = *(rbx + 0xb8)
                        void* r9_1 = rbx + 0xa8
                        int32_t rcx_28 = *r11_1
                        
                        if (rax_44 != 0)
                            r9_1 = rax_44
                        
                        int32_t rax_45 = rcx_28
                        
                        if (rcx_28 s< 0)
                            rax_45 = rcx_28 + 0x1f
                        
                        int64_t rdx_16 = sx.q(rax_45 s>> 5)
                        *(r9_1 + (rdx_16 << 2)) |= 1 << (rcx_28.b & 0x1f)
                
                r11_1 = &r11_1[0xe]
                rdi_10 = &rdi_10[0xe]
            while (r11_1 != r14_6)
    
    void* rax_48 = *(r12 + 0xe8)
    
    if (rax_48 == 0 || (not.b((*(rax_48 + 0x474) u>> 5).b) & 1) != 0)
        sub_1426823c0(rbx, r12, *(rbx + 0x14) & 1)
    else
        sub_14268e420(rbx, r12, *(rbx + 0x14) & 1)

int32_t result = sub_1426897a0(rbx) + 0x3c8
*(rbx + 0x10) = result
return result
