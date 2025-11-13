// 函数: sub_140ca89d0
// 地址: 0x140ca89d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[5].b)
uint64_t var_28
char arg_8
int32_t arg_18

if ((rax.b & 1) != 0)
    int64_t rax_1 = *arg1
    arg_8 = 0
    (*(rax_1 + 0x158))(arg3, &arg_8, 1)
    void arg_20
    
    if (arg_8 != 0)
        int32_t* rdx_1 = &arg_18
        int64_t rax_2 = *arg1
        
        if (*(arg1 + 0x54) u>= 6)
            (*(rax_2 + 0x168))(arg1, rdx_1)
        else
            (*(rax_2 + 0x160))(arg1, rdx_1, 0x19b)
        
        int32_t rdx_2 = arg_18
        
        if (rdx_2 u>= 0x2be)
            *(arg1 + 0x29) |= 1
            int64_t rax_3
            rax_3.b = 1
            return rax_3
        
        int32_t arg_c
        
        if (rdx_2 != 0)
            arg_8.d = *sub_140b5e500(&arg_20, rdx_2)
            arg_c = 0
            *arg2 = arg_8.q
            int64_t rax_7
            rax_7.b = 1
            return rax_7
        
        arg_c = 0
        arg_8.d = 0
        *arg2 = arg_8.q
        int64_t rax_4
        rax_4.b = 1
        return rax_4
    
    var_28 = 0
    int32_t var_20_1 = 0
    int64_t* rax_8
    int512_t zmm1
    rax_8, zmm1 = sub_140a1d9d0(arg1, &var_28, arg4)
    int64_t* rdx_4 = rax_8[1]
    int32_t* rax_9 = *rdx_4
    
    if (&rax_9[1] u> rdx_4[1])
        int32_t* rdx_5 = &arg_18
        
        if ((*(rax_8 + 0x29) & 0x20) != 0)
            sub_140b54070(rax_8, rdx_5, zmm1)
        else
            (*(*rax_8 + 0x150))(rax_8, rdx_5, 4)
    else
        arg_18 = *rax_9
        int64_t* rax_10 = rax_8[1]
        *rax_10 += 4
    
    int16_t* const rdx_6 = &data_142d40450
    
    if (var_20_1 != 0)
        rdx_6 = var_28
    
    *arg2 = *sub_140b581d0(&arg_20, rdx_6, arg_18, 1)
label_140ca8bf9:
    uint64_t rcx_15 = var_28
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
else if ((rax.b & 2) != 0)
    void* rax_12 = sub_140b63aa0(arg2)
    void* rdi_1 = rax_12
    
    if (rax_12 == 0 || *rax_12 s> 0x19a)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    arg_8 = rax_12.b
    (*(*arg1 + 0x158))(arg1, &arg_8, 1)
    
    if (arg_8 != 0 && rdi_1 != 0)
        arg_18 = *rdi_1
        (*(*arg1 + 0x168))(arg1, &arg_18)
        int64_t rax_16
        rax_16.b = 1
        return rax_16
    
    int512_t zmm1_1 = sub_140b5e690(arg2, &var_28)
    arg_18 = *(arg2 + 4)
    int64_t* rax_18
    int512_t zmm1_2
    rax_18, zmm1_2 = sub_140a1d9d0(arg1, &var_28, zmm1_1)
    int64_t* rdx_11 = rax_18[1]
    int32_t* rax_19 = *rdx_11
    
    if (&rax_19[1] u> rdx_11[1])
        int32_t* rdx_12 = &arg_18
        
        if ((*(rax_18 + 0x29) & 0x20) != 0)
            sub_140b54070(rax_18, rdx_12, zmm1_2)
        else
            (*(*rax_18 + 0x150))(rax_18, rdx_12, 4)
    else
        arg_18 = *rax_19
        rax = rax_18[1]
        *rax += 4
    
    goto label_140ca8bf9
rax.b = 1
return rax
