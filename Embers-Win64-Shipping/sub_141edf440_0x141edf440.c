// 函数: sub_141edf440
// 地址: 0x141edf440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int32_t arg_10 = 0
*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405a51b0(arg1 + 0x90, 0)

if (*(rsi + 0x8c) != 1)
    return 

void** const var_c8
memset(&var_c8, 0, 0x90)
sub_140b4c2a0(&var_c8)
var_c8 = &data_14325f260
sub_140b552b0(&var_c8, 1)
int32_t var_98
int32_t var_98_1 = var_98 | 0x20000000
void* r15_1 = *(rsi + 0x10)
void* rax_1 = sub_140d209c0(rsi)
void* var_128 = r15_1
int64_t* i_2

if (r15_1 == 0)
    i_2 = nullptr
else
    i_2 = *(r15_1 + 0x50)

int32_t var_118_1 = 0xffffffff
int16_t var_114_1 = 0x101
char var_112_1 = 0
sub_1406328d0(&var_128)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    if (sub_140cea0a0(i, &var_c8) != 0)
        int32_t r8_1 = i[7].d
        int32_t rdi_1 = 0
        
        if (r8_1 s> 0)
            do
                int32_t rax_3 = *(i + 0x3c)
                int64_t r10_1 = sx.q(*(i + 0x4c))
                int64_t r9_2 = sx.q(rax_3 * rdi_1) + r10_1
                int32_t rcx_9
                void* r8_2
                
                if (rax_1 != 0)
                    if (r15_1 == 0)
                        rcx_9 = 0x7fffffff
                    else
                        rcx_9 = *(r15_1 + 0x58)
                    
                    r8_2 = r9_2 + rax_1
                
                if (rax_1 == 0 || rax_3 * r8_1 + r10_1.d s> rcx_9)
                    r8_2 = nullptr
                
                if ((*(*i + 0x80))(i, r9_2 + rsi, r8_2, 0) == 0)
                    int64_t rdi_2 = sx.q(*(arg1 + 0x98))
                    int64_t var_110
                    __builtin_memset(&var_110, 0, 0x20)
                    int32_t rax_8 = (rdi_2 + 1).d
                    *(arg1 + 0x98) = rax_8
                    
                    if (rax_8 s> *(arg1 + 0x9c))
                        sub_1405c4e40(arg1 + 0x90)
                    
                    uint64_t rax_9 = *(arg1 + 0x90)
                    int128_t zmm0_1 = var_110.o
                    int64_t rcx_13 = rdi_2 << 5
                    int64_t var_110_1
                    __builtin_memset(&var_110_1, 0, 0x30)
                    *(rcx_13 + rax_9) = zmm0_1
                    zmm0_1 = var_110_1.o
                    int64_t var_100
                    *(rcx_13 + rax_9 + 0x10) = var_100.o
                    int64_t rsi_3 = (sx.q(*(arg1 + 0x98)) << 5) + *(arg1 + 0x90)
                    *(rsi_3 - 0x20) = zmm0_1
                    int64_t var_100_1
                    *(rsi_3 - 0x10) = var_100_1.o
                    void* rax_10 = sub_140cbd010(i)
                    void* r14_1 = rax_10
                    int64_t var_d8
                    char rax_11
                    
                    if (rax_10 == 0)
                        arg_10 |= 1
                        sub_140b63b70(&i[5], &var_d8)
                        rax_11 = sub_140a237d0(&var_d8, u"__DelegateSignature", (r14_1 + 1).d)
                    
                    if (rax_10 != 0 || rax_11 == 0)
                        rdi_2.b = 0
                    else
                        rdi_2.b = 1
                    
                    if ((arg_10.b & 1) != 0)
                        int64_t rcx_17 = var_d8
                        arg_10 &= 0xfffffffe
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                    
                    if (rdi_2.b != 0)
                        r14_1 = sub_140cbcfb0(i)
                    
                    int64_t rcx_19 = i[5]
                    *(rsi_3 - 0x20) = r14_1
                    *(rsi_3 - 0x18) = rcx_19
                    int64_t var_f0
                    *(rsi_3 - 0x10) = var_f0.o
                    rsi = arg1
                    break
                
                r8_1 = i[7].d
                rdi_1 += 1
            while (rdi_1 s< r8_1)
    
    i_1 = i[4]
    sub_1406328d0(&var_128)

sub_140b4cb40(&var_c8)
