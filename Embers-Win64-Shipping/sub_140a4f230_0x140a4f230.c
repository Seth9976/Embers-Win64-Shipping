// 函数: sub_140a4f230
// 地址: 0x140a4f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* r8 = arg1[8]
int32_t r15 = 0
int64_t rdx_3 = sx.q(arg1[9].d - 1) & sx.q(rax_1 + (arg2 u>> 0x20).d)
void* rax_4 = &arg1[7]

if (r8 != 0)
    rax_4 = r8

int32_t i = *(rax_4 + (rdx_3 << 2))
void* r14 = rax_4 + (rdx_3 << 2)

for (; i != 0xffffffff; i = *r14)
    void* r8_1 = *arg1
    int64_t r10_2 = sx.q(i) * 0x30
    void* r9_1 = r10_2 + r8_1
    
    if (*(r10_2 + r8_1) != arg2)
        r14 = r9_1 + 0x28
    else
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = arg1[8]
            int64_t rcx_4 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + 0x2c))
            void* rax_10 = &arg1[7]
            
            if (rdx_4 != 0)
                rax_10 = rdx_4
            
            void* rdx_5 = rax_10 + (rcx_4 << 2)
            
            for (int32_t j = *(rax_10 + (rcx_4 << 2)); j != 0xffffffff; j = *rdx_5)
                if (j == i)
                    *rdx_5 = *(r9_1 + 0x28)
                    break
                
                rdx_5 = r8_1 + 0x28 + sx.q(j) * 0x30
        
        void* rbp_2 = *arg1 + r10_2
        int64_t rcx_6 = *(rbp_2 + 0x18)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbp_2 + 8)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        sub_1407c2ba0(arg1, i, 1)
        r15 += 1

return zx.q(r15)
