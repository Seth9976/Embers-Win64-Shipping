// 函数: sub_1425c9240
// 地址: 0x1425c9240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_1405947f0(&var_18, 3)
int32_t rbx = var_10 + 3

if (rbx s> 0)
    sub_140594770(&var_18)

int16_t* rdi = var_18
UnDecorator::getReferenceType(rdi, &data_142d6acb4, 6)
int32_t rdx_1
int16_t* const r9

if (rbx == 0)
    rdx_1 = 0
    r9 = &data_142d40450
else
    rdx_1 = rbx - 1
    r9 = rdi

uint64_t rcx_4

if (r9 == 0)
    rcx_4 = 0
else
    if (rdx_1 s> 0 && r9[sx.q(rdx_1) - 1] == 0)
        rdx_1 -= 1
    
    if (rdx_1 != 0xffffffff)
        rcx_4 = zx.q(rdx_1)
    else
        rcx_4 = -1
        
        do
            rcx_4 += 1
        while (r9[rcx_4] != 0)

int64_t result = (*(*arg1 + 0x150))(arg1, r9, sx.q(rcx_4.d) * 2)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
