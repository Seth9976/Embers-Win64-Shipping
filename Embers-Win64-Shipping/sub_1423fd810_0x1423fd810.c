// 函数: sub_1423fd810
// 地址: 0x1423fd810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg1 = 0
int32_t rbx = (data_143f5bc68.q).d
int64_t r14 = data_143f5bc60
arg1[1].d = rbx

if (rbx != 0)
    sub_1405a4c70(arg1, rbx, 0)
    memcpy(*arg1, r14, rbx * 2)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int32_t r14_1 = (data_143f5bc88).d
int64_t r12 = data_143f5bc80
arg1[3].d = r14_1

if (r14_1 != 0)
    sub_1405a4c70(&arg1[2], r14_1, 0)
    memcpy(arg1[2], r12, r14_1 * 2)
else
    *(arg1 + 0x1c) = 0

arg1[4].d = data_143f5bcb0
*(arg1 + 0x24) = 1
__builtin_memset(&arg1[5], 0, 0x38)
int32_t r12_1 = (data_143f5bc98).d
int64_t r13 = data_143f5bc90
arg1[0xc].d = r12_1

if (r12_1 != 0)
    sub_1405a4c70(&arg1[0xb], r12_1, 0)
    memcpy(arg1[0xb], r13, r12_1 * 2)
else
    *(arg1 + 0x64) = 0

int64_t var_38
int64_t rcx_25

if (arg2 == 0)
    int64_t* rax_8 = sub_14151ffb0(&var_38)
    
    if (&arg1[5] != rax_8)
        int64_t rcx_23 = arg1[5]
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        arg1[5] = *rax_8
        *rax_8 = 0
        arg1[6].d = rax_8[1].d
        *(arg1 + 0x34) = *(rax_8 + 0xc)
        rax_8[1] = 0
    
    rcx_25 = var_38
label_1423fdb09:
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
else
    int32_t rdx_6 = 0
    int32_t rcx_5 = 0
    int64_t rbx_1 = -1
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int64_t var_48 = 0
    
    if (*arg2 != 0)
        int64_t r12_2 = -1
        
        do
            r12_2 += 1
        while (arg2[r12_2] != 0)
        
        if (r12_2.d + 1 s> 0)
            sub_1405947f0(&var_48, r12_2.d + 1)
            rcx_5 = var_3c_1
            rdx_6 = var_40_1
        
        int32_t rax_1 = r12_2.d + 1 + rdx_6
        int32_t var_40_2 = rax_1
        
        if (rax_1 s> rcx_5)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg2, (r12_2.d + 1) * 2)
    
    char rax_2 = sub_140bacf70(&var_48, 0, nullptr)
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (rax_2 == 0)
        int32_t rdx_12 = 0
        int32_t rcx_14 = 0
        int32_t var_40_3 = 0
        int32_t var_3c_2 = 0
        var_48 = 0
        
        if (*arg2 != 0)
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rcx_14 = var_3c_2
                rdx_12 = var_40_3
            
            int32_t rax_4 = rbx_1.d + 1 + rdx_12
            int32_t var_40_4 = rax_4
            
            if (rax_4 s> rcx_14)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, arg2, (rbx_1.d + 1) * 2)
        
        int64_t* rax_5 = sub_140b18700(&var_38, &var_48, 1)
        
        if (&arg1[5] != rax_5)
            int64_t rcx_19 = arg1[5]
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            arg1[5] = *rax_5
            *rax_5 = 0
            arg1[6].d = rax_5[1].d
            *(arg1 + 0x34) = *(rax_5 + 0xc)
            rax_5[1] = 0
        
        int64_t rcx_21 = var_38
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rcx_25 = var_48
        goto label_1423fdb09
    
    if (arg1[5] != arg2)
        int32_t rbx_2
        
        if (*arg2 == 0)
            rbx_2 = 0
        else
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        arg1[6].d = 0
        
        if (*(arg1 + 0x34) != rbx_2)
            sub_1405947f0(&arg1[5], rbx_2)
            rdi = arg1[6].d
        
        int32_t rax_3 = rbx_2 + rdi
        arg1[6].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x34))
            sub_140594770(&arg1[5])
        
        if (rbx_2 != 0)
            memcpy(arg1[5], arg2, rbx_2 * 2)
return arg1
