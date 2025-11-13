// 函数: sub_1421dfc30
// 地址: 0x1421dfc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[0x19].d
int32_t rdi_1 = rdi - 1
int64_t* rbx = arg1

if (rdi - 1 s>= 0)
    int64_t r14_1 = sx.q(rdi_1) << 3
    int64_t r15_1 = r14_1
    int32_t temp2_1
    
    do
        int64_t r9_1 = rbx[0x18]
        
        if (*(*(r14_1 + r9_1) + 0x148) == 0)
            int32_t rcx = rbx[0x19].d
            int32_t rax_4 = rcx - rdi_1 - 1
            
            if (rax_4 s>= 1)
                rax_4 = 1
            
            if (rax_4 != 0)
                memcpy(r15_1 + r9_1, r9_1 + (sx.q(rcx - rax_4) << 3), rax_4 << 3)
                rcx = rbx[0x19].d
            
            rbx[0x19].d = rcx - 1
            sub_1405c53d0(&rbx[0x18])
        
        r15_1 -= 8
        r14_1 -= 8
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)

int64_t i_1 = 3
int64_t i

do
    int64_t j_1 = 4
    int64_t j
    
    do
        int32_t rsi_1 = rbx[1].d
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t r14_2 = sx.q(rsi_2) << 3
            int64_t r15_2 = r14_2
            int64_t rbp_2 = sx.q(rsi_2 + 1) << 3
            int32_t temp6_1
            
            do
                int64_t* rdi_2 = *(r14_2 + *rbx)
                
                if (rdi_2 != 0)
                    (*(*rdi_2 + 0x30))(rdi_2)
                    (**rdi_2)(rdi_2, 1)
                
                int32_t rax_13 = rbx[1].d
                int32_t rcx_7 = rax_13 - rsi_2
                
                if (rcx_7 != 1)
                    int64_t rax_12 = *rbx
                    memmove(rax_12 + r15_2, rax_12 + rbp_2, (rcx_7 - 1) << 3)
                    rax_13 = rbx[1].d
                
                rbx[1].d = rax_13 - 1
                sub_1405c53d0(rbx)
                rbp_2 -= 8
                r15_2 -= 8
                r14_2 -= 8
                temp6_1 = rsi_2
                rsi_2 -= 1
            while (temp6_1 - 1 s>= 0)
        
        rbx = &rbx[2]
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
