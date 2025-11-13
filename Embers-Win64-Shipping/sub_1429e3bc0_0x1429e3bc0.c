// 函数: sub_1429e3bc0
// 地址: 0x1429e3bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2) << 7
int16_t* rdi = *(result + arg1)
int32_t rbx_1

if (*(arg1 + 0x258) == 0)
    uint32_t rcx_1 = zx.d(arg3)
    
    if (arg3 == 0)
        rbx_1 = arg6
        sub_142a24b90(rdi, arg4, zx.q(arg5), rbx_1)
    else if (rcx_1 == 1)
        rbx_1 = arg6
        sub_142a24ba0(rdi, arg4, zx.q(arg5), zx.q(rbx_1))
    else if (rcx_1 == 2)
        rbx_1 = arg6
        sub_142a24b40(rdi, arg4, arg5, rbx_1)
    else
        if (rcx_1 != 3)
            return result
        
        rbx_1 = arg6
        sub_142a24b60(rdi, arg4, zx.q(arg5), zx.q(rbx_1))
else
    rbx_1 = arg6
    int32_t zmm4[0x4]
    int32_t zmm5[0x4]
    sub_142a24c90(rdi, arg4, zx.q(arg5), rbx_1, zmm4, zmm5)

if (rbx_1 == 1)
    *rdi = 0
    return 0

uint64_t count

if (arg3 u<= 2 && rbx_1 s<= 0xa)
    count = sx.q(4 << arg3 << 2) * 2
else if (arg3 != 3 || rbx_1 s> 0x22)
    count = sx.q(0x10 << (arg3 * 2)) * 2
else
    count = 0x200

return memset(rdi, 0, count)
