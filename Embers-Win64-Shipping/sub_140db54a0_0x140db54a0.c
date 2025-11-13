// 函数: sub_140db54a0
// 地址: 0x140db54a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xd8) = 0
int32_t r15 = arg2
int64_t r10 = sx.q(*(arg1 + 0xe8))
int64_t r14 = sx.q(*(*(arg1 + 0xe0) + (r10 << 2) - 4))
*(arg1 + 0xe8) = (r10 - 1).d
int32_t rbp = r14.d
int32_t rbx = *(arg1 + 0xd0)

if (r14.d s< rbx)
    int64_t rdi_2 = r14 << 4
    
    do
        int64_t** r10_1 = *(rdi_2 + *(arg1 + 0xc8))
        int64_t* rbx_1 = r10_1[1]
        
        if (rbx_1 != 0)
            int32_t rax_3 = rbx_1[1].d
            
            if (rax_3 != 0)
                rbx_1[1].d = rax_3 + 1
                
                if (rbx_1 != 0)
                    int64_t* rcx = *r10_1
                    
                    if (rcx != 0)
                        r15 = sub_140e1f680(rcx, &r10_1[2], &r10_1[8], arg3, arg1, r15, 
                            &r10_1[0xf], r10_1[0x15].b)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx = *(arg1 + 0xd0)
        rbp += 1
        rdi_2 += 0x10
    while (rbp s< rbx)

for (int32_t i = rbx - 1; i s>= r14.d; i -= 1)
    sub_140dbae50(arg1 + 0xc8, i, 1, 0)

return zx.q(r15)
