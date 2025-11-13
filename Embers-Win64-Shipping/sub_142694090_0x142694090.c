// 函数: sub_142694090
// 地址: 0x142694090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg2[1]
int32_t arg_10 = *(arg1 + 0x38)
int32_t* rcx = *rdx

if (&rcx[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *rcx
    *rdx += 4

char result = arg2[5].b

if ((result & 1) != 0)
    result = sub_142679550(arg1 + 0x30, arg_10)
    int32_t r14_1 = 0
    
    if (arg_10 s> 0)
        do
            int64_t* rcx_3 = arg2[1]
            int32_t arg_20 = 0
            int32_t* rdx_3 = *rcx_3
            
            if (&rdx_3[1] u> rcx_3[1])
                int32_t* rdx_4 = &arg_20
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_4, arg4)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_4, 4)
            else
                arg_20 = *rdx_3
                *rcx_3 += 4
            
            int64_t arg_8 = 0
            int64_t var_a8
            result = sub_142694420(arg2, zx.q(arg3), &arg_8, &arg_20, var_a8)
            int64_t rsi_1 = arg_8
            
            if (rsi_1 != 0)
                int32_t rcx_6 = 0
                arg_8.d = 0
                int64_t rdi_1 = 0
                
                if (arg2[8].d s>= 0x1ad)
                    int32_t zmm0_1 = (arg2[9]).d
                    
                    if (zmm0_1.w != 4 || (zx.q(zmm0_1) u>> 0x10).w != 7)
                        int64_t* rcx_7 = arg2[1]
                        int32_t* rdx_6 = *rcx_7
                        
                        if (&rdx_6[1] u> rcx_7[1])
                            int32_t* rdx_7 = &arg_8
                            
                            if ((*(arg2 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg2, rdx_7, arg4)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_7, 4)
                        else
                            arg_8.d = *rdx_6
                            *rcx_7 += 4
                        
                        rcx_6 = arg_8.d
                        
                        if (rcx_6 s> 0)
                            if ((arg2[5].b & 1) != 0)
                                int64_t rax_12 = j_sub_1426075c0(rcx_6, 0)
                                rdi_1 = rax_12
                                memset(rax_12, 0, sx.q(arg_8.d))
                                rcx_6 = arg_8.d
                            
                            int64_t r9_2 = *arg2
                            (*(r9_2 + 0x150))(arg2, rdi_1, sx.q(rcx_6), r9_2)
                            rcx_6 = arg_8.d
                
                var_a8 = rdi_1
                int32_t var_78
                sub_1426711e0(&var_78, arg_20, rsi_1, rcx_6, var_a8)
                int64_t rdi_2 = sx.q(*(arg1 + 0x38))
                int32_t rax_13 = (rdi_2 + 1).d
                *(arg1 + 0x38) = rax_13
                
                if (rax_13 s> *(arg1 + 0x3c))
                    sub_1405c4fe0(arg1 + 0x30)
                
                int32_t* rcx_15 = (rdi_2 << 6) + *(arg1 + 0x30)
                *rcx_15 = var_78
                int32_t var_74
                rcx_15[1] = var_74
                int32_t var_70
                rcx_15[2] = var_70
                int32_t var_6c
                rcx_15[3] = var_6c
                int64_t var_68
                *(rcx_15 + 0x10) = var_68
                int64_t* var_60
                *(rcx_15 + 0x18) = var_60
                
                if (var_60 != 0)
                    var_60[1].d += 1
                
                int32_t var_58
                rcx_15[8] = var_58
                int64_t var_50
                *(rcx_15 + 0x28) = var_50
                int64_t* var_48
                *(rcx_15 + 0x30) = var_48
                
                if (var_48 != 0)
                    var_48[1].d += 1
                
                char result_1
                result = result_1
                rcx_15[0xe].b = result
                
                if (var_48 != 0)
                    var_48[1].d -= 1
                    
                    if (var_48[1].d == 1)
                        result = (**var_48)(var_48)
                        int32_t temp2_1 = *(var_48 + 0xc)
                        *(var_48 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            result = (*(*var_48 + 8))(var_48, 1)
                
                if (var_60 != 0)
                    var_60[1].d -= 1
                    
                    if (var_60[1].d == 1)
                        result = (**var_60)(var_60)
                        int32_t temp3_1 = *(var_60 + 0xc)
                        *(var_60 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            result = (*(*var_60 + 8))(var_60, 1)
            
            r14_1 += 1
        while (r14_1 s< arg_10)
else if ((result & 2) != 0)
    void* rsi_3 = *(arg1 + 0x30)
    void* r14_4 = (sx.q(*(arg1 + 0x38)) << 6) + rsi_3
    
    if (rsi_3 != r14_4)
        int32_t* rdi_4 = rsi_3 + 0xc
        
        do
            if (*(rdi_4 + 4) != 0)
                int64_t* rcx_20 = arg2[1]
                int32_t* rdx_11 = *rcx_20
                
                if (&rdx_11[1] u<= rcx_20[1])
                    *rdi_4 = *rdx_11
                    int64_t* rax_27 = arg2[1]
                    *rax_27 += 4
                else if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdi_4, arg4)
                else
                    (*(*arg2 + 0x150))(arg2, rdi_4, 4)
                
                sub_142694420(arg2, zx.q(arg3), *(rdi_4 + 4), rdi_4)
                result = sub_142693fe0(arg2, arg4, *(rdi_4 + 0x1c), &rdi_4[5])
            
            rsi_3 += 0x40
            rdi_4 = &rdi_4[0x10]
        while (rsi_3 != r14_4)

return result
