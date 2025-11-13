// 函数: sub_140b1ab30
// 地址: 0x140b1ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b17d90()

if (*(rax + 0xfe) == 0)
    void* rcx_1 = data_143ddb400
    
    if (rcx_1 != 0 && *(rcx_1 + 0x59) != 0)
        sub_140af2c50(rcx_1, Internationalization", PropertyNameLocalizationPaths", rax + 0x98, 
            &data_143de5790)
        *(rax + 0xfe) = 1
        return rax + 0x98
    
    int16_t* var_38 = nullptr
    int64_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x33)
    int32_t r15_1 = var_30_1:4.d
    int32_t rsi_1 = var_30_1.d + 0x33
    var_30_1.d = rsi_1
    
    if (rsi_1 s> r15_1)
        sub_140594770(&var_38)
        r15_1 = var_30_1:4.d
        rsi_1 = var_30_1.d
    
    int16_t* rbp_1 = var_38
    UnDecorator::getReferenceType(rbp_1, ../../../Engine/Content/Localization/PropertyNames", 0x66)
    int64_t* r12_1 = *(rax + 0x98)
    int64_t* rbx_1 = r12_1
    void* r14_3 = &r12_1[sx.q(*(rax + 0xa0)) * 2]
    
    if (r12_1 != r14_3)
        while (true)
            int16_t* const rdx_2 = &data_142d40450
            
            if (rsi_1 != 0)
                rdx_2 = rbp_1
            
            int16_t* const rcx_5
            
            if (rbx_1[1].d == 0)
                rcx_5 = &data_142d40450
            else
                rcx_5 = *rbx_1
            
            if (sub_140a54510(rcx_5, rdx_2) == 0)
                break
            
            rbx_1 = &rbx_1[2]
            
            if (rbx_1 == r14_3)
                goto label_140b1ac71
    
    if (r12_1 == r14_3 || ((rbx_1 - r12_1) s>> 4).d == 0xffffffff)
    label_140b1ac71:
        int64_t rbx_2 = sx.q(*(rax + 0xa0))
        int32_t rax_3 = (rbx_2 + 1).d
        *(rax + 0xa0) = rax_3
        
        if (rax_3 s> *(rax + 0xa4))
            sub_1405a4f90(rax + 0x98)
        
        int64_t* rax_6 = (rbx_2 << 4) + *(rax + 0x98)
        *rax_6 = rbp_1
        rax_6[1].d = rsi_1
        *(rax_6 + 0xc) = r15_1
    else if (rbp_1 != 0)
        sub_140a74f90(rbp_1)

return rax + 0x98
