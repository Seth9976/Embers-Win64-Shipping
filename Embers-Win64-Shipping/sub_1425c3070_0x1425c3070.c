// 函数: sub_1425c3070
// 地址: 0x1425c3070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rbx = 0
int32_t arg_18 = 0
int64_t rdi = -1
int64_t var_28
int64_t r15

if (arg3 == 0)
    if (*(arg1 + 0x20) == 0)
        r15.b = 0
    else
        var_28 = 0
        int32_t rdx_5 = 0
        int32_t var_20_3 = 0
        int32_t rcx_8 = 0
        int32_t var_1c_2 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_28, rbx_1.d + 1)
                rcx_8 = var_1c_2
                rdx_5 = var_20_3
            
            int32_t rax_1 = rbx_1.d + 1 + rdx_5
            int32_t var_20_4 = rax_1
            
            if (rax_1 s> rcx_8)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, arg2, (rbx_1.d + 1) * 2)
        
        int16_t* rdx_8
        
        if (*(arg1 + 0x18) == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *(arg1 + 0x10)
        
        rbx = 1
        
        if (sub_140a2c910(&var_28, rdx_8, 1).b == 0)
            r15.b = 0
        else
            r15.b = 1
else if (*(arg1 + 0x21) != 0)
    r15.b = 1
else
    r15.b = 0

if ((rbx.b & 1) != 0)
    int64_t rcx = var_28
    rbx &= 0xfffffffe
    
    if (rcx != 0)
        sub_140a74f90(rcx)

int32_t result

if (r15.b != 0)
    int64_t* r14_1 = *(arg1 + 8)
    int64_t r15_1 = sx.q(r14_1[1].d)
    result = (r15_1 + 1).d
    r14_1[1].d = result
    
    if (result s> *(r14_1 + 0xc))
        sub_1405a4f90(r14_1)
    
    int64_t r15_2 = r15_1 << 4
    int64_t* r15_3 = r15_2 + *r14_1
    
    if (r15_2 != neg.q(*r14_1))
        var_28 = 0
        int32_t rcx_2 = 0
        int32_t var_1c_1 = 0
        int32_t var_20_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rdi += 1
            while (arg2[rdi] != 0)
            
            if (rdi.d + 1 s> 0)
                sub_1405947f0(&var_28, rdi.d + 1)
                rcx_2 = var_1c_1
                rbp = var_20_1
            
            int32_t rax = rdi.d + 1 + rbp
            int32_t var_20_2 = rax
            
            if (rax s> rcx_2)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, arg2, (rdi.d + 1) * 2)
        
        rbx |= 2
        sub_140b187e0(r15_3, &var_28)
    
    if ((rbx.b & 2) != 0)
        int64_t rcx_7 = var_28
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)

result.b = 1
return result
