// 函数: sub_141c5f000
// 地址: 0x141c5f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg3 + 0x130)
int64_t arg_8

if (rcx == 0)
    sub_141c4a9f0(&arg_8)
else
    (*(*rcx + 8))(rcx, &arg_8)

int64_t* rcx_2 = *(arg1 + 0x130)
int64_t arg_18

if (rcx_2 == 0)
    sub_141c4a9f0(&arg_18)
else
    (*(*rcx_2 + 8))(rcx_2, &arg_18)

void* rax_4 = *arg3
int32_t var_48
uint128_t zmm0

if (arg_18 == arg_8)
    int64_t* rcx_20 = *(arg1 + 0x130)
    int64_t r9_3 = *rcx_20
    
    if ((*(r9_3 + 0x38))(rcx_20, *(rax_4 + 0x180), *(arg1 + 0x180), r9_3) != 0)
    label_141c5f0c0:
        void* rcx_7 = *(arg1 + 0x88)
        int32_t rax_8 = 0
        void* var_38_1 = rcx_7
        int32_t rdx_4
        
        if (rcx_7 == 0)
            rdx_4 = 0
        else
            rdx_4 = *(rcx_7 + 0x14)
        
        int32_t var_3c_1 = rdx_4
        
        if (rcx_7 != 0)
            rax_8 = *(rcx_7 + 0x958)
        
        int32_t var_44_1 = rax_8
        
        if (rcx_7 == 0)
            zmm0 = zx.o(0)
        else
            zmm0 = _mm_cvtepi32_ps(zx.o(*(rcx_7 + 0xc)))
        
        int64_t rsi_2 = *(arg1 + 0x180)
        var_48 = 1
        int32_t var_40_1 = (int.q(zmm0.d)).d
        void* rax_10 = *arg3
        int64_t* rcx_8 = *(rax_10 + 0x130)
        int64_t r15_2 = *(rax_10 + 0x180)
        
        if (rcx_8 == 0)
            sub_141c4a9f0(&arg_8)
        else
            (*(*rcx_8 + 8))(rcx_8, &arg_8)
        
        int64_t* rcx_10 = *(arg1 + 0x130)
        int64_t rbx_1 = *rcx_10
        int64_t* rax_12 = (*(rbx_1 + 8))(rcx_10, &arg_18)
        (*(rbx_1 + 0x20))(*(arg1 + 0x130), arg2, arg_8, r15_2, *rax_12, rsi_2, &var_48)
    else
        *arg2 = 0
else
    int64_t* rsi_1 = *(rax_4 + 0x130)
    int64_t r15_1 = *(rax_4 + 0x180)
    
    if (rsi_1 == 0)
        sub_141c4a9f0(&arg_8)
    else
        (*(*rsi_1 + 8))(rsi_1, &arg_8)
    
    int64_t* rcx_6 = *(arg1 + 0x130)
    
    if ((*(*rcx_6 + 0x40))(rcx_6, arg_8, r15_1) != 0)
        goto label_141c5f0c0
    
    int64_t* rcx_12 = *(arg1 + 0x130)
    int64_t r15_3 = *(arg1 + 0x180)
    
    if (rcx_12 == 0)
        sub_141c4a9f0(&arg_8)
    else
        (*(*rcx_12 + 8))(rcx_12, &arg_8)
    
    if ((*(*rsi_1 + 0x48))(rsi_1, arg_8, r15_3) == 0)
        *arg2 = 0
    else
        void* rcx_15 = *(arg1 + 0x88)
        int32_t rax_17 = 0
        void* var_38_2 = rcx_15
        int32_t rdx_10
        
        if (rcx_15 == 0)
            rdx_10 = 0
        else
            rdx_10 = *(rcx_15 + 0x14)
        
        int32_t var_3c_2 = rdx_10
        
        if (rcx_15 != 0)
            rax_17 = *(rcx_15 + 0x958)
        
        int32_t var_44_2 = rax_17
        
        if (rcx_15 == 0)
            zmm0 = zx.o(0)
        else
            zmm0 = _mm_cvtepi32_ps(zx.o(*(rcx_15 + 0xc)))
        
        int64_t r15_4 = *(arg1 + 0x180)
        var_48 = 1
        int32_t var_40_2 = (int.q(zmm0.d)).d
        void* rax_19 = *arg3
        int64_t* rcx_16 = *(rax_19 + 0x130)
        int64_t r12_1 = *(rax_19 + 0x180)
        
        if (rcx_16 == 0)
            sub_141c4a9f0(&arg_8)
        else
            (*(*rcx_16 + 8))(rcx_16, &arg_8)
        
        int64_t* rcx_18 = *(arg1 + 0x130)
        int64_t rbx_2 = *rsi_1
        int64_t* rax_22 = (*(*rcx_18 + 8))(rcx_18, &arg_18)
        (*(rbx_2 + 0x20))(rsi_1, arg2, arg_8, r12_1, *rax_22, r15_4, &var_48)
return arg2
