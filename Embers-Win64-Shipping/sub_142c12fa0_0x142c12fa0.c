// 函数: sub_142c12fa0
// 地址: 0x142c12fa0
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
uint128_t var_58
uint128_t zmm1

if (i.b u< 4)
    if (rcx u>= 8)
        int32_t r14_9 = 1
        
        do
            var_58 = *(arg1 + 0xb0)
            
            if (r14_9 - 1 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int128_t* rsi_24
            
            if (r14_9 - 1 u< *(arg1 + 0x28))
                rsi_24 = (zx.q(r14_9 - 1) << 5) + *(arg1 + 0x30)
            else
                rsi_24 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, rsi_24)
            uint128_t zmm0_10
            zmm0_10.q = var_58:8.q f+ *rsi_24
            var_58:8.q = zmm0_10.q
            var_78 = var_58
            
            if (r14_9 + 1 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rsi_27
            
            if (r14_9 + 1 u< *(arg1 + 0x28))
                rsi_27 = (zx.q(r14_9 + 1) << 5) + *(arg1 + 0x30)
            else
                rsi_27 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, rsi_27)
            
            if (r14_9 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r15_2
            
            if (r14_9 u< *(arg1 + 0x28))
                r15_2 = (zx.q(r14_9) << 5) + *(arg1 + 0x30)
            else
                r15_2 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, r15_2)
            uint128_t zmm6_6
            zmm6_6.q = var_58.q f+ *r15_2
            uint128_t zmm0_11
            zmm0_11.q = var_78:8.q f+ *rsi_27
            zmm1 = _mm_unpacklo_pd(zmm6_6, zmm0_11.q)
            var_78 = zmm1
            var_68 = zmm1
            
            if (r14_9 + 2 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int128_t* rsi_30
            
            if (r14_9 + 2 u< *(arg1 + 0x28))
                rsi_30 = (zx.q(r14_9 + 2) << 5) + *(arg1 + 0x30)
            else
                rsi_30 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            var_68.q = sub_142c0e810(arg1, rsi_30) f+ *rsi_30
            sub_142c0ea90(arg1, arg2, &var_58, &var_78, &var_68)
            var_58 = var_68
            
            if (r14_9 + 3 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rsi_33
            
            if (r14_9 + 3 u< *(arg1 + 0x28))
                rsi_33 = (zx.q(r14_9 + 3) << 5) + *(arg1 + 0x30)
            else
                rsi_33 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            var_58.q = sub_142c0e810(arg1, rsi_33) f+ *rsi_33
            var_78 = var_58
            
            if (r14_9 + 5 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rsi_36
            
            if (r14_9 + 5 u< *(arg1 + 0x28))
                rsi_36 = (zx.q(r14_9 + 5) << 5) + *(arg1 + 0x30)
            else
                rsi_36 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, rsi_36)
            
            if (r14_9 + 4 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r15_5
            
            if (r14_9 + 4 u< *(arg1 + 0x28))
                r15_5 = (zx.q(r14_9 + 4) << 5) + *(arg1 + 0x30)
            else
                r15_5 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            double zmm6_9[0x2] = sub_142c0e810(arg1, r15_5)
            zmm7 = zx.o(var_78:8.q)
            zmm6_9[0] = zmm6_9[0] f+ *r15_5
            zmm7.q = zmm7.q f+ *rsi_36
            double temp0_5[0x2] = _mm_unpacklo_pd(zmm6_9, zmm7.q)
            var_78 = temp0_5
            var_68 = temp0_5
            
            if (r14_9 + 6 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rsi_39
            
            if (r14_9 + 6 u< *(arg1 + 0x28))
                rsi_39 = (zx.q(r14_9 + 6) << 5) + *(arg1 + 0x30)
            else
                rsi_39 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x20)
            
            sub_142c0e810(arg1, rsi_39)
            int32_t rcx_26 = *(arg1 + 0x24)
            zmm7.q = zmm7.q f+ *rsi_39
            var_68:8.q = zmm7.q
            
            if (rcx_26 - (r14_9 - 1) u< 0x10 && (rcx_26.b & 1) != 0)
                if (r14_9 + 7 u>= rcx_26)
                    *(arg1 + 0x20) = 1
                
                int64_t* rsi_42
                
                if (r14_9 + 7 u< *(arg1 + 0x28))
                    rsi_42 = (zx.q(r14_9 + 7) << 5) + *(arg1 + 0x30)
                else
                    rsi_42 = &data_144017550
                    __builtin_memset(&data_144017550, 0, 0x20)
                
                sub_142c0e810(arg1, rsi_42)
                var_68.q = var_68.q f+ *rsi_42
            
            sub_142c0ea90(arg1, arg2, &var_58, &var_78, &var_68)
            r14_9 += 8
            i = r14_9 + 7
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
uint128_t zmm0_1
zmm0_1.q = var_78:8.q f+ *rsi_1
var_78:8.q = zmm0_1.q
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

int128_t* r14_1

if (*(arg1 + 0x28) u> 1)
    r14_1 = *(arg1 + 0x30) + 0x20
else
    r14_1 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, r14_1)
bool cond:3_1 = *(arg1 + 0x24) u> 3
uint128_t zmm6_1
zmm6_1.q = var_78.q f+ *r14_1
uint128_t zmm0_2
zmm0_2.q = var_58:8.q f+ *rsi_2
zmm1 = _mm_unpacklo_pd(zmm6_1, zmm0_2.q)
var_58 = zmm1
var_68 = zmm1

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
var_68.q = zmm6.q

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
        zmm7.q = var_78.q f+ *rsi_6
        var_78.q = zmm7.q
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
        
        int64_t* r14_3
        
        if (r15_1 u< *(arg1 + 0x28))
            r14_3 = (zx.q(r15_1) << 5) + *(arg1 + 0x30)
        else
            r14_3 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, r14_3)
        zmm7.q = zmm7.q f+ *r14_3
        double temp0_2[0x2] = _mm_unpacklo_pd(zmm7, var_58:8.q f+ *rsi_9)
        var_58 = temp0_2
        var_68 = temp0_2
        
        if (r15_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_12
        
        if (r15_1 + 2 u< *(arg1 + 0x28))
            rsi_12 = (zx.q(r15_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rsi_12 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        var_68:8.q = sub_142c0e810(arg1, rsi_12) f+ *rsi_12
        sub_142c0ea90(arg1, arg2, &var_78, &var_58, &var_68)
        var_78 = var_68
        
        if (r15_1 + 3 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_15
        
        if (r15_1 + 3 u< *(arg1 + 0x28))
            rsi_15 = (zx.q(r15_1 + 3) << 5) + *(arg1 + 0x30)
        else
            rsi_15 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        var_78:8.q = sub_142c0e810(arg1, rsi_15) f+ *rsi_15
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
        
        sub_142c0e810(arg1, r14_6)
        uint128_t zmm6_5
        zmm6_5.q = var_78.q f+ *r14_6
        uint128_t zmm0_8
        zmm0_8.q = var_58:8.q f+ *rsi_18
        zmm1 = _mm_unpacklo_pd(zmm6_5, zmm0_8.q)
        var_58 = zmm1
        var_68 = zmm1
        
        if (r15_1 + 6 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_21
        
        if (r15_1 + 6 u< *(arg1 + 0x28))
            rsi_21 = (zx.q(r15_1 + 6) << 5) + *(arg1 + 0x30)
        else
            rsi_21 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        zmm6.q = sub_142c0e810(arg1, rsi_21).q f+ *rsi_21
        r15_1 += 8
        r12_1 += 8
        var_68.q = zmm6.q
    while (r15_1 + 7 u<= *(arg1 + 0x24))

if (r12_1 u< *(arg1 + 0x24))
    if (r12_1 u< *(arg1 + 0x28))
        rdi_1 = (zx.q(r12_1) << 5) + *(arg1 + 0x30)
    else
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rdi_1)
    var_68:8.q = var_68:8.q f+ *rdi_1

return sub_142c0ea90(arg1, arg2, &var_78, &var_58, &var_68)
