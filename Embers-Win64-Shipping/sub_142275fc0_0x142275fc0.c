// 函数: sub_142275fc0
// 地址: 0x142275fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t rbp = 0
void* r15 = &arg1[7]
void* rax_6 = r15
int64_t rdx_2 = (sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_6 = r8

void* r14 = rax_6 + (rdx_2 << 2)

for (int32_t i = *(rax_6 + (rdx_2 << 2)); i != 0xffffffff; i = *r14)
    int64_t arg_8 = arg2
    int64_t* rdi_3 = sx.q(i) * 0x90 + *arg1
    int64_t arg_18 = *rdi_3
    
    if (sub_14077a170(&arg_18, &arg_8) != 0)
        int64_t rdx_4 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* r8_1 = *(r15 + 8)
            int64_t r10_2 = rdx_4 * 0x12
            void* r9_1 = *arg1
            int64_t rcx_3 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + (r10_2 << 3) + 0x84))
            
            if (r8_1 != 0)
                r15 = r8_1
            
            int32_t j = *(r15 + (rcx_3 << 2))
            void* r8_2 = r15 + (rcx_3 << 2)
            
            for (; j != 0xffffffff; j = *r8_2)
                if (j == rdx_4.d)
                    *r8_2 = *(r9_1 + (r10_2 << 3) + 0x80)
                    break
                
                r8_2 = r9_1 + 0x80 + sx.q(j) * 0x90
        
        rbp = 1
        sub_140dbb160(arg1, rdx_4.d, 1)
        break
    
    r14 = &rdi_3[0x10]

return zx.q(rbp)
