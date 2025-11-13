// 函数: sub_1429ec3f0
// 地址: 0x1429ec3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3
int16_t (* rdi)[0x8] = arg1
uint64_t result
result.w = arg5[2] | arg5[1]
result.w |= *arg5

if (result.w == 0)
    int32_t r12_2 = arg6
    
    if (r12_2 s>= 0x10)
        uint64_t i_3 = zx.q(r12_2) u>> 4
        r12_2 += neg.d(i_3.d) << 4
        uint64_t i
        
        do
            result = sub_1403b20b4(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
            rdi = &rdi[1]
            rbx = &rbx[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r12_2 == 8)
        return sub_1403b2011(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
    
    if (r12_2 == 4)
        return sub_1403b1f90(rdi, arg2.d, rbx, arg4.d, arg7, arg5)
else
    int32_t r13 = arg6
    
    if (r13 s>= 0x10)
        uint64_t i_2 = zx.q(r13) u>> 4
        int64_t* r14_2 = arg1 - arg2 * 3
        r13 += neg.d(i_2.d) << 4
        result = i_2 << 4
        uint64_t i_1
        
        do
            sub_1403b1150(r14_2, arg2, rbx, arg4, arg7, arg5)
            r14_2 = &r14_2[2]
            rbx = &rbx[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rdi += result
    
    if (r13 == 8)
        result = zx.q(arg7)
        sub_1403b1590(rdi - arg2 * 3, arg2, rbx, arg4, result.d, arg5)
    else if (r13 == 4)
        result = zx.q(arg7)
        sub_1403b1a90(rdi - arg2 * 3, arg2, rbx, arg4, result.d, arg5)

return result
