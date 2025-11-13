// 函数: sub_142a809a0
// 地址: 0x142a809a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int32_t rsi = arg2 + 1
int64_t* r10 = arg1
void* rcx_1 = &arg1[0x3f + sx.q(*(arg1 + 0x1f4)) * 2]
void* var_28 = rcx_1
int64_t r11 = *(*r10 + 0x70)
int64_t var_20 = r11
int32_t* rbx = r10[0x3d] + sx.q(rsi) * 0x18
uint32_t result = zx.d(*(rcx_1 + 6))

while (rsi s< result)
    if (rbx[1] s< 0)
        if (arg3 s< rbx[2])
            break
        
        int64_t r8 = sx.q(*rbx)
        
        if (arg3 s< r8.d)
            result = zx.d(arg4)
            
            if (result == rbx[4])
                break
            
            *(r8 + r11) = arg4
            int32_t rdi_2 = neg.d(rbx[1])
            *(sx.q(rdi_2) + r11) = arg4
            rbx[1] = 0
            sub_142a809a0(r10, zx.q(rsi))
            sub_142a809a0(arg1, zx.q(rsi), zx.q(rdi_2), zx.q(arg_20), var_28, var_20)
            arg4 = arg_20
            rcx_1 = var_28
            r10 = arg1
            r11 = var_20
    
    result = zx.d(*(rcx_1 + 6))
    rsi += 1
    rbx = &rbx[6]

return result
