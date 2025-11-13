// 函数: sub_141bb2b60
// 地址: 0x141bb2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rax_1 = (*(*arg1 + 0x48))()
int64_t* rbx

if (rax_1 == 0)
    rbx = nullptr
else
    int64_t* var_28
    (*(*(rax_1 + 0x4f8) + 0xd0))(rax_1 + 0x4f8, &var_28, &arg_10)
    int64_t* rsi_1 = var_28
    
    if (rsi_1 != 0)
        rsi_1 = &rsi_1[-0x75]
    
    int64_t* var_20
    rbx = var_20
    
    if (rbx != 0)
        rbx[1].d += 1
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp3_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
    
    if (rsi_1 != 0)
        (*(*rsi_1 + 0x240))(rsi_1, zx.q(arg3))

(*(*arg1 + 0xb0))(arg1, arg_10, zx.q(arg3))
int64_t result = sub_141b938e0((*(*arg1 + 0x30))(arg1), arg_10, arg3)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
