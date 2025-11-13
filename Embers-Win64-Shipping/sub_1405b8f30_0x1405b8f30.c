// 函数: sub_1405b8f30
// 地址: 0x1405b8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = data_143cd5f28
int64_t* rax_1

if (*rdx != 0)
    rax_1 = 0x420

if (*rdx == 0 || (*(arg1 + 8) & 0x30) != 0)
    rax_1 = 0x250

int64_t* rbx = *(rax_1 + arg1)
int64_t rdi = 0
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(rax_1 + arg1 + 8)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(rax_1 + arg1 + 8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            sub_1405c9700(rcx)
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != r14_1)
    
    rdx = data_143cd5f28

int64_t* rax_4

if (*rdx != 0)
    rax_4 = 0x430

if (*rdx == 0 || (*(arg1 + 8) & 0x30) != 0)
    rax_4 = 0x260

int64_t* rbx_1 = *(rax_4 + arg1)
int64_t rsi_1 = 0
uint64_t r14_3 = sx.q(*(rax_4 + arg1 + 8)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(rax_4 + arg1 + 8))])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_1405c9700(rcx_1)
        
        rbx_1 = &rbx_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_3)
    
    rdx = data_143cd5f28

int64_t* rax_7

if (*rdx != 0)
    rax_7 = 0x440

if (*rdx == 0 || (*(arg1 + 8) & 0x30) != 0)
    rax_7 = 0x270

int64_t* rbx_2 = *(rax_7 + arg1)
void* result = &rbx_2[sx.q(*(rax_7 + arg1 + 8))]
uint64_t rsi_3 = sx.q(*(rax_7 + arg1 + 8)) << 3 u>> 3

if (rbx_2 u> result)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_2 = *rbx_2
        
        if (rcx_2 != 0)
            result = sub_1405c9700(rcx_2)
        
        rbx_2 = &rbx_2[1]
        rdi += 1
    while (rdi != rsi_3)

return result
