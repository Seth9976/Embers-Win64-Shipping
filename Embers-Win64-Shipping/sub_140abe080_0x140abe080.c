// 函数: sub_140abe080
// 地址: 0x140abe080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
EnterCriticalSection(&arg1[0xa])
int64_t var_38 = *arg3
int64_t* rax_1 = arg3[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int64_t* var_28 = &arg_10
int64_t* var_20 = &var_38
void arg_8
int32_t result = sub_140a92260(arg1, &arg_8, &var_28, nullptr)

if (rax_1 != 0)
    result = rax_1[1].d
    rax_1[1].d -= 1
    
    if (result == 1)
        (**rax_1)(rax_1)
        result = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rax_1 + 8))(rax_1, 1)

if (arg1 != -0x50)
    result = LeaveCriticalSection(&arg1[0xa])

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result
