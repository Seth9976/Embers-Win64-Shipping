// 函数: sub_1409407e0
// 地址: 0x1409407e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1

if (sub_140b0f6c0(&arg_18, u"DUMP") == 0)
    return 0

int64_t* var_78
(*(*arg1 + 0xd0))(arg1, &var_78)
void*** result

if (var_78 != 0)
    void*** result_1 = nullptr
    void*** result_2 = sub_140a84c80(0, 0x20, 0)
    result_1 = result_2
    int32_t var_90_1 = 2
    
    if (result_2 != 0)
        result_2[1] = arg1
        *result_2 = &data_142e22d28
        result_2[3] = sub_140a387b0()
        *result_2 = &data_142e22d80
    
    int64_t rax_3 = *arg1
    void*** i_2 = nullptr
    int32_t i_4 = 0
    int64_t* var_68
    (*(rax_3 + 0x28))(arg1, &var_68)
    
    if (var_68 != 0)
        int64_t var_a8 = 0
        int32_t var_a0_1 = 0
        sub_1405947f0(&var_a8, 8)
        int32_t rax_4 = var_a0_1 + 8
        var_a0_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"default", 0x10)
        int64_t* rcx_6 = var_68
        (*(*rcx_6 + 0x1c8))(rcx_6, 0, &var_a8, &i_2)
        int64_t rcx_7 = var_a8
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    for (void*** i = i_2; i != &i[sx.q(i_4) * 2]; i = &i[2])
        void** rcx_8 = *i
        int64_t* rbx_2 = var_78
        void var_48
        int64_t* rax_7 = (*(*rcx_8 + 8))(rcx_8, &var_48)
        int64_t r9_2 = *rbx_2
        (*(r9_2 + 0x10))(rbx_2, *rax_7, &result_1, r9_2)
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp6_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    
    int64_t* var_58
    void var_38
    sub_14093fbe0(&var_58, (*(*arg1 + 0x80))(arg1, &var_38))
    int64_t* rdx_7 = var_58
    
    if (rdx_7 != 0)
        int64_t* rcx_14 = var_78
        (*(*rcx_14 + 0x10))(rcx_14, rdx_7, &result_1)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp5_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rax_17 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_60 + 8))(var_60, 1)
    
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        void* rdi_1 = &i_2[1]
        int32_t i_1
        
        do
            int64_t* rbx_6 = *rdi_1
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp10_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
            
            rdi_1 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void*** i_5 = i_2
    
    if (i_5 != 0)
        sub_140a74f90(i_5)
    
    if (var_90_1 == 0)
        result = result_1
    label_140940acc:
        
        if (result != 0)
            sub_140a74f90(result)
    else
        void*** result_3 = result_1
        
        if (result_3 != 0)
            (*result_3)[7](result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_90_2 = 0
            goto label_140940acc

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t r15_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (r15_1 == 1)
            int64_t r8_4 = *var_70
            (*(r8_4 + 8))(var_70, zx.q(r15_1), r8_4)

result.b = 1
return result
