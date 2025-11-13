// 函数: sub_14097da30
// 地址: 0x14097da30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t result = sub_140954cd0(arg1 + 8, &var_18, arg3)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
