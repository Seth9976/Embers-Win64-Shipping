// 函数: sub_142174690
// 地址: 0x142174690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r11 = &arg1[7]
uint32_t r9_1 = (arg2 u>> 4).d
int64_t r14_1 = sx.q(arg1[9].d) - 1
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rbp = 0
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r11 = rax_15

int32_t i = *(r11 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & r14_1) << 2))

if (i != 0xffffffff)
    int64_t r8_8 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_18 = i_1 * 3
        
        if (**(r8_8 + (rax_18 << 3)) == arg2)
            int64_t rdi_1 = i_1 * 0x18
            int64_t rax_22 = sx.q(*(rdi_1 + r8_8 + 0x14)) & r14_1
            void* rcx_11 = r11 + (rax_22 << 2)
            int32_t j = *(r11 + (rax_22 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_11 = *(rdi_1 + r8_8 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                j = *(r8_8 + ((j_1 * 3 + 2) << 3))
                rcx_11 = r8_8 + ((j_1 * 3 + 2) << 3)
            
            rbp = 1
            int64_t* rdi_2 = *(rdi_1 + *arg1 + 8)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp1_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_9 = *rdi_2
                        (*(r8_9 + 8))(rdi_2, 1, r8_9)
            
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(r8_8 + (rax_18 << 3) + 0x10)
    while (i != 0xffffffff)

return zx.q(rbp)
