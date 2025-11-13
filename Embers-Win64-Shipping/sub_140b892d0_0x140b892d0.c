// 函数: sub_140b892d0
// 地址: 0x140b892d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r13_1 = sx.q(arg2)
int64_t rcx = r13_1 * 0xa8
void* r14_2 = *arg1 + rcx
void* rsi_1 = r14_2 + 0x50
int32_t i

do
    int32_t j_3 = *(rsi_1 + 0x50)
    int64_t* rbx_1 = *(rsi_1 + 0x48)
    
    if (j_3 != 0)
        int32_t j
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            j = j_3
            j_3 -= 1
        while (j != 1)
        rbx_1 = *(rsi_1 + 0x48)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t rcx_3 = *(rsi_1 + 0x38)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(rsi_1 + 0x28)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *(rsi_1 + 0x18)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = *(rsi_1 + 8)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int32_t j_4 = *rsi_1
    int64_t* rbx_2 = *(rsi_1 - 8)
    
    if (j_4 != 0)
        int32_t j_1
        
        do
            int64_t rcx_7 = *rbx_2
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_2 = &rbx_2[2]
            j_1 = j_4
            j_4 -= 1
        while (j_1 != 1)
        rbx_2 = *(rsi_1 - 8)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int32_t j_5 = *(rsi_1 - 0x10)
    int64_t* rbx_3 = *(rsi_1 - 0x18)
    
    if (j_5 != 0)
        int32_t j_2
        
        do
            int64_t rcx_9 = *rbx_3
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx_3 = &rbx_3[2]
            j_2 = j_5
            j_5 -= 1
        while (j_2 != 1)
        rbx_3 = *(rsi_1 - 0x18)
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    int64_t rcx_11 = *(rsi_1 - 0x28)
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = *(rsi_1 - 0x38)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = *r14_2
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    r14_2 += 0xa8
    rsi_1 += 0xa8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_15 = rax_1 - r13_1.d

if (rcx_15 != arg3)
    memmove(rcx + *arg1, sx.q(arg3 + r13_1.d) * 0xa8 + *arg1, (rcx_15 - arg3) * 0xa8)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140b8a5c0(arg1)
