// 函数: sub_141422f70
// 地址: 0x141422f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    sub_1405a6220(sub_140a242a0(), arg1)
    int64_t* rcx_1 = *arg1
    *arg1 = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

if (&arg1[1] != &arg1[2])
    void* rbx_1 = arg1[1]
    arg1[1] = arg1[2]
    arg1[2] = 0
    
    if (rbx_1 != 0)
        sub_1405ae180(rbx_1 + 0x3000)
        j_sub_140a74f90(rbx_1)

void* rax_4 = j_sub_140a82f30(0x3050)
void* const rbx_2 = rax_4

if (rax_4 == 0)
    rbx_2 = nullptr
else
    memset(rax_4, 0, 0x3050)
    *(rbx_2 + 0x3008) = 0
    void* rcx_5 = rbx_2 + 0x3010
    *(rcx_5 + 0x10) = 0
    *(rcx_5 + 0x18) = 0
    *(rcx_5 + 0x1c) = 0x80
    void* rax_5 = *(rcx_5 + 0x10)
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    *rcx_5 = 0
    *(rcx_5 + 8) = 0
    *(rbx_2 + 0x3030) = 0xffffffff
    *(rbx_2 + 0x3034) = 0
    *(rbx_2 + 0x3040) = 0
    *(rbx_2 + 0x3048) = 0

void var_30

if (&arg1[2] != &var_30)
    void* rbp_1 = arg1[2]
    arg1[2] = rbx_2
    
    if (rbp_1 != 0)
        sub_1405ae180(rbp_1 + 0x3000)
        j_sub_140a74f90(rbp_1)
else if (rbx_2 != 0)
    sub_1405ae180(rbx_2 + 0x3000)
    j_sub_140a74f90(rbx_2)

int64_t* var_38
int64_t* rax_6 = sub_14142f980(&var_38, arg3, arg4, arg1[2])

if (arg1 != rax_6)
    int64_t* rcx_9 = *arg1
    *arg1 = *rax_6
    *rax_6 = 0
    
    if (rcx_9 != 0)
        rcx_9[9].d -= 1
        
        if (rcx_9[9].d == 1)
            sub_140a2f6e0(rcx_9)

int64_t* rcx_10 = var_38

if (rcx_10 != 0)
    rcx_10[9].d -= 1
    
    if (rcx_10[9].d == 1)
        sub_140a2f6e0(rcx_10)

void* r8_2 = arg1[1]

if (r8_2 == 0)
    return 0

return sub_141416650(arg3, arg4, r8_2)
