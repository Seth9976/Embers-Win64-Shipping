// 函数: sub_1409c7870
// 地址: 0x1409c7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rsi = arg1[0x77]
int64_t rbp = 0
uint64_t r14_1 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rsi u> &rsi[arg1[0x78]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rsi
        (*(*rcx + 0x260))(rcx, arg1)
        rbp += 1
        rsi = &rsi[1]
    while (rbp != r14_1)

char rax_4
int64_t r8
rax_4, r8 = (*(*arg1 + 0x260))(arg1)

if (rax_4 == 0)
    int64_t rbp_1 = 0
    int64_t* rsi_1 = arg1[0x77]
    uint64_t r14_3 = sx.q(arg1[0x78].d) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[arg1[0x78]])
        r14_3 = 0
    
    if (r14_3 != 0)
        do
            int64_t* rcx_2 = *rsi_1
            r8.b = 1
            (*(*rcx_2 + 0x268))(rcx_2, arg1, r8)
            rbp_1 += 1
            rsi_1 = &rsi_1[1]
        while (rbp_1 != r14_3)

int64_t rbp_2 = 0
int64_t* rsi_2 = arg1[0x77]
uint64_t r14_5 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rsi_2 u> &rsi_2[arg1[0x78]])
    r14_5 = 0

if (r14_5 != 0)
    do
        int64_t* rcx_3 = *rsi_2
        (*(*rcx_3 + 0x270))(rcx_3, arg1)
        rbp_2 += 1
        rsi_2 = &rsi_2[1]
    while (rbp_2 != r14_5)

void* result
int64_t r8_1
result, r8_1 = (*(*arg1 + 0x260))(arg1)

if (result.b == 0)
    int64_t* rsi_3 = arg1[0x77]
    result = &rsi_3[arg1[0x78]]
    uint64_t r14_7 = sx.q(arg1[0x78].d) << 3 u>> 3
    
    if (rsi_3 u> result)
        r14_7 = 0
    
    if (r14_7 != 0)
        do
            int64_t* rcx_5 = *rsi_3
            r8_1.b = 1
            result, r8_1 = (*(*rcx_5 + 0x278))(rcx_5, arg1, r8_1, 0)
            rdi += 1
            rsi_3 = &rsi_3[1]
        while (rdi != r14_7)

return result
