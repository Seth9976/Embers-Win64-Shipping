// 函数: sub_140ba9a70
// 地址: 0x140ba9a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x50)
int32_t i = arg3
int64_t* result = arg2

if (rax == 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(result, (rax + 0xc).d)
    int32_t rax_1 = result[1].d + 0xc
    result[1].d = rax_1
    
    if (rax_1 s> *(result + 0xc))
        sub_140594770(result)
    
    UnDecorator::getReferenceType(*result, u"Null linker", 0x18)
    return result

int16_t* rbp = nullptr
int32_t r13 = 0
int32_t r14 = 0
int16_t* arg_20 = nullptr
int16_t* var_58

if (i s> 0)
    void* rax_3 = *(rax + 0xa0)
    
    if (rax_3 != 0)
        arg_20 = *(rax_3 + 0x18)
        sub_140b63b70(&arg_20, &var_58)
        int32_t var_50
        r13 = var_50
        arg_20 = var_58

int32_t r12 = 1
int32_t r14_1

if (i == 0)
    r14_1 = 0
else
    do
        int64_t rcx_4 = *(arg1 + 0x50)
        int32_t* rbx_2
        
        if (i s>= 0)
            rbx_2 = (sx.q(i - 1) << 7) + *(rcx_4 + 0x18)
        else
            rbx_2 = sx.q(not.d(i)) * 0x38 + *(rcx_4 + 8)
        
        int64_t var_48
        int64_t* rax_7 = sub_140b63b70(rbx_2, &var_48)
        int32_t r15_1 = r14 - 1
        
        if (r14 == 0)
            r15_1 = 0
        
        int32_t rdx_4
        
        if (rax_7[1].d == 0)
            rdx_4 = 1
        
        if (rax_7[1].d != 0 || r15_1 == 0xffffffff)
            rdx_4 = 0
        
        var_58 = nullptr
        var_58 = *rax_7
        *rax_7 = 0
        int32_t rax_9 = rax_7[1].d
        int32_t rax_10 = *(rax_7 + 0xc)
        rax_7[1] = 0
        int32_t rdx_6 = rdx_4 + rax_9 + r15_1 + 1
        
        if (rdx_6 s> rax_10)
            sub_1405947f0(&var_58, rdx_6)
        
        sub_140a2cf70(&var_58, rbp, r15_1)
        
        if (rbp != 0)
            sub_140a74f90(rbp)
        
        int64_t rcx_10 = var_48
        rbp = var_58
        r14 = rax_9
        var_58 = nullptr
        int32_t var_50_1
        var_50_1.q = 0
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        i = rbx_2[2]
    while (i != 0)
    
    result = arg2
    
    if (r14 == 0)
        r14_1 = 0
    else
        r14_1 = r14 - 1

if (r13 == 0 && r14_1 != 0xffffffff)
    r12 = 2

*result = 0
int32_t rax_12 = r14_1 + r12
result[1].d = r13

if (r13 != 0 || rax_12 != 0)
    sub_1405a4c70(result, rax_12 + r13, 0)
    memcpy(*result, arg_20, r13 * 2)
else
    *(result + 0xc) = 0

sub_140a2cf70(result, rbp, r14_1)
int16_t* rax_13 = arg_20

if (rax_13 != 0)
    sub_140a74f90(rax_13)

if (rbp != 0)
    sub_140a74f90(rbp)

return result
