// 函数: sub_140e22380
// 地址: 0x140e22380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
int16_t* r13 = nullptr
int32_t r14 = 0
int16_t* var_38 = nullptr
int64_t var_30 = 0
int64_t rbx = -1
void* rdx = arg1

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rdi_1.d + 1)
        rax = var_30:4.d
        r14 = var_30.d
        r13 = var_38
    
    r14 += rdi_1.d + 1
    var_30.d = r14
    
    if (r14 s> rax)
        sub_140594770(&var_38)
        r14 = var_30.d
        r13 = var_38
    
    sub_1405a7220(r13, rdi_1.d + 1, arg3, rdi_1.d + 1, 0x3f)
    rdx = arg1

int32_t r14_1

if (r14 == 0)
    r14_1 = 0
else
    r14_1 = r14 - 1

int32_t rdi_3 = *(rdx + 0x18)
int32_t r15_1 = 1
int32_t rax_2

if (rdi_3 == 0)
    rax_2 = rdi_3 + 2

if (rdi_3 != 0 || r14_1 == 0xffffffff)
    rax_2 = 1

int16_t* var_48 = nullptr
int32_t rcx_3 = rax_2 + r14_1
void* rax_3 = *(rdx + 0x10)
int32_t var_3c

if (rdi_3 != 0 || rcx_3 != 0)
    sub_1405a4c70(&var_48, rdi_3 + rcx_3, 0)
    memcpy(var_48, rax_3, rdi_3 * 2)
else
    var_3c = rcx_3

sub_140a2cf70(&var_48, r13, r14_1)
int32_t var_40

if (arg4 == 0 || *arg4 == 0)
    *arg2 = var_48
    arg2[1].d = rdi_3
    *(arg2 + 0xc) = var_3c
    var_40.q = 0
    var_48 = nullptr
else
    do
        rbx += 1
    while (arg4[rbx] != 0)
    
    if (rdi_3 != 0 || rbx.d == 0)
        r15_1 = 0
    
    int16_t* rax_4 = var_48
    var_48 = nullptr
    int32_t rdx_8 = r15_1 + rbx.d + rdi_3
    var_38 = rax_4
    var_30.d = rdi_3
    var_30:4.d = var_3c
    var_40.q = 0
    
    if (rdx_8 s> var_3c)
        sub_1405947f0(&var_38, rdx_8)
    
    sub_140a20ba0(&var_38, arg4, rbx.d)
    int16_t* rcx_10 = var_48
    *arg2 = var_38
    arg2[1].d = var_30.d
    *(arg2 + 0xc) = var_30:4.d
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if (r13 != 0)
    sub_140a74f90(r13)

return arg2
