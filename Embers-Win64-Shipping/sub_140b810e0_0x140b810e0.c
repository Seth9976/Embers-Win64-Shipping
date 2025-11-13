// 函数: sub_140b810e0
// 地址: 0x140b810e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2
sub_140926e00(arg1 + 8, &result_2, arg2)
int64_t result = sx.q(result_2)
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t r8_1 = result * 5
    result = *(arg1 + 8)
    rcx_1 = result + (r8_1 << 3)

int64_t* rbx = rcx_1 + 0x10

if (rcx_1 == 0)
    rbx = nullptr

if (rbx != 0)
    result = *rbx
    int64_t* rbx_1 = rbx[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (result != 0 && *(result + 0x127) != 0)
        int64_t result_1 = result
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = sub_140b81310(arg1, &result_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
