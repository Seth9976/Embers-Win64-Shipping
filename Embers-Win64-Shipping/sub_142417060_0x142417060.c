// 函数: sub_142417060
// 地址: 0x142417060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg5
int64_t rbp = sx.q(arg3)
int64_t result

if (r10 == 0)
    sub_14240da20(arg1 + 0x260, &arg5, arg2)
    int64_t rax_1 = sx.q(arg5.d)
    
    if (rax_1.d == 0xffffffff)
        result = 0
    else
        result = rax_1 * 0xf0 + *(arg1 + 0x260)
    
    r10 = result + 0x18
    
    if (result == 0)
        r10 = 0
    
    if (r10 == 0 || *((rbp << 4) + r10 + 0x28) s<= 0)
        goto label_14241715a
    
    goto label_1424170ea

if (*((rbp << 4) + r10 + 0x28) s<= 0)
label_14241715a:
    int64_t* rbx_2 = arg2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 0
else
label_1424170ea:
    result = ((rbp + 2) << 4) + r10
    
    if (arg4 != result)
        int64_t rsi_2 = sx.q(*(result + 8))
        int64_t rbp_1 = *result
        int32_t r8_1 = *(arg4 + 0xc)
        arg4[1].d = rsi_2.d
        
        if (rsi_2.d != 0 || r8_1 != 0)
            sub_1405c4a90(arg4, rsi_2.d, r8_1)
            memcpy(*arg4, rbp_1, (rsi_2 << 2).d)
        else
            *(arg4 + 0xc) = 0
    
    int64_t* rbx_1 = arg2[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result.b = 1

return result
