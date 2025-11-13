// 函数: sub_1406b7160
// 地址: 0x1406b7160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbp = *arg2
int16_t* rsi = nullptr
int16_t* r14 = nullptr
int16_t* var_48 = nullptr
int32_t r15 = 0
int32_t var_40 = 0
int32_t rax = 0
int32_t var_3c = 0
uint64_t rbx = -1

if (rbp != 0 && *rbp != 0)
    char* rdi_1 = -ffffffffffffffff
    
    do
        rdi_1 = &rdi_1[1]
    while (*(rdi_1 + rbp) != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        rax = var_3c
        r15 = var_40
        r14 = var_48
    
    r15 += rdi_1.d + 1
    
    if (r15 s> rax)
        sub_140594770(&var_48)
        r14 = var_48
    
    sub_1405a7220(r14, rdi_1.d + 1, rbp, rdi_1.d + 1, 0x3f)

char* rdi_3 = *arg3
int16_t* var_38 = nullptr
int32_t rbp_1 = 0
int32_t var_30 = 0
int32_t rax_1 = 0
int32_t var_2c = 0

if (rdi_3 != 0 && *rdi_3 != 0)
    do
        rbx += 1
    while (rdi_3[rbx] != 0)
    
    rbx = zx.q(rbx.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_38, rbx.d)
        rax_1 = var_2c
        rbp_1 = var_30
        rsi = var_38
    
    rbp_1 += rbx.d
    
    if (rbp_1 s> rax_1)
        sub_140594770(&var_38)
        rsi = var_38
    
    sub_1405a7220(rsi, rbx.d, rdi_3, rbx.d, 0x3f)

int16_t* const rcx_6 = &data_142d40450
int16_t* rdx_6 = &data_142d40450

if (rbp_1 != 0)
    rdx_6 = rsi

if (r15 != 0)
    rcx_6 = r14

rbx.b = sub_140a54510(rcx_6, rdx_6) s< 0

if (rsi != 0)
    sub_140a74f90(rsi)

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(rbx.b)
