// 函数: sub_1426ac970
// 地址: 0x1426ac970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
int64_t* result = arg2
*arg2 = 0
arg2[1] = 0
sub_1405947f0(result, 5)
int32_t rax = result[1].d + 5
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_140594770(result)

UnDecorator::getReferenceType(*result, u"None", 0xa)
int64_t var_48

if (*(arg1 + 0x118) != 0)
    int64_t rcx_3 = sx.q(*(arg1 + 0x118)) * 0x58
    int64_t rax_2 = *(arg1 + 0x110)
    
    if (*(rcx_3 + rax_2 - 0x17) == 1)
        int64_t* rax_3 = sub_1426ada60(&var_48, *(rcx_3 + rax_2 - 0x50))
        
        if (result != rax_3)
            int64_t rcx_5 = *result
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            *result = *rax_3
            *rax_3 = 0
            result[1].d = rax_3[1].d
            *(result + 0xc) = *(rax_3 + 0xc)
            rax_3[1] = 0
        
        int64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)

int32_t i = 0
int16_t* var_38 = nullptr
int32_t var_30 = 0

if (*(arg1 + 0x118) s> 0)
    do
        int64_t rsi_1 = *(arg1 + 0x110)
        int32_t j = 0
        
        if (*(rsi_1 + r12 + 0x28) s> 0)
            int64_t* rbx_2 = nullptr
            
            do
                int64_t rax_6 = *(rsi_1 + r12 + 0x20)
                
                if (*(rbx_2 + rax_6 + 8) == 0)
                    int64_t* rax_7 = sub_1426ada60(&var_48, *(rbx_2 + rax_6))
                    int32_t rcx_9 = rax_7[1].d
                    int32_t r8_1 = rcx_9 - 1
                    
                    if (rcx_9 == 0)
                        r8_1 = 0
                    
                    sub_140a20ba0(&var_38, *rax_7, r8_1)
                    int64_t rcx_11 = var_48
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    sub_140a20ba0(&var_38, &data_142d8adc4, 2)
                
                j += 1
                rbx_2 = &rbx_2[2]
            while (j s< *(rsi_1 + r12 + 0x28))
        
        i += 1
        r12 += 0x58
    while (i s< *(arg1 + 0x118))
    
    result = arg2
    
    if (var_30 != 0 && var_30 - 1 s> 0)
        sub_140a20ba0(result, &data_142e62d08, 2)
        int32_t rbx_4
        int16_t* r15
        
        if (var_30 == 0)
            r15 = &data_142d40450
            rbx_4 = 0
        else
            r15 = var_38
            rbx_4 = var_30 - 1
        
        if (rbx_4 - 2 s< 0)
            rbx_4 = 0
        else if (rbx_4 - 2 s< rbx_4)
            rbx_4 -= 2
        
        var_48 = 0
        int32_t rdx_4 = 0
        int32_t var_40_1 = 0
        int32_t rax_11 = 0
        int32_t var_3c_1 = 0
        int64_t rdi_1 = 0
        int32_t rsi_3
        int32_t r8_4
        
        if (r15 != 0 && *r15 != 0 && rbx_4 s> 0)
            if (rbx_4 + 1 s> 0)
                sub_1405947f0(&var_48, rbx_4 + 1)
                rax_11 = var_3c_1
                rdx_4 = var_40_1
                rdi_1 = var_48
            
            rsi_3 = rdx_4 + 1 + rbx_4
            
            if (rsi_3 s> rax_11)
                sub_140594770(&var_48)
                rdi_1 = var_48
            
            UnDecorator::getReferenceType(rdi_1, r15, rbx_4 * 2)
            r8_4 = rsi_3 - 1
            *(rdi_1 + (sx.q(rsi_3) << 1) - 2) = 0
        
        if (r15 == 0 || *r15 == 0 || rbx_4 s<= 0 || rsi_3 == 0)
            r8_4 = 0
        
        sub_140a20ba0(result, rdi_1, r8_4)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        int32_t rdx_8 = result[1].d
        int32_t rax_13
        rax_13.b = rdx_8 s<= 0
        int32_t rbx_5 = rdx_8 - 1
        
        if (rdx_8 s<= 0)
            rbx_5 = 0
        
        int32_t rax_15 = rax_13 + 1 + rdx_8
        result[1].d = rax_15
        
        if (rax_15 s> *(result + 0xc))
            sub_140594770(result)
        
        int64_t rcx_21 = sx.q(rbx_5)
        *(*result + (rcx_21 << 1)) = 0x29
        *(*result + (rcx_21 << 1) + 2) = 0
    
    int16_t* rcx_22 = var_38
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

return result
