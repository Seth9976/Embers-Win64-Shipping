// 函数: ?assemble_floating_point_value_from_big_integer@__crt_strtox@@YA?AW4SLD_STATUS@@AEBUbig_integer@1@I_N1AEBVfloating_point_value@1@@Z
// 地址: 0x1429ea550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3
uint64_t r12 = zx.q(arg6)
void* rdi = arg1
int16_t result = *(arg5 + 4) | *(arg5 + 2) | *arg5

if (result == 0)
    if (r12.d s>= 0x10)
        uint64_t i_3 = r12 u>> 4
        r12 = zx.q(r12.d + (neg.d(i_3.d) << 4))
        uint64_t i
        
        do
            result = sub_1403b04ba(rdi, arg2, rbx, arg4, arg7, arg5)
            rdi += 0x10
            rbx += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r12.d == 8)
        return sub_1403b03f5(rdi, arg2, rbx, arg4, arg7, arg5)
    
    if (r12.d == 4)
        return sub_1403b0348(rdi, arg2, rbx, arg4, arg7, arg5)
else
    if (r12.d s>= 0x10)
        uint64_t i_2 = zx.q(r12.d) u>> 4
        r12 = zx.q(r12.d + (neg.d(i_2.d) << 4))
        uint64_t i_1
        
        do
            result = sub_1403af96c(rdi, arg2, rbx, arg4, arg7, arg5)
            rdi += 0x10
            rbx += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r12.d == 8)
        return sub_1403af755(rdi, arg2, rbx, arg4, arg7, arg5)
    
    if (r12.d == 4)
        return sub_1403af599(rdi, arg2, rbx, arg4, arg7, arg5)

return result
