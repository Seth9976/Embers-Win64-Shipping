// 函数: sub_140968ca0
// 地址: 0x140968ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4
int64_t* rcx = *arg2
int64_t rsi = arg3

if (rcx != 0 && (*(*rcx + 0x90))(rcx) != 0)
    void* rcx_1 = arg1[0x21]
    char var_30
    int64_t* var_28
    
    if (rcx_1 != 0)
        var_28 = arg2
        var_30 = 1
        int64_t var_18
        sub_141ccee50(rcx_1, &var_18, rsi, rbx, arg5, 1, var_28)
        char var_c
        
        if (var_c != 0)
            rbx = 0
        else
            rsi = var_18
            int32_t var_10
            rbx = var_10
    
    int32_t arg_10 = 0
    
    if (rbx s> 0)
        int64_t* rax_4 = (*(*arg1 + 0x438))(arg1)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx + 7)
        (*(*rax_4 + 0x50))(rax_4, rsi, zx.q(((temp2_1 & 7) + temp3_1) s>> 3), &arg_10, *arg2, 
            var_30, var_28)

int64_t* rbx_1 = arg2[1]

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
