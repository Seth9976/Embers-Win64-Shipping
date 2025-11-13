// 函数: sub_140cc1740
// 地址: 0x140cc1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_1

while (true)
    rcx_1 = sx.q(arg2) * 0x38 + *(arg1 + 8)
    
    if (*(rcx_1 + 0x28) != 0)
        int64_t rax_1
        rax_1.b = 0
        return rax_1
    
    int32_t rdx = rcx_1[2]
    
    if (rdx == 0)
        break
    
    arg2 = not.d(rdx)

int64_t var_18
int64_t* rax_2 = sub_140b63b70(rcx_1, &var_18)
int16_t* rbx

if (rax_2[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *rax_2

uint64_t rax_4 = sub_140d2ee50(sub_140cddea0(), nullptr, rbx, 0)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (rax_4 != 0 && *(rax_4 + 0x20) == 0 && ((*(rax_4 + 0x50) u>> 4).b & 1) != 0)
    rax_4.b = 1
    return rax_4

rax_4.b = 0
return rax_4
