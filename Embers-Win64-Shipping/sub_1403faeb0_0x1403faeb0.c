// 函数: sub_1403faeb0
// 地址: 0x1403faeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
var_98 = arg4
int32_t var_70 = 0
int64_t rdi_1 = sx.q(arg3 * arg6) << 2
int64_t rax_4 = rdi_1 + 0xf

if (rax_4 u<= rdi_1)
    rax_4 = 0xffffffffffffff0

int64_t rax_5 = rax_4 & 0xfffffffffffffff0
__chkstk(rax_5)
void var_b8
void* rsp = &var_b8 - rax_5
int64_t rax_7 = rdi_1 + 0xf

if (rax_7 u<= rdi_1)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
int64_t r14 = sx.q(arg3)
void* rsi = rsp - rax_8 + 0x20
int64_t var_68 = r14
void* var_80 = rsi

if (arg3 s> 0)
    __builtin_memset(arg7, 0, r14 << 2)

int64_t r15 = sx.q(arg5)
uint128_t result = 0xc1ff3333
int32_t r13 = 0
int64_t rdx = 0
int64_t r11 = r15
int64_t var_90 = r15
uint128_t result_1
uint128_t result_2
uint128_t result_3

if (r15 s>= 4)
    void* rdi_3 = rsi + 8
    int64_t i_28 = ((var_90 - 4) u>> 2) + 1
    int32_t r11_1 = 6
    uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(9 - arg8))
    void* r15_1 = arg9 + 4
    r13 = (i_28 << 2).d
    rdx = i_28 << 2
    int64_t i
    
    do
        int32_t rax_10 = sx.d(*(r15_1 - 4))
        rdi_3 += 0x10
        r15_1 += 8
        result_2.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* 0.0625f
        result_2.d = result_2.d f+ 0.5f
        result_1.d = _mm_cvtepi32_ps(zx.o((r11_1 - 1) * (r11_1 - 1))).d f* 0.00620000018f
        result_2.d = result_2.d f+ zmm5.d
        result_2.d = result_2.d f- *(&data_143700670 - rsi + rdi_3 - 0x18)
        result_2.d = result_2.d f+ result_1.d
        *(rdi_3 - 0x18) = result_2.d
        result_3.d = _mm_cvtepi32_ps(zx.o(sx.d(*(r15_1 - 0xa)))).d f* 0.0625f
        result_3.d = result_3.d f+ 0.5f
        result_1.d = _mm_cvtepi32_ps(zx.o(r11_1 * r11_1)).d f* 0.00620000018f
        result_3.d = result_3.d f+ zmm5.d
        result_3.d = result_3.d f- *(&data_143700674 - var_80 + rdi_3 - 0x18)
        result_3.d = result_3.d f+ result_1.d
        result_1 = zx.o((r11_1 + 1) * (r11_1 + 1))
        int32_t rcx_5 = r11_1 + 2
        r11_1 += 4
        *(rdi_3 - 0x14) = result_3.d
        int32_t rax_14 = sx.d(*(r15_1 - 8))
        result_1.d = _mm_cvtepi32_ps(result_1).d f* 0.00620000018f
        result_2.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f* 0.0625f
        result_2.d = result_2.d f+ 0.5f
        result_2.d = result_2.d f+ zmm5.d
        result_2.d = result_2.d f- *(&data_143700670 - rsi + rdi_3 - 0x10)
        result_2.d = result_2.d f+ result_1.d
        *(rdi_3 - 0x10) = result_2.d
        result_2 = zx.o(sx.d(*(r15_1 - 6)))
        result_1.d = _mm_cvtepi32_ps(zx.o(rcx_5 * rcx_5)).d f* 0.00620000018f
        result_2.d = _mm_cvtepi32_ps(result_2).d f* 0.0625f
        result_2.d = result_2.d f+ 0.5f
        result_2.d = result_2.d f+ zmm5.d
        result_2.d = result_2.d f- *(&data_143700674 - var_80 + rdi_3 - 0x10)
        result_2.d = result_2.d f+ result_1.d
        *(rdi_3 - 0xc) = result_2.d
        i = i_28
        i_28 -= 1
    while (i != 1)
    r15 = zx.q(arg5)
    r14 = var_68
    rsi = var_80
    r11 = var_90

if (rdx s< r11)
    int32_t rcx_7 = r13 + 5
    void* rdi_4 = rsi + (rdx << 2)
    result_3 = _mm_cvtepi32_ps(zx.o(9 - arg8))
    
    do
        int32_t rax_16 = sx.d(*(arg9 + (rdx << 1)))
        rdx += 1
        rdi_4 += 4
        result_1 = zx.o(rcx_7 * rcx_7)
        rcx_7 += 1
        result_2.d = _mm_cvtepi32_ps(zx.o(rax_16)).d f* 0.0625f
        result_2.d = result_2.d f+ 0.5f
        result_1.d = _mm_cvtepi32_ps(result_1).d f* 0.00620000018f
        result_2.d = result_2.d f+ result_3.d
        result_2.d = result_2.d f- *(rdi_4 + &data_143700670 - rsi - 4)
        result_2.d = result_2.d f+ result_1.d
        *(rdi_4 - 4) = result_2.d
    while (rdx s< r11)

int32_t rbx_2 = 0
int64_t r11_2 = 0

do
    uint32_t r10_2 = 0
    uint64_t rax_19 = 0
    
    if (r15.d s>= 4)
        int64_t rcx_9 = r11_2 * r14
        int64_t rax_20 = rcx_9 << 2
        int64_t rcx_10 = neg.q(rcx_9)
        uint128_t* rdx_1 = rax_20 + arg1
        void* rdi_7 = rsi - rax_20 - arg1
        uint64_t rax_23 = zx.q(((r15 - 4).d u>> 2) + 1)
        r10_2 = (rax_23 << 2).d
        uint64_t i_18 = zx.q(rax_23.d)
        rax_19 = rax_23 << 2
        uint64_t i_1
        
        do
            result_1.d = (*rdx_1).d f- *(rdi_7 + rdx_1)
            
            if (not(result.d f> result_1.d))
                result = result_1
            
            result_1.d = (*(rdx_1 + 4)).d f- *(rdi_7 + rdx_1 + 4)
            
            if (not(result.d f> result_1.d))
                result = result_1
            
            result_1.d = (*(rdx_1 + 8)).d f- *((rcx_10 << 2) + 8 - arg1 + rsi + rdx_1)
            
            if (not(result.d f> result_1.d))
                result = result_1
            
            result_1.d = (*(rdx_1 + 0xc)).d f- *((rcx_10 << 2) + 0xc - arg1 + rsi + rdx_1)
            
            if (not(result.d f> result_1.d))
                result = result_1
            
            rdx_1 = &rdx_1[1]
            i_1 = i_18
            i_18 -= 1
        while (i_1 != 1)
    
    if (r10_2 s< r15.d)
        void* rcx_11 = rsi + (rax_19 << 2)
        int64_t i_20 = sx.q(r15.d - r10_2)
        int64_t i_2
        
        do
            result_1.d = (*(((r11_2 * r14) << 2) - rsi + arg1 + rcx_11)).d f- *rcx_11
            
            if (not(result.d f> result_1.d))
                result = result_1
            
            rcx_11 += 4
            i_2 = i_20
            i_20 -= 1
        while (i_2 != 1)
    
    rbx_2 += 1
    r11_2 += 1
while (rbx_2 s< arg6)

int32_t r12_4

if (arg15 s<= 0x32 || arg14 s< 1 || arg17 != 0)
    r12_4 = 0
else
    int64_t rax_26 = 0
    int32_t i_26 = 0
    var_90.d = 0
    int64_t var_60_1 = 0
    int64_t rsi_2 = 0
    int32_t rcx_22
    
    do
        int64_t r8_4 = arg2
        int32_t i_3 = 1
        int64_t rdx_2 = 1
        int64_t r13_3 = rax_26 * r14
        int64_t r10_3 = r13_3 << 2
        void* r14_4 = r10_3 + rsp + 0x20
        *r14_4 = *(r10_3 + r8_4)
        
        if (r15.d s> 1)
            if ((r15 - 1).d s>= 4)
                int32_t i_29 = 3
                void* rcx_13 = arg2 - (rsp + 0x20)
                void* rax_29 = r14_4
                
                do
                    result_3 = *(rcx_13 + rax_29 + 4)
                    result_1.d = (*(rcx_13 + rax_29)).d f+ 0.5f
                    
                    if (not(result_3.d f<= result_1.d))
                        i_26 = i_3
                        rsi_2 = rdx_2
                    
                    result_2.d = (*rax_29).d f+ 1.5f
                    
                    if (not(result_3.d f> result_2.d))
                        result_2 = result_3
                    
                    *(rax_29 + 4) = result_2.d
                    result_3 = *(rcx_13 + rax_29 + 8)
                    result_1.d = (*(rcx_13 + rax_29 + 4)).d f+ 0.5f
                    
                    if (not(result_3.d f<= result_1.d))
                        i_26 = i_29 - 1
                        rsi_2 = rdx_2 + 1
                    
                    result_2.d = result_2.d f+ 1.5f
                    
                    if (not(result_3.d f> result_2.d))
                        result_2 = result_3
                    
                    *(rax_29 + 8) = result_2.d
                    result_3 = *(rcx_13 + rax_29 + 0xc)
                    result_1.d = (*(rcx_13 + rax_29 + 8)).d f+ 0.5f
                    
                    if (not(result_3.d f<= result_1.d))
                        i_26 = i_29
                        rsi_2 = rdx_2 + 2
                    
                    result_2.d = result_2.d f+ 1.5f
                    
                    if (not(result_3.d f> result_2.d))
                        result_2 = result_3
                    
                    *(rax_29 + 0xc) = result_2.d
                    result_3 = *(rcx_13 + rax_29 + 0x10)
                    result_1.d = (*(rcx_13 + rax_29 + 0xc)).d f+ 0.5f
                    
                    if (not(result_3.d f<= result_1.d))
                        i_26 = i_29 + 1
                        rsi_2 = rdx_2 + 3
                    
                    result_2.d = result_2.d f+ 1.5f
                    
                    if (not(result_3.d f> result_2.d))
                        result_2 = result_3
                    
                    i_3 += 4
                    *(rax_29 + 0x10) = result_2.d
                    rdx_2 += 4
                    rax_29 += 0x10
                    i_29 += 4
                while (i_3 s< (r15 - 3).d)
                
                r8_4 = arg2
            
            if (i_3 s< r15.d)
                void* rcx_14 = rsp + 0x20 + ((r13_3 - 1 + rdx_2) << 2)
                void* rax_33 = r8_4 - (rsp + 0x20)
                
                do
                    result_2 = *(rax_33 + rcx_14 + 4)
                    result_1.d = (*(rax_33 + rcx_14)).d f+ 0.5f
                    
                    if (not(result_2.d f<= result_1.d))
                        i_26 = i_3
                        rsi_2 = rdx_2
                    
                    result_1.d = (*rcx_14).d f+ 1.5f
                    
                    if (not(result_2.d f> result_1.d))
                        result_1 = result_2
                    
                    i_3 += 1
                    *(rcx_14 + 4) = result_1.d
                    rdx_2 += 1
                    rcx_14 += 4
                while (i_3 s< r15.d)
        
        int32_t r9_5 = i_26 - 1
        int64_t r11_3 = rsi_2 - 1
        
        if (r9_5 s>= 0)
            int32_t zmm3
            
            if (r9_5 + 1 s>= 4)
                uint64_t i_27 = zx.q(r9_5 + 1) u>> 2
                void* rdi_14 = r8_4 - (rsp + 0x20)
                void* rcx_17 = rsp + 0x20 + ((r13_3 - 1 + r11_3) << 2)
                r9_5 += neg.d(i_27.d) << 2
                r11_3 -= i_27 << 2
                uint64_t i_4
                
                do
                    result_3 = *(rdi_14 + rcx_17 + 4)
                    uint128_t* rax_37 = rcx_17 + rdi_14
                    result_1.d = (*(rax_37 + rsp + 0x20 - r8_4 + 8)).d f+ 2f
                    
                    if (result_3.d f<= result_1.d)
                        zmm3 = result_3.d
                    else
                        zmm3 = result_1.d
                    
                    result_2 = *(rcx_17 + 4)
                    
                    if (not(zmm3 f> result_2.d))
                        if (result_3.d f<= result_1.d)
                            result_2 = result_3
                        else
                            result_2 = result_1
                    
                    *(rcx_17 + 4) = result_2.d
                    result_3 = *rax_37
                    result_2.d = result_2.d f+ 2f
                    
                    if (result_3.d f<= result_2.d)
                        zmm3 = result_3.d
                    else
                        zmm3 = result_2.d
                    
                    result_1 = *rcx_17
                    
                    if (not(zmm3 f> result_1.d))
                        if (result_3.d f<= result_2.d)
                            result_1 = result_3
                        else
                            result_1 = result_2
                    
                    *rcx_17 = result_1.d
                    result_3 = *(rcx_17 + rdi_14 - 4)
                    result_1.d = result_1.d f+ 2f
                    
                    if (result_3.d f<= result_1.d)
                        zmm3 = result_3.d
                    else
                        zmm3 = result_1.d
                    
                    result_2 = *(rcx_17 - 4)
                    
                    if (not(zmm3 f> result_2.d))
                        if (result_3.d f<= result_1.d)
                            result_2 = result_3
                        else
                            result_2 = result_1
                    
                    *(rcx_17 - 4) = result_2.d
                    result_3 = *(rcx_17 + rdi_14 - 8)
                    result_2.d = result_2.d f+ 2f
                    
                    if (result_3.d f<= result_2.d)
                        zmm3 = result_3.d
                    else
                        zmm3 = result_2.d
                    
                    result_1 = *(rcx_17 - 8)
                    
                    if (not(zmm3 f> result_1.d))
                        if (result_3.d f<= result_2.d)
                            result_1 = result_3
                        else
                            result_1 = result_2
                    
                    *(rcx_17 - 8) = result_1.d
                    rcx_17 -= 0x10
                    i_4 = i_27
                    i_27 -= 1
                while (i_4 != 1)
                r10_3 = r13_3 << 2
            
            if (r9_5 s>= 0)
                void* rcx_18 = rsp + 0x20 + ((r11_3 + r13_3) << 2)
                void* rdi_16 = arg2 - (rsp + 0x20)
                int32_t temp5_1
                
                do
                    result_3 = *(rdi_16 + rcx_18)
                    result_1.d = (*(rdi_16 + rcx_18 + rsp + 0x20 - arg2 + 4)).d f+ 2f
                    
                    if (result_3.d f<= result_1.d)
                        zmm3 = result_3.d
                    else
                        zmm3 = result_1.d
                    
                    result_2 = *rcx_18
                    
                    if (not(zmm3 f> result_2.d))
                        if (result_3.d f<= result_1.d)
                            result_2 = result_3
                        else
                            result_2 = result_1
                    
                    *rcx_18 = result_2.d
                    rcx_18 -= 4
                    temp5_1 = r9_5
                    r9_5 -= 1
                while (temp5_1 - 1 s>= 0)
        
        uint32_t r8_6 = 0
        uint64_t r9_6 = 0
        
        if (r15.d s>= 4)
            uint128_t* rdx_8 = var_80 - r10_3 - (rsp + 0x20)
            void* rcx_19 = r14_4 + 4
            uint64_t i_14 = zx.q(((r15 - 4).d u>> 2) + 1)
            r8_6 = (i_14 << 2).d
            r9_6 = i_14 << 2
            uint64_t i_5
            
            do
                result_1 = *(rcx_19 - 4)
                result_2 = *(rdx_8 + rcx_19 - 4)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                result_2 = *rcx_19
                *(rcx_19 - 4) = result_1.d
                result_3 = *(rdx_8 + rcx_19)
                
                if (not(result_2.d f> result_3.d))
                    result_2 = result_3
                
                result_1 = *(rcx_19 + 4)
                *rcx_19 = result_2.d
                result_2 = *(rdx_8 + rcx_19 + 4)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *(rcx_19 + 4) = result_1.d
                result_1 = *(rcx_19 + 8)
                result_2 = *(((2 - r13_3) << 2) - (rsp + 0x20) + var_80 + rcx_19)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *(rcx_19 + 8) = result_1.d
                rcx_19 += 0x10
                i_5 = i_14
                i_14 -= 1
            while (i_5 != 1)
        
        if (r8_6 s< r15.d)
            int128_t* rcx_20 = rsp + 0x20 + ((r9_6 + r13_3) << 2)
            int64_t i_21 = sx.q(r15.d - r8_6)
            int64_t i_6
            
            do
                result_1 = *rcx_20
                result_2 = *(rcx_20 + var_80 - r10_3 - (rsp + 0x20))
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *rcx_20 = result_1.d
                rcx_20 += 4
                i_6 = i_21
                i_21 -= 1
            while (i_6 != 1)
        
        r14 = var_68
        rcx_22 = var_90.d + 1
        rax_26 = var_60_1 + 1
        var_90.d = rcx_22
        var_60_1 = rax_26
    while (rcx_22 s< arg6)
    int64_t r13_4 = sx.q(var_98)
    
    if (arg6 != 2)
        int32_t rdi_26 = r13_4.d
        int64_t r8_9 = r13_4
        
        if (r13_4.d s< r15.d)
            result_1 = zx.o(0)
            
            if (r15.d - r13_4.d s>= 4)
                uint128_t* rdx_11 = arg1 - (rsp + 0x20)
                void* rcx_25 = rsp + 0x24 + (r13_4 << 2)
                uint64_t i_15 = zx.q(((r15.d - r13_4.d - 4) u>> 2) + 1)
                rdi_26 = (i_15 << 2).d + r13_4.d
                r8_9 = (i_15 << 2) + r13_4
                uint64_t i_7
                
                do
                    result_2.d = (*(rdx_11 + rcx_25 - 4)).d f- *(rcx_25 - 4)
                    
                    if (not(result_1.d f<= result_2.d))
                        result_2 = result_1
                    
                    *(rcx_25 - 4) = result_2.d
                    result_3.d = (*(rdx_11 + rcx_25)).d f- *rcx_25
                    
                    if (not(result_1.d f<= result_3.d))
                        result_3 = result_1
                    
                    *rcx_25 = result_3.d
                    result_2.d = (*(rdx_11 + rcx_25 + 4)).d f- *(rcx_25 + 4)
                    
                    if (not(result_1.d f<= result_2.d))
                        result_2 = result_1
                    
                    *(rcx_25 + 4) = result_2.d
                    result_3.d = (*(rdx_11 + rcx_25 + 8)).d f- *(rcx_25 + 8)
                    
                    if (not(result_1.d f<= result_3.d))
                        result_3 = result_1
                    
                    *(rcx_25 + 8) = result_3.d
                    rcx_25 += 0x10
                    i_7 = i_15
                    i_15 -= 1
                while (i_7 != 1)
            
            if (rdi_26 s< r15.d)
                void* rcx_26 = rsp + 0x20 + (r8_9 << 2)
                int64_t i_23 = sx.q(r15.d - rdi_26)
                int64_t i_8
                
                do
                    result_2.d = (*(arg1 - (rsp + 0x20) + rcx_26)).d f- *rcx_26
                    
                    if (not(result_1.d f<= result_2.d))
                        result_2 = result_1
                    
                    *rcx_26 = result_2.d
                    rcx_26 += 4
                    i_8 = i_23
                    i_23 -= 1
                while (i_8 != 1)
    else if (r13_4.d s< r15.d)
        void* rcx_23 = rsp + 0x20 + ((r14 + r13_4) << 2)
        int64_t r8_8 = neg.q(r14)
        int64_t i_22 = sx.q(r15.d - r13_4.d)
        int64_t i_9
        
        do
            result_1 = *rcx_23
            result_2.d = (*(rcx_23 + (r8_8 << 2))).d f- 4f
            
            if (not(result_1.d f> result_2.d))
                result_1 = result_2
            
            *rcx_23 = result_1.d
            result_3 = *(rcx_23 + (r8_8 << 2))
            result_1.d = result_1.d f- 4f
            
            if (not(result_3.d f> result_1.d))
                result_3 = result_1
            
            *(rcx_23 + (r8_8 << 2)) = result_3.d
            result_2.d = (*(arg1 - (r14 << 2) - (rsp + 0x20) + rcx_23)).d f- result_3.d
            
            if (not(0f f<= result_2.d))
                result_2 = zx.o(0)
            
            result_1.d = (*(arg1 - (rsp + 0x20) + rcx_23)).d f- *rcx_23
            
            if (not(0f f<= result_1.d))
                result_1 = zx.o(0)
            
            result_1.d = result_1.d f+ result_2.d
            rcx_23 += 4
            result_1.d = result_1.d f* 0.5f
            *(rcx_23 + (r8_8 << 2) - 4) = result_1.d
            i_9 = i_22
            i_22 -= 1
        while (i_9 != 1)
    
    int32_t r8_12 = r13_4.d
    int64_t r9_7 = r13_4
    
    if (r13_4.d s< r15.d)
        if (r15.d - r13_4.d s>= 4)
            uint128_t* rdx_13 = arg18 - (rsp + 0x20)
            void* rcx_28 = rsp + 0x24 + (r13_4 << 2)
            uint64_t i_16 = zx.q(((r15.d - r13_4.d - 4) u>> 2) + 1)
            r9_7 = r13_4 + (i_16 << 2)
            r8_12 = (i_16 << 2).d + r13_4.d
            uint64_t i_10
            
            do
                result_1 = *(rcx_28 - 4)
                result_2 = *(rdx_13 + rcx_28 - 4)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                result_2 = *rcx_28
                *(rcx_28 - 4) = result_1.d
                result_3 = *(rdx_13 + rcx_28)
                
                if (not(result_2.d f> result_3.d))
                    result_2 = result_3
                
                result_1 = *(rcx_28 + 4)
                *rcx_28 = result_2.d
                result_2 = *(rdx_13 + rcx_28 + 4)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *(rcx_28 + 4) = result_1.d
                result_1 = *(rcx_28 + 8)
                result_2 = *(rdx_13 + rcx_28 + 8)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *(rcx_28 + 8) = result_1.d
                rcx_28 += 0x10
                i_10 = i_16
                i_16 -= 1
            while (i_10 != 1)
        
        if (r8_12 s< r15.d)
            void* rcx_29 = rsp + 0x20 + (r9_7 << 2)
            int64_t i_24 = sx.q(r15.d - r8_12)
            int64_t i_11
            
            do
                result_1 = *rcx_29
                result_2 = *(arg18 - (rsp + 0x20) + rcx_29)
                
                if (not(result_1.d f> result_2.d))
                    result_1 = result_2
                
                *rcx_29 = result_1.d
                rcx_29 += 4
                i_11 = i_24
                i_24 -= 1
            while (i_11 != 1)
    
    if ((arg11 == 0 || arg12 != 0) && arg10 == 0)
        int32_t i_12 = r13_4.d
        int32_t rax_67 = r15.d - r13_4.d
        
        if (r13_4.d s< r15.d && rax_67 u>= 8)
            int32_t rax_68 = rax_67 & 0x80000007
            
            if (rax_68 s< 0)
                rax_68 = ((rax_68 - 1) | 0xfffffff8) + 1
            
            result_2 = data_142d3f640
            
            do
                int64_t i_17 = sx.q(i_12)
                *(rsp + 0x20 + (i_17 << 2)) = _mm_mul_ps(*(rsp + 0x20 + (i_17 << 2)), result_2)
                int32_t rax_71 = i_12 + 4
                i_12 += 8
                int64_t rcx_30 = sx.q(rax_71)
                *(rsp + 0x20 + (rcx_30 << 2)) = _mm_mul_ps(*(rsp + 0x20 + (rcx_30 << 2)), result_2)
            while (i_12 s< r15.d - rax_68)
        
        int64_t i_19 = sx.q(i_12)
        int64_t rdi_32 = sx.q(r15.d)
        
        if (i_19 s< rdi_32)
            if (rdi_32 - i_19 s>= 4)
                void* rax_75 = rsp + 0x28 + (i_19 << 2)
                int64_t i_25 = ((rdi_32 - i_19 - 4) u>> 2) + 1
                i_19 += i_25 << 2
                int64_t i_13
                
                do
                    result_1 = *(rax_75 - 8)
                    result_2 = *(rax_75 - 4)
                    rax_75 += 0x10
                    result_1.d = result_1.d f* 0.5f
                    result_2.d = result_2.d f* 0.5f
                    *(rax_75 - 0x18) = result_1.d
                    result_1 = *(rax_75 - 0x10)
                    *(rax_75 - 0x14) = result_2.d
                    result_1.d = result_1.d f* 0.5f
                    result_2 = *(rax_75 - 0xc)
                    *(rax_75 - 0x10) = result_1.d
                    result_2.d = result_2.d f* 0.5f
                    *(rax_75 - 0xc) = result_2.d
                    i_13 = i_25
                    i_25 -= 1
                while (i_13 != 1)
            
            while (i_19 s< rdi_32)
                result_1 = *(rsp + 0x20 + (i_19 << 2))
                i_19 += 1
                result_1.d = result_1.d f* 0.5f
                *(rsp + 0x20 + (i_19 << 2) - 4) = result_1.d
    
    if (r13_4.d s>= r15.d)
        r12_4 = 0
    else
        void* rdi_33 = rsp + 0x20 + (r13_4 << 2)
        int16_t* rcx_31 = arg13 + (r13_4 << 1)
        
        while (true)
            if (r13_4.d s< 8)
                result_1.d = (*rdi_33).d f* 2f
                *rdi_33 = result_1.d
            
            if (r13_4.d s>= 0xc)
                result_1.d = (*rdi_33).d f* 0.5f
                *rdi_33 = result_1.d
            
            result_2 = *rdi_33
            
            if (not(4f f> result_2.d))
                result_2 = 0x40800000
            
            *rdi_33 = result_2.d
            int32_t rdx_21 = ((sx.d(rcx_31[1]) - sx.d(*rcx_31)) * arg6) << arg14.b
            uint64_t r8_13
            uint32_t r9_8
            
            if (rdx_21 s< 6)
                r8_13 = zx.q(int.d(result_2.d))
                r9_8 = (r8_13.d * rdx_21) << 3
            else if (rdx_21 s<= 0x30)
                result_1.d = _mm_cvtepi32_ps(zx.o(rdx_21)).d f* result_2.d
                result_1.d = result_1.d f/ 6f
                r8_13 = zx.q(int.d(result_1.d))
                r9_8 = (r8_13 * 3).d << 4
            else
                result_2.d = result_2.d f* 8f
                r8_13 = zx.q(int.d(result_2.d))
                int32_t temp13_1
                int32_t temp14_1
                temp13_1:temp14_1 = sx.q((r8_13.d * rdx_21) << 3)
                r9_8 = ((temp13_1 & 7) + temp14_1) s>> 3
            
            if (arg11 == 0)
            label_1403fbbf3:
                int32_t temp15_1
                int32_t temp16_1
                temp15_1:temp16_1 = sx.q(arg15)
                
                if ((r9_8 + var_70) s>> 6 s> (temp16_1 + (temp15_1 & 3)) s>> 2)
                    int32_t temp17_1
                    int32_t temp18_1
                    temp17_1:temp18_1 = sx.q(arg15)
                    int32_t rax_92 = (temp18_1 + (temp17_1 & 3)) s>> 2 << 6
                    r12_4 = rax_92
                    *(arg7 + (sx.q(r13_4.d) << 2)) = rax_92 - var_70
                    break
            else if (arg12 != 0 && arg10 == 0)
                goto label_1403fbbf3
            
            var_70 += r9_8
            r13_4 = zx.q(r13_4.d + 1)
            *(arg7 - (rsp + 0x20) + rdi_33) = r8_13.d
            rdi_33 += 4
            rcx_31 = &rcx_31[1]
            
            if (r13_4.d s>= r15.d)
                r12_4 = var_70
                break

*arg16 = r12_4
__security_check_cookie(rax_1 ^ &var_98)
return result
