// 函数: sub_1423d23b0
// 地址: 0x1423d23b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = data_143f5b298
uint64_t rbp = arg2
char** rax = *(r8 + 0xc38)
void* rcx_1 = &rax[sx.q(*(r8 + 0xc40))]
char* rbx_1

if (rax == rcx_1)
label_1423d23ff:
    rbx_1 = sub_1423d6f90(r8, 0)
else
    while (true)
        rbx_1 = *rax
        
        if (*(rbx_1 + 0xb0) == arg4)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423d23ff

if (rbp == 0)
    int64_t rdi_1 = sx.q(*(rbx_1 + 0x1d0))
    int32_t rax_11 = (rdi_1 + 1).d
    *(rbx_1 + 0x1d0) = rax_11
    
    if (rax_11 s> *(rbx_1 + 0x1d4))
        sub_1405a4d70(&rbx_1[0x1c8])
    
    int64_t rax_12 = *(rbx_1 + 0x1c8)
    *(rax_12 + (rdi_1 << 3)) = 0
    return rax_12

void* rax_2 = sub_142435380(rbp)
void* rsi = rax_2

if (rax_2 != 0)
    goto label_1423d244d

void* rax_3 = sub_142435740(rbp, nullptr)
rsi = rax_3
int64_t r14

if (rax_3 == 0)
    r14 = 0
label_1423d2468:
    int64_t arg_10 = *(rbp + 0x18)
    int16_t* var_28
    sub_140b63b70(&arg_10, &var_28)
    int16_t* const r8_1 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        r8_1 = var_28
    
    int64_t var_38
    sub_140a2e390(&var_38, u"Couldn't find level in package %s", r8_1)
    
    if (&rbx_1[0x1d8] == &var_38)
        int64_t rcx_9 = var_38
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    else
        int64_t rcx_8 = *(rbx_1 + 0x1d8)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *(rbx_1 + 0x1d8) = var_38
        int32_t var_30
        *(rbx_1 + 0x1e0) = var_30
        int32_t var_2c
        *(rbx_1 + 0x1e4) = var_2c
        var_30.q = 0
        var_38 = 0
    
    int16_t* rcx_10 = var_28
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else
    rbp = sub_140d21d80(rax_3)
label_1423d244d:
    r14 = *(rsi + 0x30)
    
    if (r14 == 0)
        goto label_1423d2468

int64_t rdi = sx.q(*(rbx_1 + 0x1d0))
int32_t rax_9 = (rdi + 1).d
*(rbx_1 + 0x1d0) = rax_9

if (rax_9 s> *(rbx_1 + 0x1d4))
    sub_1405a4d70(&rbx_1[0x1c8])

int64_t rax_10 = *(rbx_1 + 0x1c8)
*(rax_10 + (rdi << 3)) = r14
return rax_10
