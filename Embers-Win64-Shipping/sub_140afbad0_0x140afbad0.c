// 函数: sub_140afbad0
// 地址: 0x140afbad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
uint64_t result = zx.q(rax - 1)
int64_t rbx = sx.q(result.d)

if (rax - 1 s>= 0)
    int64_t temp1_1
    
    do
        result = *(arg1 + 8)
        int64_t* rcx = *(result + (rbx << 3))
        
        if (rcx != 0)
            result = (*(*rcx + 0x30))(rcx, arg2, zx.q(arg3))
        
        temp1_1 = rbx
        rbx -= 1
    while (temp1_1 - 1 s>= 0)

return result
