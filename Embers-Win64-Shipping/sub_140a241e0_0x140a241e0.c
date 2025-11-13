// 函数: sub_140a241e0
// 地址: 0x140a241e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg3)
char* rbx = arg2
*arg1 = 0
arg1[1] = 0
int32_t rdx = ((i_2 << 1) + 1).d

if (rdx s> 0)
    sub_1405947f0(arg1, rdx)

if (i_2.d != 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t var_18
        sub_140a2e390(&var_18, u"%02X", zx.q(*rbx))
        int32_t var_10
        int32_t r8_2
        
        if (var_10 == 0)
            r8_2 = 0
        else
            r8_2 = var_10 - 1
        
        int64_t rdi = var_18
        sub_140a20ba0(arg1, rdi, r8_2)
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
