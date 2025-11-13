// 函数: sub_141e3a2d0
// 地址: 0x141e3a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rsi = *arg1
void* result = &rsi[arg1[1]]
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        result = sub_1422ce940(rbx_1)
        
        if (rbx_1 != 0)
            sub_1422b5540(rbx_1)
            result = j_sub_140a74f90(rbx_1)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_1)

return result
