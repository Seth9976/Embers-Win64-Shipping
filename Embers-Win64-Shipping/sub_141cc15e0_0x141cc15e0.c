// 函数: sub_141cc15e0
// 地址: 0x141cc15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x30)
void* const rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x14)
    *(rax + 0x18) = 0
    *(rax + 0x20) = 0
    *(rax + 0x28) = 1

*arg1 = rdi
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_143214be8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

arg1[1] = rax_1
int64_t* r14 = *arg1

if (*r14 != arg3)
    int32_t rdi_2
    
    if (arg3 == 0 || *arg3 == 0)
        rdi_2 = 0
    else
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg3[rdi_1] != 0)
        
        rdi_2 = rdi_1.d + 1
    
    int32_t rdx_1 = 0
    r14[1].d = 0
    
    if (*(r14 + 0xc) != rdi_2)
        sub_1405947f0(r14, rdi_2)
        rdx_1 = r14[1].d
    
    int32_t rax_2 = rdx_1 + rdi_2
    r14[1].d = rax_2
    
    if (rax_2 s> *(r14 + 0xc))
        sub_140594770(r14)
    
    if (rdi_2 != 0)
        memcpy(*r14, arg3, rdi_2 * 2)

void* rsi_1 = *arg1
int32_t rax_3 = *(arg2 + 0x1a0)
int64_t rbp = sx.q(*(rsi_1 + 0x20))

if (rax_3 s> rbp.d)
    *(rsi_1 + 0x20) = rax_3
    int32_t i_3 = rax_3 - rbp.d
    
    if (rax_3 s> *(rsi_1 + 0x24))
        sub_1405c4d20(rsi_1 + 0x18)
    
    int64_t* rdx_5 = *(rsi_1 + 0x18) + rbp * 0x14
    
    if (i_3 != 0)
        int32_t i
        
        do
            *rdx_5 = 0
            rdx_5[1] = 0
            rdx_5[2].w = 0x100
            *(rdx_5 + 0x12) = 0
            rdx_5 += 0x14
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (rax_3 s< rbp.d && rax_3 != rbp.d)
    *(rsi_1 + 0x20) = rax_3
    sub_1413a8970(rsi_1 + 0x18)

int32_t i_1 = 0

if (*(arg2 + 0x1a0) s> 0)
    int64_t r9_1 = 0
    int64_t* rdx_6 = nullptr
    
    do
        void* rcx_8 = *(rdx_6 + *(arg2 + 0x198))
        int64_t* rax_6
        
        if (*(rcx_8 + 0x10) s<= 0)
            rax_6 = &data_143f35860
        else
            rax_6 = *(rcx_8 + 8)
        
        rdx_6 = &rdx_6[2]
        int64_t var_40_1 = *rax_6
        int32_t i_2 = i_1
        i_1 += 1
        int32_t var_44_1 = 0
        int128_t* rcx_9 = *(*arg1 + 0x18)
        char var_36_1 = 0
        *(rcx_9 + r9_1) = i_2.o
        *(rcx_9 + r9_1 + 0x10) = 0x100.d
        r9_1 += 0x14
    while (i_1 s< *(arg2 + 0x1a0))

return arg1
