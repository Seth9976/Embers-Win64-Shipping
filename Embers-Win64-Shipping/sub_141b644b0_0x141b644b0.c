// 函数: sub_141b644b0
// 地址: 0x141b644b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_141b601a0(arg2)
void* r8 = arg1[8]
void* r15 = &arg1[7]
int32_t rbp = 0
int64_t rdx_1 = sx.q(arg1[9].d - 1) & sx.q(rax_1)
void* rax_3 = r15

if (r8 != 0)
    rax_3 = r8

void* r14 = rax_3 + (rdx_1 << 2)
int32_t i = *(rax_3 + (rdx_1 << 2))

while (i != 0xffffffff)
    int32_t* rbx_3 = sx.q(i) * 0x30 + *arg1
    
    if (sub_14077a170(rbx_3, arg2) != 0 && not(arg2[2] f!= rbx_3[2]) && not(arg2[3] f!= rbx_3[3])
            && rbx_3[4] == arg2[4])
        int64_t rbx_4 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rcx_4 = *(r15 + 8)
            int64_t r9_2 = rbx_4 * 6
            int64_t r8_1 = *arg1
            int64_t rdx_4 = sx.q(*(r8_1 + (r9_2 << 3) + 0x2c)) & sx.q(arg1[9].d - 1)
            
            if (rcx_4 != 0)
                r15 = rcx_4
            
            int32_t j = *(r15 + (rdx_4 << 2))
            void* rcx_5 = r15 + (rdx_4 << 2)
            
            for (; j != 0xffffffff; j = *rcx_5)
                if (j == rbx_4.d)
                    *rcx_5 = *(r8_1 + (r9_2 << 3) + 0x28)
                    break
                
                rcx_5 = sx.q(j) * 0x30 + 0x28 + r8_1
        
        rbp = 1
        int64_t* rdi_1 = *(rbx_4 * 0x30 + *arg1 + 0x20)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_2 = *rdi_1
                    (*(r8_2 + 8))(rdi_1, 1, r8_2)
        
        sub_1407c2ba0(arg1, rbx_4.d, 1)
        break
    
    i = rbx_3[0xa]
    r14 = &rbx_3[0xa]

return zx.q(rbp)
