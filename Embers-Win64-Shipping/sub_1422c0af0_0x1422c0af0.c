// 函数: sub_1422c0af0
// 地址: 0x1422c0af0
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

*arg2 = rdi
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_143214be8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

arg2[1] = rax_1
int64_t* rsi = *arg2
int64_t var_38
int64_t* rax_2 = sub_140d21e10(*(arg1 + 0x60), &var_38, 0)

if (rsi != rax_2)
    int64_t rcx_2 = *rsi
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *rsi = *rax_2
    *rax_2 = 0
    rsi[1].d = rax_2[1].d
    *(rsi + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void* rsi_1 = *arg2
int32_t rax_5 = *(arg1 + 0x40)
int64_t rbp = sx.q(*(rsi_1 + 0x20))

if (rax_5 s> rbp.d)
    *(rsi_1 + 0x20) = rax_5
    int32_t i_2 = rax_5 - rbp.d
    
    if (rax_5 s> *(rsi_1 + 0x24))
        sub_1405c4d20(rsi_1 + 0x18)
    
    int64_t* rax_7 = *(rsi_1 + 0x18) + rbp * 0x14
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rax_7 = 0
            rax_7[1] = 0
            rax_7[2].w = 0x100
            *(rax_7 + 0x12) = 0
            rax_7 += 0x14
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (rax_5 s< rbp.d && rax_5 != rbp.d)
    *(rsi_1 + 0x20) = rax_5
    sub_1413a8970(rsi_1 + 0x18)

int32_t i_1 = 0

if (*(arg1 + 0x40) s> 0)
    int64_t r9_1 = 0
    int64_t rdx_3 = 0
    
    do
        int64_t* rcx_9 = *(arg1 + 0x38)
        void* rax_8 = *(rcx_9 + rdx_3)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            rax_9 = *(rax_8 + 0x28)
        
        int32_t rcx_10 = *(rcx_9 + rdx_3 + 0x18)
        rdx_3 += 0x20
        int64_t var_30_1 = rax_9
        var_38:4.d = rcx_10
        var_38.d = i_1
        i_1 += 1
        int128_t* rcx_11 = *(*arg2 + 0x18)
        char var_26_1 = 0
        *(rcx_11 + r9_1) = var_38.o
        *(rcx_11 + r9_1 + 0x10) = 0x100.d
        r9_1 += 0x14
    while (i_1 s< *(arg1 + 0x40))

return arg2
