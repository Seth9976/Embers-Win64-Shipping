// 函数: sub_140ed2e40
// 地址: 0x140ed2e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result
void arg_18

if (arg3 == 0)
    result = sub_140a87520(arg1 + 0x1a8, arg2)
else
    result = sub_140e903b0(arg1 + 0x1a8, &arg_18, arg2, nullptr)
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
