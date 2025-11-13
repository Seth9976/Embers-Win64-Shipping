// 函数: sub_141893330
// 地址: 0x141893330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r13_1 = sx.q(arg2)
int64_t r12_3 = r13_1 * 0x60
void* rsi_2 = *arg1 + r12_3
int32_t i

do
    int64_t rcx = *(rsi_2 + 0x48)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int32_t j_1 = *(rsi_2 + 0x40)
    int64_t* rbx_1 = *(rsi_2 + 0x38)
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *(rsi_2 + 0x38)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t rcx_3 = *(rsi_2 + 0x10)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rsi_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rsi_2 += 0x60
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_6 = rax_1 - r13_1.d

if (rcx_6 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_3, sx.q(arg3 + r13_1.d) * 0x60 + r9, (rcx_6 - arg3) * 0x60)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140d3e820(arg1)
