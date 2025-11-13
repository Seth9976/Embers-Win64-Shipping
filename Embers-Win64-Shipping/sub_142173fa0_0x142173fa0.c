// 函数: sub_142173fa0
// 地址: 0x142173fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t* rcx = *arg2
int32_t rax_2 = (*(*rcx + 0x88))(rcx)
void* r8 = arg1[8]
void* r15 = &arg1[7]
int32_t rbp = 0
int64_t rdx_1 = sx.q(arg1[9].d - 1) & sx.q(rax_2)
void* rax_4 = r15

if (r8 != 0)
    rax_4 = r8

void* rdi = rax_4 + (rdx_1 << 2)
int32_t i = *(rax_4 + (rdx_1 << 2))

while (i != 0xffffffff)
    int64_t* rbx_3 = (sx.q(i) << 5) + *arg1
    int64_t* rcx_3 = *rbx_3
    
    if ((*(*rcx_3 + 0x80))(rcx_3, *arg2) != 0)
        int64_t rbx_4 = sx.q(*rdi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_3 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_4 << 5
            int64_t rcx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x1c))
            
            if (rdx_3 != 0)
                r15 = rdx_3
            
            int32_t j = *(r15 + (rcx_5 << 2))
            void* rdx_4 = r15 + (rcx_5 << 2)
            
            for (; j != 0xffffffff; j = *rdx_4)
                if (j == rbx_4.d)
                    *rdx_4 = *(r9_2 + r8_1 + 0x18)
                    break
                
                rdx_4 = r8_1 + 0x18 + (sx.q(j) << 5)
        
        rbp = 1
        int64_t* rdi_1 = *((rbx_4 << 5) + *arg1 + 8)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_2 = *rdi_1
                    (*(r8_2 + 8))(rdi_1, 1, r8_2)
        
        sub_1405c36f0(arg1, rbx_4.d, 1)
        break
    
    i = rbx_3[3].d
    rdi = &rbx_3[3]

return zx.q(rbp)
