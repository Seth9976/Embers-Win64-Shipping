// 函数: sub_1429d2ae0
// 地址: 0x1429d2ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t rsi = sx.q(*(rax + 0x54))
int64_t rbx = rsi
uint64_t result = zx.q(*(rax + 0x3c) + rsi.d)
int64_t rbp = sx.q(result.d)

if (rsi s< rbp)
    do
        void* rax_3 = arg1[4]
        int64_t r9_1 = sx.q(*(*(*arg1 + 0x138) + (rbx << 2)))
        *(*(rax_3 + 0x60) + (rbx << 2)) = *(rax_3 + 0x10)
        void* r8_1 = arg1[2]
        
        if ((1 & not.b(*(sx.q(*(*(r8_1 + 0x60) + (r9_1 << 2))) + *(r8_1 + 0xa8)))) == 0)
            result = sub_1429d28d0(arg1, rsi.d, r9_1.d)
            *(*(arg1[4] + 0x48) + (rbx << 1)) = result.w
            void* rcx_6 = arg1[4]
            *(rcx_6 + 0x10) += result.d
        else
            *(*(arg1[4] + 0x48) + (rbx << 1)) = 1
            result = arg1[4]
            *(result + 0x10) += 1
        
        rsi = zx.q(rsi.d + 1)
        rbx += 1
    while (rbx s< rbp)

return result
