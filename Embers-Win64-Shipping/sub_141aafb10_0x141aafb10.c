// 函数: sub_141aafb10
// 地址: 0x141aafb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x28))
void* r15 = arg1

if (rdi.d == 0 || *(arg1 + 0x54) == 0)
    return sub_141e1c570(arg1 + 0x10, arg2, arg4)

void var_a8
sub_140dd5b90(&var_a8, *arg2)
*arg2
bool cond:0_1 = arg2[8].b != 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x33)
bool var_68_1 = cond:0_1
int128_t zmm6_1 = sub_141e1c570(r15 + 0x10, &var_a8, sub_141e295c0(&var_a8))
void* var_108 = nullptr
int32_t rax = 0
int32_t var_100_1 = 0
int32_t temp0_1 = rdi.d

if (temp0_1 s> 0)
    var_100_1 = rdi.d
    sub_1405a4df0(&var_108)
    void* rax_1 = var_108
    int32_t i_4 = rdi.d
    
    if (rdi.d != 0)
        int32_t i
        
        do
            __builtin_memset(rax_1, 0, 0x18)
            rax_1 += 0x18
            i = i_4
            i_4 -= 1
        while (i != 1)
else if (temp0_1 s< 0)
    int32_t rsi_2 = neg.d(rdi.d)
    
    if (rsi_2 != 0)
        int32_t rdx_5 = neg.d(rsi_2 + rdi.d)
        
        if (rdx_5 != 0)
            memmove(rdi * 0x18, nullptr, rdx_5 * 0x18)
            rax = var_100_1
        
        var_100_1 = rax - rsi_2
        sub_1405fde90(&var_108)

void* var_118 = nullptr
int32_t rax_4 = 0
int32_t var_110_1 = 0
int32_t temp1_1 = rdi.d

if (temp1_1 s> 0)
    var_110_1 = rdi.d
    sub_1405c4e40(&var_118)
    void* rax_5 = var_118
    int32_t i_5 = rdi.d
    
    if (rdi.d != 0)
        int32_t i_1
        
        do
            __builtin_memset(rax_5, 0, 0x1b)
            rax_5 += 0x20
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else if (temp1_1 s< 0)
    int32_t rsi_4 = neg.d(rdi.d)
    
    if (rsi_4 != 0)
        int32_t rdx_8 = neg.d(rsi_4 + rdi.d)
        
        if (rdx_8 != 0)
            memmove(rdi << 5, nullptr, rdx_8 << 5)
            rax_4 = var_110_1
        
        var_110_1 = rax_4 - rsi_4
        sub_1405dad20(&var_118)

int32_t r13_1 = 0
int64_t r14_1 = rdi

if (rdi.d s> 0)
    void* rdi_1 = arg1
    int64_t r15_1 = 0
    int128_t var_58_1 = zmm6_1
    int64_t r12_1 = 0
    zmm6_1 = 0x3727c5ac
    int64_t rsi_5 = 0
    int64_t arg_18 = 0
    
    do
        if (zmm6_1.d f>= *(*(rdi_1 + 0x40) + (r15_1 << 2)))
            void* var_90
            zmm6_1 = sub_141acb4e0(var_108 + sx.q(r13_1) * 0x18, var_90)
            void* rdi_3 = var_118 + r12_1
            
            if (&arg2[4] != rdi_3)
                int64_t* rdx_16 = arg2[6]
                int32_t rcx_22 = 0
                *(rdi_3 + 0x10) = rdx_16
                
                if (rdx_16 != 0)
                    int64_t i_6 = sx.q(rdx_16[1].d)
                    
                    if (i_6 s> 0)
                        void* rdx_17 = *rdx_16
                        int64_t i_2
                        
                        do
                            int32_t rax_20 = rcx_22
                            rdx_17 += 2
                            rcx_22 += 1
                            
                            if (*(rdx_17 - 2) == 0xffff)
                                rcx_22 = rax_20
                            
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                
                *(rdi_3 + 0x18) = rcx_22.w
                int32_t rsi_6 = 0
                int32_t rax_21 = *(rdi_3 + 0xc)
                *(rdi_3 + 8) = 0
                
                if (rax_21 s< 0 && rax_21 != 0)
                    zmm6_1 = sub_14083ad10(rdi_3, 0)
                    rsi_6 = *(rdi_3 + 8)
                
                uint64_t r14_2 = zx.q(*(rdi_3 + 0x18))
                int32_t rax_22 = r14_2.d + rsi_6
                *(rdi_3 + 8) = rax_22
                
                if (rax_22 s> *(rdi_3 + 0xc))
                    zmm6_1 = sub_14083a440(rdi_3, rsi_6)
                
                memset(*rdi_3 + (sx.q(rsi_6) << 3), 0, r14_2 << 3)
                rsi_5 = arg_18
                r14_1 = rdi
                *(rdi_3 + 0x1a) = 1
            
            rdi_1 = arg1
        else
            void var_f8
            sub_140dd5b90(&var_f8, *arg2)
            int64_t var_f0
            __builtin_memset(&var_f0, 0, 0x33)
            *arg2
            bool var_b8_1 = arg2[8].b != 0
            int512_t zmm1_1 = sub_141e295c0(&var_f8)
            zmm6_1 = sub_141e1c570((sx.q(r13_1) << 4) + *(rdi_1 + 0x20), &var_f8, zmm1_1)
            int64_t* rcx_17 = var_108 + rsi_5
            
            if (rcx_17 != &var_f0)
                *rcx_17 = var_f0
                int64_t var_e8
                rcx_17[1].d = var_e8.d
                *(rcx_17 + 0xc) = var_e8:4.d
                int64_t var_e0
                rcx_17[2] = var_e0
            
            int64_t* rcx_19 = var_118 + r12_1
            int64_t var_c8
            rcx_19[2] = var_c8
            int16_t var_c0
            rcx_19[3].w = var_c0
            int64_t var_d8
            
            if (rcx_19 != &var_d8)
                *rcx_19 = var_d8
                int64_t var_d0
                rcx_19[1].d = var_d0.d
                *(rcx_19 + 0xc) = var_d0:4.d
            
            *(rcx_19 + 0x1a) = 1
        
        rsi_5 += 0x18
        r13_1 += 1
        r15_1 += 1
        arg_18 = rsi_5
        r12_1 += 0x20
    while (r15_1 s< r14_1)
    
    r15 = arg1

int64_t* rsi_7 = arg2
int32_t i_3 = 0
void* r13_2 = rsi_7[6]
int64_t var_88

if (*(r13_2 + 8) s> 0)
    do
        int64_t* rax_24 = rsi_7[6]
        uint64_t r11_1 = zx.q(i_3.w)
        int16_t rdx_19
        
        if (r11_1.d s>= rax_24[1].d)
            rdx_19 = -1
        else
            rdx_19 = *(*rax_24 + (r11_1 << 1))
        
        uint32_t rax_26 = zx.d(rdx_19)
        
        if (rax_26 != 0xffff && rax_26 s< *(r15 + 0xb8))
            char r15_2 = *(zx.q(rax_26) + *(r15 + 0xb0))
            
            if (r15_2 != 0xff)
                int64_t* var_78
                int16_t rdx_20
                
                if (r11_1.d s>= var_78[1].d)
                    rdx_20 = -1
                else
                    rdx_20 = *(*var_78 + (r11_1 << 1))
                
                if (rdx_20 != 0xffff)
                    int64_t rax_30 = var_88
                    uint64_t rcx_28 = zx.q(rdx_20)
                    *(rax_30 + (rcx_28 << 3)) = 0
                    *(rax_30 + (rcx_28 << 3) + 4) = 1
                
                int64_t j = 0
                
                if (r14_1 s>= 4)
                    uint64_t rsi_8 = zx.q(r15_2)
                    int64_t rdi_4 = 2
                    int64_t* r8_7 = nullptr
                    
                    do
                        if (rsi_8 != j)
                            void* r10_1 = var_118
                            int64_t* rax_31 = *(r8_7 + r10_1 + 0x10)
                            int16_t rdx_21
                            
                            if (r11_1.d s>= rax_31[1].d)
                                rdx_21 = -1
                            else
                                rdx_21 = *(*rax_31 + (r11_1 << 1))
                            
                            if (rdx_21 != 0xffff)
                                int64_t rax_33 = *(r8_7 + r10_1)
                                uint64_t rcx_29 = zx.q(rdx_21)
                                *(rax_33 + (rcx_29 << 3)) = 0
                                *(rax_33 + (rcx_29 << 3) + 4) = 1
                        
                        if (rsi_8 != rdi_4 - 1)
                            void* r10_2 = var_118
                            int64_t* rax_35 = *(r8_7 + r10_2 + 0x30)
                            int16_t rdx_22
                            
                            if (r11_1.d s>= rax_35[1].d)
                                rdx_22 = -1
                            else
                                rdx_22 = *(*rax_35 + (r11_1 << 1))
                            
                            if (rdx_22 != 0xffff)
                                int64_t rax_37 = *(r8_7 + r10_2 + 0x20)
                                uint64_t rcx_30 = zx.q(rdx_22)
                                *(rax_37 + (rcx_30 << 3)) = 0
                                *(rax_37 + (rcx_30 << 3) + 4) = 1
                        
                        if (rsi_8 != rdi_4)
                            void* r10_3 = var_118
                            int64_t* rax_38 = *(r8_7 + r10_3 + 0x50)
                            int16_t rdx_23
                            
                            if (r11_1.d s>= rax_38[1].d)
                                rdx_23 = -1
                            else
                                rdx_23 = *(*rax_38 + (r11_1 << 1))
                            
                            if (rdx_23 != 0xffff)
                                int64_t rax_40 = *(r8_7 + r10_3 + 0x40)
                                uint64_t rcx_31 = zx.q(rdx_23)
                                *(rax_40 + (rcx_31 << 3)) = 0
                                *(rax_40 + (rcx_31 << 3) + 4) = 1
                        
                        if (rsi_8 != rdi_4 + 1)
                            void* r10_4 = var_118
                            int64_t* rax_42 = *(r8_7 + r10_4 + 0x70)
                            int16_t rdx_24
                            
                            if (r11_1.d s>= rax_42[1].d)
                                rdx_24 = -1
                            else
                                rdx_24 = *(*rax_42 + (r11_1 << 1))
                            
                            if (rdx_24 != 0xffff)
                                int64_t rax_44 = *(r8_7 + r10_4 + 0x60)
                                uint64_t rcx_32 = zx.q(rdx_24)
                                *(rax_44 + (rcx_32 << 3)) = 0
                                *(rax_44 + (rcx_32 << 3) + 4) = 1
                        
                        j += 4
                        r8_7 -= -0x80
                        rdi_4 += 4
                    while (j s< r14_1 - 3)
                    
                    r14_1 = rdi
                    rsi_7 = arg2
                
                if (j s< r14_1)
                    int64_t* rdx_26 = j << 5
                    
                    do
                        if (zx.q(r15_2) != j)
                            void* r10_5 = var_118
                            int64_t* rax_45 = *(rdx_26 + r10_5 + 0x10)
                            int16_t r8_8
                            
                            if (r11_1.d s>= rax_45[1].d)
                                r8_8 = -1
                            else
                                r8_8 = *(*rax_45 + (r11_1 << 1))
                            
                            if (r8_8 != 0xffff)
                                int64_t rax_47 = *(rdx_26 + r10_5)
                                uint64_t rcx_33 = zx.q(r8_8)
                                *(rax_47 + (rcx_33 << 3)) = 0
                                *(rax_47 + (rcx_33 << 3) + 4) = 1
                        
                        j += 1
                        rdx_26 = &rdx_26[4]
                    while (j s< r14_1)
        
        r15 = arg1
        i_3 += 1
    while (i_3 s< *(r13_2 + 8))

int32_t rbx_1
rbx_1.b = *(arg1 + 0x50) != 0
int32_t r8_10 = rbx_1 | 2

if (*(arg1 + 0x51) == 0)
    r8_10 = rbx_1

int32_t* result = sub_141de2200(&var_a0, &var_108, &var_88, &var_118, arg3, &rsi_7[1], &rsi_7[4], 
    arg1 + 0xa0, r8_10, zx.d(*(arg1 + 0x52)))
void* rcx_36 = var_118

if (rcx_36 != 0)
    result = sub_140a74f90(rcx_36)

void* rcx_37 = var_108

if (rcx_37 == 0)
    return result

return sub_140a74f90(rcx_37)
