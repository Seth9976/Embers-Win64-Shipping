// 函数: sub_141bdaed0
// 地址: 0x141bdaed0
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
int32_t i = *(rax_6 + (rdx_2 << 2))

while (i != 0xffffffff)
    int64_t* rdi_3 = (sx.q(i) << 5) + *arg1
    int64_t arg_8 = arg2
    int64_t arg_18 = *rdi_3
    
    if (sub_14077a170(&arg_18, &arg_8) != 0)
        int64_t rbx_1 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_1 << 5
            int64_t rcx_3 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x1c))
            
            if (rdx_4 != 0)
                r15 = rdx_4
            
            int32_t j = *(r15 + (rcx_3 << 2))
            void* rdx_5 = r15 + (rcx_3 << 2)
            
            for (; j != 0xffffffff; j = *rdx_5)
                if (j == rbx_1.d)
                    *rdx_5 = *(r9_2 + r8_1 + 0x18)
                    break
                
                rdx_5 = r8_1 + 0x18 + (sx.q(j) << 5)
        
        rbp = 1
        int64_t* rcx_4 = *((rbx_1 << 5) + *arg1 + 0x10)
        
        if (rcx_4 != 0)
            int32_t temp0_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp0_1 == 1)
                int64_t r8_2 = *rcx_4
                (*(r8_2 + 8))(rcx_4, 1, r8_2)
        
        sub_1405c36f0(arg1, rbx_1.d, 1)
        break
    
    i = rdi_3[3].d
    r14 = &rdi_3[3]

return zx.q(rbp)
