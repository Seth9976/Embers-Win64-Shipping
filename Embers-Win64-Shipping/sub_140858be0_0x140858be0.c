// 函数: sub_140858be0
// 地址: 0x140858be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r13_1 = sx.q(arg2)
int64_t r12_2 = r13_1 << 4
int64_t* rsi_2 = *arg1 + r12_2
int32_t i

do
    int32_t j_1 = rsi_2[1].d
    void* rbx_1 = *rsi_2
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx = *(rbx_1 + 0x10)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 += 0x20
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *rsi_2
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    rsi_2 = &rsi_2[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - r13_1.d

if (rdx_1 != arg3)
    int64_t rcx_3 = *arg1
    memmove(rcx_3 + r12_2, (sx.q(arg3 + r13_1.d) << 4) + rcx_3, (rdx_1 - arg3) << 4)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
