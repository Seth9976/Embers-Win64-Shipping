// 函数: sub_140973460
// 地址: 0x140973460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -1

if (arg1[4] != 0)
    int64_t* rcx = arg1[5]
    
    if (rcx != 0 && (*(*rcx + 0x370))(rcx) s> 0 && arg1[7] != 0)
        if ((*(*arg1 + 0x120))(arg1, arg2) == 0)
            int64_t rdi_1 = sx.q(arg1[0xd].d)
            int32_t rax_3 = (rdi_1 + 1).d
            arg1[0xd].d = rax_3
            
            if (rax_3 s> *(arg1 + 0x6c))
                sub_1405a4df0(&arg1[0xc])
            
            int64_t rax_4 = arg1[0xc]
            int64_t rcx_3 = rdi_1 * 3
            *(rax_4 + (rcx_3 << 3)) = 0
            *(rax_4 + (rcx_3 << 3) + 8) = 0
            *(rax_4 + (rcx_3 << 3) + 0x10) = 0
            int64_t* rbx_1 = *(arg2 + 0x10)
            int64_t* rdx_2 = arg1[0xc] + (rcx_3 << 3)
            int64_t rcx_4 = 0
            
            if (rbx_1 != 0)
                int32_t rax_6 = rbx_1[1].d
                
                if (rax_6 != 0)
                    rbx_1[1].d = rax_6 + 1
                    rax_6.b = 1
                
                if (rax_6.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx_4 = *(arg2 + 8)
                    rbx_1[1].d += 1
            
            void var_18
            int64_t rax_8
            int64_t* rcx_6
            
            if (rdx_2 != &var_18)
                *rdx_2 = rcx_4
                int64_t* rdi_2 = rdx_2[1]
                
                if (rbx_1 == rdi_2)
                    goto label_14097356b
                
                rdx_2[1] = rbx_1
                
                if (rdi_2 == 0)
                    goto label_140973592
                
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d != 1)
                    goto label_140973592
                
                (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 != 1)
                    goto label_140973592
                
                rax_8 = *rdi_2
                rcx_6 = rdi_2
                goto label_14097358f
            
        label_14097356b:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d != 1)
                    goto label_140973592
                
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 != 1)
                    goto label_140973592
                
                rax_8 = *rbx_1
                rcx_6 = rbx_1
            label_14097358f:
                (*(rax_8 + 8))(rcx_6, 1)
            label_140973592:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rcx_10 = arg1[7]
            (*(*rcx_10 + 0x40))(rcx_10, arg2)
        
        (*(*arg1 + 8))(arg1)
        int64_t* rcx_12 = arg1[7]
        rbx = (*(*rcx_12 + 0x20))(rcx_12, arg2)

int32_t result
result.b = rbx == 0
return result
