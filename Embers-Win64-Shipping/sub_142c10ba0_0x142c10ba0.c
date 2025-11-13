// 函数: sub_142c10ba0
// 地址: 0x142c10ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t rcx = *(arg1 + 0x24)
uint128_t zmm7
uint128_t var_48 = zmm7
int32_t i
i.b = rcx.b & 7
uint128_t var_78
uint128_t var_68
double var_58[0x2]

if (i.b u< 4)
    if (rcx u>= 8)
        int32_t rsi_24 = 1
        
        do
            var_58 = *(arg1 + 0xb0)
            
            if (rsi_24 - 1 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r14_9
            
            if (rsi_24 - 1 u< *(arg1 + 0x28))
                r14_9 = (zx.q(rsi_24 - 1) << 5) + *(arg1 + 0x30)
            else
                r14_9 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r14_9)
            zmm7.q = var_58[0] f+ *r14_9
            var_58[0] = zmm7.q
            var_78 = var_58
            
            if (rsi_24 + 1 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            double* r14_12
            
            if (rsi_24 + 1 u< *(arg1 + 0x28))
                r14_12 = (zx.q(rsi_24 + 1) << 5) + *(arg1 + 0x30)
            else
                r14_12 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r14_12)
            
            if (rsi_24 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r15_2
            
            if (rsi_24 u< *(arg1 + 0x28))
                r15_2 = (zx.q(rsi_24) << 5) + *(arg1 + 0x30)
            else
                r15_2 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r15_2)
            zmm7.q = zmm7.q f+ *r15_2
            uint128_t zmm0_11 = _mm_unpacklo_pd(zmm7, var_78:8.q f+ *r14_12)
            var_78 = zmm0_11
            var_68 = zmm0_11
            
            if (rsi_24 + 2 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int128_t* r14_15
            
            if (rsi_24 + 2 u< *(arg1 + 0x28))
                r14_15 = (zx.q(rsi_24 + 2) << 5) + *(arg1 + 0x30)
            else
                r14_15 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            var_68:8.q = sub_142c0e810(arg1, r14_15) f+ *r14_15
            sub_142c0ea90(arg1, arg2, &var_58, &var_78, &var_68)
            var_58 = var_68
            
            if (rsi_24 + 3 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r14_18
            
            if (rsi_24 + 3 u< *(arg1 + 0x28))
                r14_18 = (zx.q(rsi_24 + 3) << 5) + *(arg1 + 0x30)
            else
                r14_18 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            var_58[1] = sub_142c0e810(arg1, r14_18) f+ *r14_18
            var_78 = var_58
            
            if (rsi_24 + 5 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r14_21
            
            if (rsi_24 + 5 u< *(arg1 + 0x28))
                r14_21 = (zx.q(rsi_24 + 5) << 5) + *(arg1 + 0x30)
            else
                r14_21 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r14_21)
            
            if (rsi_24 + 4 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r15_5
            
            if (rsi_24 + 4 u< *(arg1 + 0x28))
                r15_5 = (zx.q(rsi_24 + 4) << 5) + *(arg1 + 0x30)
            else
                r15_5 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r15_5)
            double zmm6_9[0x2] = zx.o(var_58[0])
            uint128_t zmm0_14 = zx.o(var_78:8.q)
            zmm6_9[0] = zmm6_9[0] f+ *r15_5
            zmm0_14.q = zmm0_14.q f+ *r14_21
            double temp0_5[0x2] = _mm_unpacklo_pd(zmm6_9, zmm0_14.q)
            var_78 = temp0_5
            var_68 = temp0_5
            
            if (rsi_24 + 6 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r14_24
            
            if (rsi_24 + 6 u< *(arg1 + 0x28))
                r14_24 = (zx.q(rsi_24 + 6) << 5) + *(arg1 + 0x30)
            else
                r14_24 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            zmm6 = sub_142c0e810(arg1, r14_24)
            int32_t rcx_26 = *(arg1 + 0x24)
            zmm6.q = zmm6.q f+ *r14_24
            var_68.q = zmm6.q
            
            if (rcx_26 - (rsi_24 - 1) u< 0x10 && (rcx_26.b & 1) != 0)
                if (rsi_24 + 7 u>= rcx_26)
                    *(arg1 + 0x20) = 1
                
                int64_t* r14_27
                
                if (rsi_24 + 7 u< *(arg1 + 0x28))
                    r14_27 = (zx.q(rsi_24 + 7) << 5) + *(arg1 + 0x30)
                else
                    r14_27 = &data_144017550
                    __builtin_memset(&data_144017550, 0, 0x20)
                
                sub_142c0e810(arg1, r14_27)
                var_68:8.q = var_68:8.q f+ *r14_27
            
            sub_142c0ea90(arg1, arg2, &var_58, &var_78, &var_68)
            rsi_24 += 8
            i = rsi_24 + 7
        while (i u<= *(arg1 + 0x24))
    
    return i

bool cond:0_1 = *(arg1 + 0x24) u> 0
var_78 = *(arg1 + 0xb0)

if (not(cond:0_1))
    *(arg1 + 0x20) = 1

int128_t* rdi_1 = &data_144017550
int128_t* rsi_1

if (*(arg1 + 0x28) u> 0)
    rsi_1 = *(arg1 + 0x30)
else
    rsi_1 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_1)
bool cond:2_1 = *(arg1 + 0x24) u> 2
zmm7.q = var_78.q f+ *rsi_1
var_78.q = zmm7.q
var_58 = var_78

if (not(cond:2_1))
    *(arg1 + 0x20) = 1

int128_t* rsi_2

if (*(arg1 + 0x28) u> 2)
    rsi_2 = *(arg1 + 0x30) + 0x40
else
    rsi_2 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_2)

if (*(arg1 + 0x24) u<= 1)
    *(arg1 + 0x20) = 1

int64_t* r14_1

if (*(arg1 + 0x28) u> 1)
    r14_1 = *(arg1 + 0x30) + 0x20
else
    r14_1 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, r14_1)
bool cond:3_1 = *(arg1 + 0x24) u> 3
zmm7.q = zmm7.q f+ *r14_1
double temp0_1[0x2] = _mm_unpacklo_pd(zmm7, var_58[1] f+ *rsi_2)
var_58 = temp0_1
var_68 = temp0_1

if (not(cond:3_1))
    *(arg1 + 0x20) = 1

int128_t* rsi_4

if (*(arg1 + 0x28) u> 3)
    rsi_4 = *(arg1 + 0x30) + 0x60
else
    rsi_4 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

int32_t r12_1 = 4
zmm6.q = sub_142c0e810(arg1, rsi_4).q f+ *rsi_4
var_68:8.q = zmm6.q

if (*(arg1 + 0x24) u>= 0xc)
    int32_t r15_1 = 5
    
    do
        sub_142c0ea90(arg1, arg2, &var_78, &var_58, &var_68)
        var_78 = *(arg1 + 0xb0)
        
        if (r12_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_6
        
        if (r12_1 u< *(arg1 + 0x28))
            rsi_6 = (zx.q(r12_1) << 5) + *(arg1 + 0x30)
        else
            rsi_6 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_6)
        uint128_t zmm0_4
        zmm0_4.q = var_78:8.q f+ *rsi_6
        var_78:8.q = zmm0_4.q
        var_58 = var_78
        
        if (r15_1 + 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_9
        
        if (r15_1 + 1 u< *(arg1 + 0x28))
            rsi_9 = (zx.q(r15_1 + 1) << 5) + *(arg1 + 0x30)
        else
            rsi_9 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_9)
        
        if (r15_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r14_3
        
        if (r15_1 u< *(arg1 + 0x28))
            r14_3 = (zx.q(r15_1) << 5) + *(arg1 + 0x30)
        else
            r14_3 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, r14_3)
        uint128_t zmm6_2
        zmm6_2.q = var_78.q f+ *r14_3
        uint128_t zmm0_5
        zmm0_5.q = var_58[1] f+ *rsi_9
        uint128_t zmm1_1 = _mm_unpacklo_pd(zmm6_2, zmm0_5.q)
        var_58 = zmm1_1
        var_68 = zmm1_1
        
        if (r15_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_12
        
        if (r15_1 + 2 u< *(arg1 + 0x28))
            rsi_12 = (zx.q(r15_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rsi_12 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        var_68.q = sub_142c0e810(arg1, rsi_12) f+ *rsi_12
        sub_142c0ea90(arg1, arg2, &var_78, &var_58, &var_68)
        var_78 = var_68
        
        if (r15_1 + 3 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_15
        
        if (r15_1 + 3 u< *(arg1 + 0x28))
            rsi_15 = (zx.q(r15_1 + 3) << 5) + *(arg1 + 0x30)
        else
            rsi_15 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        var_78.q = sub_142c0e810(arg1, rsi_15) f+ *rsi_15
        var_58 = var_78
        
        if (r15_1 + 5 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_18
        
        if (r15_1 + 5 u< *(arg1 + 0x28))
            rsi_18 = (zx.q(r15_1 + 5) << 5) + *(arg1 + 0x30)
        else
            rsi_18 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_18)
        
        if (r15_1 + 4 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r14_6
        
        if (r15_1 + 4 u< *(arg1 + 0x28))
            r14_6 = (zx.q(r15_1 + 4) << 5) + *(arg1 + 0x30)
        else
            r14_6 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_5[0x2] = sub_142c0e810(arg1, r14_6)
        zmm7 = zx.o(var_58[1])
        zmm6_5[0] = zmm6_5[0] f+ *r14_6
        zmm7.q = zmm7.q f+ *rsi_18
        double temp0_3[0x2] = _mm_unpacklo_pd(zmm6_5, zmm7.q)
        var_58 = temp0_3
        var_68 = temp0_3
        
        if (r15_1 + 6 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_21
        
        if (r15_1 + 6 u< *(arg1 + 0x28))
            rsi_21 = (zx.q(r15_1 + 6) << 5) + *(arg1 + 0x30)
        else
            rsi_21 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_21)
        zmm7.q = zmm7.q f+ *rsi_21
        r15_1 += 8
        r12_1 += 8
        var_68:8.q = zmm7.q
    while (r15_1 + 7 u<= *(arg1 + 0x24))

if (r12_1 u< *(arg1 + 0x24))
    if (r12_1 u< *(arg1 + 0x28))
        rdi_1 = (zx.q(r12_1) << 5) + *(arg1 + 0x30)
    else
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rdi_1)
    var_68.q = var_68.q f+ *rdi_1

return sub_142c0ea90(arg1, arg2, &var_78, &var_58, &var_68)
