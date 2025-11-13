// 函数: sub_140feb040
// 地址: 0x140feb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f160 == 0)
    sub_140fed030(*(arg1 + 0x10))
    bool cond:1_1 = data_143f0f168 != 0
    data_143f0f160 = 1
    data_143f0f161 = cond:1_1

*(arg1 + 0x1c) = 0
*(arg1 + 0x38) = 0

if (data_143f0f161 == 0)
    return 

int64_t rsi_1 = sx.q(*(arg1 + 0x18))
int64_t rax_1 = 8 * rsi_1

if (mulu.dp.q(8, rsi_1) u>> 0x40 != zx.o(0))
    rax_1 = -1

int64_t rax_2 = rax_1 + 8

if (rax_1 u>= -8)
    rax_2 = -1

int64_t* rax_3 = j_sub_140a82f30(rax_2)
void* rdx_1

if (rax_3 == 0)
    rdx_1 = nullptr
else
    *rax_3 = rsi_1
    rdx_1 = &rax_3[1]
    
    if (rsi_1 != 0)
        __builtin_memset(rdx_1, 0, rsi_1 << 3)

int64_t rsi_2 = sx.q(*(arg1 + 0x18))
*(arg1 + 0x28) = rdx_1
int64_t rax_4 = 8 * rsi_2

if (mulu.dp.q(8, rsi_2) u>> 0x40 != zx.o(0))
    rax_4 = -1

int64_t rax_5 = rax_4 + 8

if (rax_4 u>= -8)
    rax_5 = -1

int64_t* rax = j_sub_140a82f30(rax_5)
void* rdx_2

if (rax == 0)
    rdx_2 = nullptr
else
    *rax = rsi_2
    rdx_2 = &rax[1]
    
    if (rsi_2 != 0)
        __builtin_memset(rdx_2, 0, rsi_2 << 3)

int32_t i = 0
*(arg1 + 0x30) = rdx_2

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t rdi_3 = 0

do
    void* rax_6 = *(arg1 + 0x10)
    int64_t* rsi_4 = *(arg1 + 0x28) + rdi_3
    int64_t arg_8 = 2
    int64_t* rcx_5 = *rsi_4
    int64_t* r14_1 = *(rax_6 + 0x168)
    *rsi_4 = 0
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
    
    int32_t rax_9 = (*(*r14_1 + 0xc0))(r14_1, &arg_8, rsi_4)
    
    if (data_143f0f161 == 0 || rax_9 != 0)
        rax_9.b = 0
    else
        rax_9.b = 1
    
    data_143f0f161 = rax_9.b
    int64_t* rsi_6 = *(arg1 + 0x30) + rdi_3
    int64_t* rcx_7 = *rsi_6
    int64_t* r14_2 = *(*(arg1 + 0x10) + 0x168)
    *rsi_6 = 0
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x10))(rcx_7)
    
    rax = (*(*r14_2 + 0xc0))(r14_2, &arg_8, rsi_6)
    
    if (data_143f0f161 == 0 || rax.d != 0)
        rax.b = 0
    else
        rax.b = 1
    
    i += 1
    data_143f0f161 = rax.b
    rdi_3 += 8
while (i s< *(arg1 + 0x18))
