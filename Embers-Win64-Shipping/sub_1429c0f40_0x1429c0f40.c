// 函数: sub_1429c0f40
// 地址: 0x1429c0f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_660 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
int64_t r11 = sx.q(arg3)
int64_t* rsi = arg2
*arg1 = arg6
int32_t r8 = 0
arg1[1] = 0
arg1[2].w = 0xff
*(arg1 + 0x10) = 0
int128_t var_680
__builtin_memset(&var_680, 0, 0x18)
int64_t rdx = 0
int64_t var_690 = 0
int32_t var_5f8
int32_t* rax_3 = &var_5f8
int64_t i_9 = 7
int64_t i

do
    *rax_3 = 0
    __builtin_memset(&rax_3[2], 0, 0x38)
    rax_3 = &rax_3[0x10]
    i = i_9
    i_9 -= 1
while (i != 1)
__builtin_memset(rax_3, 0, 0x18)
void var_238
void* rax_4 = &var_238
int64_t i_10 = 7
int64_t i_1

do
    __builtin_memset(rax_4, 0xff, 0x40)
    rax_4 += 0x40
    i_1 = i_10
    i_10 -= 1
while (i_1 != 1)
__builtin_memset(rax_4, 0xff, 0x18)
void var_418
void* rax_5 = &var_418
int64_t i_11 = 7
int64_t i_2

do
    __builtin_memset(rax_5, 0, 0x40)
    rax_5 += 0x40
    i_2 = i_11
    i_11 -= 1
while (i_2 != 1)
__builtin_memset(rax_5, 0, 0x18)
char* rdi = *rsi
int64_t rbx = 0
int32_t r14 = 0
int64_t r12 = sx.q(arg4)
int64_t r10_1 = sx.q(arg5)
int64_t* r13 = var_680:8.q
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (r12 u<= r10_1)
    int64_t var_688_1 = r11
    
    while (true)
        int64_t r8_1 = *rsi
        
        if (rdi - r8_1 s> r11)
            sub_14297ab20(&exceptionObject, "Error decoding Huffman table (Truncated table data).")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        if (r14 s< 6)
            uint64_t rax_10 = zx.q(((5 - r14) u>> 3) + 1)
            uint64_t i_12 = zx.q(rax_10.d)
            r14 += (rax_10 << 3).d
            uint64_t i_3
            
            do
                rbx = rbx << 8 | zx.q(*rdi)
                rdi = &rdi[1]
                i_3 = i_12
                i_12 -= 1
            while (i_3 != 1)
        
        r14 -= 6
        uint64_t rsi_3 = zx.q((rbx u>> r14.b).d) & 0x3f
        
        if (rsi_3 == 0x3f)
            if (rdi - r8_1 s> r11)
                sub_14297ab20(&exceptionObject, 
                    "Error decoding Huffman table (Truncated table data).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            if (r14 s< 8)
                uint64_t rax_16 = zx.q(((7 - r14) u>> 3) + 1)
                uint64_t i_13 = zx.q(rax_16.d)
                r14 += (rax_16 << 3).d
                uint64_t i_4
                
                do
                    rbx = rbx << 8 | zx.q(*rdi)
                    rdi = &rdi[1]
                    i_4 = i_13
                    i_13 -= 1
                while (i_4 != 1)
            
            r14 -= 8
            int64_t r12_2 = r12 + 6 + zx.q((rbx u>> r14.b).b)
            
            if (r12_2 u> sx.q((r10_1 + 1).d))
                sub_14297ab20(&exceptionObject, 
                    "Error decoding Huffman table (Run beyond end of table).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            r12 = r12_2 - 1
        else if (rsi_3 u>= 0x3b)
            if (rsi_3 - 0x39 + r12 u> sx.q((r10_1 + 1).d))
                sub_14297ab20(&exceptionObject, 
                    "Error decoding Huffman table (Run beyond end of table).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            r12 = r12 - 0x3a + rsi_3
        else if (rsi_3 != 0)
            int64_t rcx_6 = (zx.q(rsi_3.d) & 0x3f) | r12 << 6
            int64_t var_668 = rcx_6
            
            if (rdx == r13)
                sub_1427c6dc0(&var_680, r13, &var_668)
                int64_t var_670
                var_690 = var_670
                r13 = var_680:8.q
                r10_1 = zx.q(arg5)
                r11 = var_688_1
            else
                *r13 = rcx_6
                r13 = &r13[1]
                var_680:8.q = r13
            
            char rcx_8 = rsi_3.b
            
            if (rsi_3 u< zx.q(arg1[2].b))
                arg1[2].b = rcx_8
            
            if (rsi_3 u> zx.q(*(arg1 + 9)))
                *(arg1 + 9) = rcx_8
            
            *(&var_5f8 + (rsi_3 << 3)) += 1
        
        r12 += 1
        rsi = arg2
        
        if (r12 u> sx.q(r10_1.d))
            break
        
        rdx = var_690
    
    r8 = arg1[1]

int32_t var_5f0
int32_t var_5e8
int32_t var_5e0
int32_t var_5d8
int32_t var_5d0
int32_t var_5c8
int32_t var_470
int32_t var_468
int32_t var_460
int32_t var_458
int32_t var_450
int32_t var_448
int32_t var_440
int32_t var_438
int32_t var_430
int32_t rdx_20 = var_470 + var_468 + var_460 + var_458 + var_450 + var_448 + var_440 + var_438
    + var_430 + r8 + var_5f8 + var_5f0 + var_5e8 + var_5e0 + var_5d8 + var_5d0 + var_5c8
int32_t var_5c0
int32_t var_5b8
int32_t var_5b0
int32_t var_5a8
int32_t var_5a0
int32_t var_598
int32_t var_590
int32_t var_588
int32_t var_580
int32_t var_578
int32_t var_570
int32_t var_568
int32_t var_560
int32_t var_558
int32_t var_550
int32_t var_548
int32_t rdx_36 = rdx_20 + var_5c0 + var_5b8 + var_5b0 + var_5a8 + var_5a0 + var_598 + var_590
    + var_588 + var_580 + var_578 + var_570 + var_568 + var_560 + var_558 + var_550 + var_548
int32_t var_540
int32_t var_538
int32_t var_530
int32_t var_528
int32_t var_520
int32_t var_518
int32_t var_510
int32_t var_508
int32_t var_500
int32_t var_4f8
int32_t var_4f0
int32_t var_4e8
int32_t var_4e0
int32_t var_4d8
int32_t var_4d0
int32_t var_4c8
int32_t rdx_52 = rdx_36 + var_540 + var_538 + var_530 + var_528 + var_520 + var_518 + var_510
    + var_508 + var_500 + var_4f8 + var_4f0 + var_4e8 + var_4e0 + var_4d8 + var_4d0 + var_4c8
int32_t var_4c0
int32_t var_4b8
int32_t var_4b0
int32_t var_4a8
int32_t var_4a0
int32_t var_498
int32_t var_490
int32_t var_488
int32_t var_480
int32_t var_478
arg1[1] = rdx_52 + var_4c0 + var_4b8 + var_4b0 + var_4a8 + var_4a0 + var_498 + var_490 + var_488
    + var_480 + var_478
*rsi = rdi
int64_t rcx_10 = zx.q(*(arg1 + 9)) + 1
int64_t rax_29 = 8 * rcx_10

if (mulu.dp.q(8, rcx_10) u>> 0x40 != zx.o(0))
    rax_29 = -1

int64_t rax_30 = j_sub_140a82f30(rax_29)
int64_t rcx_12 = rax_30
uint64_t r8_3 = zx.q(arg1[2].b)
uint32_t rsi_4 = zx.d(*(arg1 + 9))
double zmm0_1

if (r8_3.d u<= rsi_4)
    uint64_t* r9 = rax_30 + (r8_3 << 3)
    uint32_t i_5
    
    do
        int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(2 << (*(arg1 + 9) - r8_3.b)))
        int64_t rax_31 = *(&var_5f8 - rax_30 + r9)
        zmm0_1 = float.d(rax_31)
        
        if (rax_31 s< 0)
            zmm0_1 = zmm0_1 + 1.8446744073709552e+19
        
        *r9 = temp0_1 f* zmm0_1
        r8_3 = zx.q(r8_3.d + 1)
        r9 = &r9[1]
        i_5 = zx.d(*(arg1 + 9))
    while (r8_3.d s<= i_5)
    
    r8_3 = zx.q(arg1[2].b)
    rsi_4 = zx.d(i_5.b)
    rcx_12 = rax_30

uint64_t rbx_3 = zx.q(r8_3.b)
uint32_t i_6 = zx.d(rsi_4.b)

if (rbx_3.d u<= i_6)
    int32_t r13_1 = (rbx_3 + 1).d
    void* rdi_1 = &var_238 + (rbx_3 << 3)
    int32_t r12_5 = i_6 - rbx_3.d
    void* rax_33 = rcx_12 - &var_238
    void* var_688_2 = rax_33
    zmm6 = 0x43e0000000000000
    
    do
        zmm0_1 = (zx.o(0)).q
        
        if (rbx_3.d s< i_6)
            double* rcx_16 = rdi_1 + 8 + rax_33
            uint64_t j_1 = zx.q(i_6 - r13_1 + 1)
            uint64_t j
            
            do
                zmm0_1 = zmm0_1 + *rcx_16
                rcx_16 = &rcx_16[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        zmm0_1 = ceil(zmm0_1 f/ _mm_cvtepi32_pd(zx.q(2 << r12_5.b)))
        int64_t rcx_18 = 0
        
        if (not(zmm0_1 f< zmm6.q))
            zmm0_1 = zmm0_1 f- zmm6.q
            
            if (not(zmm0_1 f>= zmm6.q))
                rcx_18 = -0x8000000000000000
        
        *rdi_1 = int.q(zmm0_1) + rcx_18
        rbx_3 = zx.q(rbx_3.d + 1)
        r13_1 += 1
        r12_5 -= 1
        rdi_1 += 8
        rax_33 = var_688_2
    while (rbx_3.d s<= i_6)
    
    r13 = var_680:8.q

j_sub_140a74f90(rax_30)
uint64_t rax_37 = zx.q(*(arg1 + 9))
*(&var_418 + (rax_37 << 3)) = 0
uint32_t r8_4 = zx.d(arg1[2].b)

if (rax_37.d u> r8_4)
    void* rcx_20 = (sx.q(rax_37.d) << 3) + -fffffffffffffff8
    uint64_t i_15 = zx.q((rax_37 - 1).d - r8_4 + 1)
    uint64_t i_7
    
    do
        void var_410
        *(&var_418 + rcx_20) = *(&var_410 + rcx_20) + *(&var_5f0 + rcx_20)
        rcx_20 -= 8
        i_7 = i_15
        i_15 -= 1
    while (i_7 != 1)

int64_t rcx_21 = sx.q(arg1[1])
int64_t rax_41 = 4 * rcx_21

if (mulu.dp.q(4, rcx_21) u>> 0x40 != zx.o(0))
    rax_41 = -1

*(arg1 + 0x10) = j_sub_140a82f30(rax_41)
int32_t* rax_43 = &var_5f8
int64_t i_14 = 7
int64_t i_8

do
    __builtin_memset(rax_43, 0xff, 0x40)
    rax_43 = &rax_43[0x10]
    i_8 = i_14
    i_14 -= 1
while (i_8 != 1)
__builtin_memset(rax_43, 0xff, 0x18)
uint64_t r9_1 = zx.q(arg1[2].b)
uint32_t r8_5 = zx.d(*(arg1 + 9))

if (r9_1.d u<= r8_5)
    memcpy(&(&var_5f8)[r9_1 * 2], &var_418 + (r9_1 << 3), (r8_5 - r9_1.d + 1) << 3)

int64_t* rbx_4 = var_680.q
int64_t* rax_44 = rbx_4

if (rbx_4 != r13)
    do
        uint64_t rdx_70 = zx.q(*rax_44) & 0x3f
        int64_t r8_9 = *(&var_5f8 + (rdx_70 << 3))
        
        if (r8_9 u>= sx.q(arg1[1]))
            sub_14297ab20(&exceptionObject, "Huffman decode error (Invalid symbol in header).")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        *(*(arg1 + 0x10) + (r8_9 << 2)) = (*rax_44 u>> 6).d
        *(&var_5f8 + (rdx_70 << 3)) = r8_9 + 1
        rax_44 = &rax_44[1]
    while (rax_44 != r13)

sub_1429c1770(arg1, &var_238, &var_418)

if (rbx_4 != 0)
    int64_t* rax_45 = rbx_4
    
    if (((var_690 - rbx_4) & 0xfffffffffffffff8) u>= 0x1000)
        rbx_4 = rbx_4[-1]
        
        if (rax_45 - rbx_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rbx_4)

__security_check_cookie(rax_1 ^ &var_6b8)
return arg1
