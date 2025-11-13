// 函数: sub_1407c2250
// 地址: 0x1407c2250
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
    int64_t arg_8 = arg2
    int64_t* rdi_3 = sx.q(i) * 0x30 + *arg1
    int64_t arg_18 = *rdi_3
    
    if (sub_14077a170(&arg_18, &arg_8) != 0)
        int64_t rbx_1 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = *(r15 + 8)
            int64_t r9_2 = rbx_1 * 6
            void* r8_1 = *arg1
            int64_t rcx_3 = sx.q(arg1[9].d - 1) & sx.q(*(r8_1 + (r9_2 << 3) + 0x2c))
            
            if (rdx_4 != 0)
                r15 = rdx_4
            
            int32_t j = *(r15 + (rcx_3 << 2))
            void* rdx_5 = r15 + (rcx_3 << 2)
            
            for (; j != 0xffffffff; j = *rdx_5)
                if (j == rbx_1.d)
                    *rdx_5 = *(r8_1 + (r9_2 << 3) + 0x28)
                    break
                
                rdx_5 = r8_1 + 0x28 + sx.q(j) * 0x30
        
        rbp = 1
        int64_t* rdi_4 = *(rbx_1 * 0x30 + *arg1 + 0x18)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp1_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_2 = *rdi_4
                    (*(r8_2 + 8))(rdi_4, 1, r8_2)
        
        sub_1407c2ba0(arg1, rbx_1.d, 1)
        break
    
    i = rdi_3[5].d
    r14 = &rdi_3[5]

return zx.q(rbp)
