// 函数: sub_141043b90
// 地址: 0x141043b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x26].b == 0
*arg1 = &data_142f00a18
arg1[0xe] = &data_142f00a70

if (not(cond:0))
    void* r8_1 = arg1[0x19]
    
    if (r8_1 != 0)
        int64_t rcx = sx.q(arg1[0x2a].d)
        
        if (rcx s> 0)
            int64_t rcx_1 = neg.q(rcx)
            
            if (rcx_1 != 0)
                int32_t rcx_3
                
                if (rcx_1 s<= 0)
                    int64_t rax_6
                    int32_t rdx_2
                    rdx_2:rax_6 = sx.o((0x3ff - rcx_1) & 0xfffffffffffffc00)
                    rcx_3 = (neg.q(((zx.q(rdx_2) & 0x3ff) + rax_6) s>> 0xa)).d
                else
                    int64_t rax_3
                    int32_t rdx
                    rdx:rax_3 = sx.o((rcx_1 + 0x3ff) & 0xfffffffffffffc00)
                    rcx_3 = (((zx.q(rdx) & 0x3ff) + rax_3) s>> 0xa).d
                
                if (((*(r8_1 + 0xb8)).b & 7) != 0)
                    data_143f0f1fc
                    data_143f0f1fc += rcx_3
                else
                    data_143f0f1f8
                    data_143f0f1f8 += rcx_3

sub_1410406a0(&arg1[0xe])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
