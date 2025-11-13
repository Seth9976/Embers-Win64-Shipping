// 函数: sub_141a8bb70
// 地址: 0x141a8bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg3 + 8)
int32_t arg_8

if (arg1[1] + r9 + arg1[2] s>= 0x14 || r9 s<= 0)
    arg_8 = 0xbf800000
    return sub_141a8b7a0(arg1, arg2, arg3, &arg_8)

void var_1d8
int128_t* rax_3 = sub_141a875a0(arg2, &var_1d8, arg3)
int64_t rcx_1 = rax_3[7].q
float zmm0[0x4] = rax_3[0xb]
int64_t r9_1 = rax_3[5].q
int64_t r10_1 = *(rax_3 + 0x58)
int64_t r11 = rax_3[6].q
int64_t r14 = *(rax_3 + 0x68)
int64_t r8 = *(rax_3 + 0x78)
uint64_t zmm1 = rax_3[0xc].q
int64_t rdx_1 = *(rax_3 + 0xf8)
int128_t zmm6 = *rax_3
int128_t zmm9 = *(rax_3 + 0x18)
int64_t var_628 = rcx_1
int64_t rcx_2 = rax_3[0xd].q
int128_t zmm11 = rax_3[3]
int128_t zmm7 = rax_3[8]
int64_t var_5c8 = rcx_2
int64_t rcx_3 = *(rax_3 + 0xd8)
int128_t zmm14 = *(rax_3 + 0x98)
uint128_t zmm8 = zx.o(rax_3[1].q)
uint128_t zmm10 = zx.o(*(rax_3 + 0x28))
uint128_t zmm12 = zx.o(rax_3[4].q)
uint128_t zmm13 = zx.o(rax_3[9].q)
uint128_t zmm15 = zx.o(*(rax_3 + 0xa8))
int64_t var_5c0 = rcx_3
int64_t rcx_4 = rax_3[0xe].q
int64_t var_5b8 = rcx_4
int64_t rcx_5 = *(rax_3 + 0xe8)
int64_t var_5b0 = rcx_5
int64_t rcx_6 = rax_3[0xf].q
int64_t var_5a8 = rcx_6
int128_t var_698 = zmm6
uint64_t var_688 = zmm8.q
int128_t var_680 = zmm9
int64_t var_700 = r9_1
uint64_t var_670 = zmm10.q
int128_t var_668 = zmm11
uint64_t var_658 = zmm12.q
int64_t var_648 = r9_1
int64_t var_6f8 = r10_1
int64_t var_640 = r10_1
int64_t var_6f0 = r11
int64_t var_638 = r11
int64_t var_6b8 = r14
int64_t var_630 = r14
int64_t var_708 = r8
int64_t var_620 = r8
int128_t var_618 = zmm7
uint64_t var_608 = zmm13.q
int128_t var_600 = zmm14
int64_t var_738 = rdx_1
uint64_t var_5f0 = zmm15.q
float var_6a8[0x4] = zmm0
int64_t var_5a0 = rdx_1
float var_5e8[0x4] = zmm0
uint64_t arg_18 = zmm1
uint64_t var_5d8 = zmm1
float (* r15)[0x4] = *arg1
int64_t rsi = zmm7.q
int64_t result = rax_3[1].q
int64_t r12 = arg1[0xf]
int64_t rdi = zmm6.q
int64_t var_598 = rdi
int64_t var_588 = r8
int64_t var_728 = rsi
int64_t var_580 = rsi
int64_t var_570 = rdx_1
int64_t result_4 = result
arg_8.q = r15
uint64_t rcx_8 = zx.q(r15.d) & 3
int64_t var_558
void* var_4a8
float* var_3f0
int64_t var_360
float* var_340
int64_t var_338
void var_288
float zmm2

if (rcx_8.d u<= 0)
    uint64_t rdi_4 = arg1[1]
    int64_t r8_3 = arg1[2]
    int32_t rax_16
    int32_t rdx_7
    rdx_7:rax_16 = sx.o(r12)
    uint64_t rdx_8 = zx.q(rdx_7) & 3
    uint64_t var_720_2 = rdi_4
    uint64_t rsi_3 = rdi_4
    result = zx.q((neg.q((zx.q(rax_16 + rdx_8.d) & 3) - rdx_8)).d) & 3
    int64_t result_3 = result
    
    if (rcx_8 == 0)
        uint64_t rcx_18 = zx.q((neg.q(r15 u>> 2)).d) & 3
        
        if (rcx_18 s< rdi_4)
            rsi_3 = rcx_18
    
    int64_t r13_1 = 0
    arg_18 = rsi_3
    int64_t var_728_1 = 0
    
    if (r8_3 s> 0)
        int64_t result_5 = arg_8.q
        int64_t r15_1 = 0
        int64_t var_738_1 = 0
        result = result_5
        int64_t result_1 = result_5
        
        do
            int64_t r12_3 = 0
            int64_t r14_5 = ((rdi_4 - rsi_3) & 0xfffffffffffffffc) + rsi_3
            
            if (rsi_3 s> 0)
                int64_t result_6 = result
                
                do
                    sub_141a8c650(&var_288, sub_141ad7610(&var_698, &var_4a8, r12_3))
                    int128_t* rax_22 = sub_141ad72b0(&var_618, &var_558, r13_1)
                    sub_141a8c650(&var_3f0, &var_288)
                    sub_141a8c650(&var_340, rax_22)
                    
                    if (var_338 != 0)
                        float* r11_2 = var_340
                        void* r8_6 = 1
                        float* r13_2 = var_3f0
                        zmm2 = *r11_2 * *r13_2
                        
                        if (var_338 s> 1)
                            float zmm0_1
                            
                            if (var_338 s> 4)
                                float* rdx_15 = &r13_2[var_360 * 3]
                                void* rcx_24 = &r11_2[3]
                                int64_t i_5 = ((var_338 - 5) u>> 2) + 1
                                r8_6 = (i_5 << 2) + 1
                                int64_t i
                                
                                do
                                    zmm0_1 = *rcx_24 * *rdx_15
                                    zmm2 = zmm2 + rdx_15[neg.q(var_360) * 2] f* *(rcx_24 - 8)
                                        + rdx_15[neg.q(var_360)] f* *(rcx_24 - 4)
                                    float zmm1_1 = rdx_15[var_360] f* *(rcx_24 + 4)
                                    rdx_15 = &rdx_15[var_360 * 4]
                                    rcx_24 += 0x10
                                    zmm2 = zmm2 + zmm0_1 + zmm1_1
                                    i = i_5
                                    i_5 -= 1
                                while (i != 1)
                                rsi_3 = arg_18
                            
                            if (r8_6 s< var_338)
                                void* rcx_26 = &r13_2[r8_6 * var_360]
                                
                                do
                                    zmm0_1 = r11_2[r8_6]
                                    r8_6 += 1
                                    zmm0_1 = zmm0_1 f* *rcx_26
                                    rcx_26 += var_360 << 2
                                    zmm2 = zmm2 + zmm0_1
                                while (r8_6 s< var_338)
                        
                        r13_1 = var_728_1
                    else
                        zmm2 = (zx.o(0)).d
                    
                    r12_3 += 1
                    *result_6 = *result_6 - zmm2
                    result_6 += 4
                while (r12_3 s< rsi_3)
                
                r15_1 = var_738_1
                result_5 = arg_8.q
            
            uint64_t rdi_7 = rsi_3
            
            if (rsi_3 s< r14_5)
                int64_t rbx_6 = result_5 + ((rsi_3 + r15_1) << 2)
                
                do
                    float (* rax_29)[0x4] = sub_141a8b4d0(&var_698, &var_6a8, rdi_7, r13_1)
                    rdi_7 += 4
                    *rbx_6 = __subps_xmmps_memps(*rbx_6, *rax_29)
                    rbx_6 += 0x10
                while (rdi_7 s< r14_5)
            
            rdi_4 = var_720_2
            
            if (r14_5 s< rdi_4)
                float* r15_2 = arg_8.q + ((r14_5 + r15_1) << 2)
                
                do
                    sub_141a8c650(&var_288, sub_141ad7610(&var_698, &var_4a8, r14_5))
                    int64_t* rax_32 = sub_141ad72b0(&var_618, &var_558, r13_1)
                    sub_141a8c650(&var_3f0, &var_288)
                    sub_141a8c650(&var_340, rax_32)
                    
                    if (var_338 != 0)
                        float* r12_4 = var_3f0
                        void* r8_10 = 1
                        float* r11_3 = var_340
                        zmm2 = *r12_4 * *r11_3
                        
                        if (var_338 s> 1)
                            float zmm0_3
                            
                            if (var_338 s> 4)
                                float* rdx_23 = &r12_4[var_360 * 3]
                                void* rcx_34 = &r11_3[3]
                                int64_t i_6 = ((var_338 - 5) u>> 2) + 1
                                r8_10 = (i_6 << 2) + 1
                                int64_t i_1
                                
                                do
                                    zmm0_3 = *rcx_34 * *rdx_23
                                    zmm2 = zmm2 + rdx_23[neg.q(var_360) * 2] f* *(rcx_34 - 8)
                                        + rdx_23[neg.q(var_360)] f* *(rcx_34 - 4)
                                    float zmm1_2 = rdx_23[var_360] f* *(rcx_34 + 4)
                                    rdx_23 = &rdx_23[var_360 * 4]
                                    rcx_34 += 0x10
                                    zmm2 = zmm2 + zmm0_3 + zmm1_2
                                    i_1 = i_6
                                    i_6 -= 1
                                while (i_1 != 1)
                                rdi_4 = var_720_2
                            
                            if (r8_10 s< var_338)
                                float* rcx_35 = &r12_4[r8_10 * var_360]
                                
                                do
                                    zmm0_3 = r11_3[r8_10]
                                    r8_10 += 1
                                    zmm0_3 = zmm0_3 * *rcx_35
                                    rcx_35 = &rcx_35[var_360]
                                    zmm2 = zmm2 + zmm0_3
                                while (r8_10 s< var_338)
                    else
                        zmm2 = (zx.o(0)).d
                    
                    r14_5 += 1
                    *r15_2 = *r15_2 - zmm2
                    r15_2 = &r15_2[1]
                while (r14_5 s< rdi_4)
                
                rsi_3 = arg_18
                r15_1 = var_738_1
            
            int32_t rax_40
            int32_t rdx_25
            rdx_25:rax_40 = sx.o(result_3 + rsi_3)
            uint64_t rdx_26 = zx.q(rdx_25) & 3
            uint64_t rax_43 = (zx.q(rax_40 + rdx_26.d) & 3) - rdx_26
            rsi_3 = rax_43
            
            if (rdi_4 s< rax_43)
                rsi_3 = rdi_4
            
            r13_1 += 1
            arg_18 = rsi_3
            result = result_1 + (r12 << 2)
            var_728_1 = r13_1
            result_5 = arg_8.q
            r15_1 += r12
            var_738_1 = r15_1
            result_1 = result
        while (r13_1 s< r8_3)
else
    int64_t i_2 = 0
    int64_t i_3 = 0
    
    if (arg1[2] s> 0)
        result = r12 << 2
        int64_t rcx_9 = rdx_1 << 2
        void* rdi_1 = rdi - r15
        int64_t result_2 = result
        void* var_720_1 = rdi_1
        int64_t var_710_1 = rcx_9
        
        do
            int64_t j = 0
            
            if (arg1[1] s> 0)
                do
                    int64_t var_550_1 = var_618:8.q
                    int64_t var_4f0_1 = rcx_2
                    int64_t var_4e8_1 = rcx_3
                    int64_t var_4e0_1 = rcx_4
                    int64_t var_4d8_1 = rcx_5
                    int64_t var_4d0_1 = rcx_6
                    var_4a8 = rdi_1 + r15
                    uint64_t var_498_1 = var_688
                    float var_510_1[0x4] = zmm0
                    int64_t var_4c8_1 = rdx_1
                    zmm0 = data_142e1c950
                    int64_t var_4b0_1 = rdx_1
                    int64_t var_420_1 = rcx_1
                    var_558 = rsi
                    int128_t var_540_1 = zmm7
                    int64_t var_4c0_1 = 0
                    uint64_t var_530_1 = zmm13.q
                    int128_t var_528_1 = zmm14
                    int64_t i_4 = i_2
                    uint64_t var_518_1 = zmm15.q
                    uint64_t var_500_1 = zmm1
                    int128_t var_490_1 = zmm6
                    int64_t var_440_1 = r9_1
                    uint64_t var_480_1 = zmm8.q
                    int128_t var_478_1 = zmm9
                    int64_t var_438_1 = r10_1
                    uint64_t var_468_1 = zmm10.q
                    int128_t var_460_1 = zmm11
                    int64_t var_430_1 = r11
                    uint64_t var_450_1 = zmm12.q
                    int64_t var_428_1 = r14
                    int64_t var_418_1 = r8
                    int64_t j_1 = j
                    float var_408_1[0x4] = zmm0
                    sub_141a8c650(&var_288, &var_4a8)
                    sub_141a8c650(&var_3f0, &var_288)
                    sub_141a8c650(&var_340, &var_558)
                    
                    if (var_338 != 0)
                        float* r14_1 = var_3f0
                        void* rax_13 = 1
                        float* r11_1 = var_340
                        zmm2 = *r14_1 * *r11_1
                        
                        if (var_338 s> 1)
                            if (var_338 s> 4)
                                void* rdx_5 = &r14_1[var_360 * 3]
                                int64_t k_1 = ((var_338 - 5) u>> 2) + 1
                                void* rcx_13 = &r11_1[3]
                                rax_13 = (k_1 << 2) + 1
                                int64_t k
                                
                                do
                                    zmm0 = *(rdx_5 + (neg.q(var_360) << 3))
                                    zmm0[0] = zmm0[0] f* *(rcx_13 - 8)
                                    zmm1.d = (*(rdx_5 + (neg.q(var_360) << 2))).d f* *(rcx_13 - 4)
                                    zmm2 = zmm2 + zmm0[0]
                                    zmm0 = *rcx_13
                                    zmm0[0] = zmm0[0] f* *rdx_5
                                    zmm2 = zmm2 f+ zmm1.d
                                    zmm1.d = (*(rdx_5 + (var_360 << 2))).d f* *(rcx_13 + 4)
                                    rdx_5 += var_360 << 4
                                    rcx_13 += 0x10
                                    zmm2 = zmm2 + zmm0[0] f+ zmm1.d
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                                i_2 = i_3
                                rdi_1 = var_720_1
                                rsi = var_728
                            
                            if (rax_13 s< var_338)
                                void* rcx_14 = &r14_1[var_360 * rax_13]
                                
                                do
                                    zmm0 = r11_1[rax_13]
                                    rax_13 += 1
                                    zmm0[0] = zmm0[0] f* *rcx_14
                                    rcx_14 += var_360 << 2
                                    zmm2 = zmm2 + zmm0[0]
                                while (rax_13 s< var_338)
                        
                        r14 = var_6b8
                    else
                        zmm2 = (zx.o(0)).d
                    
                    zmm0 = *r15
                    j += 1
                    zmm1 = arg_18
                    zmm0[0] = zmm0[0] - zmm2
                    rdx_1 = var_738
                    r8 = var_708
                    r9_1 = var_700
                    r10_1 = var_6f8
                    r11 = var_6f0
                    *r15 = zmm0[0]
                    r15 = &(*r15)[1]
                    zmm0 = var_6a8
                while (j s< arg1[1])
                
                result = result_2
                rcx_9 = var_710_1
                r15 = arg_8.q
            
            rdi_1 += neg.q(r12) << 2
            i_2 += 1
            rsi += rcx_9
            i_3 = i_2
            r15 += result
            var_728 = rsi
            arg_8.q = r15
            var_720_1 = rdi_1
        while (i_2 s< arg1[2])
return result
