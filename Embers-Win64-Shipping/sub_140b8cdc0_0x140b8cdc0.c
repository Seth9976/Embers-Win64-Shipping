// 函数: sub_140b8cdc0
// 地址: 0x140b8cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg3 == 0)
    int32_t rdx = 0
    int32_t r8 = 0
    int16_t* var_18 = nullptr
    int64_t var_10_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rbx_1.d + 1)
            r8 = var_10_1:4.d
            rdx = var_10_1.d
        
        int32_t rax = rbx_1.d + 1 + rdx
        var_10_1.d = rax
        
        if (rax s> r8)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)
    
    if (sub_140a2c910(&var_18, u"*.pak", 1).b != 0)
        int64_t* rdi_1 = *(arg1 + 8)
        int64_t* rbx_3 = *rdi_1
        void* rsi_3 = &rbx_3[sx.q(rdi_1[1].d) * 2]
        
        if (rbx_3 != rsi_3)
            do
                int16_t* const rdx_3 = &data_142d40450
                
                if (var_10_1.d != 0)
                    rdx_3 = var_18
                
                int16_t* const rcx_4
                
                if (rbx_3[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rbx_3
                
                if (sub_140a54510(rcx_4, rdx_3) == 0)
                    goto label_140b8cf2a
                
                rbx_3 = &rbx_3[2]
            while (rbx_3 != rsi_3)
            
            rdi_1 = *(arg1 + 8)
        
        int64_t rbx_4 = sx.q(rdi_1[1].d)
        result = (rbx_4 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            sub_1405a4f90(rdi_1)
        
        int64_t* rbx_6 = (rbx_4 << 4) + *rdi_1
        *rbx_6 = 0
        int32_t rdi_2 = var_10_1.d
        int16_t* rsi_4 = var_18
        rbx_6[1].d = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(rbx_6, rdi_2, 0)
            memcpy(*rbx_6, rsi_4, rdi_2 * 2)
        else
            *(rbx_6 + 0xc) = rdi_2
    
label_140b8cf2a:
    int16_t* rcx_8 = var_18
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

result.b = 1
return result
