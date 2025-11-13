// 函数: sub_1425c4530
// 地址: 0x1425c4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)
int64_t result

if (rax == 0 || *(rax + 0x38) s> 1)
    result = sub_1425c4db0(*arg1, *arg3)
else
    sub_140cea1e0()
    
    if (sub_140cc1670(rax + 0x10, &data_143e1b870) == 0 || *(rax + 0x10) == 0)
        void* rsi_2 = *(arg2 + 0x20)
        sub_140d11d60()
        
        if (sub_140cc1670(rsi_2 + 0x10, &data_143e1c310) == 0 || *(rsi_2 + 0x10) == 0)
            int64_t* rcx_2 = *(arg2 + 0x10)
            int64_t var_18
            
            if (rcx_2 == 0)
                void* rcx_5 = *(arg2 + 0x20)
                
                if (rcx_5 == 0)
                    var_18 = 0
                    int32_t var_10_2 = 0
                    sub_1405947f0(&var_18, 5)
                    int32_t rax_4 = var_10_2 + 5
                    var_10_2 = rax_4
                    
                    if (rax_4 s> 0)
                        sub_140594770(&var_18)
                    
                    UnDecorator::getReferenceType(var_18, u"None", 0xa)
                else
                    sub_140b63b70(rcx_5 + 0x28, &var_18)
            else
                int64_t r8 = *(arg2 + 8)
                var_18 = 0
                int64_t var_10_1 = 0
                (*(*rcx_2 + 0xa0))(rcx_2, &var_18, r8, 0, 0, 0, 0)
            
            result = sub_1425c4b90(*arg1, &var_18, *arg3)
            int64_t rcx_4 = var_18
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
        else
            result = sub_1425c4db0(*arg1, *arg3)
    else
        result = sub_1425c4db0(*arg1, *arg3)

int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
