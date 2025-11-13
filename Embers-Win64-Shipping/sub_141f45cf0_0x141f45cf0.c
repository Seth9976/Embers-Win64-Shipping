// 函数: sub_141f45cf0
// 地址: 0x141f45cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t rbp = 0
void* rax_6 = &arg1[7]
int64_t rdx_2 = (sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_6 = r8

void* r14 = rax_6 + (rdx_2 << 2)

for (int32_t i = *(rax_6 + (rdx_2 << 2)); i != 0xffffffff; i = *r14)
    int64_t arg_8 = arg2
    int64_t rcx_1 = sx.q(i) * 3
    int64_t rax_8 = *arg1
    int64_t arg_18 = *(rax_8 + (rcx_1 << 3))
    
    if (sub_14077a170(&arg_18, &arg_8) == 0)
        r14 = rax_8 + (rcx_1 << 3) + 0x10
    else
        int64_t rdx_4 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* r8_1 = arg1[8]
            int64_t r9_1 = *arg1
            void* r10_1 = r9_1 + rdx_4 * 0x18
            int64_t rcx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x14))
            void* rax_15 = &arg1[7]
            
            if (r8_1 != 0)
                rax_15 = r8_1
            
            void* r8_2 = rax_15 + (rcx_5 << 2)
            int32_t j = *(rax_15 + (rcx_5 << 2))
            
            while (j != 0xffffffff)
                if (j == rdx_4.d)
                    *r8_2 = *(r10_1 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t r8_4 = j_1 + ((j_1 + 1) << 1)
                j = *(r9_1 + (r8_4 << 3))
                r8_2 = r9_1 + (r8_4 << 3)
        
        sub_1405c3640(arg1, rdx_4.d, 1)
        rbp += 1

return zx.q(rbp)
