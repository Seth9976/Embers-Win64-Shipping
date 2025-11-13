// 函数: sub_1409d5470
// 地址: 0x1409d5470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1
int64_t r8
rax_1, r8 = (*(*arg1 + 0x260))()
int64_t rdi = 0

if (rax_1 == 0)
    int64_t rbp_1 = 0
    int64_t* rsi_1 = arg1[0x77]
    uint64_t r14_2 = sx.q(arg1[0x78].d) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[arg1[0x78]])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx = *rsi_1
            r8.b = 1
            (*(*rcx + 0x268))(rcx, arg1, r8)
            rbp_1 += 1
            rsi_1 = &rsi_1[1]
        while (rbp_1 != r14_2)

int64_t rbp_2 = 0
int64_t* rsi_2 = arg1[0x77]
uint64_t r14_4 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rsi_2 u> &rsi_2[arg1[0x78]])
    r14_4 = 0

if (r14_4 != 0)
    do
        int64_t* rcx_1 = *rsi_2
        (*(*rcx_1 + 0x270))(rcx_1, arg1)
        rbp_2 += 1
        rsi_2 = &rsi_2[1]
    while (rbp_2 != r14_4)

void* result
int64_t r8_1
result, r8_1 = (*(*arg1 + 0x260))(arg1)

if (result.b == 0)
    int64_t* rsi_3 = arg1[0x77]
    result = &rsi_3[arg1[0x78]]
    uint64_t r14_6 = sx.q(arg1[0x78].d) << 3 u>> 3
    
    if (rsi_3 u> result)
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            int64_t* rcx_3 = *rsi_3
            r8_1.b = 1
            result, r8_1 = (*(*rcx_3 + 0x278))(rcx_3, arg1, r8_1, 0)
            rdi += 1
            rsi_3 = &rsi_3[1]
        while (rdi != r14_6)

return result
