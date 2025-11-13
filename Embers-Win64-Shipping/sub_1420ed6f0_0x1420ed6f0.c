// 函数: sub_1420ed6f0
// 地址: 0x1420ed6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
char rax_4 = arg2[5].b
int64_t r12 = 0

if ((rax_4 & 1) == 0)
    goto label_1420ed9ad

int32_t rax_5
rax_5, zmm1 = sub_140b4e7c0(arg2, &data_1439a4b70)
uint64_t var_1b8
int64_t* var_1a0
char* var_190

if (rax_5 s>= 3)
    rax_4 = arg2[5].b
label_1420ed9ad:
    
    if ((rax_4 & 2) == 0 || rax_4 s>= 0)
        sub_1419df090(arg2, &arg1[0x98], zmm1)
    else
        int32_t rdx_12 = *(arg1 + 0xa0)
        var_1b8 = 0
        int64_t var_1b0_1 = 0
        
        if (rdx_12 s> 0)
            sub_140638c50(&var_1b8, rdx_12)
        
        int64_t* i = *(arg1 + 0x98)
        
        for (void* r14_2 = &i[sx.q(*(arg1 + 0xa0))]; i != r14_2; i = &i[1])
            void* rdx_14 = *i
            
            if (rdx_14 != 0 && ((*(rdx_14 + 8) u>> 6).b & 1) == 0)
                int64_t rsi_2 = sx.q(var_1b0_1.d)
                int32_t rax_21 = (rsi_2 + 1).d
                var_1b0_1.d = rax_21
                
                if (rax_21 s> var_1b0_1:4.d)
                    sub_1405a4d70(&var_1b8)
                    rdx_14 = *i
                
                *(var_1b8 + (rsi_2 << 3)) = rdx_14
        
        sub_1419df090(arg2, &var_1b8, zmm1)
        uint64_t rcx_21 = var_1b8
        
        if (rcx_21 != 0)
            zmm1 = sub_140a74f90(rcx_21)
else
    int64_t rax_6 = *arg2
    var_1a0 = nullptr
    int32_t var_198_1 = 0
    var_190 = arg1
    (*(rax_6 + 0x130))(arg2, &var_190)
    sub_1419df090(arg2, &var_1a0, zmm1)
    int32_t rax_7 = var_198_1
    
    if (rax_7 s> *(arg1 + 0xa4))
        sub_140638c50(&arg1[0x98], rax_7)
        rax_7 = var_198_1
    
    int64_t* rsi_1 = var_1a0
    void* rcx_6 = &rsi_1[sx.q(rax_7)]
    uint64_t r13_4 = (rcx_6 - rsi_1 + 7) u>> 3
    
    if (rsi_1 u> rcx_6)
        r13_4 = 0
    
    if (r13_4 != 0)
        do
            int64_t r14_1 = sx.q(*(arg1 + 0xa0))
            var_1b8 = *rsi_1
            int32_t rax_10 = (r14_1 + 1).d
            *(arg1 + 0xa0) = rax_10
            
            if (rax_10 s> *(arg1 + 0xa4))
                sub_1405a4d70(&arg1[0x98])
            
            rsi_1 = &rsi_1[1]
            r12 += 1
            *(*(arg1 + 0x98) + (r14_1 << 3)) = var_1b8
        while (r12 != r13_4)
        
        rsi_1 = var_1a0
    
    if (rsi_1 != 0)
        zmm1 = sub_140a74f90(rsi_1)

int512_t zmm1_1 = sub_1423ff730(arg2, &arg1[0x30], zmm1)
(*(*arg2 + 0x130))(arg2, &arg1[0xc0])
sub_1408dc5a0(arg2, &arg1[0xc8], zmm1_1)

if ((*(arg2 + 0x2b) & 2) == 0 || arg2[8].d s< 0x143)
    int64_t rax_13 = *arg2
    var_1b8 = 0
    (*(rax_13 + 0x130))(arg2, &var_1b8)

(*(*arg2 + 0x130))(arg2, &arg1[0xe8])
int64_t var_188
int64_t var_168
int32_t var_158
int32_t var_140

if ((arg2[5].b & 1) != 0)
    int32_t rax_15
    rax_15, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (rax_15 s< 3)
        __builtin_memset(&var_188, 0, 0x2c)
        int32_t var_15c_1 = 0x80
        var_158 = 0xffffffff
        int32_t var_154_1 = 0
        int64_t var_148_1 = 0
        int32_t var_140_1 = 0
        uint64_t var_a8 = 0
        int64_t var_a0
        __builtin_memset(&var_a0, 0, 0x24)
        int32_t var_7c_1 = 0x80
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int512_t zmm1_3 = sub_1420da1d0(arg2, &var_a8, sub_1420da2a0(arg2, &var_188, zmm1_1))
        int64_t* rcx_17 = arg2[1]
        int64_t rax_17 = *rcx_17 + 4
        
        if (rax_17 u> rcx_17[1])
            char var_1a8
            int32_t rax_23
            rax_23.b = var_1a8 != 0
            var_1b8.d = rax_23
            (*(*arg2 + 0x150))(arg2, &var_1b8, 4)
        else
            *rcx_17 = rax_17
        
        char rax_25 = arg2[5].b
        
        if ((rax_25 & 1) != 0)
            int64_t* rcx_24 = arg2[1]
            int32_t* rdx_18 = *rcx_24
            
            if (&rdx_18[1] u> rcx_24[1])
                int32_t* rdx_19 = &var_1b8
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_19, zmm1_3)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_19, 4)
            else
                var_1b8.d = *rdx_18
                *rcx_24 += 4
            
            int64_t rbx_2 = *arg2
            int64_t rax_29 = (*(rbx_2 + 0x20))(arg2)
            (*(rbx_2 + 0x178))(arg2, zx.q(var_1b8.d) + rax_29)
        else if ((rax_25 & 2) != 0)
            int64_t* rcx_28 = arg2[1]
            var_1b8.d = 0
            int32_t* rdx_22 = *rcx_28
            
            if (&rdx_22[1] u> rcx_28[1])
                int32_t* rdx_23 = &var_1b8
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_23, zmm1_3)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_23, 4)
            else
                var_1b8.d = *rdx_22
                *rcx_28 += 4
        
        if (arg2[8].d s< 0xfb)
            (*(*arg2 + 0x130))(arg2, &var_1b8)
        
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x2c)
        int32_t var_cc_1 = 0x80
        int32_t var_c8_1 = 0xffffffff
        int32_t var_c4_1 = 0
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        sub_1420da370(arg2, &var_f8, zmm1_3)
        int32_t var_b0_2 = 0
        
        if (var_b8_1 != 0)
            sub_140a74f90(var_b8_1)
        
        int64_t var_f0
        bool cond:4_1 = var_f0:4.d == 0
        var_f0.d = 0
        
        if (not(cond:4_1))
            sub_1405a5130(&var_f8, 0)
        
        int32_t var_c8_2 = 0xffffffff
        int32_t var_c4_2 = 0
        int64_t var_e8
        sub_14059a8e0(&var_e8, 0)
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t rcx_36 = var_f8
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        int32_t var_60_2 = 0
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        sub_140cb92f0(&var_a8, 0)
        int64_t var_88
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        uint64_t rcx_40 = var_a8
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        var_140 = 0
        
        if (var_148_1 != 0)
            sub_140a74f90(var_148_1)
        
        zmm1_1 = sub_140cb92f0(&var_188, 0)
        
        if (var_168 != 0)
            zmm1_1 = sub_140a74f90(var_168)
        
        int64_t rcx_44 = var_188
        
        if (rcx_44 != 0)
            zmm1_1 = sub_140a74f90(rcx_44)

if (((*(arg1 + 8) u>> 4).b & 1) == 0 && arg2[5].b s< 0)
    *(arg2 + 0x29) |= 8
    void* rax_36 = sub_140d21d80(arg1)
    *(rax_36 + 0x50) |= 0x20000

(*(*arg2 + 0x130))(arg2, &arg1[0xf0])
(*(*arg2 + 0x130))(arg2, &arg1[0xf8])

if ((arg2[5].b & 1) != 0)
    int32_t rax_39
    uint128_t zmm6_1
    rax_39, zmm1_1, zmm6_1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (rax_39 s< 9)
        uint128_t var_48_1 = zmm6_1
        char* rax_40 = j_sub_140a82f30(0x160)
        char* rbx_3
        
        if (rax_40 == 0)
            rbx_3 = nullptr
        else
            char* rax_41
            rax_41, zmm1_1 = sub_142287bb0(rax_40)
            rbx_3 = rax_41
        
        sub_14228bea0(arg2, rbx_3, zmm1_1)
        uint128_t zmm6_2 = *(arg1 + 0x1d0)
        var_190 = rbx_3
        EnterCriticalSection(&data_143a2e5f8)
        char* zmm0_1 = var_190
        int64_t r8_1 = zmm6_2.q
        data_143a2e628.o = zmm6_2
        data_143a2e620 = arg1
        int64_t rcx_51 = _mm_bsrli_si128(zmm6_2, 8).q
        data_143a2e638 = zmm0_1
        
        if (((r8_1 u>> 0x20).d | (rcx_51 u>> 0x20).d | rcx_51.d | r8_1.d) != 0)
            if (data_143a2e5b0 == data_143a2e5dc)
                sub_140d186f0(&data_143e1d990, &data_143a2e5a0)
            
            var_1a0 = &data_143a2e620
            int64_t* var_198_2 = &data_143a2e628
            zmm1_1 = sub_141f2c030(&data_143a2e5a8, &var_1b8, &var_1a0, nullptr)
        else
            zmm1_1 = sub_141f222b0(&data_143a2e5a0, arg1)
        
        LeaveCriticalSection(&data_143a2e5f8)

int512_t zmm1_4 = sub_1420daf90(arg2, &arg1[0x150], zmm1_1)
sub_1420db0d0(arg2, &arg1[0x180], zmm1_4)
int32_t result = arg2[8].d - 0xe0

if (result u<= 0x2b)
    int32_t rax_46 = data_143dbb200
    __builtin_memset(&var_188, 0, 0x18)
    int64_t zmm0_2 = data_143dbb1f8.q
    var_168 = zmm0_2
    int64_t var_170_1 = zmm0_2
    int32_t var_15c_2 = rax_46
    var_168.d = rax_46
    var_158.b = 0
    int64_t var_150 = 0
    int32_t var_148_2 = 0
    sub_1405947f0(&var_150, 0xe)
    int32_t rax_47 = var_148_2 + 0xe
    var_148_2 = rax_47
    
    if (rax_47 s> 0)
        sub_140594770(&var_150)
    
    int32_t r8_3 = UnDecorator::getReferenceType(var_150, u"Uncategorized", 0x1c)
    var_140.q = 0
    int32_t var_138_1 = 0
    int32_t var_134_1 = 0xc350
    char var_130_1 = 1
    char var_128_1 = 0
    int64_t var_120
    __builtin_memset(&var_120, 0, 0x24)
    result = sub_140b97d30(arg2, &var_188, zmm1_4, r8_3)
    int64_t var_110
    
    if (var_110 != 0)
        result = sub_140a74f90(var_110)
    
    int64_t rcx_59 = var_120
    
    if (rcx_59 != 0)
        result = sub_140a74f90(rcx_59)
    
    int64_t rcx_60 = var_150
    
    if (rcx_60 != 0)
        result = sub_140a74f90(rcx_60)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
