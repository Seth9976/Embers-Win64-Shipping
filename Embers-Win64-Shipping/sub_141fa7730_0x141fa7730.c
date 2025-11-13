// 函数: sub_141fa7730
// 地址: 0x141fa7730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

if (*arg2 != 0x2cf5a13d)
    *(arg1 + 0x29) |= 1
    return arg1

int64_t* rcx_2 = arg1[1]
void* r13 = &arg2[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    *r13 = *rdx
    int64_t* rax_7 = arg1[1]
    *rax_7 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, r13, arg3)
else
    (*(*arg1 + 0x150))(arg1, r13, 4)

if (*r13 u>= 5)
    int64_t* rcx_4 = arg1[1]
    int32_t* r8_1 = *rcx_4
    
    if (&r8_1[1] u<= rcx_4[1])
        arg2[2] = *r8_1
        int64_t* rax_11 = arg1[1]
        *rax_11 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[2], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[2], 4)
    
    int64_t* rcx_6 = arg1[1]
    int32_t* r8_2 = *rcx_6
    
    if (&r8_2[1] u<= rcx_6[1])
        arg2[3] = *r8_2
        int64_t* rax_15 = arg1[1]
        *rax_15 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[3], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[3], 4)
    
    int64_t* rcx_8 = arg1[1]
    int32_t* r8_3 = *rcx_8
    
    if (&r8_3[1] u<= rcx_8[1])
        arg2[4] = *r8_3
        int64_t* rax_19 = arg1[1]
        *rax_19 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[4], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[4], 4)
    
    int32_t rax_21 = *r13
    
    if (rax_21 u>= 0xc)
        sub_1409ac860(arg1, &arg2[5], arg3)
        rax_21 = *r13
    
    int64_t* var_58
    int32_t arg_8
    
    if (rax_21 u< 0xb)
        int64_t* rcx_12 = arg1[1]
        arg_8 = 0
        int32_t* rdx_7 = *rcx_12
        
        if (&rdx_7[1] u> rcx_12[1])
            int32_t* rdx_8 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_8, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_8, 4)
        else
            arg_8 = *rdx_7
            *rcx_12 += 4
        
        if ((arg1[5].b & 1) != 0)
            var_58 = nullptr
            int64_t var_50_1 = 0
            sub_140b27a40(&arg2[0xa], 0, 0, 0, arg_8, &var_58)
            int64_t* rcx_15 = var_58
            
            if (rcx_15 != 0)
                arg3 = sub_140a74f90(rcx_15)
    else
        arg3 = sub_140b0c2e0(arg1, &arg2[0xa], arg3)
    
    int32_t temp0_1 = *r13
    int512_t zmm1
    int64_t var_48
    int32_t var_3c
    
    if (temp0_1 u< 6)
        var_58 = nullptr
        int32_t var_50_2 = 0
        zmm1 = sub_140a1d9d0(arg1, &var_58, arg3)
        int64_t* rdi_1 = var_58
        var_48 = 0
        int64_t r12_1
        
        if (var_50_2 != 0)
            sub_1405a4c70(&var_48, var_50_2, 0)
            r12_1 = var_48
            memcpy(r12_1, rdi_1, var_50_2 * 2)
            arg_8 = var_3c
        else
            arg_8 = 0
            r12_1 = 0
        
        int64_t r15_1 = sx.q(arg2[0x16])
        int32_t rax_27 = (r15_1 + 1).d
        arg2[0x16] = rax_27
        
        if (rax_27 s> arg2[0x17])
            sub_1405a4df0(&arg2[0x14])
        
        int64_t rax_28 = *(arg2 + 0x50)
        int64_t rcx_20 = r15_1 * 3
        int32_t rdx_13 = arg_8
        *(rax_28 + (rcx_20 << 3)) = r12_1
        *(rax_28 + (rcx_20 << 3) + 8) = var_50_2
        *(rax_28 + (rcx_20 << 3) + 0xc) = rdx_13
        *(rax_28 + (rcx_20 << 3) + 0x10) = 0
        int64_t* rcx_21 = var_58
        
        if (rcx_21 != 0)
            zmm1 = sub_140a74f90(rcx_21)
    else if (temp0_1 != 6)
        zmm1 = sub_141fa7ba0(arg1, &arg2[0x14], arg3)
    else
        var_58 = nullptr
        int32_t var_50_3 = 0
        zmm1 = sub_140a3cdd0(arg1, &var_58, arg3)
        int64_t* r15_2 = var_58
        int64_t r14_2 = sx.q(var_50_3)
        int64_t* r12_2 = r15_2
        void* rax_31 = &r15_2[r14_2 * 2]
        
        if (r15_2 != rax_31)
            do
                sub_140596d10(&var_48, r12_2)
                int64_t r15_3 = sx.q(arg2[0x16])
                int32_t rax_32 = (r15_3 + 1).d
                arg2[0x16] = rax_32
                
                if (rax_32 s> arg2[0x17])
                    sub_1405a4df0(&arg2[0x14])
                
                r12_2 = &r12_2[2]
                int64_t* rdx_17 = *(arg2 + 0x50) + r15_3 * 0x18
                *rdx_17 = var_48
                int32_t var_40
                rdx_17[1].d = var_40
                *(rdx_17 + 0xc) = var_3c
                rdx_17[2].d = 0
            while (r12_2 != rax_31)
            
            r15_2 = var_58
            r13 = &arg2[1]
        
        int64_t* rdi_2 = r15_2
        
        if (r14_2.d != 0)
            int32_t i
            
            do
                int64_t rcx_25 = *rdi_2
                
                if (rcx_25 != 0)
                    zmm1 = sub_140a74f90(rcx_25)
                
                rdi_2 = &rdi_2[2]
                i = r14_2.d
                r14_2 = zx.q(r14_2.d - 1)
            while (i != 1)
        
        if (r15_2 != 0)
            zmm1 = sub_140a74f90(r15_2)
    
    if (*r13 u>= 9)
        int64_t* rcx_27 = arg1[1]
        int32_t* r8_6 = *rcx_27
        
        if (&r8_6[1] u<= rcx_27[1])
            arg2[0x12] = *r8_6
            int64_t* rax_39 = arg1[1]
            *rax_39 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[0x12], zmm1)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[0x12], 4)
    
    sub_140a3cdd0(arg1, &arg2[0x18], zmm1)
else
    *(arg1 + 0x29) |= 1

return arg1
