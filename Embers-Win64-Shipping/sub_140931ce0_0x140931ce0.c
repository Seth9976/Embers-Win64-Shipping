// 函数: sub_140931ce0
// 地址: 0x140931ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t var_78 = 0
int32_t rdx = 0
int32_t var_70 = 0
int32_t var_6c = 0
int64_t r15 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_1.d + 1)
        r9 = var_6c
        rdx = var_70
        r15 = var_78
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_70_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_78)
        r15 = var_78
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)

int64_t* rbx_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rbx_3, &arg_8, &var_78)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *rbx_3 + rax_2 * 0x28

int64_t* result = rcx_4 + 0x10

if (rcx_4 == 0)
    result = nullptr

void* rcx_5

if (result != 0)
    rcx_5 = *result

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 2)
    rbx_3.b = 0
else
    rbx_3.b = 1

if (r15 != 0)
    result = sub_140a74f90(r15)

if (rbx_3.b != 0)
    int64_t var_68 = 0
    int32_t rcx_7 = 0
    int32_t var_5c_1 = 0
    int32_t var_60_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_4 = -1
        
        do
            rbx_4 += 1
        while (arg2[rbx_4] != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_4.d + 1)
            rcx_7 = var_5c_1
            rsi = var_60_1
        
        int32_t rax_4 = rsi + rbx_4.d + 1
        int32_t var_60_2 = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, arg2, (rbx_4.d + 1) * 2)
    
    int64_t var_58
    void var_48
    int64_t* rax_6 = sub_140aae2f0(&var_48, sub_140b75430(*(arg1 + 8), &var_58, &var_68))
    int64_t rdx_10 = *arg3
    *arg3 = *rax_6
    *rax_6 = rdx_10
    int64_t rdx_11 = arg3[1]
    arg3[1] = rax_6[1]
    rax_6[1] = rdx_11
    result = zx.q(rax_6[2].d)
    arg3[2].d = result.d
    int64_t* var_40
    
    if (var_40 != 0)
        result = zx.q(var_40[1].d)
        var_40[1].d -= 1
        
        if (result.d == 1)
            result = (**var_40)(var_40)
            int32_t r14_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (r14_1 == 1)
                result = (*(*var_40 + 8))(var_40, zx.q(r14_1))
    
    int64_t rcx_17 = var_58
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = var_68
    
    if (rcx_18 != 0)
        return sub_140a74f90(rcx_18)

return result
