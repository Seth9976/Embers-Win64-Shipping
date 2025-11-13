// 函数: sub_1429ec120
// 地址: 0x1429ec120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3
uint64_t r12 = zx.q(arg6)
void* rdi = arg1
uint32_t result
result.w = arg5[2] | arg5[1]
result.w |= *arg5

if (result.w == 0)
    if (r12.d s>= 0x10)
        uint64_t i_3 = r12 u>> 4
        r12 = zx.q(r12.d + (neg.d(i_3.d) << 4))
        uint64_t i
        
        do
            result = sub_1403b2486(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
            rdi += 0x10
            rbx = &rbx[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r12.d == 8)
        return sub_1403b23df(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
    
    if (r12.d == 4)
        return sub_1403b235a(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
else
    if (r12.d s>= 0x10)
        uint64_t i_2 = zx.q(r12.d) u>> 4
        result = neg.d(i_2.d) << 4
        r12 = zx.q(r12.d + result)
        uint64_t i_1
        
        do
            sub_1403b05a0(rdi, arg2, rbx, arg4, arg7, arg5)
            rdi += 0x10
            rbx = &rbx[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r12.d == 8)
        sub_1403b0900(rdi, arg2, rbx, arg4, arg7, arg5)
    else if (r12.d == 4)
        sub_1403b0df0(rdi, arg2, rbx, arg4, arg7, arg5)

return result
