// 函数: sub_1422429d0
// 地址: 0x1422429d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdx = *(arg1 + 0x2008)
void* var_b8 = arg1
int32_t rbx = 0
int32_t var_d0 = 0
void* r13 = arg1
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int64_t rsi = 0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t var_d8 = 0
int32_t var_cc = 0

if (rdx s> 0)
    sub_1405c5570(&var_d8, rdx)
    rbx = var_d0
    rsi = var_d8

int64_t r14 = 0
int64_t* r15 = *(r13 + 0x2000)
uint64_t r12_1 = sx.q(*(r13 + 0x2008)) << 3 u>> 3

if (r15 u> &r15[sx.q(*(r13 + 0x2008))])
    r12_1 = 0

int32_t var_c8
void* var_c0
int64_t* var_b0

if (r12_1 != 0)
    var_b0 = &var_c0
    
    do
        void* rax_4 = *r15
        var_c0 = rax_4
        *(rax_4 + 0x30) = 0xffffffff
        sub_140999140(&var_88, &var_c8, &var_b0, nullptr)
        void* r8_2 = var_c0
        int64_t* rcx_2 = nullptr
        int64_t* rax_5 = *(r8_2 + 0x10)
        
        if (*(rax_5 + 0xc) u>= 1)
            rcx_2 = rax_5
        
        int64_t* rax_6
        
        if (rcx_2 != 0)
            rax_6 = nullptr
            
            if (*(rcx_2 + 0xc) u>= 2)
                rax_6 = rcx_2
        
        if (rcx_2 == 0 || rax_6 == 0 || *(sx.q(rax_6[1].d) + *(*rax_6 + 0x398)) != 4)
            int64_t rdi_1 = sx.q(rbx)
            *(r8_2 + 0x30) = 0
            rbx = (rdi_1 + 1).d
            
            if (rbx s> var_cc)
                sub_1405a4d70(&var_d8)
                rsi = var_d8
            
            *(rsi + (rdi_1 << 3)) = var_c0
        
        r15 = &r15[1]
        r14 += 1
    while (r14 != r12_1)
    
    r13 = var_b8

int64_t* r15_1 = *(r13 + 0x2018)
int64_t r13_1 = 0
uint64_t rcx_6 = sx.q(*(r13 + 0x2020)) << 3 u>> 3

if (r15_1 u> &r15_1[sx.q(*(r13 + 0x2020))])
    rcx_6 = 0

int128_t zmm0

if (rcx_6 != 0)
    do
        int128_t* r12_2 = *r15_1
        zmm0 = *r12_2
        var_b0.o = zmm0
        sub_1405ba560(&var_88, &var_c0, zmm0.q)
        int64_t rax_11 = sx.q(var_c0.d)
        void* const rcx_10
        
        if (rax_11.d == 0xffffffff)
            rcx_10 = nullptr
        else
            rcx_10 = (rax_11 << 5) + var_88
        
        int64_t r14_1 = sx.q(*(rcx_10 + 0x10))
        int32_t rax_12 = (r14_1 + 1).d
        *(rcx_10 + 0x10) = rax_12
        
        if (rax_12 s> *(rcx_10 + 0x14))
            sub_1405a4d70(rcx_10 + 8)
        
        *(*(rcx_10 + 8) + (r14_1 << 3)) = r12_2
        int64_t var_a8
        sub_1405ba560(&var_88, &var_c8, var_a8)
        int64_t rax_14 = sx.q(var_c8)
        void* const rcx_15
        
        if (rax_14.d == 0xffffffff)
            rcx_15 = nullptr
        else
            rcx_15 = (rax_14 << 5) + var_88
        
        int64_t r14_2 = sx.q(*(rcx_15 + 0x10))
        int32_t rax_15 = (r14_2 + 1).d
        *(rcx_15 + 0x10) = rax_15
        
        if (rax_15 s> *(rcx_15 + 0x14))
            sub_1405a4d70(rcx_15 + 8)
        
        r15_1 = &r15_1[1]
        r13_1 += 1
        *(*(rcx_15 + 8) + (r14_2 << 3)) = r12_2
    while (r13_1 != rcx_6)
    
    rsi = var_d8

var_c0.d = 0
int32_t rdi_4 = 0

if (rbx s> 0)
    void* rax_17 = nullptr
    var_b0 = nullptr
    
    do
        void* r13_2 = *(rax_17 + rsi)
        sub_1405ba560(&var_88, &var_c8, r13_2)
        int64_t rax_18 = sx.q(var_c8)
        void* const rcx_20
        
        if (rax_18.d == 0xffffffff)
            rcx_20 = nullptr
        else
            rcx_20 = (rax_18 << 5) + var_88
        
        int64_t* r12_3 = *(rcx_20 + 8)
        int64_t r15_2 = 0
        uint64_t rcx_22 = sx.q(*(rcx_20 + 0x10)) << 3 u>> 3
        
        if (r12_3 u> &r12_3[sx.q(*(rcx_20 + 0x10))])
            rcx_22 = 0
        
        uint64_t var_a0_1 = rcx_22
        
        if (rcx_22 != 0)
            do
                zmm0 = **r12_3
                void* r14_3 = zmm0.q
                
                if (*(r14_3 + 0x30) == 0xffffffff)
                    int64_t rdi_5 = sx.q(rbx)
                    *(r14_3 + 0x30) = *(r13_2 + 0x30) + 1
                    rbx = (rdi_5 + 1).d
                    
                    if (rbx s> var_cc)
                        sub_1405a4d70(&var_d8)
                        rcx_22 = var_a0_1
                        rsi = var_d8
                    
                    *(rsi + (rdi_5 << 3)) = r14_3
                
                void* rdi_6 = zmm0:8.q
                
                if (*(rdi_6 + 0x30) == 0xffffffff)
                    int64_t r14_4 = sx.q(rbx)
                    *(rdi_6 + 0x30) = *(r13_2 + 0x30) + 1
                    rbx = (r14_4 + 1).d
                    
                    if (rbx s> var_cc)
                        sub_1405a4d70(&var_d8)
                        rsi = var_d8
                    
                    rcx_22 = var_a0_1
                    *(rsi + (r14_4 << 3)) = rdi_6
                
                r12_3 = &r12_3[1]
                r15_2 += 1
            while (r15_2 != rcx_22)
            
            rdi_4 = var_c0.d
        
        rdi_4 += 1
        rax_17 = &var_b0[1]
        var_c0.d = rdi_4
        var_b0 = rax_17
    while (rdi_4 s< rbx)

void* rax_27 = var_b8
int64_t rdi_7 = 0
int64_t* rbx_1 = *(rax_27 + 0x2018)
uint64_t r14_6 = sx.q(*(rax_27 + 0x2020)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(rax_27 + 0x2020))])
    r14_6 = 0

if (r14_6 != 0)
    do
        int64_t* rcx_25 = *rbx_1
        var_b8.d = *(*rcx_25 + 0x30)
        var_b8:4.d = *(rcx_25[1] + 0x30)
        sub_14177fd90(rcx_25[3], &var_b8)
        rdi_7 += 1
        rbx_1 = &rbx_1[1]
    while (rdi_7 != r14_6)

if (rsi != 0)
    sub_140a74f90(rsi)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_140597460(&var_88)
__security_check_cookie(rax_1 ^ &var_f8)
return result
