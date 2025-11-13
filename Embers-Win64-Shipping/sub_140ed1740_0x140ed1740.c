// 函数: sub_140ed1740
// 地址: 0x140ed1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
(**arg3)(arg3, &var_38, arg1, arg2, arg4)
void* rcx_1 = var_38
int64_t* var_30
void** result
int64_t* rbx_2
int64_t var_48
int64_t* var_28
int64_t* var_20

if (rcx_1 == 0)
    var_48 = arg2
    int32_t var_40_1 = 0xffffffff
    int32_t r9_1 = sub_140eba380(arg1, &var_28, &var_48)
    int64_t* rcx_7 = var_28
    
    if (rcx_7 == 0)
        var_48 = arg2
        int32_t var_40_2 = 0xffffffff
        void var_18
        result = sub_140ec1650(arg1, &var_18, &var_48, r9_1)
        
        if (&var_38 != result)
            var_38 = *result
            *result = nullptr
            int64_t* rcx_10 = result[1]
            int64_t* rbx_3 = var_30
            
            if (rcx_10 != rbx_3)
                result[1] = 0
                var_30 = rcx_10
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        result = (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                result = (**var_10)(var_10)
                int32_t temp4_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*var_10 + 8))(var_10, 1)
        
        void* rcx_15 = var_38
        
        if (rcx_15 != 0)
            result = sub_140ed1540(*sub_140ebf3d0(*sub_140f02160(rcx_15, &var_48), &var_18), arg4, 
                0xffffffff)
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    result = (**var_10)(var_10)
                    int32_t temp12_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        result = (*(*var_10 + 8))(var_10, 1)
            
            int64_t* rbx_6 = var_40_2.q
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    result = (**rbx_6)(rbx_6)
                    int32_t temp13_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        result = (*(*rbx_6 + 8))(rbx_6, 1)
    else
        result = sub_140ed1540(rcx_7, arg4, 0xffffffff)
    
    rbx_2 = var_20
else
    result =
        sub_140ed1540(*sub_140ebf3d0(*sub_140f02160(rcx_1, &var_48), &var_28), arg4, 0xffffffff)
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)
    
    int32_t var_40
    rbx_2 = var_40.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp10_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp10_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
