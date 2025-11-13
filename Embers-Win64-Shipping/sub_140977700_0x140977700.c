// 函数: sub_140977700
// 地址: 0x140977700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
uint64_t rcx_32

if ((arg2[5].b & 1) == 0)
    int64_t* rcx_23 = *(arg1 + 8)
    uint64_t var_38[0x2]
    (*(*rcx_23 + 0x30))(rcx_23, &var_38)
    int512_t zmm1_1 = sub_140a1d9d0(arg2, &var_38, arg3)
    int64_t* rcx_25 = arg2[1]
    int16_t* rdx_15 = *rcx_25
    
    if (&rdx_15[1] u<= rcx_25[1])
        *(arg1 + 0x38) = *rdx_15
        int64_t* rax_25 = arg2[1]
        *rax_25 += 2
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, arg1 + 0x38, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x38, 2)
    
    int64_t* rcx_27 = arg2[1]
    int16_t* rdx_17 = *rcx_27
    
    if (&rdx_17[1] u<= rcx_27[1])
        *(arg1 + 0x28) = *rdx_17
        int64_t* rax_29 = arg2[1]
        *rax_29 += 2
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, arg1 + 0x28, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x28, 2)
    
    int64_t* rcx_29 = arg2[1]
    int64_t* r8_4 = *rcx_29
    
    if (&r8_4[1] u<= rcx_29[1])
        *(arg1 + 0x30) = *r8_4
        int64_t* rax_33 = arg2[1]
        *rax_33 += 8
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, arg1 + 0x30, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 8)
    
    result = (*(*arg2 + 0x150))(arg2, *(arg1 + 0x18), zx.q(*(arg1 + 0x28)))
    rcx_32 = var_38[0]
else
    int32_t rsi_1 = 0
    uint64_t var_58 = 0
    int64_t var_50_1 = 0
    int512_t zmm1 = sub_140a1d9d0(arg2, &var_58, arg3)
    int64_t* rcx_1 = arg2[1]
    int16_t* rdx_1 = *rcx_1
    
    if (&rdx_1[1] u<= rcx_1[1])
        *(arg1 + 0x38) = *rdx_1
        int64_t* rax_2 = arg2[1]
        *rax_2 += 2
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, arg1 + 0x38, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x38, 2)
    
    int64_t arg_10 = 0
    int64_t* rax_4 = sub_14093f850(&arg_10)
    int64_t r8 = *rax_4
    int64_t* var_48
    (*(r8 + 0x80))(rax_4, &var_48, r8)
    int64_t* rcx_5 = var_48
    
    if (rcx_5 != 0)
        void var_28
        int64_t* rax_6 = (*(*rcx_5 + 0x100))(rcx_5, &var_28, &var_58)
        
        if (arg1 + 8 != rax_6)
            *(arg1 + 8) = *rax_6
            *rax_6 = 0
            int64_t rcx_7 = rax_6[1]
            int64_t* rdi_1 = *(arg1 + 0x10)
            
            if (rcx_7 != rdi_1)
                rax_6[1] = 0
                *(arg1 + 0x10) = rcx_7
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp4_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp2_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
    
    int64_t* rcx_12 = arg2[1]
    int16_t* rdx_6 = *rcx_12
    
    if (&rdx_6[1] u<= rcx_12[1])
        *(arg1 + 0x28) = *rdx_6
        int64_t* rax_13 = arg2[1]
        *rax_13 += 2
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, arg1 + 0x28, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x28, 2)
    
    int64_t* rcx_14 = arg2[1]
    int64_t* r8_2 = *rcx_14
    
    if (&r8_2[1] u<= rcx_14[1])
        *(arg1 + 0x30) = *r8_2
        int64_t* rax_17 = arg2[1]
        *rax_17 += 8
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, arg1 + 0x30, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 8)
    
    result = sub_142437180()
    uint32_t rdx_9 = zx.d(*(arg1 + 0x28))
    
    if (rdx_9 u> result)
        *(arg1 + 0x28) = 0
    else
        *(arg1 + 0x20) = 0
        
        if (*(arg1 + 0x24) != rdx_9)
            sub_1405c5510(arg1 + 0x18, rdx_9)
            rsi_1 = *(arg1 + 0x20)
        
        int32_t rcx_18 = zx.d(*(arg1 + 0x28)) + rsi_1
        *(arg1 + 0x20) = rcx_18
        
        if (rcx_18 s> *(arg1 + 0x24))
            sub_1405daba0(arg1 + 0x18)
        
        result = (*(*arg2 + 0x150))(arg2, *(arg1 + 0x18), zx.q(*(arg1 + 0x28)))
    
    int64_t* var_40
    
    if (var_40 != 0)
        result = var_40[1].d
        var_40[1].d -= 1
        
        if (result == 1)
            result = (**var_40)(var_40)
            int32_t rdi_3 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_3 == 1)
                result = (*(*var_40 + 8))(var_40, zx.q(rdi_3))
    
    rcx_32 = var_58

if (rcx_32 == 0)
    return result

return sub_140a74f90(rcx_32)
