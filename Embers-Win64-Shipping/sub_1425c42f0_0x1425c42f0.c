// 函数: sub_1425c42f0
// 地址: 0x1425c42f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)
int64_t result

if (rax == 0 || *(rax + 0x38) s> 1)
label_1425c443e:
    int64_t* rbx_2 = *arg1
    int32_t rcx_11 = rbx_2[4].d
    int16_t arg_8
    
    if (((rcx_11 - 2) & 0xfffffff5) != 0 || rcx_11 == 0xa)
        int64_t* rcx_12 = rbx_2[1]
        arg_8 = 0x2c
        (*(*rcx_12 + 0x150))(rcx_12, &arg_8, 2)
    
    sub_1425c9240(rbx_2[1])
    int32_t i_2 = *(rbx_2 + 0x24)
    int64_t* rsi_1 = rbx_2[1]
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rax_8 = *rsi_1
            arg_8 = 9
            (*(rax_8 + 0x150))(rsi_1, &arg_8, 2)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = (*(*rbx_2 + 0x10))(rbx_2, arg3)
    rbx_2[4].d = 7
else
    sub_140cea1e0()
    
    if (sub_140cc1670(rax + 0x10, &data_143e1b870) != 0 && *(rax + 0x10) != 0)
        goto label_1425c443e
    
    void* rdi_2 = *(arg2 + 0x20)
    sub_140d11d60()
    
    if (sub_140cc1670(rdi_2 + 0x10, &data_143e1c310) != 0 && *(rdi_2 + 0x10) != 0)
        goto label_1425c443e
    
    int64_t* rcx_2 = *(arg2 + 0x10)
    int64_t var_48
    
    if (rcx_2 == 0)
        void* rcx_6 = *(arg2 + 0x20)
        
        if (rcx_6 == 0)
            var_48 = 0
            int32_t var_40_2 = 0
            sub_1405947f0(&var_48, 5)
            int32_t rax_5 = var_40_2 + 5
            var_40_2 = rax_5
            
            if (rax_5 s> 0)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, u"None", 0xa)
        else
            sub_140b63b70(rcx_6 + 0x28, &var_48)
    else
        int64_t r8 = *(arg2 + 8)
        var_48 = 0
        int64_t var_40_1 = 0
        (*(*rcx_2 + 0xa0))(rcx_2, &var_48, r8, 0, 0, 0, 0)
    
    void var_38
    result = sub_1425c4a50(*arg1, &var_48, sub_140596d10(&var_38, arg3))
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

int64_t* rbx_3 = arg1[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
