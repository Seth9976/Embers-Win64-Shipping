// 函数: sub_1424022a0
// 地址: 0x1424022a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2[1].d
int64_t rbx = *arg2
uint64_t var_58 = 0
uint64_t r15 = 0

if (i != 0)
    sub_1405a4c70(&var_58, i, 0)
    r15 = var_58
    memcpy(r15, rbx, i * 2)

int64_t var_48

while (i != 0)
    int32_t rbx_1 = i - 1
    
    if (rbx_1 s<= 0)
        break
    
    int16_t* var_88 = nullptr
    int32_t rdx_2 = 0
    int16_t* rdi_1 = nullptr
    
    if (rbx_1 s> 1)
        rbx_1 = 1
    
    int32_t var_80_1 = 0
    int32_t rax_1 = 0
    int32_t var_7c_1 = 0
    int16_t* const rax_3
    int32_t rsi_2
    
    if (r15 != 0 && *r15 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_88, rbx_1 + 1)
            rax_1 = var_7c_1
            rdx_2 = var_80_1
            rdi_1 = var_88
        
        rsi_2 = rdx_2 + 1 + rbx_1
        
        if (rsi_2 s> rax_1)
            sub_140594770(&var_88)
            rdi_1 = var_88
        
        UnDecorator::getReferenceType(rdi_1, r15, rbx_1 * 2)
        rdi_1[sx.q(rsi_2) - 1] = 0
        rax_3 = rdi_1
    
    if (r15 == 0 || *r15 == 0 || rbx_1 s<= 0 || rsi_2 == 0)
        rax_3 = &data_142d40450
    
    uint32_t rbx_2 = zx.d(*rax_3)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int32_t rax_4 = i - 1
    
    if (i == 0)
        rax_4 = 0
    
    if (rax_4 s> 1)
        rax_4 = 1
    
    if (rax_4 != 0)
        int32_t i_1 = i
        i -= rax_4
        
        if (i_1 != rax_4)
            memmove(r15, r15 + (sx.q(rax_4) << 1), i * 2)
    
    if (rbx_2 - 0x20 u<= 0xdf)
        int32_t rax_7 = arg1[0x10].d
        int16_t arg_10 = rbx_2.w
        int16_t arg_12 = 0
        int32_t rcx_8 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_8 = 0
        
        int32_t rdx_6 = rax_7 - 1
        
        if (rax_7 == 0)
            rdx_6 = -1
        
        int32_t rcx_9 = rcx_8 - arg1[0x11].d
        int16_t* const r8_7
        
        if (rax_7 != 0)
            r8_7 = arg1[0xf]
        else
            rdx_6 = 0
            r8_7 = &data_142d40450
        
        int32_t rax_8
        
        if (rcx_9 s>= 0)
            rax_8 = rdx_6
            
            if (rcx_9 s< rdx_6)
                rax_8 = rcx_9
        else
            rax_8 = 0
        
        int16_t* r13_1 = nullptr
        int32_t rdx_7 = 0
        int16_t* var_78 = nullptr
        int32_t rax_10 = 0
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        void* rdi_2 = &r8_7[sx.q(rdx_6) - sx.q(rax_8)]
        int32_t rsi_3
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (*(rdi_2 + (rbx_3 << 1)) != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_78, rbx_3.d + 1)
                rax_10 = var_6c_1
                rdx_7 = var_70_1
                r13_1 = var_78
            
            rsi_3 = rdx_7 + rbx_3.d + 1
            
            if (rsi_3 s> rax_10)
                sub_140594770(&var_78)
                r13_1 = var_78
            
            UnDecorator::getReferenceType(r13_1, rdi_2, (rbx_3.d + 1) * 2)
        
        int16_t* const arg_18
        
        if (rdi_2 == 0 || *rdi_2 == 0 || rsi_3 == 0)
            arg_18 = &data_142d40450
        else
            arg_18 = r13_1
        
        int32_t rax_11 = arg1[0x10].d
        int32_t rcx_15 = arg1[0x11].d
        int16_t* r15_1
        
        if (rax_11 == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = arg1[0xf]
        
        int32_t rbx_5 = rax_11 - 1
        int32_t rax_12 = 0
        
        if (rax_11 == 0)
            rbx_5 = 0
        
        if (rcx_15 s< 0)
            rbx_5 = 0
        else if (rcx_15 s< rbx_5)
            rbx_5 = rcx_15
        
        int16_t* var_68 = nullptr
        int16_t* rdi_3 = nullptr
        int64_t var_60_1 = 0
        int32_t rdx_10 = 0
        int32_t rsi_5
        int16_t* const r8_12
        
        if (r15_1 != 0 && *r15_1 != 0 && rbx_5 s> 0)
            if (rbx_5 + 1 s> 0)
                sub_1405947f0(&var_68, rbx_5 + 1)
                rax_12 = var_60_1:4.d
                rdx_10 = var_60_1.d
                rdi_3 = var_68
            
            rsi_5 = rdx_10 + 1 + rbx_5
            var_60_1.d = rsi_5
            
            if (rsi_5 s> rax_12)
                sub_140594770(&var_68)
                rsi_5 = var_60_1.d
                rdi_3 = var_68
            
            UnDecorator::getReferenceType(rdi_3, r15_1, rbx_5 * 2)
            r8_12 = rdi_3
            rdi_3[sx.q(rsi_5) - 1] = 0
        
        if (r15_1 == 0 || *r15_1 == 0 || rbx_5 s<= 0 || rsi_5 == 0)
            r8_12 = &data_142d40450
        
        int16_t* const var_98_1 = arg_18
        sub_140a2e390(&var_48, u"%s%s%s", r8_12)
        (*(*arg1 + 0x260))(arg1, &var_48)
        int64_t rcx_22 = var_48
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        (*(*arg1 + 0x268))(arg1, zx.q(arg1[0x11].d + 1))
        r15 = var_58

(*(*arg1 + 0x2c0))(arg1)
int64_t* result

if (arg1[0x22].d s<= 0)
    result = &var_48
    
    if (&arg1[0x12] != &var_48)
        int64_t rcx_28 = arg1[0x12]
        
        if (rcx_28 != 0)
            result = sub_140a74f90(rcx_28)
        
        arg1[0x12] = 0
        arg1[0x13] = 0
else
    int32_t rax_18 = arg1[0x1a].d
    
    if (rax_18 s< 0)
        rax_18 = 0
    
    result = sub_140597df0(&arg1[0x12], arg1[0x21] + sx.q(rax_18 + *(arg1 + 0xcc)) * 0x28)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
