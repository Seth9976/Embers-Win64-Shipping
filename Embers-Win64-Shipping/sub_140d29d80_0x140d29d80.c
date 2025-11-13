// 函数: sub_140d29d80
// 地址: 0x140d29d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
uint32_t r10_1 = (arg2 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t rdi = 0
int32_t rcx_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - rcx_2) ^ r10_4 << 0x10
int32_t rcx_5 = (rcx_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - rcx_5) ^ r10_7 << 0xa
void* rax_19 = &arg1[7]
int64_t rdx_2 = (sx.q(rcx_5 - r9_7 - r10_7) ^ zx.q(r9_7) u>> 0xf) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_19 = r8

int32_t i = *(rax_19 + (rdx_2 << 2))
void* rsi = rax_19 + (rdx_2 << 2)

for (; i != 0xffffffff; i = *rsi)
    int64_t r8_1 = *arg1
    int64_t rcx_9 = sx.q(i) * 5
    void* r10_8 = r8_1 + (rcx_9 << 3)
    
    if (*(r8_1 + (rcx_9 << 3)) != arg2)
        rsi = r10_8 + 0x20
    else
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_3 = arg1[8]
            int64_t rcx_11 = sx.q(arg1[9].d - 1) & sx.q(*(r10_8 + 0x24))
            void* rax_25 = &arg1[7]
            
            if (rdx_3 != 0)
                rax_25 = rdx_3
            
            void* rdx_4 = rax_25 + (rcx_11 << 2)
            int32_t j = *(rax_25 + (rcx_11 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rdx_4 = *(r10_8 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_6 = j_1 + ((j_1 + 1) << 2)
                j = *(r8_1 + (rdx_6 << 3))
                rdx_4 = r8_1 + (rdx_6 << 3)
        
        sub_1405c3590(arg1, i, 1)
        rdi += 1

return zx.q(rdi)
