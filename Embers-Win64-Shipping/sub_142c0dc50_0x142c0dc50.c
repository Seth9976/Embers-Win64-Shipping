// 函数: sub_142c0dc50
// 地址: 0x142c0dc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int32_t rcx = *(arg1 + 0x24)
int32_t i
i.b = rcx.b & 7
uint128_t var_58
uint128_t var_48
double var_38[0x2]
uint128_t zmm0
double zmm1[0x2]

if (i.b u< 4)
    if (rcx u>= 8)
        int32_t rsi_2 = 1
        
        do
            uint64_t r14_2 = zx.q(rsi_2 - 1)
            var_38 = *(arg1 + 0xb0)
            
            if (r14_2.d u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int128_t* rcx_29
            
            if (r14_2.d u< *(arg1 + 0x28))
                rcx_29 = *(arg1 + 0x30) + (r14_2 << 3)
            else
                data_144017550.q = 0
                rcx_29 = &data_144017550
            
            zmm0.q = var_38[1] f+ *rcx_29
            var_38[1] = zmm0.q
            var_58 = var_38
            
            if (rsi_2 + 1 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int128_t* r8_6
            
            if (rsi_2 + 1 u< *(arg1 + 0x28))
                r8_6 = *(arg1 + 0x30) + (zx.q(rsi_2 + 1) << 3)
            else
                data_144017550.q = 0
                r8_6 = &data_144017550
            
            if (rsi_2 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rcx_33
            
            if (rsi_2 u< *(arg1 + 0x28))
                rcx_33 = *(arg1 + 0x30) + (zx.q(rsi_2) << 3)
            else
                data_144017550.q = 0
                rcx_33 = &data_144017550
            
            zmm6.q = var_38[0] f+ *rcx_33
            uint64_t rcx_35 = zx.q(rsi_2 + 2)
            zmm0.q = var_58:8.q f+ *r8_6
            double temp0_4[0x2] = _mm_unpacklo_pd(zmm6, zmm0.q)
            var_58 = temp0_4
            var_48 = temp0_4
            
            if (rcx_35.d u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rax_3
            
            if (rcx_35.d u< *(arg1 + 0x28))
                rax_3 = *(arg1 + 0x30) + (rcx_35 << 3)
            else
                data_144017550.q = 0
                rax_3 = &data_144017550
            
            zmm6.q = zmm6.q f+ *rax_3
            var_48.q = zmm6.q
            sub_142c0aa20(arg1, arg2, &var_38, &var_58, &var_48)
            var_38 = var_48
            
            if (rsi_2 + 3 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rcx_38
            
            if (rsi_2 + 3 u< *(arg1 + 0x28))
                rcx_38 = *(arg1 + 0x30) + (zx.q(rsi_2 + 3) << 3)
            else
                data_144017550.q = 0
                rcx_38 = &data_144017550
            
            zmm6.q = zmm6.q f+ *rcx_38
            var_38[0] = zmm6.q
            var_58 = var_38
            
            if (rsi_2 + 5 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* r8_8
            
            if (rsi_2 + 5 u< *(arg1 + 0x28))
                r8_8 = *(arg1 + 0x30) + (zx.q(rsi_2 + 5) << 3)
            else
                data_144017550.q = 0
                r8_8 = &data_144017550
            
            if (rsi_2 + 4 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rcx_43
            
            if (rsi_2 + 4 u< *(arg1 + 0x28))
                rcx_43 = *(arg1 + 0x30) + (zx.q(rsi_2 + 4) << 3)
            else
                data_144017550.q = 0
                rcx_43 = &data_144017550
            
            zmm6.q = zmm6.q f+ *rcx_43
            zmm1 = zx.o(var_58:8.q)
            zmm1[0] = zmm1[0] f+ *r8_8
            uint128_t zmm0_2 = _mm_unpacklo_pd(zmm6, zmm1[0])
            var_58 = zmm0_2
            var_48 = zmm0_2
            
            if (rsi_2 + 6 u>= *(arg1 + 0x24))
                *(arg1 + 0x20) = 1
            
            int64_t* rcx_46
            
            if (rsi_2 + 6 u< *(arg1 + 0x28))
                rcx_46 = *(arg1 + 0x30) + (zx.q(rsi_2 + 6) << 3)
            else
                data_144017550.q = 0
                rcx_46 = &data_144017550
            
            zmm1[0] = zmm1[0] f+ *rcx_46
            int32_t rdx_19 = *(arg1 + 0x24)
            var_48:8.q = zmm1.q
            
            if (rdx_19 - r14_2.d u< 0x10 && (rdx_19.b & 1) != 0)
                uint64_t rcx_50 = zx.q(rsi_2 + 7)
                
                if (rcx_50.d u>= rdx_19)
                    *(arg1 + 0x20) = 1
                
                int64_t* rax_5
                
                if (rcx_50.d u< *(arg1 + 0x28))
                    rax_5 = *(arg1 + 0x30) + (rcx_50 << 3)
                else
                    data_144017550.q = 0
                    rax_5 = &data_144017550
                
                zmm0_2.q = var_48.q f+ *rax_5
                var_48.q = zmm0_2.q
            
            sub_142c0aa20(arg1, arg2, &var_38, &var_58, &var_48)
            rsi_2 += 8
            i = rsi_2 + 7
        while (i u<= *(arg1 + 0x24))
    
    return i

bool cond:0_1 = *(arg1 + 0x24) u> 0
var_58 = *(arg1 + 0xb0)

if (not(cond:0_1))
    *(arg1 + 0x20) = 1

int128_t* rdi_1 = &data_144017550
int128_t* rcx_1

if (*(arg1 + 0x28) u> 0)
    rcx_1 = *(arg1 + 0x30)
else
    data_144017550.q = 0
    rcx_1 = &data_144017550

bool cond:2_1 = *(arg1 + 0x24) u> 2
zmm0.q = var_58:8.q f+ *rcx_1
var_58:8.q = zmm0.q
var_38 = var_58

if (not(cond:2_1))
    *(arg1 + 0x20) = 1

int128_t* rdx

if (*(arg1 + 0x28) u> 2)
    rdx = *(arg1 + 0x30) + 0x10
else
    data_144017550.q = 0
    rdx = &data_144017550

if (*(arg1 + 0x24) u<= 1)
    *(arg1 + 0x20) = 1

int128_t* rcx_2

if (*(arg1 + 0x28) u> 1)
    rcx_2 = *(arg1 + 0x30) + 8
else
    data_144017550.q = 0
    rcx_2 = &data_144017550

bool cond:3_1 = *(arg1 + 0x24) u> 3
uint128_t zmm2
zmm2.q = var_58.q f+ *rcx_2
zmm0.q = var_38[1] f+ *rdx
double temp0_1[0x2] = _mm_unpacklo_pd(zmm2, zmm0.q)
var_38 = temp0_1
var_48 = temp0_1

if (not(cond:3_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_4

if (*(arg1 + 0x28) u> 3)
    rcx_4 = *(arg1 + 0x30) + 0x18
else
    data_144017550.q = 0
    rcx_4 = &data_144017550

int32_t r14_1 = 4
zmm2.q = zmm2.q f+ *rcx_4
var_48.q = zmm2.q

if (*(arg1 + 0x24) u>= 0xc)
    int32_t rsi_1 = 5
    
    do
        sub_142c0aa20(arg1, arg2, &var_58, &var_38, &var_48)
        var_58 = *(arg1 + 0xb0)
        
        if (r14_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_7
        
        if (r14_1 u< *(arg1 + 0x28))
            rcx_7 = *(arg1 + 0x30) + (zx.q(r14_1) << 3)
        else
            data_144017550.q = 0
            rcx_7 = &data_144017550
        
        zmm1 = zx.o(var_58.q)
        zmm1[0] = zmm1[0] f+ *rcx_7
        var_58.q = zmm1.q
        var_38 = var_58
        
        if (rsi_1 + 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_2
        
        if (rsi_1 + 1 u< *(arg1 + 0x28))
            r8_2 = *(arg1 + 0x30) + (zx.q(rsi_1 + 1) << 3)
        else
            data_144017550.q = 0
            r8_2 = &data_144017550
        
        if (rsi_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_11
        
        if (rsi_1 u< *(arg1 + 0x28))
            rcx_11 = *(arg1 + 0x30) + (zx.q(rsi_1) << 3)
        else
            data_144017550.q = 0
            rcx_11 = &data_144017550
        
        zmm1[0] = zmm1[0] f+ *rcx_11
        uint64_t rcx_13 = zx.q(rsi_1 + 2)
        zmm6.q = var_38[1] f+ *r8_2
        uint128_t zmm0_1 = _mm_unpacklo_pd(zmm1, zmm6.q)
        var_38 = zmm0_1
        var_48 = zmm0_1
        
        if (rcx_13.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rax
        
        if (rcx_13.d u< *(arg1 + 0x28))
            rax = *(arg1 + 0x30) + (rcx_13 << 3)
        else
            data_144017550.q = 0
            rax = &data_144017550
        
        zmm6.q = zmm6.q f+ *rax
        var_48:8.q = zmm6.q
        sub_142c0aa20(arg1, arg2, &var_58, &var_38, &var_48)
        var_58 = var_48
        
        if (rsi_1 + 3 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rcx_16
        
        if (rsi_1 + 3 u< *(arg1 + 0x28))
            rcx_16 = *(arg1 + 0x30) + (zx.q(rsi_1 + 3) << 3)
        else
            data_144017550.q = 0
            rcx_16 = &data_144017550
        
        zmm6.q = zmm6.q f+ *rcx_16
        var_58:8.q = zmm6.q
        var_38 = var_58
        
        if (rsi_1 + 5 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_4
        
        if (rsi_1 + 5 u< *(arg1 + 0x28))
            r8_4 = *(arg1 + 0x30) + (zx.q(rsi_1 + 5) << 3)
        else
            data_144017550.q = 0
            r8_4 = &data_144017550
        
        if (rsi_1 + 4 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rcx_21
        
        if (rsi_1 + 4 u< *(arg1 + 0x28))
            rcx_21 = *(arg1 + 0x30) + (zx.q(rsi_1 + 4) << 3)
        else
            data_144017550.q = 0
            rcx_21 = &data_144017550
        
        zmm2.q = var_58.q f+ *rcx_21
        zmm0.q = var_38[1] f+ *r8_4
        double temp0_3[0x2] = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_38 = temp0_3
        var_48 = temp0_3
        
        if (rsi_1 + 6 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rcx_24
        
        if (rsi_1 + 6 u< *(arg1 + 0x28))
            rcx_24 = *(arg1 + 0x30) + (zx.q(rsi_1 + 6) << 3)
        else
            data_144017550.q = 0
            rcx_24 = &data_144017550
        
        zmm2.q = zmm2.q f+ *rcx_24
        rsi_1 += 8
        r14_1 += 8
        var_48.q = zmm2.q
    while (rsi_1 + 7 u<= *(arg1 + 0x24))

if (r14_1 u< *(arg1 + 0x24))
    if (r14_1 u< *(arg1 + 0x28))
        rdi_1 = *(arg1 + 0x30) + (zx.q(r14_1) << 3)
    else
        data_144017550.q = 0
    
    zmm0.q = var_48:8.q f+ *rdi_1
    var_48:8.q = zmm0.q

return sub_142c0aa20(arg1, arg2, &var_58, &var_38, &var_48)
