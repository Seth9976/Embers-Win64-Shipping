// 函数: sub_142c748d0
// 地址: 0x142c748d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = 0
int64_t* rbx

if (arg6 u< 8)
label_142c74920:
    rbx = arg7
    sub_142c64850(*rbx, "NPN, no overlap, use HTTP1.1\n", arg3, arg5)
    *arg2 = "http/1.1"
    *arg3 = 8
else
    while (true)
        int64_t* rax_2 = zx.q((r10 + 1).d) + arg4
        
        if (*rax_2 == 0x312e312f70747468)
            rbx = arg7
            *arg2 = rax_2
            *arg3 = *(r10 + arg4)
            sub_142c64850(*rbx, "NPN, negotiated HTTP1.1\n", arg3, arg5)
            break
        
        r10 = zx.q(r10.d + 1 + zx.d(*(r10 + arg4)))
        
        if ((r10 + 8).d u> arg6)
            goto label_142c74920

rbx[0xf5].d = 2
return 0
