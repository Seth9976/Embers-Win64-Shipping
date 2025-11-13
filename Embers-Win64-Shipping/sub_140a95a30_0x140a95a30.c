// 函数: sub_140a95a30
// 地址: 0x140a95a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int32_t arg_8 = 0
void*** rax = j_sub_140a82f30(0x70)
void*** rdi = rax
int64_t var_48
int64_t rbp_2

if (rax == 0)
    rbp_2 = var_48
    rdi = nullptr
else
    int32_t rbx_1 = arg2[1].d
    int64_t rbp = *arg2
    var_48 = 0
    int64_t rbp_1
    int32_t r15_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_48, rbx_1, 0)
        rbp_1 = var_48
        memcpy(rbp_1, rbp, rbx_1 * 2)
        int32_t var_3c
        r15_1 = var_3c
    else
        r15_1 = 0
        rbp_1 = 0
    
    var_48.o = zx.o(0)
    sub_140a95580(rdi, &var_48)
    *rdi = &data_142e63dc8
    rdi[7] = rbp_1
    rbp_2 = 0
    rdi[8].d = rbx_1
    *(rdi + 0x44) = r15_1
    InitializeCriticalSection(&rdi[9])
    SetCriticalSectionSpinCount(&rdi[9], 0xfa0)
    rbx = 1

*arg1 = rdi
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

arg1[1] = rax_1

if ((rbx & 1) != 0 && rbp_2 != 0)
    sub_140a74f90(rbp_2)

arg1[2].d = 0
void* rax_2 = sub_140aae970()
int64_t rdi_1 = *arg2
int16_t rbx_2 = *(rax_2 + 0x120)
*arg2 = 0
int32_t rbp_3 = arg2[1].d
int32_t r15_2 = *(arg2 + 0xc)
arg2[1] = 0
int64_t* rcx_7 = *arg1
void* rax_4 = (*(*rcx_7 + 0x30))(rcx_7)

if (rax_4 != &var_48)
    *(rax_4 + 8) = rbx_2

void var_38

if (rax_4 != &var_48 && rax_4 + 0x10 != &var_38)
    int64_t rcx_8 = *(rax_4 + 0x10)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(rax_4 + 0x10) = rdi_1
    *(rax_4 + 0x18) = rbp_3
    *(rax_4 + 0x1c) = r15_2
else if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return arg1
