// 函数: sub_142c64e90
// 地址: 0x142c64e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_3 = ((sx.q(arg2) + 0x14) << 5) + arg1
int64_t rcx = *rbx_3

if (rcx == 0)
    return 0

int64_t rax_1 = rbx_3[3]
int64_t rdi = rbx_3[2]
int64_t result

if (rdi u<= rax_1)
    result = 0
else
    result = rdi - rax_1
    
    if (arg4 u< result)
        result = arg4
    
    memcpy(arg3, rax_1 + rcx, result.d)
    rbx_3[3] += result

if (rbx_3[3] == rbx_3[2])
    data_143ccb8a0(*rbx_3)
    __builtin_memset(rbx_3, 0, 0x20)

return result
