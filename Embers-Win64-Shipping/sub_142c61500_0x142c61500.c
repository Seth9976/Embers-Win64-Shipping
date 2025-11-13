// 函数: sub_142c61500
// 地址: 0x142c61500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = nullptr
int64_t var_48 = 0
int64_t rbp = 0
int64_t r13 = 0
char* rsi = nullptr
char* rbx = nullptr

if (arg4 != 0)
    rsi = strchr(arg1, 0x3a)
    
    if (rsi u>= arg1 + arg2)
        rsi = nullptr

if (arg5 != 0)
    rbx = strchr(arg1, 0x3b)
    
    if (rbx u>= arg1 + arg2)
        rbx = nullptr

void* rdi_3

if (rsi != 0)
    char* rdi_1
    
    if (rbx != 0)
        rdi_1 = rbx
    
    if (rbx == 0 || rsi u<= rbx)
        rdi_1 = rsi
    
    rdi_3 = rdi_1 - arg1
    
    if (rbx == 0 || rbx u<= rsi)
        r12 = arg1 - rsi + arg2 - 1
    else
        r12 = rbx - rsi - 1
else if (rbx == 0)
    rdi_3 = arg2
else
    rdi_3 = rbx - arg1

void* r14_1

if (rbx == 0)
    r14_1 = nullptr
else if (rsi == 0 || rsi u<= rbx)
    r14_1 = arg1 - rbx + arg2 - 1
else
    r14_1 = rsi - rbx - 1

int64_t rax_15

if (arg3 != 0 && rdi_3 != 0)
    rax_15 = data_143ccb898(rdi_3 + 1)
    rbp = rax_15

if (arg3 != 0 && rdi_3 != 0 && rax_15 == 0)
    return 0x1b

int64_t rax_16

if (arg4 != 0 && r12 != 0)
    rax_16 = data_143ccb898(r12 + 1)
    r13 = rax_16

if (arg4 != 0 && r12 != 0 && rax_16 == 0)
    data_143ccb8a0(rbp)
    return 0x1b

if (arg5 != 0 && r14_1 != 0)
    int64_t rax_17 = data_143ccb898(r14_1 + 1)
    var_48 = rax_17
    
    if (rax_17 == 0)
        data_143ccb8a0(r13)
        data_143ccb8a0(rbp)
        return 0x1b

if (rbp != 0)
    memcpy(rbp, arg1, rdi_3.d)
    *(rdi_3 + rbp) = 0
    data_143ccb8a0(*arg3)
    *arg3 = rbp

if (r13 != 0)
    memcpy(r13, &rsi[1], r12.d)
    *(r12 + r13) = 0
    data_143ccb8a0(*arg4)
    *arg4 = r13

if (var_48 != 0)
    memcpy(var_48, &rbx[1], r14_1.d)
    *(r14_1 + var_48) = 0
    data_143ccb8a0(*arg5)
    *arg5 = var_48

return 0
