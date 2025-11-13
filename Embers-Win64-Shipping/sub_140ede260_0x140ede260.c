// 函数: sub_140ede260
// 地址: 0x140ede260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* result = sub_140f03670(*arg2, &var_28)
int64_t* rdi = result[1]
int64_t rsi = *result

if (rdi != 0)
    rdi[1].d += 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t* rbx_1 = *(arg1 + 0x10)
int64_t rcx_3 = 0

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    
    if (result.d != 0)
        rbx_1[1].d = result.d + 1
        result.b = 1
    
    if (result.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_3 = *(arg1 + 8)

if (rsi == 0 || rsi != rcx_3)
    rsi.b = 0
else
    rsi.b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rsi.b != 0)
    result = sub_140e90ee0(arg1 + 0x150, arg2)
    
    if (result.d != 0xffffffff)
        int64_t rcx_7 = sx.q(result.d)
        result = *(arg1 + 0x150)
        int64_t* rbx_2 = result[rcx_7 * 4 + 3]
        
        if (rbx_2 != 0)
            result = zx.q(rbx_2[1].d)
            
            if (result.d != 0)
                rbx_2[1].d = result.d + 1
                result.b = 1
            
            if (result.b == 0)
                rbx_2 = nullptr
        
        int64_t* rsi_1 = rdi
        
        if (rbx_2 != rdi)
            rdi = rbx_2
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    result = (**rsi_1)(rsi_1)
                    int32_t temp9_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
        else if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp8_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
