// 函数: sub_141f96420
// 地址: 0x141f96420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int64_t rbp_1 = sx.q(arg1[9].d) - 1
void* rsi = &arg1[7]
int32_t rdi = 0

if (rax_1 != 0)
    rsi = rax_1

uint32_t rbx_1 = (arg2 u>> 0x20).d
int32_t i = *(rsi + (((sx.q(rbx_1) ^ sx.q(arg2.d)) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r10_1 = *arg1
    
    do
        int64_t rcx_3 = sx.q(i) * 3
        int64_t rax_4 = *(r10_1 + (rcx_3 << 3))
        void* r8_1 = r10_1 + (rcx_3 << 3)
        
        if (rax_4.d == arg2.d && (rax_4 u>> 0x20).d == rbx_1)
            int64_t rax_7 = sx.q(*(r8_1 + 0x14)) & rbp_1
            void* rcx_4 = rsi + (rax_7 << 2)
            int32_t j = *(rsi + (rax_7 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_4 = *(r8_1 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rcx_6 = j_1 + ((j_1 + 1) << 1)
                j = *(r10_1 + (rcx_6 << 3))
                rcx_4 = r10_1 + (rcx_6 << 3)
            
            rdi = 1
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(r8_1 + 0x10)
    while (i != 0xffffffff)

return zx.q(rdi)
