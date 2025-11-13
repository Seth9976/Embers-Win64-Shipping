// 函数: sub_140f76d10
// 地址: 0x140f76d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg3)
uint64_t rbx = 0
void* r8 = *(arg1 + 8)
int64_t r12 = sx.q(arg2)
uint64_t* result

if (r8 != 0)
    int64_t* rcx_1 = *(r8 + 0x18)
    int64_t r8_1 = *(r8 + 0x48)
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    (*(*rcx_1 + 0x10))(rcx_1, &var_58, r8_1)
    void var_48
    sub_140aae2f0(&var_48, &var_58)
    int64_t rcx_3 = var_58
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* rax_1 = sub_140ac6680(&var_48)
    uint64_t var_68 = 0
    int64_t var_60_1 = 0
    int32_t rsi_1 = 0
    int32_t r15_1 = 0
    
    if (r13.d s>= 0)
        int32_t r8_2 = rax_1[1].d
        int32_t r14_1 = r8_2 - 1
        
        if (r8_2 == 0)
            r14_1 = 0
        
        int32_t rcx_5
        
        if (r12.d s>= 0)
            rcx_5 = r14_1
            
            if (r12.d s< r14_1)
                rcx_5 = r12.d
        else
            rcx_5 = 0
        
        int64_t r10_1 = sx.q(rcx_5)
        int64_t rdx_2 = r12 + r13
        
        if (rdx_2 s< r10_1)
            r14_1 = rcx_5
        else if (rdx_2 s< sx.q(r14_1))
            r14_1 = rdx_2.d
        
        int16_t* const rax_3
        
        if (r8_2 == 0)
            rax_3 = &data_142d40450
        else
            rax_3 = *rax_1
        
        int16_t* r13_1 = &rax_3[r10_1]
        uint64_t var_78 = 0
        int32_t r14_2 = r14_1 - rcx_5
        int64_t var_70_1 = 0
        uint64_t r12_1 = 0
        
        if (r13_1 != 0 && *r13_1 != 0 && r14_2 s> 0)
            if (r14_2 + 1 s> 0)
                sub_1405947f0(&var_78, r14_2 + 1)
                r15_1 = var_70_1:4.d
                rsi_1 = var_70_1.d
                r12_1 = var_78
            
            rsi_1 = rsi_1 + 1 + r14_2
            var_70_1.d = rsi_1
            
            if (rsi_1 s> r15_1)
                sub_140594770(&var_78)
                r15_1 = var_70_1:4.d
                rsi_1 = var_70_1.d
                r12_1 = var_78
            
            UnDecorator::getReferenceType(r12_1, r13_1, r14_2 * 2)
            *(r12_1 + (sx.q(rsi_1) << 1) - 2) = 0
        
        rbx = r12_1
        var_68 = rbx
        var_60_1.d = rsi_1
        var_60_1:4.d = r15_1
    
    result = &var_68
    
    if (arg4 != &var_68)
        uint64_t rcx_9 = *arg4
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        *arg4 = rbx
        arg4[1].d = rsi_1
        *(arg4 + 0xc) = r15_1
    else if (rbx != 0)
        result = sub_140a74f90(rbx)
    
    int64_t* var_40
    
    if (var_40 != 0)
        result = zx.q(var_40[1].d)
        var_40[1].d -= 1
        
        if (result.d == 1)
            result = (**var_40)(var_40)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_40 + 8))(var_40, zx.q(rdi_1))
else
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) s<= 0xffffffff)
        sub_1405947f0(arg4, 0)
    
    result = *arg4
    
    if (result != 0)
        *result = 0

return result
