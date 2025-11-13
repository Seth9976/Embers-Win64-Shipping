// 函数: sub_1410ebf70
// 地址: 0x1410ebf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *arg1
void* result = &rdi[arg1[1]]
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_140b16b40(rbx_1 + 0x10, 0)
            result = j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
