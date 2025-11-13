// 函数: sub_14207b700
// 地址: 0x14207b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg4 + 0x20)

if (rcx != 0 && (*(*rcx + 0x260))(rcx) != 0)
    int32_t arg_10 = 0
    int32_t rax_3
    int32_t i
    rax_3, i = sub_141fda760(arg2 + 0x70, arg3, &arg_10)
    int32_t rbx = 0
    int64_t r14 = sx.q(rax_3)
    arg_10.q = 0
    *(*(arg2 + 0x70) + r14 * 0x14 + 0x10) = arg6
    int64_t rcx_3 = sx.q(*(arg2 + 0xa0))
    
    if (rcx_3.d s> 0)
        int32_t* rax_5 = *(arg2 + 0x98) + 8
        int64_t rcx_4 = 0
        
        while (not(i f<= *rax_5))
            rbx += 1
            rcx_4 += 1
            rax_5 = &rax_5[3]
            
            if (rcx_4 s>= rcx_3)
                break
    
    sub_142075310(arg2 + 0x98, rbx, 1)
    int64_t rdx_3 = sx.q(rbx) * 3
    *(*(arg2 + 0x98) + (rdx_3 << 2) + 8) = i
    *(*(arg2 + 0x98) + (rdx_3 << 2)) = arg_10.q
    (*(*arg1 + 0x2a8))(arg1, arg2, zx.q(r14.d), arg4, arg5)
    return zx.q(r14.d)

return 0xffffffff
