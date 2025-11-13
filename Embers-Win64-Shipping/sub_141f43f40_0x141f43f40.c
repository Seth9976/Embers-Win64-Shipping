// 函数: sub_141f43f40
// 地址: 0x141f43f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f3b590
int64_t rcx
int64_t rsi

if (data_143de5480 == 0)
    rsi = 0
    rcx = 0
else
    rsi = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

if (*(rbx + (rcx << 2)) == 0)
    return 

if (*(arg2 + 0x67) != 0)
    sub_141f38350(arg2 + 0x88, arg2 + 0x68)

if (*(arg2 + 0x66) != 0)
    *(arg2 + 0x40) = 0
    
    if (*(arg2 + 0x44) s<= 0xffffffff)
        sub_1405a5220(arg2 + 0x38, 0)
    
    sub_141f2b4a0(arg2 + 0x38, arg2 + 0x18)
    int32_t rax_1 = *(arg2 + 0x54)
    *(arg2 + 0x50) = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5220(arg2 + 0x48, 0)
    
    sub_141f2b4a0(arg2 + 0x48, arg2 + 0x28)

if (*(arg2 + 0x64) == 0)
    return 

float zmm6[0x4]

if ((*(arg1 + 0x5a8) & 2) == 0 || *(arg1 + 0x630) == 0)
    zmm6 = *(arg1 + 0x564)
else
    int64_t* rcx_6 = *(arg1 + 0x650)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x2a0))(rcx_6)
        int64_t* rcx_7 = *(arg1 + 0x650)
        (*(*rcx_7 + 0x2a8))(rcx_7, arg2)
    
    int64_t* r14_1 = *(arg1 + 0x6c0)
    uint64_t r15_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
    
    if (r14_1 u> &r14_1[sx.q(*(arg1 + 0x6c8))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* rbx_1 = *r14_1
            (*(*rbx_1 + 0x2a0))(rbx_1)
            (*(*rbx_1 + 0x2a8))(rbx_1, arg2)
            rsi += 1
            r14_1 = &r14_1[1]
        while (rsi != r15_2)
    
    int64_t* rcx_10 = *(arg1 + 0x658)
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x2a0))(rcx_10)
        int64_t* rcx_11 = *(arg1 + 0x658)
        (*(*rcx_11 + 0x2a8))(rcx_11, arg2)
    
    zmm6 = sub_141f62ee0(*(arg1 + 0x630))

sub_141ded7c0(arg2 + 0x28, arg2 + 0x48, zmm6, arg1 + 0x7e0)
sub_141f41c10(arg2 + 0x68, arg2 + 0x88, 
    sub_141f3a7d0(arg1, *(arg2 + 0x10), arg2 + 0x28, arg2 + 0x18))
