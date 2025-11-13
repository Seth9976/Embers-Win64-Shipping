// 函数: sub_141f38350
// 地址: 0x141f38350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1)
    return 

int32_t rdi_1 = 0
arg1[2] = arg2[2]
arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg1, 0)

int64_t rbp_1 = sx.q(arg2[1].d)

if (rbp_1.d != 0)
    int32_t rax_1 = arg1[1].d
    int32_t rdx = rax_1 + rbp_1.d
    
    if (rdx s> *(arg1 + 0xc))
        sub_1405c5570(arg1, rdx)
        rax_1 = arg1[1].d
    
    memcpy(*arg1 + (sx.q(rax_1) << 3), *arg2, (rbp_1 << 3).d)
    arg1[1].d += rbp_1.d

int64_t* rcx_3 = arg1[2]

if (rcx_3 != 0)
    int64_t i_1 = sx.q(rcx_3[1].d)
    
    if (i_1 s> 0)
        void* rcx_4 = *rcx_3
        int64_t i
        
        do
            uint64_t rax = zx.q(rdi_1)
            rcx_4 += 2
            rdi_1 += 1
            
            if (*(rcx_4 - 2) == 0xffff)
                rdi_1 = rax.d
            
            i = i_1
            i_1 -= 1
        while (i != 1)

arg1[3].w = rdi_1.w
*(arg1 + 0x1a) = 1
