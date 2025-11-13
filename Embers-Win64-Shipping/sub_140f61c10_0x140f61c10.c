// 函数: sub_140f61c10
// 地址: 0x140f61c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t arg_8 = 0

if (*(arg1 + 0x62c) == 0)
    *(arg1 + 0x62c) = 1
    int64_t* rax
    int32_t zmm0_1
    rax, zmm0_1 = sub_140ac6680(arg2)
    uint64_t var_a8 = 0
    int32_t rbx_1 = rax[1].d
    int64_t rdi_1 = *rax
    int32_t r14_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_a8, rbx_1, 0)
        zmm0_1 = memcpy(var_a8, rdi_1, rbx_1 * 2)
        r14_1 = rbx_1 - 1
    
    if (rbx_1 == 0 || rbx_1 == 0)
        r14_1 = 0
    
    uint64_t rsi_1 = var_a8
    int32_t rdi_2 = 0
    
    while (true)
        int32_t rax_1 = rbx_1 - 1
        
        if (rbx_1 == 0)
            rax_1 = 0
        
        if (rdi_2 s>= rax_1)
            break
        
        int64_t* rcx_3 = *(arg1 + 0x408)
        
        if ((*(*rcx_3 + 0x38))(rcx_3, zx.q(*rsi_1)) == 0)
            r14_1 = rdi_2
            break
        
        rdi_2 += 1
        rsi_1 += 2
    
    result = rbx_1 - 1
    
    if (rbx_1 == 0)
        result = 0
    
    if (r14_1 s< result)
        int64_t var_b8
        int64_t var_88
        int64_t* rcx_11
        int32_t rbx_3
        
        if (r14_1 s<= 0)
            int64_t* rdi_4 = *(arg1 + 0x408)
            
            if (*(arg1 + 0x3a0) != 0)
                int64_t* rcx_8 = *(arg1 + 0x398)
                
                if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
                    int64_t* rcx_9
                    
                    if (*(arg1 + 0x3a0) == 0)
                        rcx_9 = nullptr
                    else
                        rcx_9 = *(arg1 + 0x398)
                    
                    (*(*rcx_9 + 0x48))(rcx_9)
                    *(arg1 + 0x390) = zmm0_1
            
            (*(*rdi_4 + 0x28))(rdi_4, &var_88, arg1 + 0x390)
            rcx_11 = &var_88
            rbx_3 = 2
        else
            int32_t rbx_2
            uint64_t rdi_3
            
            if (rbx_1 == 0)
                rdi_3 = &data_142d40450
                rbx_2 = 0
            else
                rdi_3 = var_a8
                rbx_2 = rbx_1 - 1
            
            var_b8 = 0
            int32_t rdx_3 = 0
            int32_t rcx_4 = 0
            
            if (r14_1 s< rbx_2)
                rbx_2 = r14_1
            
            int32_t var_b0_1 = 0
            int32_t var_ac_1 = 0
            int64_t r14_2 = 0
            
            if (rdi_3 != 0 && *rdi_3 != 0 && rbx_2 s> 0)
                if (rbx_2 + 1 s> 0)
                    sub_1405947f0(&var_b8, rbx_2 + 1)
                    rcx_4 = var_ac_1
                    rdx_3 = var_b0_1
                    r14_2 = var_b8
                
                int32_t rsi_3 = rbx_2 + 1 + rdx_3
                
                if (rsi_3 s> rcx_4)
                    sub_140594770(&var_b8)
                    r14_2 = var_b8
                
                UnDecorator::getReferenceType(r14_2, rdi_3, rbx_2 * 2)
                *(r14_2 + (sx.q(rsi_3) << 1) - 2) = 0
            
            rcx_11 = &var_b8
            rbx_3 = 1
        
        int64_t rax_10 = *rcx_11
        *rcx_11 = 0
        int64_t var_98 = rax_10
        int32_t var_90_1 = rcx_11[1].d
        int32_t var_8c_1 = *(rcx_11 + 0xc)
        rcx_11[1] = 0
        
        if ((rbx_3.b & 2) != 0)
            int64_t rcx_12 = var_88
            rbx_3 &= 0xfffffffd
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        if ((rbx_3.b & 1) != 0)
            int64_t rcx_13 = var_b8
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
        
        void var_48
        int64_t* rax_13 = sub_140aae420(&var_48, &var_98)
        int64_t var_78 = *rax_13
        int64_t* rcx_16 = rax_13[1]
        
        if (rcx_16 != 0)
            rcx_16[1].d += 1
        
        void* rcx_17 = *(arg1 + 0x3f8)
        int32_t var_68_1 = rax_13[2].d
        char var_60_1 = 1
        int64_t var_58 = 0
        int32_t var_50_1 = 0
        sub_140f17c00(rcx_17, &var_78)
        result = sub_140745b20(&var_58)
        
        if (rcx_16 != 0)
            result = rcx_16[1].d
            rcx_16[1].d -= 1
            
            if (result == 1)
                (**rcx_16)(rcx_16)
                result = *(rcx_16 + 0xc)
                *(rcx_16 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rcx_16 + 8))(rcx_16, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            result = var_40[1].d
            var_40[1].d -= 1
            
            if (result == 1)
                result = (**var_40)(var_40)
                int32_t rdi_5 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rdi_5 == 1)
                    result = (*(*var_40 + 8))(var_40, zx.q(rdi_5))
        
        int64_t rcx_23 = var_98
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
    
    uint64_t rcx_24 = var_a8
    
    if (rcx_24 != 0)
        result = sub_140a74f90(rcx_24)
    
    *(arg1 + 0x62c) = 0

return result
