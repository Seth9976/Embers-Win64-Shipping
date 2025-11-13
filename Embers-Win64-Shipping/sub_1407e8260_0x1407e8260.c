// 函数: sub_1407e8260
// 地址: 0x1407e8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) == 4)
    return 

void* rax_1 = *(arg1 + 0x58)
int64_t* rdi_1 = *(rax_1 + 0x500)
int32_t i_2 = 0
int64_t rsi_1 = 0
uint64_t r15_2 = sx.q(*(rax_1 + 0x508)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(rax_1 + 0x508))])
    r15_2 = 0

if (r15_2 != 0)
    do
        sub_140820ac0(sub_140852250(*(arg1 + 0x780), *rdi_1) + 0x40, arg1 + 0x80, nullptr)
        rsi_1 += 1
        rdi_1 = &rdi_1[1]
    while (rsi_1 != r15_2)

void* rax_5 = *(arg1 + 0x3c0)
int64_t rsi_2 = 0
int64_t* rdi_2 = *(rax_5 + 0x500)
uint64_t r15_4 = sx.q(*(rax_5 + 0x508)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(rax_5 + 0x508))])
    r15_4 = 0

if (r15_4 != 0)
    do
        sub_140820ac0(sub_140852250(*(arg1 + 0x780), *rdi_2) + 0x40, arg1 + 0x3e8, nullptr)
        rsi_2 += 1
        rdi_2 = &rdi_2[1]
    while (rsi_2 != r15_4)

int32_t i = 0

if (*(arg1 + 0x738) s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t r15_5 = 0
        void* rcx_4 = *(*(arg1 + 0x730) + r13_1)
        int64_t* rsi_3 = *(rcx_4 + 0x500)
        uint64_t r12_2 = sx.q(*(rcx_4 + 0x508)) << 3 u>> 3
        
        if (rsi_3 u> &rsi_3[sx.q(*(rcx_4 + 0x508))])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                sub_140820ac0(sub_140852250(*(arg1 + 0x780), *rsi_3) + 0x40, 
                    sx.q(i) * 0x368 + 0x28 + *(arg1 + 0x730), nullptr)
                r15_5 += 1
                rsi_3 = &rsi_3[1]
            while (r15_5 != r12_2)
            
            i_2 = 0
        
        i += 1
        r13_1 += 0x368
    while (i s< *(arg1 + 0x738))

if (arg2 != 0)
    return 

uint64_t rsi_5 = *(arg1 + 0x780) + 0x150
sub_140820ac0(rsi_5, arg1 + 0x80, nullptr)
sub_140820ac0(rsi_5, arg1 + 0x3e8, nullptr)
void* i_1 = *(arg1 + 0x730)

for (void* rbp_2 = sx.q(*(arg1 + 0x738)) * 0x368 + i_1; i_1 != rbp_2; i_1 += 0x368)
    sub_140820ac0(rsi_5, i_1 + 0x28, nullptr)

if ((*(arg1 + 0x788))[0x36].b != 1)
    return 

sub_140820ac0(arg1 + 0x80, *(arg1 + 0x728) + 0x58, nullptr)
sub_140820ac0(arg1 + 0x3e8, *(arg1 + 0x728) + 0x58, nullptr)
int32_t* rax = *(arg1 + 0x788)

if (rax[0x7a] s<= 0)
    return 

int64_t rdi_4 = 0

do
    sub_140820ac0(*(*(*(rax + 0x1e0) + rdi_4) + 0x28) + 0x40, *(arg1 + 0x728) + 0x58, nullptr)
    rax = *(arg1 + 0x788)
    rdi_4 += 8
    i_2 += 1
while (i_2 s< rax[0x7a])
