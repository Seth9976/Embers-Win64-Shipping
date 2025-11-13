// 函数: sub_1407c29a0
// 地址: 0x1407c29a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t rcx = r12_1 * 0x38
int64_t* rsi_3 = *arg1 + 0x28 + rcx
int32_t i

do
    int64_t rcx_1 = *rsi_3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t j = 2
    int64_t* rdi_1 = rsi_3
    
    do
        int64_t rcx_2 = rdi_1[-2]
        rdi_1 = &rdi_1[-2]
        j -= 1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    while (j != 0)
    
    rsi_3 = &rsi_3[7]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_4 = rax_1 - r12_1.d

if (rcx_4 != arg3)
    memmove(rcx + *arg1, sx.q(r12_1.d + arg3) * 0x38 + *arg1, (rcx_4 - arg3) * 0x38)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1407c4070(arg1)
