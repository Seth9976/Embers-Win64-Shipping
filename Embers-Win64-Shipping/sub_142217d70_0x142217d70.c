// 函数: sub_142217d70
// 地址: 0x142217d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_142560db0()
int64_t r8 = *arg1
int64_t result = (*(r8 + 0x610))(arg1, rax, r8)

if (result == 0)
    int64_t* rbx_1 = arg1[0x4b]
    
    if (rbx_1 != 0)
        sub_142560db0()
        jump(*(*rbx_1 + 0x610))

return result
