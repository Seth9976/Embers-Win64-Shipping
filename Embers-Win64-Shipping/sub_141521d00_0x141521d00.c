// 函数: sub_141521d00
// 地址: 0x141521d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
sub_141521a00(&var_128, arg1)
int32_t* var_138
sub_141521b30(&var_138, arg1, &var_128, 0x3dcccccd, arg4.d)
int32_t i_2 = arg2[1].d
int32_t rsi = arg1[1].d
int64_t* rbx_1 = *arg2

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rbx_2 = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != rsi)
    sub_1405a5410(arg2, rsi)
    rbx_2 = arg2[1].d

if (rsi s> rbx_2)
    arg2[1].d = rsi
    
    if (rsi s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    memset((sx.q(rbx_2) << 4) + *arg2, 0, sx.q(rsi - rbx_2) << 4)
else if (rsi s< rbx_2)
    sub_140838580(arg2, rsi, rbx_2 - rsi, 1)

int32_t* rbx_5 = var_138
int32_t rax = *rbx_5
int32_t r12 = rbx_5[4]
int32_t* r15 = *(rbx_5 + 0xb8)
int32_t rax_1 = rbx_5[1]
int64_t rax_2 = *(rbx_5 + 0xa8)
void** var_108
sub_141526e00(&var_108)
int32_t i_1 = 0
int32_t rdi_2 = 0
int32_t r14_1 = 0
int32_t rsi_1 = 0
int32_t rbp = 0

if (*r15 == 0)
    int64_t rax_3
    
    do
        rax_3 = sx.q(rdi_2)
        rbp += 1
        rdi_2 += 1
        
        if (rbp == rax)
            rbp = 0
            rsi_1 += 1
            
            if (rsi_1 == rax_1)
                rsi_1 = 0
                r14_1 += 1
                
                if (rdi_2 == r12)
                    goto label_141521f31
    while (r15[rax_3 + 1] == 0)

void* rax_4 = &rbx_5[0x34]
void* var_140_1 = rax_4

do
label_141521e9e:
    
    if (sub_141529db0(rax_4, &var_108, rdi_2, i_1, rbp, rsi_1, r14_1) != 0)
        sub_141527c30(&var_108, 
            (sx.q(*(*(rax_2 + (sx.q(rdi_2) << 3)) + (sx.q(i_1) << 2))) << 4) + *arg2, arg3)
    
    i_1 += 1
    rax_4 = var_140_1
while (i_1 s< r15[sx.q(rdi_2)])

i_1 = 0

while (true)
    rdi_2 += 1
    rbp += 1
    
    if (rbp == rax)
        rbp = 0
        rsi_1 += 1
        
        if (rsi_1 == rax_1)
            rsi_1 = 0
            r14_1 += 1
            
            if (rdi_2 == r12)
                rbx_5 = var_138
                break
    
    if (r15[sx.q(rdi_2)] != 0)
        rax_4 = var_140_1
        goto label_141521e9e

label_141521f31:
sub_141526fd0(&var_108)
j_sub_140a74f90(*(rbx_5 + 0x160))
j_sub_140a74f90(*(rbx_5 + 0x158))
sub_1415287b0(rbx_5)
j_sub_140a74f90(rbx_5)
int64_t result
result.b = 1
return result
