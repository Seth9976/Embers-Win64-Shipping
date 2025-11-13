// 函数: sub_140ca69c0
// 地址: 0x140ca69c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int32_t arg_10 = 0

if ((arg2[5].b & 2) != 0)
    for (void* i = *(arg1 + 0x50); i != 0; i = *(i + 0x20))
        rdx += 1
        arg_10 = rdx

int64_t* rcx = arg2[1]
int32_t* rdx_1 = *rcx
uint64_t result

if (&rdx_1[1] u> rcx[1])
    int32_t* rdx_2 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_2, arg3)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_2, 4)
else
    result = zx.q(*rdx_1)
    arg_10 = result.d
    *rcx += 4

int64_t arg_18

if ((arg2[5].b & 1) == 0)
    for (int64_t* i_1 = *(arg1 + 0x50); i_1 != 0; i_1 = i_1[4])
        int64_t rax_7 = *arg2
        arg_18 = *i_1[1]
        (*(rax_7 + 0x140))(arg2, &arg_18)
        result = (*(*i_1 + 8))(i_1, arg2)
else
    int32_t rax_3 = arg_10
    int64_t rbx = 0
    int32_t r15_1 = 0
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    
    if (rax_3 s> 0)
        sub_1405c5570(&var_58, rax_3)
        rax_3 = arg_10
        r15_1 = var_50_1.d
        rbx = var_58
    
    int32_t r14_1 = 0
    
    if (rax_3 s> 0)
        do
            int64_t rax_4 = *arg2
            arg_18 = 0
            (*(rax_4 + 0x140))(arg2, &arg_18)
            int64_t arg_20 = 0
            char var_40_1 = 1
            void* var_48 = arg1
            int64_t* rax_5 = sub_140cb1b50(&arg_18, &var_48, &arg_20, 0)
            int64_t r8_2 = *rax_5
            (*(r8_2 + 8))(rax_5, arg2, r8_2)
            int64_t r13_1 = sx.q(r15_1)
            r15_1 = (r13_1 + 1).d
            var_50_1.d = r15_1
            
            if (r15_1 s> var_50_1:4.d)
                sub_1405a4d70(&var_58)
                r15_1 = var_50_1.d
                rbx = var_58
            
            r14_1 += 1
            *(rbx + (r13_1 << 3)) = rax_5
        while (r14_1 s< arg_10)
    
    result = zx.q(r15_1 - 1)
    int64_t rcx_7 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t temp0_1
        
        do
            void* rdx_8 = *(rbx + (rcx_7 << 3))
            temp0_1 = rcx_7
            rcx_7 -= 1
            result = *(arg1 + 0x50)
            *(rdx_8 + 0x20) = result
            *(arg1 + 0x50) = rdx_8
        while (temp0_1 - 1 s>= 0)
    
    if (rbx != 0)
        return sub_140a74f90(rbx)
return result
