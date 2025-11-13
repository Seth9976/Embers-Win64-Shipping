// 函数: sub_1421b8a60
// 地址: 0x1421b8a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r15 = *(arg2 + 0xa0)
int32_t i = 0

if (r15 == 0)
    r15 = nullptr
else
    void* rax_1 = sub_1424a23e0()
    void* rdx = *(r15 + 0x10)
    int64_t rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx + 0x38))
        r15 = nullptr
    else if (*(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
        r15 = nullptr

if (arg3[1].d s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t rdi_1 = *arg3
    int64_t zmm0 = *(rbx_1 + rdi_1 + 0xc)
    int64_t var_68 = *(rbx_1 + rdi_1 + 4)
    int32_t var_60_1 = zmm0.d
    int32_t var_5c_1 = int.d(fconvert.t(*(rbx_1 + rdi_1 + 0x38)))
    int32_t var_50_1 = *(rbx_1 + rdi_1 + 0x18)
    int32_t var_44_1 = *(rbx_1 + rdi_1 + 0x24)
    int64_t var_58_1 = *(rbx_1 + rdi_1 + 0x10)
    int32_t var_38_1 = *(rbx_1 + rdi_1 + 0x44)
    int32_t var_2c_1 = *(rbx_1 + rdi_1 + 0x50)
    int64_t var_4c_1 = *(rbx_1 + rdi_1 + 0x1c)
    int64_t var_28_1 = *(rbx_1 + rdi_1 + 0x5c)
    int64_t var_40_1 = *(rbx_1 + rdi_1 + 0x3c)
    int64_t var_20_1 = *(rbx_1 + rdi_1 + 0x68)
    int64_t var_34_1 = *(rbx_1 + rdi_1 + 0x48)
    sub_1405a9f90(arg2 + 0x480, &var_68)
    
    if (r15 != 0)
        zmm0 = *(rbx_1 + rdi_1 + 0xc)
        var_68 = *(rbx_1 + rdi_1 + 4)
        int32_t var_60_2 = zmm0.d
        int32_t var_5c_2 = int.d(fconvert.t(*(rbx_1 + rdi_1 + 0x38)))
        int32_t var_50_2 = *(rbx_1 + rdi_1 + 0x18)
        int32_t var_44_2 = *(rbx_1 + rdi_1 + 0x24)
        int64_t var_58_2 = *(rbx_1 + rdi_1 + 0x10)
        int32_t var_38_2 = *(rbx_1 + rdi_1 + 0x44)
        int32_t var_2c_2 = *(rbx_1 + rdi_1 + 0x50)
        int64_t var_4c_2 = *(rbx_1 + rdi_1 + 0x1c)
        int64_t var_28_2 = *(rbx_1 + rdi_1 + 0x5c)
        int64_t var_40_2 = *(rbx_1 + rdi_1 + 0x3c)
        int64_t var_20_2 = *(rbx_1 + rdi_1 + 0x68)
        int64_t var_34_2 = *(rbx_1 + rdi_1 + 0x48)
        sub_1405a9f90(r15 + 0x260, &var_68)
    
    i += 1
    rbx_1 += 0x70
while (i s< arg3[1].d)
