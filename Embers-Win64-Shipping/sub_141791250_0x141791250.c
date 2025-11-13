// 函数: sub_141791250
// 地址: 0x141791250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t count = sx.q(arg2[1].d)
int32_t i_1 = 0
char* r13 = nullptr
char* var_58 = nullptr
int32_t var_4c = 0
int32_t var_50 = count.d

if (count.d s> 0)
    sub_140679a80(&var_58)
    r13 = var_58

memset(r13, 0, count)
uint64_t result = zx.q(arg2[1].d)
int32_t i = 0
int32_t r12 = arg4[1].d

if (result.d s> 0)
    char* r14_1 = r13
    int64_t* r15_1 = nullptr
    
    do
        int64_t r8_1 = *(r15_1 + *arg2)
        int64_t var_60 = r8_1
        void arg_20
        int32_t temp0_1 = *sub_140865c40(arg3, &arg_20, r8_1)
        int32_t* rax_1
        rax_1.b = temp0_1 != 0xffffffff
        *r14_1 = rax_1.b
        
        if (temp0_1 == 0xffffffff)
            int32_t arg_10 = r12
            int64_t* var_48 = &var_60
            r12 += 1
            int32_t* var_40_1 = &arg_10
            void var_68
            sub_1413b83d0(arg3, &var_68, &var_48, nullptr)
        
        result = zx.q(arg2[1].d)
        i += 1
        r15_1 = &r15_1[1]
        r14_1 = &r14_1[1]
    while (i s< result.d)
    
    r13 = var_58

if (r12 s> *(arg4 + 0xc))
    sub_1405c5570(arg4, r12)
    result = zx.q(arg2[1].d)

if (result.d s> 0)
    int64_t* r15_2 = nullptr
    char* rbp = r13
    
    do
        if (*rbp == 0)
            int64_t r14_2 = sx.q(arg4[1].d)
            int64_t r12_1 = *(r15_2 + *arg2)
            int32_t rax_3 = (r14_2 + 1).d
            arg4[1].d = rax_3
            
            if (rax_3 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            result = *arg4
            *(result + (r14_2 << 3)) = r12_1
        
        i_1 += 1
        rbp = &rbp[1]
        r15_2 = &r15_2[1]
    while (i_1 s< arg2[1].d)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
