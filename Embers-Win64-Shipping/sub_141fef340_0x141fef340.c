// 函数: sub_141fef340
// 地址: 0x141fef340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
uint64_t r14
uint64_t var_30 = r14
uint128_t zmm6 = sub_141fe9100(arg1)
int32_t r13 = 0
int32_t var_2cc = 8
int32_t i = 0
void* var_2d8 = nullptr
int32_t var_2d0 = 0
int64_t** var_490
int32_t var_488
int64_t* var_480
int32_t var_408
uint128_t var_3f8
void var_398

if (*(arg1 + 0x1b8) s> 0)
    int64_t* r11_1 = nullptr
    var_480 = nullptr
    
    do
        int64_t* rsi_1 = *(r11_1 + *(arg1 + 0x1b0))
        int32_t* r10_1 = rsi_1[0x1a]
        int32_t r15_1
        
        if (r10_1 == 0)
            r15_1 = 0
        else
            r15_1 = *r10_1
        
        if (r10_1 == 0)
            r14 = 0
        else
            r14 = zx.q(r10_1[1])
        
        int32_t r8 = *(arg1 + 0x10)
        int32_t rbx_1 = 0
        int32_t r9_1 = *(arg1 + 0x1d0)
        
        while (true)
            char rcx = rbx_1.b
            
            if (r15_1 u>> rcx u<= r8 && r14.d u>> rcx u<= r8)
                break
            
            rbx_1 += 1
            
            if (rbx_1 u> r9_1)
                rbx_1 = r9_1
                break
        
        int32_t rcx_3
        
        if (r10_1 == 0)
            rcx_3 = 0
        else
            char rax_6 = (*(*rsi_1 + 0x318))(rsi_1)
            void* rcx_2 = rsi_1[0x1a]
            
            if (rax_6 == 0)
                rcx_3 = *(rcx_2 + 0x20)
                r11_1 = var_480
            else
                int32_t rax_7 = sub_1423c1c80(rcx_2)
                r11_1 = var_480
                rcx_3 = rax_7
        
        int32_t rcx_4 = rcx_3 - zx.d(*(rsi_1 + 0x3c))
        
        if (rcx_4 u<= rbx_1)
            *(rsi_1 + 0x3d) &= 0xdf
            var_3f8.q = rsi_1
            var_3f8:8.d = 0xffffffff
            var_3f8:0xc.d = 4
            sub_140e10ae0(arg1 + 0x160, &var_488, &var_3f8)
            int64_t rax_11 = sx.q(var_488)
            int64_t** rax_13
            
            if (rax_11.d == 0xffffffff)
                rax_13 = nullptr
            else
                rax_13 = *(arg1 + 0x160) + rax_11 * 0x18
            
            int32_t r10_2 = *(rax_13 + 0xc)
            char rcx_6 = rbx_1.b
            int64_t rbx_2 = sx.q(var_2d0)
            var_490 = rax_13
            int32_t rax_14 = (rbx_2 + 1).d
            var_408 = r10_2
            var_2d0 = rax_14
            
            if (rax_14 s> var_2cc)
                sub_141feb7c0(&var_398, rbx_2.d)
                r10_2 = var_408
            
            int64_t r8_2 = rbx_2 * 3
            void* r9_2 = &var_398
            
            if (var_2d8 != 0)
                r9_2 = var_2d8
            
            uint64_t rdx_5 = zx.q(var_490[1].d)
            *(r9_2 + (r8_2 << 3)) = *(rsi_1[0xf] + 0x10)
            *(r9_2 + (r8_2 << 3) + 0x10) = rbx_1 - rcx_4
            *(r9_2 + (r8_2 << 3) + 8) = r15_1 u>> rcx_6
            *(r9_2 + (r8_2 << 3) + 0xc) = r14.d u>> rcx_6
            *(r9_2 + (r8_2 << 3) + 0x14) = (rdx_5 << 2).d | (r10_2 & 3)
            int32_t rax_21 = *(arg1 + 0x1b8)
            int32_t r8_5 = rax_21 - i - 1
            
            if (r8_5 s>= 1)
                r8_5 = 1
            
            if (r8_5 != 0)
                int64_t rcx_9 = *(arg1 + 0x1b0)
                memcpy(rcx_9 + (sx.q(i) << 3), rcx_9 + (sx.q(rax_21 - r8_5) << 3), r8_5 << 3)
                rax_21 = *(arg1 + 0x1b8)
            
            *(arg1 + 0x1b8) = rax_21 - 1
            sub_1405c53d0(arg1 + 0x1b0)
            i -= 1
            r11_1 = var_480 - 8
        
        r11_1 = &r11_1[1]
        i += 1
        var_480 = r11_1
    while (i s< *(arg1 + 0x1b8))
    
    r13 = 0

int32_t rax_26 = *(arg1 + 0xc8)
void* rbx_3 = arg1 + 0xc0
uint128_t var_48 = zmm6
int32_t rax_27 = rax_26 - *(arg1 + 0xf4)
char var_498
uint128_t var_468
uint128_t var_438
uint128_t var_428
int64_t var_418
int128_t* var_3e8

if (rax_26 != *(arg1 + 0xf4))
    char var_497
    var_480 = &var_497
    
    if (rax_27 s> 0)
        sub_1407e8ed0(rbx_3)
        int32_t rdx_8 = *(rbx_3 + 8) - *(rbx_3 + 0x34)
        char r8_8 = var_497
        int64_t rcx_13 = *rbx_3
        var_490 = &var_480
        sub_141fd4380(rcx_13, rdx_8, r8_8)
    
    sub_1405c0420(rbx_3)
    void* r15_3 = rbx_3 + 0x10
    int32_t var_454_1 = 1
    int32_t rsi_2 = *(r15_3 + 0x18)
    r14.b = 0
    var_498 = 0
    int32_t rcx_15 = 0
    int32_t var_458_1 = 0
    int32_t r9_3 = 0
    int32_t r8_9 = 0
    int32_t var_448_1 = 0xffffffff
    int64_t var_444_1 = 0
    
    if (rsi_2 != 0)
        void* rax_28 = *(r15_3 + 0x10)
        void* r10_4 = r15_3
        r9_3 = rsi_2
        
        if (rax_28 != 0)
            r10_4 = rax_28
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rsi_2 - 1)
        int32_t rdx_11 = *r10_4
        
        if (rdx_11 != 0)
        label_141fef6ca:
            int32_t rax_35 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_35)
            int32_t var_454_2 = rax_35
            int32_t rax_36
            
            if (rax_35 == 0)
                rax_36 = 0x20
            else
                rax_36 = 0x1f - temp0_1
            
            int32_t rax_37 = r8_9 - rax_36 + 0x1f
            
            if (rax_37 s> rsi_2)
                rax_37 = rsi_2
            
            r9_3 = rax_37
            var_444_1.d = rax_37
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_15)
                r8_9 += 0x20
                rcx_15 += 1
                var_444_1:4.d = r8_9
                var_458_1 = rcx_15
                
                if (rdx_12.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    var_444_1.d = rsi_2
                    break
                
                rdx_11 = *(r10_4 + (rdx_12 << 2) + 4)
                int32_t var_448_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141fef6ca
    
    uint128_t var_3c8_1 = var_458_1.o
    int128_t var_3b8_1 = 0xffffffff
    var_418 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_438 = rbx_3.o
    var_428 = var_3c8_1
    
    if (r9_3 s< rsi_2)
        int32_t i_1 = var_428:0xc.d
        
        do
            zmm6 = *(*var_438.q + sx.q(i_1) * 0x18)
            uint128_t var_3a8_1 = zmm6
            
            if (r14.b != 0)
                sub_140598750(arg1 + 0x110, &var_468)
                uint128_t* r9_7 = var_468:8.q
                char* var_4a0_3 = nullptr
                *r9_7 = zmm6
                r9_7[1].d = 0xffffffff
                uint32_t r10_22 = (*r9_7 u>> 4).d
                int32_t r8_37 = r10_22 << 8 ^ (0x9e3779b9 - r10_22)
                int32_t rdx_41 = neg.d(r8_37 + r10_22) ^ r8_37 u>> 0xd
                int32_t r10_25 = (r10_22 - r8_37 - rdx_41) ^ rdx_41 u>> 0xc
                int32_t r8_40 = (r8_37 - r10_25 - rdx_41) ^ r10_25 << 0x10
                int32_t rdx_44 = (rdx_41 - r8_40 - r10_25) ^ r8_40 u>> 5
                int32_t r10_28 = (r10_25 - r8_40 - rdx_44) ^ rdx_44 u>> 3
                int32_t r8_43 = (r8_40 - r10_28 - rdx_44) ^ r10_28 << 0xa
                sub_141fdedb0(arg1 + 0x110, &var_480, r8_43 u>> 0xf ^ (rdx_44 - (r8_43 + r10_28)), 
                    r9_7, var_468.d, var_4a0_3)
            else
                int64_t* rsi_3 = zmm6.q
                int32_t* rax_40 = rsi_3[0x1a]
                int32_t r15_4
                
                if (rax_40 == 0)
                    r15_4 = 0
                else
                    r15_4 = *rax_40
                
                int32_t r14_1
                
                if (rax_40 == 0)
                    r14_1 = 0
                else
                    r14_1 = rax_40[1]
                
                int32_t r8_11 = *(arg1 + 0x10)
                int32_t rbx_4 = 0
                int32_t r9_4 = *(arg1 + 0x1d0)
                
                while (true)
                    char rcx_18 = rbx_4.b
                    
                    if (r15_4 u>> rcx_18 u<= r8_11 && r14_1 u>> rcx_18 u<= r8_11)
                        break
                    
                    rbx_4 += 1
                    
                    if (rbx_4 u> r9_4)
                        rbx_4 = r9_4
                        break
                
                char rcx_19 = rbx_4.b
                uint32_t r15_5 = r15_4 u>> rcx_19
                r14 = zx.q(r14_1 u>> rcx_19)
                int32_t rax_43 = sub_141fdb070(arg1 + 0x10, r15_5, r14.d)
                var_488 = rax_43
                int32_t r12_1 = _mm_bsrli_si128(zmm6, 0xc).d & 3
                
                if (rax_43 != 0xffffffff)
                    int32_t rcx_25
                    
                    if (rsi_3[0x1a] == 0)
                        rcx_25 = 0
                    else
                        char rax_61 = (*(*rsi_3 + 0x318))(rsi_3)
                        void* rcx_24 = rsi_3[0x1a]
                        
                        if (rax_61 == 0)
                            rcx_25 = *(rcx_24 + 0x20)
                        else
                            rcx_25 = sub_1423c1c80(rcx_24)
                    
                    int32_t rcx_26 = rcx_25 - zx.d(*(rsi_3 + 0x3c))
                    
                    if (rcx_26 u<= rbx_4)
                        r13 = rbx_4 - rcx_26
                    
                    if (rcx_26 u> rbx_4)
                        *(rsi_3 + 0x3d) |= 0x20
                        int64_t r13_2 = sx.q(*(arg1 + 0x1b8))
                        int32_t rax_66 = (r13_2 + 1).d
                        *(arg1 + 0x1b8) = rax_66
                        
                        if (rax_66 s> *(arg1 + 0x1bc))
                            sub_1405a4d70(arg1 + 0x1b0)
                        
                        *(*(arg1 + 0x1b0) + (r13_2 << 3)) = rsi_3
                    
                    var_3a8_1:8.d = var_488
                    sub_140598750(arg1 + 0x160, &var_3e8)
                    char* var_4a0_2 = nullptr
                    uint128_t* var_3e0
                    *var_3e0 = var_3a8_1
                    var_3e0[1].d = 0xffffffff
                    uint32_t r10_14 = (*var_3e0 u>> 4).d
                    int32_t r8_25 = r10_14 << 8 ^ (0x9e3779b9 - r10_14)
                    int32_t rdx_30 = neg.d(r8_25 + r10_14) ^ r8_25 u>> 0xd
                    int32_t r10_17 = (r10_14 - r8_25 - rdx_30) ^ rdx_30 u>> 0xc
                    int32_t r8_28 = (r8_25 - r10_17 - rdx_30) ^ r10_17 << 0x10
                    int32_t rdx_33 = (rdx_30 - r8_28 - r10_17) ^ r8_28 u>> 5
                    int32_t r10_20 = (r10_17 - r8_28 - rdx_33) ^ rdx_33 u>> 3
                    int32_t r8_31 = (r8_28 - r10_20 - rdx_33) ^ r10_20 << 0xa
                    sub_141fdedb0(arg1 + 0x160, &var_490, 
                        r8_31 u>> 0xf ^ (rdx_33 - (r8_31 + r10_20)), var_3e0, var_3e8.d, var_4a0_2)
                    int64_t rbx_5 = sx.q(var_2d0)
                    int32_t rax_83 = (rbx_5 + 1).d
                    var_2d0 = rax_83
                    
                    if (rax_83 s> var_2cc)
                        sub_141feb7c0(&var_398, rbx_5.d)
                    
                    int64_t rdx_37 = rbx_5 * 3
                    void* r8_34 = &var_398
                    
                    if (var_2d8 != 0)
                        r8_34 = var_2d8
                    
                    uint64_t rax_86 = zx.q(var_488)
                    *(r8_34 + (rdx_37 << 3)) = *(rsi_3[0xf] + 0x10)
                    *(r8_34 + (rdx_37 << 3) + 0xc) = r14.d
                    r14 = zx.q(var_498)
                    *(r8_34 + (rdx_37 << 3) + 0x10) = r13
                    *(r8_34 + (rdx_37 << 3) + 8) = r15_5
                    *(r8_34 + (rdx_37 << 3) + 0x14) = (rax_86 << 2).d | (r12_1 & 3)
                    r13 = 0
                else
                    sub_140598750(arg1 + 0x110, &var_3f8)
                    int64_t* r9_5 = var_3f8:8.q
                    char* var_4a0_1 = nullptr
                    *r9_5 = zmm6
                    r9_5[2].d = 0xffffffff
                    uint32_t r10_6 = (*r9_5 u>> 4).d
                    int32_t r8_14 = (0x9e3779b9 - r10_6) ^ r10_6 << 8
                    int32_t rdx_20 = neg.d(r8_14 + r10_6) ^ r8_14 u>> 0xd
                    int32_t r10_9 = (r10_6 - r8_14 - rdx_20) ^ rdx_20 u>> 0xc
                    int32_t r8_17 = (r8_14 - r10_9 - rdx_20) ^ r10_9 << 0x10
                    int32_t rdx_23 = (rdx_20 - r8_17 - r10_9) ^ r8_17 u>> 5
                    int32_t r10_12 = (r10_9 - r8_17 - rdx_23) ^ rdx_23 u>> 3
                    int32_t r8_20 = (r8_17 - r10_12 - rdx_23) ^ r10_12 << 0xa
                    sub_141fdedb0(arg1 + 0x110, &var_408, 
                        r8_20 u>> 0xf ^ (rdx_23 - (r8_20 + r10_12)), r9_5, var_3f8.d, var_4a0_1)
                    r14.b = 1
                    var_498 = 1
            
            var_428:8.d &= not.d(var_438:0xc.d)
            sub_14059bdd0(&var_438:8)
            i_1 = var_428:0xc.d
        while (i_1 s< *(var_428.q + 0x18))
        
        if (r14.b != 0)
            var_480 = &var_497
            
            if (*(arg1 + 0x118) - *(arg1 + 0x144) s> 0)
                sub_1407e8ed0(arg1 + 0x110)
                int32_t rdx_48 = *(arg1 + 0x118) - *(arg1 + 0x144)
                char r8_46 = var_497
                int64_t rcx_37 = *(arg1 + 0x110)
                var_490 = &var_480
                sub_141fd4380(rcx_37, rdx_48, r8_46)
            
            sub_1405c0420(arg1 + 0x110)
        
        rbx_3 = arg1 + 0xc0
    
    bool cond:2_1 = *(rbx_3 + 0xc) == 0
    *(rbx_3 + 8) = 0
    
    if (not(cond:2_1))
        sub_1405a5130(rbx_3, 0)
    
    *(rbx_3 + 0x30) = 0xffffffff
    *(rbx_3 + 0x34) = 0
    sub_14059a8e0(r15_3, 0)
    int32_t i_4 = *(rbx_3 + 0x48)
    
    if (i_4 s> 0)
        int64_t r8_47 = 0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i_2
        
        do
            void* rcx_41 = *(rbx_3 + 0x40)
            void* rax_109 = rbx_3 + 0x38
            int64_t rdx_51 = (sx.q(*(rbx_3 + 0x48)) - 1) & r8_47
            
            if (rcx_41 != 0)
                rax_109 = rcx_41
            
            r8_47 += 1
            *(rax_109 + (rdx_51 << 2)) = 0xffffffff
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

uint64_t result = zx.q(*(arg1 + 0x118))
var_490 = arg1 + 0x110

if (result.d != *(arg1 + 0x144))
    void* r9_8 = arg1 + 0x120
    int32_t var_454_3 = 1
    int32_t result_1 = *(r9_8 + 0x18)
    int32_t rcx_42 = 0
    int32_t var_458_2 = 0
    int32_t result_2 = 0
    void* var_450_2 = r9_8
    int32_t r8_48 = 0
    int32_t var_448_3 = 0xffffffff
    int64_t var_444_2 = 0
    
    if (result_1 != 0)
        void* rax_110 = *(r9_8 + 0x10)
        result_2 = result_1
        
        if (rax_110 != 0)
            r9_8 = rax_110
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(result_1 - 1)
        int32_t rdx_54 = *r9_8
        result = zx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        
        if (rdx_54 != 0)
        label_141fefcba:
            int32_t rax_116 = ((rdx_54 - 1) & rdx_54) ^ rdx_54
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_116)
            int32_t var_454_4 = rax_116
            int32_t r12_3
            
            if (rax_116 == 0)
                r12_3 = 0x20
            else
                r12_3 = 0x1f - temp0_4
            
            result = zx.q(r8_48 - r12_3 + 0x1f)
            
            if (result.d s> result_1)
                result = zx.q(result_1)
            
            result_2 = result.d
            var_444_2.d = result.d
        else
            while (true)
                int64_t rdx_55 = sx.q(rcx_42)
                r8_48 += 0x20
                rcx_42 += 1
                var_444_2:4.d = r8_48
                var_458_2 = rcx_42
                
                if (rdx_55.d s>= result.d)
                    var_444_2.d = result_1
                    break
                
                rdx_54 = *(r9_8 + (rdx_55 << 2) + 4)
                int32_t var_448_4 = 0xffffffff
                
                if (rdx_54 != 0)
                    goto label_141fefcba
    
    uint128_t var_3c8_2 = var_458_2.o
    int128_t var_3b8_2 = 0xffffffff
    var_418 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_438 = (arg1 + 0x110).o
    var_428 = var_3c8_2
    
    if (result_2 s< result_1)
        int32_t rcx_44 = var_428:0xc.d
        
        while (true)
            uint128_t zmm0_1 = *(*var_438.q + sx.q(rcx_44) * 0x18)
            int64_t* rsi_4 = zmm0_1.q
            var_3f8 = zmm0_1
            int32_t* rax_119 = rsi_4[0x1a]
            int32_t r15_6
            
            if (rax_119 == 0)
                r15_6 = 0
            else
                r15_6 = *rax_119
            
            int32_t r14_3
            
            if (rax_119 == 0)
                r14_3 = 0
            else
                r14_3 = rax_119[1]
            
            int32_t r8_50 = *(arg1 + 0x10)
            int32_t rbx_7 = 0
            int32_t r9_9 = *(arg1 + 0x1d0)
            
            while (true)
                char rcx_46 = rbx_7.b
                
                if (r15_6 u>> rcx_46 u<= r8_50 && r14_3 u>> rcx_46 u<= r8_50)
                    break
                
                rbx_7 += 1
                
                if (rbx_7 u> r9_9)
                    rbx_7 = r9_9
                    break
            
            char rcx_47 = rbx_7.b
            uint32_t r15_7 = r15_6 u>> rcx_47
            uint32_t r14_4 = r14_3 u>> rcx_47
            result = sub_141fdb070(arg1 + 0x10, r15_7, r14_4)
            int32_t r12_5 = var_3f8:0xc.d & 3
            var_488 = result.d
            
            if (result.d == 0xffffffff)
                break
            
            int32_t rcx_51
            
            if (rsi_4[0x1a] == 0)
                rcx_51 = 0
            else
                int64_t rdx_60 = *rsi_4
                char rax_122 = (*(rdx_60 + 0x318))(rsi_4, rdx_60)
                void* rcx_50 = rsi_4[0x1a]
                
                if (rax_122 == 0)
                    rcx_51 = *(rcx_50 + 0x20)
                else
                    rcx_51 = sub_1423c1c80(rcx_50)
            
            int32_t rcx_52 = rcx_51 - zx.d(*(rsi_4 + 0x3c))
            
            if (rcx_52 u<= rbx_7)
                r13 = rbx_7 - rcx_52
            
            if (rcx_52 u> rbx_7)
                *(rsi_4 + 0x3d) |= 0x20
                int64_t r13_3 = sx.q(*(arg1 + 0x1b8))
                int32_t rax_127 = (r13_3 + 1).d
                *(arg1 + 0x1b8) = rax_127
                
                if (rax_127 s> *(arg1 + 0x1bc))
                    sub_1405a4d70(arg1 + 0x1b0)
                
                *(*(arg1 + 0x1b0) + (r13_3 << 3)) = rsi_4
            
            var_3f8:8.d = var_488
            sub_140598750(arg1 + 0x160, &var_468)
            int64_t* r9_10 = var_468:8.q
            char* var_4a0_4 = nullptr
            *r9_10 = var_3f8
            r9_10[2].d = 0xffffffff
            uint32_t rdx_64 = (*r9_10 u>> 4).d
            int32_t r10_32 = rdx_64 << 8 ^ (0x9e3779b9 - rdx_64)
            int32_t r8_54 = neg.d(rdx_64 + r10_32) ^ r10_32 u>> 0xd
            int32_t rdx_67 = (rdx_64 - r10_32 - r8_54) ^ r8_54 u>> 0xc
            int32_t r10_35 = (r10_32 - rdx_67 - r8_54) ^ rdx_67 << 0x10
            int32_t r8_57 = (r8_54 - r10_35 - rdx_67) ^ r10_35 u>> 5
            int32_t rdx_70 = (rdx_67 - r10_35 - r8_57) ^ r8_57 u>> 3
            int32_t r10_38 = (r10_35 - rdx_70 - r8_57) ^ rdx_70 << 0xa
            sub_141fdedb0(arg1 + 0x160, &var_480, (r8_57 - r10_38 - rdx_70) ^ r10_38 u>> 0xf, 
                r9_10, var_468.d, var_4a0_4)
            int64_t rbx_8 = sx.q(var_2d0)
            int32_t rax_143 = (rbx_8 + 1).d
            var_2d0 = rax_143
            
            if (rax_143 s> var_2cc)
                sub_141feb7c0(&var_398, rbx_8.d)
            
            int64_t r9_11 = rbx_8 * 3
            void* r10_40 = &var_398
            int64_t** rcx_58 = var_490
            
            if (var_2d8 != 0)
                r10_40 = var_2d8
            
            uint64_t rax_146 = zx.q(var_488)
            *(r10_40 + (r9_11 << 3)) = *(rsi_4[0xf] + 0x10)
            *(r10_40 + (r9_11 << 3) + 8) = r15_7
            *(r10_40 + (r9_11 << 3) + 0xc) = r14_4
            *(r10_40 + (r9_11 << 3) + 0x10) = r13
            *(r10_40 + (r9_11 << 3) + 0x14) = (r12_5 & 3) | (rax_146 << 2).d
            sub_1405c2fb0(rcx_58, var_428:0xc.d)
            var_428:8.d &= not.d(var_438:0xc.d)
            sub_14059bdd0(&var_438:8)
            result = var_428.q
            r13 = 0
            rcx_44 = var_428:0xc.d
            
            if (rcx_44 s>= *(result + 0x18))
                break
            
            var_490 = arg1 + 0x110

if (var_2d0 != 0)
    void* rsi_5 = arg2
    void var_2c8
    sub_1419928d0(&var_2c8, rsi_5)
    void** r14_5 = rsi_5 + 0x30
    int64_t** rax_151 = *(arg1 + 0x1c8)
    int64_t*** rbx_11 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
    var_490 = rax_151
    var_480 = r14_5
    void* rcx_61 = &rbx_11[1]
    
    if (rcx_61 u> r14_5[1])
        sub_140b0e3d0(r14_5, 0x10)
        rax_151 = var_490
        rbx_11 = (*r14_5 + 7) & 0xfffffffffffffff8
        rcx_61 = &rbx_11[1]
    
    *r14_5 = rcx_61
    *rbx_11 = rax_151
    void* rcx_65 = (*r14_5 + 7) & 0xfffffffffffffff8
    void* rax_152 = rcx_65 + 0x30
    
    if (rax_152 u> r14_5[1])
        sub_140b0e3d0(r14_5, 0x38)
        rcx_65 = (*r14_5 + 7) & 0xfffffffffffffff8
        rax_152 = rcx_65 + 0x30
    
    *r14_5 = rax_152
    void** rax_153 = *(rsi_5 + 8)
    *(rsi_5 + 0x14) += 1
    *rax_153 = rcx_65
    *(rsi_5 + 8) = rcx_65 + 8
    *(rcx_65 + 8) = 0
    *rcx_65 = &data_142da7798
    *(rcx_65 + 0x10) = 1
    *(rcx_65 + 0x18) = rbx_11
    *(rcx_65 + 0x20) = 2
    *(rcx_65 + 0x24) = 3
    *(rcx_65 + 0x28) = 0
    int32_t rbx_14 = *(arg1 + 0x1d8)
    int64_t* rax_156 = std::_Get_future_error_what((*U"1111")[sx.q(arg3)])
    uint128_t* rdx_75 = &var_468
    int64_t* var_2c0
    
    if (rbx_14 != 0)
        sub_1419a2ec0(rax_156, rdx_75, &data_143f3ddd0, 0)
        int32_t r15_9 = 0
        
        if (var_2d0 s> 0)
            int64_t r12_9 = 0
            
            do
                int128_t* rax_165
                int128_t zmm6_2
                rax_165, zmm6_2 = sub_14081d830(0x60, var_2c0, 1, 0)
                int128_t* rbx_16 = rax_165
                
                if (rax_165 == 0)
                    rbx_16 = nullptr
                else
                    rax_165[1].q = 0
                    *(rax_165 + 0x18) = 0
                    *(rax_165 + 0x1c) = 0x3f800000
                    *(rax_165 + 0x28) = 0
                    rax_165[3].q = 0
                    rax_165[4].q = 0
                    *(rax_165 + 0x48) = 0
                    *(rax_165 + 0x4c) = 0x3f800000
                    rax_165[5].q = 0
                
                memset(rbx_16, 0, 0x60)
                void* rcx_78 = &var_398
                
                if (var_2d8 != 0)
                    rcx_78 = var_2d8
                
                int64_t* rcx_79 = rcx_78 + r12_9
                
                if (*(arg1 + 0x1d8) != 0)
                    uint64_t rax_169 = zx.q(*(rcx_79 + 0x14)) & 3
                    var_468 = zx.o(0)
                    *(&var_468 + (rax_169 << 2)) = 0x3f800000
                    rbx_16[4] = var_468
                    rbx_16[5].q = *(arg1 + 0x1c8)
                else
                    rbx_16[4].q = *(arg1 + 0x1c8)
                
                sub_141fec980(rcx_79, &var_490, rbx_16, arg1)
                var_418.b = r15_9 s> 0
                var_438.q = rbx_16
                var_428:8.q = var_490
                var_438 = zmm6_2
                void*** rax_172
                char rcx_80
                rax_172, rcx_80 = sub_14081d830(0x60, var_2c0, 1, 0)
                void*** rsi_7 = rax_172
                
                if (rax_172 == 0)
                    rsi_7 = nullptr
                else
                    var_3e8 = rbx_16
                    sub_141fe47d0(rcx_80)
                    void* var_3e0_2 = &data_143f3ec20
                    var_468 = var_3e8.o
                    sub_141992bd0(rsi_7, &var_498, &var_468, 2)
                    uint128_t zmm0_11 = var_438
                    *rsi_7 = &data_143296a40
                    *(rsi_7 + 0x38) = zmm0_11
                    *(rsi_7 + 0x48) = var_428
                    rsi_7[0xb] = var_418
                
                sub_1419968d0(&var_2c8, rsi_7)
                r15_9 += 1
                r12_9 += 0x18
            while (r15_9 s< var_2d0)
            
            rsi_5 = arg2
            r14_5 = var_480
    else
        sub_1419a2ec0(rax_156, rdx_75, &data_143f3dcc0, 0)
        int32_t r15_8 = 0
        
        if (var_2d0 s> rbx_14)
            int64_t r12_8 = 0
            
            do
                int128_t* rax_157
                int128_t zmm6_1
                rax_157, zmm6_1 = sub_14081d830(0x50, var_2c0, 1, 0)
                int128_t* rbx_15 = rax_157
                
                if (rax_157 == 0)
                    rbx_15 = nullptr
                else
                    *(rax_157 + 0x28) = 0
                    rax_157[3].q = 0
                    rax_157[4].q = 0
                    rax_157[1].q = 0
                    *(rax_157 + 0x18) = 0
                    *(rax_157 + 0x1c) = 0x3f800000
                
                memset(rbx_15, 0, 0x50)
                void* rcx_72 = &var_398
                
                if (var_2d8 != 0)
                    rcx_72 = var_2d8
                
                void* rcx_73 = rcx_72 + r12_8
                
                if (*(arg1 + 0x1d8) != 0)
                    uint64_t rax_161 = zx.q(*(rcx_73 + 0x14)) & 3
                    var_468 = zx.o(0)
                    *(&var_468 + (rax_161 << 2)) = 0x3f800000
                    rbx_15[4] = var_468
                    rbx_15[5].q = *(arg1 + 0x1c8)
                else
                    rbx_15[4].q = *(arg1 + 0x1c8)
                
                sub_141fec980(rcx_73, &var_490, rbx_15, arg1)
                var_418.b = r15_8 s> 0
                var_438.q = rbx_15
                var_428:8.q = var_490
                var_438 = zmm6_1
                void*** rax_164
                char rcx_74
                rax_164, rcx_74 = sub_14081d830(0x60, var_2c0, 1, 0)
                void*** rsi_6 = rax_164
                
                if (rax_164 == 0)
                    rsi_6 = nullptr
                else
                    var_3e8 = rbx_15
                    sub_141fe4660(rcx_74)
                    void* var_3e0_1 = &data_143f3eb10
                    var_468 = var_3e8.o
                    sub_141992bd0(rsi_6, &var_498, &var_468, 2)
                    uint128_t zmm0_8 = var_438
                    *rsi_6 = &data_143296a30
                    *(rsi_6 + 0x38) = zmm0_8
                    *(rsi_6 + 0x48) = var_428
                    rsi_6[0xb] = var_418
                
                sub_1419968d0(&var_2c8, rsi_6)
                r15_8 += 1
                r12_8 += 0x18
            while (r15_8 s< var_2d0)
            
            rsi_5 = arg2
            r14_5 = var_480
    sub_14199ef00(&var_2c8)
    int64_t rax_173 = *(arg1 + 0x1c8)
    void* rbx_19 = (*r14_5 + 7) & 0xfffffffffffffff8
    void* rcx_84 = rbx_19 + 8
    
    if (rcx_84 u> r14_5[1])
        sub_140b0e3d0(r14_5, 0x10)
        rbx_19 = (*r14_5 + 7) & 0xfffffffffffffff8
        rcx_84 = rbx_19 + 8
    
    *r14_5 = rcx_84
    *rbx_19 = rax_173
    void* rcx_88 = (*r14_5 + 7) & 0xfffffffffffffff8
    void* rax_174 = rcx_88 + 0x30
    
    if (rax_174 u> r14_5[1])
        sub_140b0e3d0(r14_5, 0x38)
        rcx_88 = (*r14_5 + 7) & 0xfffffffffffffff8
        rax_174 = rcx_88 + 0x30
    
    *r14_5 = rax_174
    void** rax_175 = *(rsi_5 + 8)
    *(rsi_5 + 0x14) += 1
    *rax_175 = rcx_88
    *(rsi_5 + 8) = rcx_88 + 8
    *rcx_88 = &data_142da7798
    *(rcx_88 + 0x10) = 1
    *(rcx_88 + 0x18) = rbx_19
    *(rcx_88 + 0x20) = 0
    *(rcx_88 + 0x24) = 1
    *(rcx_88 + 0x28) = 0
    *(rcx_88 + 8) = 0
    result = sub_1410eb9e0(&var_2c8)

if (var_2d8 != 0)
    result = sub_140a74f90(var_2d8)

__security_check_cookie(rax_1 ^ &var_4c8)
return result
