// 函数: sub_140f01c90
// 地址: 0x140f01c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg3)
int32_t rdi = arg3[1]

if (r10.d s< 0 || r10.d s>= *(arg1 + 0x20))
label_140f01d23:
    *arg2 = 0
else
    int64_t r9 = sx.q(*(arg1 + 0x30))
    int32_t rdx = 0
    
    if (r9.d s<= 0)
    label_140f01d23_1:
        *arg2 = 0
    else
        int64_t r8 = 0
        int32_t* rcx_1 = *(arg1 + 0x28) + 0xac
        
        while (true)
            if (rcx_1[-0x16] == r10.d)
                if (rdi == 0)
                    break
                
                if (*(*(r10 * 0x70 + *(arg1 + 0x18)) + 8) s<= 1)
                    break
                
                if (rdi s>= rcx_1[-0x19] && rdi s< rcx_1[-0x18])
                    break
                
                if ((rdx == (r9 - 1).d || *rcx_1 != r10.d || arg4 != 0) && rcx_1[-0x18] == rdi)
                    break
            
            rdx += 1
            r8 += 1
            rcx_1 = &rcx_1[0x16]
            
            if (r8 s>= r9)
                goto label_140f01d23_2
        
        if (rdx s< 0 || rdx s>= *(arg1 + 0x30))
        label_140f01d23_2:
            *arg2 = 0
        else
            int32_t rsi_2 = 0
            int128_t zmm6
            int128_t var_48_1 = zmm6
            int64_t* r15_2 = sx.q(rdx) * 0x58 + *(arg1 + 0x28)
            
            if (r15_2[1].d s<= 0)
            label_140f01e26:
                *arg2 = 0
            else
                int64_t r14_2 = 0
                
                while (true)
                    int64_t* rbx_2 = *r15_2 + r14_2
                    int64_t* rcx_2 = *rbx_2
                    int32_t arg_8
                    (*(*rcx_2 + 0x10))(rcx_2, &arg_8)
                    
                    if (rdi s>= arg_8 && rdi s<= arg5)
                        int64_t* rcx_3 = *rbx_2
                        void var_58
                        int64_t* rcx_4 = *(*(*rcx_3 + 8))(rcx_3, &var_58)
                        int32_t arg_18
                        (*(*rcx_4 + 0x48))(rcx_4, &arg_18, rbx_2, zx.q(rdi - arg_8), 
                            (*(arg1 + 0x8c)).d)
                        int64_t* var_50
                        
                        if (var_50 != 0)
                            var_50[1].d -= 1
                            
                            if (var_50[1].d == 1)
                                (**var_50)(var_50)
                                int32_t temp1_1 = *(var_50 + 0xc)
                                *(var_50 + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    (*(*var_50 + 8))(var_50, 1)
                        
                        if (arg_18.d f!= 0f || arg6.d f!= 0f)
                            *arg2 = arg_18.q
                            break
                    
                    rsi_2 += 1
                    r14_2 += 0x10
                    
                    if (rsi_2 s>= r15_2[1].d)
                        goto label_140f01e26

return arg2
