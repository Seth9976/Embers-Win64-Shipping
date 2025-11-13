// 函数: sub_1421b8c30
// 地址: 0x1421b8c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbp = *(arg2 + 0xa0)
int32_t i = 0

if (rbp == 0)
    rbp = nullptr
else
    void* rax_1 = sub_1424a23e0()
    void* rdx = *(rbp + 0x10)
    int64_t rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx + 0x38))
        rbp = nullptr
    else if (*(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
        rbp = nullptr

if (arg3[1].d s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t rdi_1 = *arg3
    int64_t zmm0 = *(rbx_1 + rdi_1 + 0xc)
    int64_t var_58 = *(rbx_1 + rdi_1 + 4)
    int32_t var_50_1 = zmm0.d
    int32_t var_4c_1 = int.d(fconvert.t(*(rbx_1 + rdi_1 + 0x38)))
    int64_t var_48_1 = *(rbx_1 + rdi_1 + 0x10)
    int32_t var_40_1 = *(rbx_1 + rdi_1 + 0x18)
    int64_t var_3c_1 = *(rbx_1 + rdi_1 + 0x1c)
    int32_t var_34_1 = *(rbx_1 + rdi_1 + 0x24)
    int32_t var_28_1 = *(rbx_1 + rdi_1 + 0x44)
    int64_t var_30_1 = *(rbx_1 + rdi_1 + 0x3c)
    sub_1405a9f90(arg2 + 0x470, &var_58)
    
    if (rbp != 0)
        zmm0 = *(rbx_1 + rdi_1 + 0xc)
        var_58 = *(rbx_1 + rdi_1 + 4)
        int32_t var_50_2 = zmm0.d
        int32_t var_4c_2 = int.d(fconvert.t(*(rbx_1 + rdi_1 + 0x38)))
        int64_t var_48_2 = *(rbx_1 + rdi_1 + 0x10)
        int32_t var_40_2 = *(rbx_1 + rdi_1 + 0x18)
        int64_t var_3c_2 = *(rbx_1 + rdi_1 + 0x1c)
        int32_t var_34_2 = *(rbx_1 + rdi_1 + 0x24)
        int32_t var_28_2 = *(rbx_1 + rdi_1 + 0x44)
        int64_t var_30_2 = *(rbx_1 + rdi_1 + 0x3c)
        sub_1405a9f90(rbp + 0x250, &var_58)
    
    i += 1
    rbx_1 += 0x48
while (i s< arg3[1].d)
