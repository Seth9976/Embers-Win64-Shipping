// 函数: sub_1426b3140
// 地址: 0x1426b3140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int32_t rcx = arg1[7].d
int32_t arg_8 = 0
int64_t r10 = *(*rdi + 0x2a0)
int32_t rax_1 = rcx - 1

if (rcx == 0)
    rax_1 = 0

int64_t var_48
int64_t var_38
int64_t var_28
int64_t* rax_3
int32_t rbx

if (rax_1 == 0)
    rax_3 = r10(rdi, &var_38)
    rbx = 4
else
    int64_t* rax_2 = r10(rdi, &var_28)
    int16_t* const rcx_2
    
    if (rax_2[1].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *rax_2
    
    if (rdi[7].d != 0)
        rdi[6]
    
    int16_t* const var_68_1 = rcx_2
    sub_140a2e390(&var_48, u"%d. %s [%s]", zx.q(rdi[0xa].w))
    rax_3 = &var_48
    rbx = 3

*arg2 = 0
*arg2 = *rax_3
*rax_3 = 0
arg2[1].d = rax_3[1].d
*(arg2 + 0xc) = *(rax_3 + 0xc)
rax_3[1] = 0

if ((rbx.b & 4) != 0)
    int64_t rcx_7 = var_38
    rbx &= 0xfffffffb
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx.b & 2) != 0)
    int64_t rcx_8 = var_48
    rbx &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx.b & 1) != 0)
    int64_t rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

bool cond:1 = (*(rdi + 0x55) & 4) == 0
int32_t i_1 = 0
int32_t i_2 = 0
int64_t* var_58 = nullptr
int32_t var_4c = 0

if (not(cond:1))
    i_1 = i_2
    rdi = sub_1426b2ab0(rdi, arg3, arg4)

if (rdi != 0)
    (*(*rdi + 0x278))(rdi, arg3, arg4, zx.q(arg5), &var_58)
    i_1 = i_2

int32_t rdi_1 = 0

if (i_1 s> 0)
    int64_t r14_1 = 0
    
    do
        sub_140a20ba0(arg2, &data_142d8adc4, 2)
        int64_t* rdx_4 = var_58
        int32_t rax_6 = *(rdx_4 + r14_1 + 8)
        int32_t r8_3 = rax_6 - 1
        
        if (rax_6 == 0)
            r8_3 = 0
        
        sub_140a20ba0(arg2, *(rdx_4 + r14_1), r8_3)
        i_1 = i_2
        r14_1 += 0x10
        rdi_1 += 1
    while (rdi_1 s< i_1)

int64_t* rdi_2 = var_58

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rdi_2
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rdi_2 = &rdi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg2
