// 函数: sub_1419976c0
// 地址: 0x1419976c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x10) != 0)
    return 

void* rsi_1 = *(*(arg2 + 0x28) + 0x80)

if (*(arg2 + 0x30) == 1)
    int64_t rax_2 = *(rsi_1 + 0x78)
    
    if (rax_2 == 0)
        int64_t* rcx = data_143f0f180
        void arg_18
        (*(*rcx + 0x348))(rcx, &arg_18, *(rsi_1 + 8))
        sub_1405d1600(rsi_1 + 0x78, &arg_18)
        sub_1405ec8a0(&arg_18)
        rax_2 = *(rsi_1 + 0x78)
    
    *(arg2 + 0x10) = rax_2
    return 

int64_t r10_1 = sx.q(*(rsi_1 + 0x58))
int32_t r8_2 = 0

if (r10_1 s> 0)
    void* rax_4 = *(rsi_1 + 0x50)
    void* r9_1 = rsi_1 + 0x38
    int64_t rdx_2 = 0
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    char* rcx_3 = nullptr
    
    do
        if (*(rcx_3 + r9_1) == *(arg2 + 0x18) && *(rcx_3 + r9_1 + 1) == *(arg2 + 0x19)
                && *(rcx_3 + r9_1 + 2) == *(arg2 + 0x1a) && *(rcx_3 + r9_1 + 4) == *(arg2 + 0x1c)
                && *(rcx_3 + r9_1 + 8) == *(arg2 + 0x20)
                && *(rcx_3 + r9_1 + 0xc) == *(arg2 + 0x24))
            *(arg2 + 0x10) = *(r9_1 + sx.q(r8_2) * 0x18 + 0x10)
            return 
        
        r8_2 += 1
        rdx_2 += 1
        rcx_3 = &rcx_3[0x18]
    while (rdx_2 s< r10_1)

int64_t* rcx_4 = data_143f0f180
int64_t arg_10
(*(*rcx_4 + 0x5d0))(rcx_4, &arg_10, &data_143f02b98, *(rsi_1 + 0x10), arg2 + 0x18)
*(arg2 + 0x10) = arg_10
void* rbx_1 = rsi_1 + 0x38
int64_t rdi_1 = sx.q(*(rbx_1 + 0x20))
int32_t rax_12 = (rdi_1 + 1).d
*(rbx_1 + 0x20) = rax_12

if (rax_12 s> *(rbx_1 + 0x24))
    sub_1409da440(rbx_1, rdi_1.d)

void* rax_13 = *(rbx_1 + 0x18)
int64_t rcx_6 = rdi_1 * 3

if (rax_13 != 0)
    rbx_1 = rax_13

*(rbx_1 + (rcx_6 << 3)) = *(arg2 + 0x18)
*(rbx_1 + (rcx_6 << 3) + 0x10) = arg_10
arg_10 = 0
sub_1405ec8a0(&arg_10)
