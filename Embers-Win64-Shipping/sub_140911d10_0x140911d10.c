// 函数: sub_140911d10
// 地址: 0x140911d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140a6b260(arg2, 0x10)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t rbp = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t i = *(r10 + ((sx.q(rax_1) & r11_1) << 2))

if (i != 0xffffffff)
    int64_t r9_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_4 = i_1 * 5
        void* rdx = r9_1 + (rax_4 << 3)
        int32_t rcx_5 = (*(r9_1 + (rax_4 << 3) + 4) ^ *(arg2 + 4))
            | (*(r9_1 + (rax_4 << 3) + 8) ^ arg2[1].d) | (*(rdx + 0xc) ^ *(arg2 + 0xc))
        
        if ((rcx_5 | (*arg2 ^ *rdx)) == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rax_12 = i_1 * 5
                int64_t rax_14 = sx.q(*(r9_1 + (rax_12 << 3) + 0x24)) & r11_1
                void* rcx_7 = r10 + (rax_14 << 2)
                int32_t j = *(r10 + (rax_14 << 2))
                
                while (j != 0xffffffff)
                    if (j == i)
                        *rcx_7 = *(r9_1 + (rax_12 << 3) + 0x20)
                        break
                    
                    int64_t j_1 = sx.q(j)
                    int64_t rcx_9 = j_1 + ((j_1 + 1) << 2)
                    j = *(r9_1 + (rcx_9 << 3))
                    rcx_7 = r9_1 + (rcx_9 << 3)
            
            rbp = 1
            int64_t* rdi_2 = *(*arg1 + i_1 * 0x28 + 0x18)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp1_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_1 = *rdi_2
                        (*(r8_1 + 8))(rdi_2, 1, r8_1)
            
            sub_1405c3590(arg1, i, 1)
            break
        
        i = *(rdx + 0x20)
    while (i != 0xffffffff)

return zx.q(rbp)
