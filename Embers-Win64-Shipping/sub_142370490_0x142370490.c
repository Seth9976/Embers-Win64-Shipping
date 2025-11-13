// 函数: sub_142370490
// 地址: 0x142370490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char rax = sub_141dc97b0(arg4, *(arg1 + 0x48), &arg_8)
int32_t r8_1 = arg_8

if (rax != 0)
    r8_1 += 1
    arg_8 = r8_1

uint64_t result = zx.q(*(arg1 + 0x30))

if (r8_1 s< 0 || r8_1 s>= result.d)
    r8_1 = 0
    arg_8 = 0
    
    if (0 s< result.d)
        goto label_1423704ed
else
label_1423704ed:
    result = *(arg1 + 0x28)
    int64_t* rdi_1 = *(result + (sx.q(r8_1) << 3))
    
    if (rdi_1 != 0)
        return (*(*rdi_1 + 0x298))(rdi_1, arg2, sub_142365fb0(arg3, rdi_1, r8_1), arg4, arg5, arg6)

return result
