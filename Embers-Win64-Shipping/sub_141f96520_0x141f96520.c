// 函数: sub_141f96520
// 地址: 0x141f96520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rbx = arg1[8]
int32_t rbp = 0
int64_t r12_1 = sx.q(arg1[9].d) - 1
void* r15 = &arg1[7]
void* rax_2 = r15
int64_t rcx_2 = sx.q(sub_141f8bbb0(arg2)) & r12_1

if (rbx != 0)
    rax_2 = rbx

int32_t i = *(rax_2 + (rcx_2 << 2))

if (i != 0xffffffff)
    int64_t r8_1 = *arg1
    
    do
        int64_t rdi_1 = sx.q(i) * 0x28
        
        if (*(rdi_1 + r8_1) == *arg2 && *(rdi_1 + r8_1 + 8) == arg2[1])
            void* rax_5 = *(r15 + 8)
            int64_t rcx_5 = sx.q(*(rdi_1 + r8_1 + 0x24)) & r12_1
            
            if (rax_5 != 0)
                r15 = rax_5
            
            int32_t j = *(r15 + (rcx_5 << 2))
            void* rdx_1 = r15 + (rcx_5 << 2)
            
            while (j != 0xffffffff)
                if (j == i)
                    *rdx_1 = *(rdi_1 + r8_1 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_3 = j_1 + ((j_1 + 1) << 2)
                j = *(r8_1 + (rdx_3 << 3))
                rdx_1 = r8_1 + (rdx_3 << 3)
            
            rbp = 1
            int64_t* rdi_2 = *(rdi_1 + *arg1 + 0x18)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rsi_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        int64_t r8_2 = *rdi_2
                        (*(r8_2 + 8))(rdi_2, 1, r8_2)
            
            sub_1405c3590(arg1, i, 1)
            break
        
        i = *(rdi_1 + r8_1 + 0x20)
    while (i != 0xffffffff)

return zx.q(rbp)
