// 函数: sub_140e55dd0
// 地址: 0x140e55dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2 + 0x1d0
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = result[1]
    
    if (rbx_1 != 0)
        result[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg2 + 0x270) != 0)
    int64_t* rbx_2 = *(arg2 + 0x278)
    
    if (rbx_2 != 0)
        result = zx.q(rbx_2[1].d)
        
        if (result.d s> 0)
            int64_t rcx_2 = 0
            
            if (rbx_2 != 0)
                if (result.d != 0)
                    rbx_2[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 != 0)
                    rcx_2 = *(arg2 + 0x270)
            
            sub_140e21770(rcx_2)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            result = &var_18
            
            if (arg2 + 0x270 != &var_18)
                *(arg2 + 0x270) = 0
                int64_t* rcx_5 = *(arg2 + 0x278)
                *(arg2 + 0x278) = 0
                
                if (rcx_5 != 0)
                    int32_t temp4_1 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        return (*(*rcx_5 + 8))(rcx_5, 1)

return result
