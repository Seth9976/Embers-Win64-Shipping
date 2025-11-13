// 函数: sub_140b4ed00
// 地址: 0x140b4ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* arg_10 = arg2

if (*(arg3 + 0x64) != 0 && *(arg3 + 0x66) == 0)
    *arg4 = *arg2

for (void* i = *(arg3 + 0x10); i != 0; i = *(i + 0x10))
    if (*(i + 0x29) == 0 || *(i + 0x20) != 0xffffffff)
        uint64_t rax = zx.q(*(i + 0x20))
        int32_t j = 0
        void* r15_1 = *(i + 8)
        void* rdi_1 = rax + arg2
        void* rsi_1 = rax + arg4
        int64_t r12_1 = *(r15_1 + 0x28)
        
        if (*(i + 0x24) u> 0)
            uint64_t r14_1 = zx.q(*(r15_1 + 0x58))
            
            do
                r12_1(arg1, rdi_1, r15_1, rsi_1)
                rsi_1 += r14_1
                rdi_1 += r14_1
                j += 1
            while (j u< *(i + 0x24))
            
            arg4 = arg_20
            arg2 = arg_10
