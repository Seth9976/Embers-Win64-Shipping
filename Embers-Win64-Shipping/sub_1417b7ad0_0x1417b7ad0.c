// 函数: sub_1417b7ad0
// 地址: 0x1417b7ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_f8
sub_1405ba560(arg1 + 0x170, &var_f8, arg2)
int64_t rax_2 = sx.q(var_f8)
int64_t rdi = 0
void* const r15_2

if (rax_2.d == 0xffffffff)
    r15_2 = nullptr
else
    r15_2 = (rax_2 << 5) + *(arg1 + 0x170)

int32_t r11 = *(r15_2 + 0x10)
void* rsi = nullptr
void* const var_d8 = r15_2
int32_t rax_3 = r11
void* var_c8 = nullptr
int32_t var_bc = 0

if (r11 s> 0)
    sub_140638a00(&var_c8)
    rax_3 = *(r15_2 + 0x10)
    rsi = var_c8

int32_t i = 0
void* r8_1

if (rax_3 s> 0)
    int64_t r9_1 = 0
    r8_1 = rsi
    
    do
        r9_1 += 8
        i += 1
        r8_1 += 0xc
        int64_t* rcx_2 = *(r9_1 + *(r15_2 + 8) - 8)
        int64_t rdx_2 = sx.q(rcx_2[1].d) * 3
        int64_t rcx_3 = *(*rcx_2 + 0x28)
        *(r8_1 - 0xc) = *(rcx_3 + (rdx_2 << 2))
        *(r8_1 - 4) = *(rcx_3 + (rdx_2 << 2) + 8)
    while (i s< *(r15_2 + 0x10))

r8_1.b = 1
int64_t* var_f0 = nullptr
int32_t i_4 = 0
int64_t* var_b8 = rsi
int32_t var_b0 = r11
sub_141521d00(&var_b8, &var_f0, r8_1.b, 0x38d1b717)
int32_t i_5 = i_4
int64_t rcx_5 = 0
int64_t var_58 = 0
int32_t rdx_4 = 0
var_f8 = 0
int64_t r13 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_50 = 0

if (i_5 s> 0)
    int64_t* rsi_1 = var_f0
    int64_t r14_1 = 0
    int64_t var_d0_1 = 0
    
    do
        int32_t i_1 = 0
        
        if (*(rsi_1 + r14_1 + 8) s> 0)
            do
                int64_t** rdx_5 = *(r15_2 + 8)
                int64_t* r15_3 = *(rdx_5 + rcx_5)
                int64_t* r12_1 = rdx_5[sx.q(*(*(rsi_1 + r14_1) + rdi))]
                int64_t* rax_9 = r12_1
                
                if (r15_3 u< r12_1)
                    rax_9 = r15_3
                
                var_b8 = rax_9
                int64_t* rax_10 = r15_3
                
                if (r15_3 u< r12_1)
                    rax_10 = r12_1
                
                var_b0.q = rax_10
                int32_t var_e0
                sub_1417adff0(&var_98, &var_e0, &var_b8)
                int64_t rax_11 = sx.q(var_e0)
                
                if (rax_11.d == 0xffffffff || rax_11 * 0x18 == neg.q(r13))
                    sub_1417a98a0(arg1, r15_3, r12_1)
                    void var_a8
                    sub_14178d090(&var_98, &var_a8, &var_b8, nullptr)
                    rsi_1 = var_f0
                    r13 = var_98
                
                r15_2 = var_d8
                i_1 += 1
                rcx_5 = var_d0_1
                rdi += 4
            while (i_1 s< *(rsi_1 + r14_1 + 8))
            
            i_5 = i_4
            rdi = 0
            rdx_4 = var_f8
        
        rdx_4 += 1
        rcx_5 += 8
        r14_1 += 0x10
        var_f8 = rdx_4
        var_d0_1 = rcx_5
    while (rdx_4 s< i_5)
    
    rcx_5 = var_58
    rsi = var_c8

int32_t var_50_1 = 0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_90
bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_1405a5130(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_15 = var_98

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int32_t i_3 = i_4
int64_t* rbx_1 = var_f0

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t rcx_16 = *rbx_1
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        rbx_1 = &rbx_1[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rbx_1 = var_f0

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_118)
return result
