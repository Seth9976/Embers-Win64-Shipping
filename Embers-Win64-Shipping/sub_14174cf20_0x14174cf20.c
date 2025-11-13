// 函数: sub_14174cf20
// 地址: 0x14174cf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t rcx = r12_1 * 0x98
int64_t* rsi_3 = *arg1 + 0x80 + rcx
int32_t i

do
    int64_t rcx_1 = *rsi_3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = rsi_3[-2]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int32_t j_1 = rsi_3[-3].d
    int64_t* rbx_1 = rsi_3[-4]
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = rsi_3[-4]
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t rcx_5 = rsi_3[-0xe]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    rsi_3 = &rsi_3[0x13]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_7 = rax_1 - r12_1.d

if (rcx_7 != arg3)
    memmove(rcx + *arg1, sx.q(r12_1.d + arg3) * 0x98 + *arg1, (rcx_7 - arg3) * 0x98)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_141750450(arg1)
