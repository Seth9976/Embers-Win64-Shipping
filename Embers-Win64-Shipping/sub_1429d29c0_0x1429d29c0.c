// 函数: sub_1429d29c0
// 地址: 0x1429d29c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t rsi = sx.q(*(rax + 0x50))
int64_t rbx = rsi
uint64_t result = zx.q(*(rax + 0x38) + rsi.d)
int64_t rbp = sx.q(result.d)

if (rsi s< rbp)
    do
        void* rax_3 = arg1[4]
        int64_t r8_1 = sx.q(*(*(*arg1 + 0x138) + (rbx << 2)))
        *(*(rax_3 + 0x60) + (rbx << 2)) = *(rax_3 + 0x10)
        
        if ((1 & not.b((*(arg1[2] + 0x30))[r8_1])) == 0)
            result = sub_1429d2780(arg1, rsi.d, r8_1.d)
            *(*(arg1[4] + 0x48) + (rbx << 1)) = result.w
            void* rcx_5 = arg1[4]
            *(rcx_5 + 0x10) += result.d
        else
            *(*(arg1[4] + 0x48) + (rbx << 1)) = 1
            result = arg1[4]
            *(result + 0x10) += 1
        
        rsi = zx.q(rsi.d + 1)
        rbx += 1
    while (rbx s< rbp)

return result
