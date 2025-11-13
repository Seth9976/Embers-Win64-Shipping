// 函数: sub_141998730
// 地址: 0x141998730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = sub_14199b0f0(arg1, &var_18, arg2)
int64_t* rbx = var_18

if (rbx != 0)
    rbx[9].d += 1
    int64_t* result_1 = *arg3 + 0x18
    int64_t rsi_1 = sx.q(result_1[5].d)
    int32_t rax = (rsi_1 + 1).d
    result_1[5].d = rax
    
    if (rax s> *(result_1 + 0x2c))
        sub_14083a490(result_1, rsi_1.d)
    
    result = result_1[4]
    
    if (result != 0)
        result_1 = result
    
    void* rcx_1 = &result_1[rsi_1]
    
    if (rcx_1 != 0)
        *rcx_1 = rbx
        
        if (rbx != 0)
            rbx[9].d += 1
    
    if (rbx != 0)
        result = zx.q(rbx[9].d)
        rbx[9].d -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(rbx)
    
    int64_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        rcx_3[9].d -= 1
        
        if (rcx_3[9].d == 1)
            return sub_140a2f6e0(rcx_3)

return result
