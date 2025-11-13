// 函数: sub_1422c0590
// 地址: 0x1422c0590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= arg4)
    return 

int32_t rbp_1 = arg3

do
    void* rsi_3 = (sx.q(rbp_1) << 5) + *arg1[3]
    char rax = *(rsi_3 + 0x1c)
    int64_t var_38
    
    if (rax == 0)
        uint32_t rdx = zx.d(*(rsi_3 + 0xa))
        int64_t* rcx = *arg1
        int64_t* r15_2 = sx.q(*(rsi_3 + 0x10)) + arg5
        int64_t r9 = *rcx
        (*(r9 + 8))(rcx, sx.q(rdx * r15_2[1].d), sx.q(*(r15_2 + 0xc) * rdx), r9, var_38)
        int64_t rbx_1 = *r15_2
        int32_t i = 0
        
        if (r15_2[1].d s> 0)
            do
                var_38 = sx.q(zx.d(*(rsi_3 + 0xa)) * i) + rbx_1
                sub_1422c0590(arg1, arg2, zx.q(rbp_1 + 1), zx.q(zx.d(*(rsi_3 + 8)) - 1), var_38)
                i += 1
            while (i s< r15_2[1].d)
        
        rbp_1 = zx.d(*(rsi_3 + 8)) - 1
    else if (rax == 0x13)
        int64_t rax_8 = sx.q(*(rsi_3 + 0x10))
        int64_t* rcx_2 = *arg1
        int64_t r9_3 = *rcx_2
        (*(r9_3 + 8))(rcx_2, sx.q(*(rax_8 + arg5 + 8)) * 2, sx.q(*(rax_8 + arg5 + 0xc)) * 2, r9_3, 
            var_38)
    rbp_1 += 1
while (rbp_1 s< arg4)
