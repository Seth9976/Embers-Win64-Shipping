// 函数: sub_141ad6aa0
// 地址: 0x141ad6aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg4
void* r9 = arg3
void* var_518 = arg3
int64_t r15 = arg1
int64_t var_458 = rsi
int128_t zmm6 = arg3.o
int64_t r13 = arg1
uint128_t zmm7 = zx.o(arg2)

if (arg2 s< arg1)
    r15 = arg2

int64_t var_510 = arg1
uint64_t var_4f0 = zmm7.q
int64_t var_4e0 = 0
int64_t var_4d8 = 0
int64_t var_4d0 = rsi
int64_t var_468 = r15
int128_t var_500 = zmm6

if (r15 s<= 0x10)
    return sub_141ad9550(&var_518, arg5, arg6)

int64_t arg_10 = 0
int64_t rax_2
int32_t rdx_1
rdx_1:rax_2 = sx.o(r15)
int64_t rdi_1 = 0
int64_t rax_5 = (rax_2 + (zx.q(rdx_1) & 0x7f)) s>> 7 << 4

if (rax_5 s< 8)
    rax_5 = 8

if (arg7 s< rax_5)
    rax_5 = arg7

*arg6 = 0
int64_t result = -1
int64_t var_488_1 = rax_5

if (r15 s<= 0)
    return -1

void* r11_1 = r9
int64_t rbx_1 = rsi << 2
int64_t rcx_4 = (rbx_1 + 4) * rax_5
int64_t rcx_6 = rax_5 * rsi
uint128_t zmm8 = zx.o(arg2)
int128_t zmm9 = var_518.o
int32_t* r12_2 = arg5 - r9
int64_t var_490_1 = rbx_1
int64_t rcx_7 = r15
int64_t var_560_1 = 0
void* var_550_1 = r9
void* var_558_1 = r9
int32_t* var_530_1 = r12_2

do
    int64_t r10_1 = rax_5
    uint64_t var_4f0_1 = zmm8.q
    
    if (rax_5 s>= rcx_7)
        r10_1 = rcx_7
    
    int64_t var_510_1 = arg1
    int128_t var_4e8_1 = zmm6
    int64_t var_4c8_1 = 0
    int64_t r14_2 = neg.q(r10_1)
    int64_t var_4c0_1 = 0
    int64_t var_4b0_1 = 0
    int64_t r8_3 = r14_2 - rdi_1 + r13
    int64_t r13_1 = r10_1 + rdi_1
    uint64_t var_4d8_1 = zmm7.q
    int64_t var_538_1 = r13_1
    int64_t r14_4 = r14_2 - rdi_1 + r15
    int64_t var_4b8_1 = rsi
    void* var_3b8 = r9 + ((var_560_1 + rdi_1) << 2)
    int64_t var_368_1 = 0
    int64_t var_360_1 = 0
    int64_t rdx_4 = r13_1 * rsi
    int128_t var_500_1 = zmm9
    int128_t var_3a0_1 = zmm9
    int64_t var_508_1 = r14_4
    int64_t var_4a8_1 = r13_1
    int64_t var_4a0_1 = rsi
    int64_t var_3b0_1 = r10_1
    int64_t var_3a8_1 = r10_1
    uint64_t var_390_1 = zmm8.q
    void* var_438 = r9 + ((rdx_4 + rdi_1) << 2)
    int64_t var_3e8_1 = 0
    void* r15_1 = r9 + (rdx_4 << 2)
    int64_t var_3e0_1 = 0
    var_518 = r15_1
    int128_t var_388_1 = zmm6
    uint64_t var_378_1 = zmm7.q
    int64_t var_358_1 = rsi
    int64_t var_350_1 = rdi_1
    int64_t var_348_1 = rdi_1
    int64_t var_2e8_1 = 0
    int64_t var_2e0_1 = 0
    int64_t var_340_1 = rsi
    int64_t var_430_1 = r10_1
    int64_t var_428_1 = r14_4
    int128_t var_420_1 = zmm9
    int64_t var_3d8_1 = rsi
    uint64_t var_410_1 = zmm8.q
    int128_t var_408_1 = zmm6
    uint64_t var_3f8_1 = zmm7.q
    int64_t var_3d0_1 = rdi_1
    int64_t var_3c8_1 = r13_1
    int64_t var_3c0_1 = rsi
    void* var_338 = r9 + ((var_560_1 + r13_1) << 2)
    int64_t var_330_1 = r8_3
    int64_t var_328_1 = r10_1
    int128_t var_320_1 = zmm9
    int64_t var_2d8_1 = rsi
    uint64_t var_310_1 = zmm8.q
    int128_t var_308_1 = zmm6
    uint64_t var_2f8_1 = zmm7.q
    int64_t var_2d0_1 = r13_1
    int64_t var_2b0_1 = r8_3
    void* var_2b8 = r9 + ((rdx_4 + r13_1) << 2)
    int64_t var_268_1 = 0
    int64_t var_260_1 = 0
    int64_t var_2c8_1 = rdi_1
    int64_t var_2c0_1 = rsi
    int64_t var_2a8_1 = r14_4
    int128_t var_2a0_1 = zmm9
    int64_t var_258_1 = rsi
    uint64_t var_290_1 = zmm8.q
    int128_t var_288_1 = zmm6
    uint64_t var_278_1 = zmm7.q
    int64_t var_250_1 = r13_1
    int64_t var_248_1 = r13_1
    int64_t var_240_1 = rsi
    int32_t arg_8
    int64_t rax_14 = sub_141ad6aa0(r10_1 + r8_3, r10_1, var_558_1, rsi, r12_2 + r11_1, &arg_8, 0x10)
    
    if (rax_14 s>= 0 && result == -1)
        result = rax_14 + rdi_1
    
    *arg6 += arg_8
    
    if (rdi_1 s< r13_1)
        void* r9_2 = var_550_1
        int64_t i_4 = r13_1 - rdi_1
        int64_t i_6 = i_4
        int64_t i
        
        do
            *(r12_2 + r9_2) += rdi_1.d
            int64_t r13_2 = 0
            void* rdx_6 = arg3 + (sx.q(*(r12_2 + r9_2)) << 2)
            int32_t zmm0_1
            
            if (rdi_1 s>= 4)
                int32_t* rcx_15 = r9_2 + rbx_1
                int32_t* r15_4 = (rsi << 3) - r9_2 + rdx_6
                int32_t* r11_3 = rdx_6 - r9_2
                void* r14_7 = rdx_6 - r9_2 + rbx_1
                int32_t* r10_5 = rdx_6 - r9_2 - rbx_1
                int64_t rdi_3 = neg.q(arg4)
                int64_t j_2 = ((arg_10 - 4) u>> 2) + 1
                r13_2 = j_2 << 2
                int64_t j
                
                do
                    zmm0_1 = rcx_15[rdi_3]
                    rcx_15[rdi_3] = *(r10_5 + rcx_15)
                    *(r10_5 + rcx_15) = zmm0_1
                    int32_t zmm1 = *rcx_15
                    *rcx_15 = *(r11_3 + rcx_15)
                    *(r11_3 + rcx_15) = zmm1
                    zmm0_1 = *(rbx_1 + rcx_15)
                    *(rbx_1 + rcx_15) = *(rcx_15 + r14_7)
                    *(rcx_15 + r14_7) = zmm0_1
                    zmm1 = rcx_15[rsi * 2]
                    rcx_15[rsi * 2] = *(r15_4 + rcx_15)
                    *(r15_4 + rcx_15) = zmm1
                    rcx_15 = &rcx_15[rsi * 4]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                rdi_1 = arg_10
                i_4 = i_6
                rsi = arg4
                r12_2 = var_530_1
            
            if (r13_2 s< rdi_1)
                int32_t* rdx_7 = rdx_6 - r9_2
                int64_t j_3 = rdi_1 - r13_2
                void* rcx_16 = r9_2 + ((r13_2 * rsi) << 2)
                int64_t j_1
                
                do
                    zmm0_1 = *rcx_16
                    *rcx_16 = *(rdx_7 + rcx_16)
                    *(rdx_7 + rcx_16) = zmm0_1
                    rcx_16 += rbx_1
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            r9_2 += 4
            i = i_4
            i_4 -= 1
            i_6 = i_4
        while (i != 1)
        r15_1 = var_518
        r13_1 = var_538_1
    
    if (r8_3 != 0)
        int64_t var_568_1 = rdi_1
        int64_t rsi_2 = rdi_1
        void* var_188
        
        if (rdi_1 s< r13_1)
            while (true)
                int64_t var_178_1 = r14_4
                var_188 = r15_1 + (sx.q(*(arg5 + (rsi_2 << 2))) << 2)
                void var_170
                sub_141a8c7c0(&var_170, &var_518)
                void* rcx_19 = var_518 + (rsi_2 << 2)
                void var_220
                sub_141a8c7c0(&var_220, &var_518)
                int64_t r12_5 = 0
                int64_t var_1a8
                int64_t var_f8
                int32_t zmm0_2
                
                if (var_508_1 s>= 4)
                    int64_t rdi_5 = neg.q(var_f8)
                    int64_t rsi_4 = neg.q(var_1a8)
                    int32_t* rcx_21 = rcx_19 + (var_1a8 << 3)
                    int64_t r14_9 = neg.q(var_f8)
                    int64_t r15_6 = neg.q(var_1a8)
                    int64_t i_5 = ((var_508_1 - 4) u>> 2) + 1
                    void* rdx_10 = var_188 + (var_f8 << 3)
                    r12_5 = i_5 << 2
                    int64_t i_1
                    
                    do
                        zmm0_2 = rcx_21[r15_6 * 2]
                        rcx_21[r15_6 * 2] = *(rdx_10 + (r14_9 << 3))
                        *(rdx_10 + (r14_9 << 3)) = zmm0_2
                        int32_t zmm1_1 = rcx_21[rsi_4]
                        rcx_21[rsi_4] = *(rdx_10 + (rdi_5 << 2))
                        *(rdx_10 + (rdi_5 << 2)) = zmm1_1
                        zmm0_2 = *rcx_21
                        *rcx_21 = *rdx_10
                        *rdx_10 = zmm0_2
                        zmm1_1 = rcx_21[var_1a8]
                        rcx_21[var_1a8] = *(rdx_10 + (var_f8 << 2))
                        rcx_21 = &rcx_21[var_1a8 * 4]
                        *(rdx_10 + (var_f8 << 2)) = zmm1_1
                        rdx_10 += var_f8 << 4
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    rsi_2 = var_568_1
                    r13_1 = var_538_1
                
                if (r12_5 s< var_508_1)
                    int32_t* rcx_22 = rcx_19 + ((var_1a8 * r12_5) << 2)
                    int64_t i_3 = var_508_1 - r12_5
                    void* rdx_11 = var_188 + ((var_f8 * r12_5) << 2)
                    int64_t i_2
                    
                    do
                        zmm0_2 = *rcx_22
                        *rcx_22 = *rdx_11
                        rcx_22 = &rcx_22[var_1a8]
                        *rdx_11 = zmm0_2
                        rdx_11 += var_f8 << 2
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
                
                rsi_2 += 1
                var_568_1 = rsi_2
                
                if (rsi_2 s>= r13_1)
                    break
                
                r14_4 = var_508_1
                r15_1 = var_518
            
            rbx_1 = var_490_1
            rdi_1 = arg_10
        
        sub_141a8c7c0(&var_518, &var_3b8)
        sub_141a8b8d0(&var_518, &var_438)
        int64_t* rax_40 = sub_141a875a0(&var_338, &var_188, &var_438)
        zmm6, zmm7, zmm8, zmm9 = sub_141a8bb70(&var_2b8, rax_40, &rax_40[0x10])
    
    rax_5 = var_488_1
    rdi_1 += rax_5
    var_560_1 += rcx_6
    var_558_1 += rcx_4
    r11_1 = var_550_1 + (rax_5 << 2)
    r15 = var_468
    rcx_7 -= rax_5
    rsi = arg4
    r12_2 = var_530_1
    r9 = arg3
    r13 = arg1
    arg_10 = rdi_1
    var_550_1 = r11_1
while (rdi_1 s< r15)

return result
