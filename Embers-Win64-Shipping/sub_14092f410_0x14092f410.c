// 函数: sub_14092f410
// 地址: 0x14092f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* rcx = &arg1[7]
int64_t r9_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0

if (rax_1 != 0)
    rcx = rax_1

int32_t i = *(rcx + ((r8 & r9_1) << 2))

if (i != 0xffffffff)
    void* rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int32_t* rax_5 = i_1 << 5
        
        if (*(rax_5 + rdx) == r8.d)
            int64_t rdi_1 = i_1 << 5
            void* rcx_1 = rcx + ((sx.q(*(rdi_1 + rdx + 0x1c)) & r9_1) << 2)
            
            for (int32_t j = *rcx_1; j != 0xffffffff; j = *rcx_1)
                if (j == i)
                    *rcx_1 = *(rdi_1 + rdx + 0x18)
                    break
                
                rcx_1 = rdx + 0x18 + (sx.q(j) << 5)
            
            rbp = 1
            int64_t* rdi_2 = *(rdi_1 + *arg1 + 0x10)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp1_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_2 = *rdi_2
                        (*(r8_2 + 8))(rdi_2, 1, r8_2)
            
            sub_1405c36f0(arg1, i, 1)
            break
        
        i = *(rax_5 + rdx + 0x18)
    while (i != 0xffffffff)

return zx.q(rbp)
