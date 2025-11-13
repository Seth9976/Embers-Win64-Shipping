// 函数: sub_141e82f90
// 地址: 0x141e82f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 0x80)
int64_t rsi = 0
void* result = &rdi[sx.q(*(arg2 + 0x88))]
uint64_t r15_1 = sx.q(*(arg2 + 0x88)) << 3 u>> 3

if (rdi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rbp_1 = *rdi
        int32_t arg_10
        sub_141e7acd0(arg1 + 0x1b0, &arg_10, rbp_1)
        int64_t rax_1 = sx.q(arg_10)
        void* const rax_3
        
        if (rax_1.d == 0xffffffff)
            rax_3 = nullptr
        else
            rax_3 = rax_1 * 0x68 + *(arg1 + 0x1b0)
        
        float* rbx_1 = rax_3 + 8
        result = nullptr
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        
        if (rbp_1 != 0 && rbx_1 != 0)
            *rbx_1 = *arg3 * *rbx_1
            rbx_1[1] = arg3[1] f* rbx_1[1]
            rbx_1[9].b |= arg3[9].b & 4
            rbx_1[9].b |= arg3[9].b & 8
            sub_141eade50(rbx_1, sub_1423632a0(arg3))
            result = sub_141e82f90(arg1, rbp_1, rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r15_1)

return result
