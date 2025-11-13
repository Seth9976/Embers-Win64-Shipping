// 函数: sub_141dada10
// 地址: 0x141dada10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (*(arg1 + 0x230) s> 1)
    int64_t* rax_2 = sub_141802500()
    int64_t r8 = *rax_2
    int64_t* var_58
    (*(r8 + 0x40))(rax_2, &var_58, r8)
    int32_t rax_3 = arg2[1].d
    int16_t* const r8_1 = &data_142d40450
    int64_t* rbx_2 = var_58
    wchar16* rdx_2
    
    if (arg3 == 0)
        if (rax_3 != 0)
            *arg2
        
        if (*(arg1 + 0x230) != 0)
            r8_1 = *(arg1 + 0x228)
        
        rdx_2 = u"%sreplay/%s?shouldKeep=false"
    else
        if (rax_3 != 0)
            *arg2
        
        if (*(arg1 + 0x230) != 0)
            r8_1 = *(arg1 + 0x228)
        
        rdx_2 = u"%sreplay/%s?shouldKeep=true"
    
    int64_t var_68
    sub_140a2e390(&var_68, rdx_2, r8_1)
    (*(*rbx_2 + 0x50))(rbx_2, &var_68)
    int64_t rcx_6 = var_68
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 5)
    int32_t rax_5 = var_70_1 + 5
    var_70_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u"POST", 0xa)
    int64_t* rcx_10 = var_58
    (*(*rcx_10 + 0x48))(rcx_10, &var_78)
    int64_t rcx_11 = var_78
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x11)
    int32_t rax_7 = var_60_1 + 0x11
    var_60_1 = rax_7
    int32_t var_5c
    
    if (rax_7 s> var_5c)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"application/json", 0x22)
    var_78 = 0
    int32_t var_70_2 = 0
    sub_1405947f0(&var_78, 0xd)
    int32_t rax_8 = var_70_2 + 0xd
    var_70_2 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u"Content-Type", 0x1a)
    int64_t* rcx_18 = var_58
    (*(*rcx_18 + 0x78))(rcx_18, &var_78, &var_68)
    int64_t rcx_19 = var_78
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_68
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t* r15_1 = var_58
    var_68 = 0
    var_60_1 = 0
    
    if (arg4 != &var_68 && arg4[1].d != 0)
        int64_t* rcx_21 = *arg4
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x40))(rcx_21, &var_68)
    
    int64_t* rax_11 = sub_140596d10(&var_78, arg2)
    int64_t rdx_11 = *r15_1
    sub_141da47d0((*(rdx_11 + 0x90))(r15_1, rdx_11), arg1, sub_141dadd40, &var_68, rax_11)
    uint128_t zmm0_1 = var_58.o
    var_68.o = zmm0_1
    void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    result = sub_141da6730(arg1, 0x12, &var_68, 0, 0)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            result = (**var_50)(var_50)
            int32_t temp1_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_50 + 8))(var_50, 1)
else
    int64_t* rbx_1 = nullptr
    int64_t var_40_1 = 6
    result = -0x18
    int64_t* var_38
    __builtin_memset(&var_38, 0, 0x18)
    void** const var_48 = &data_1432388e8
    
    if (arg4[1].d != 0)
        int64_t* rcx = *arg4
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result != 0)
                if (arg4[1].d != 0)
                    rbx_1 = *arg4
                
                result = (*(*rbx_1 + 0x50))(rbx_1, &var_48)
            
            rbx_1 = var_38
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)

return result
