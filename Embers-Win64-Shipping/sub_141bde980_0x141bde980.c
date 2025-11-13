// 函数: sub_141bde980
// 地址: 0x141bde980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
int128_t var_28 = zx.o(0)

if (arg2 != 0)
    void var_18
    result = sub_141bab3c0(result, &var_18)
    
    if (&var_28 != result)
        var_28.q = *result
        *result = 0
        int64_t rcx_2 = result[1]
        int64_t* rbx_1 = var_28:8.q
        
        if (rcx_2 != rbx_1)
            result[1] = 0
            var_28:8.q = rcx_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            result = (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_10 + 8))(var_10, 1)

int64_t* rcx_7 = *(arg1 + 0x870)

if (rcx_7 != 0)
    result = sub_140f5cc10(rcx_7, &var_28, arg3, arg4, arg5, arg6, arg7)

int64_t* rbx_3 = var_28:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
