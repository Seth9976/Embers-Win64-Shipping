// 函数: sub_140a0f240
// 地址: 0x140a0f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int64_t* rcx = data_143f0f180
int32_t rbx = 0
int32_t var_38 = 0
int64_t result = (*(*rcx + 0x510))(rcx, arg2, arg5, 0, 1, &var_38, 0, 1, var_38)

if (result == 0)
    return result

int64_t r10_1 = *arg1
int32_t r9 = var_38
int32_t rcx_1 = *((rdi << 2) + 0x50 + r10_1)

if (r9 == rcx_1)
    memcpy(result, *(r10_1 + (rdi << 3) + 0x30), rcx_1 * arg6)
else if (arg6 s> 0)
    while (true)
        int64_t rcx_4 = *arg1
        uint32_t count = *((rdi << 2) + 0x50 + rcx_4)
        memcpy(zx.q(rbx * r9) + result, sx.q(count * rbx) + *((rdi << 3) + 0x30 + rcx_4), count)
        rbx += 1
        
        if (rbx s>= arg6)
            break
        
        r9 = var_38

int64_t* rcx_8 = data_143f0f180
int32_t* var_50
var_50.b = 1
return (*(*rcx_8 + 0x518))(rcx_8, arg2, arg3, 0, 0, var_50)
