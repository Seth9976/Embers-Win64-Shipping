// 函数: sub_142278ea0
// 地址: 0x142278ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142436920((*(*arg1 + 0x150))())
void* const rbx_1 = arg1[0x53]
int64_t result_2 = result

if (rbx_1 == 0)
    rbx_1 = nullptr
else
    void* rax_2 = sub_142531230()
    void* rdx = *(rbx_1 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        rbx_1 = nullptr
    else
        int64_t result_1 = result
        result = *(rdx + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_2 + 0x30)
            rbx_1 = nullptr

if (result_2 != 0 && rbx_1 != 0)
    return (*(*arg2 + 8))(arg2, rbx_1 + 0x1a0, result_2)

return result
