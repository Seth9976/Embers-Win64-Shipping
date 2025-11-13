// 函数: sub_142704f80
// 地址: 0x142704f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x88)
uint64_t result = &rbx[sx.q(*(arg1 + 0x90))]
uint64_t r14_1 = sx.q(*(arg1 + 0x90)) << 3 u>> 3

if (rbx u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rcx = *rbx
        
        if (rcx != 0)
            result = zx.q(*(arg2 + 8))
            
            if (test_bit(result.d, zx.d(*(rcx + 0x44))))
                result = sub_140926420(rcx + 0x70, arg2)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

return result
