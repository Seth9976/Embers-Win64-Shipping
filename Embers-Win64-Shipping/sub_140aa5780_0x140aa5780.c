// 函数: sub_140aa5780
// 地址: 0x140aa5780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_2 = 0

if (sub_140ab6960(arg2, &var_18, 0x2c) == 0 || i_2 != 2)
    *arg1 = nullptr
    arg1[1] = 0
    int64_t* rbp_1 = var_18
    
    if (i_2 != 0)
        void* rbx_3 = &rbp_1[2]
        int32_t i
        
        do
            int64_t rcx_6 = *rbx_3
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_3 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)
    
    return arg1

void*** rax_2 = j_sub_140a82f30(0x50)
int64_t* r14_1 = var_18
void*** rbx_1 = rax_2
int32_t i_3 = 2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    *rbx_1 = &data_142e64890
    rbx_1[1] = *r14_1
    rbx_1[2].d = r14_1[1].d
    *(rbx_1 + 0x14) = *(r14_1 + 0xc)
    rbx_1[3] = 0
    rbx_1[3] = r14_1[2]
    r14_1[2] = 0
    rbx_1[4].d = r14_1[3].d
    *(rbx_1 + 0x24) = *(r14_1 + 0x1c)
    r14_1[3] = 0
    rbx_1[5] = r14_1[4]
    rbx_1[6].d = r14_1[5].d
    *(rbx_1 + 0x34) = *(r14_1 + 0x2c)
    rbx_1[7] = 0
    rbx_1[7] = r14_1[6]
    r14_1[6] = 0
    rbx_1[8].d = r14_1[7].d
    *(rbx_1 + 0x44) = *(r14_1 + 0x3c)
    r14_1[7] = 0
    rbx_1[9].d = 0
    
    if (rbx_1[2].d == 2 && rbx_1[6].d == 1 && wcsncmp(rbx_1[1], "<", 2) == 0
            && wcsncmp(rbx_1[5], &data_142e64b20, 1) == 0)
        rbx_1[9].d = 1

void*** rax_17 = j_sub_140a82f30(0x18)

if (rax_17 == 0)
    rax_17 = nullptr
else
    rax_17[1].d = 1
    *rax_17 = &data_142d42ea8
    *(rax_17 + 0xc) = 1
    rax_17[2] = rbx_1

*arg1 = rbx_1
arg1[1] = rax_17
void* rbx_2 = &r14_1[2]
int32_t i_1

do
    int64_t rcx_4 = *rbx_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rbx_2 += 0x20
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

return arg1
