// 函数: sub_14102a690
// 地址: 0x14102a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbp = nullptr
int32_t rsi = 1 << (data_1439c7a34).b
void*** r14 = nullptr
int32_t i_1 = rsi - 1
int64_t r13 = **(arg1 + 0x20)
int32_t i_2 = i_1

if (rsi == 1)
    *arg2 = 0
    return arg2

uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_forward(i_1)
int32_t rdi = temp0_1
int32_t arg_20 = rdi
int32_t i

do
    int64_t r15_1 = *(r13 + (zx.q(rdi) << 3) + 0x9d8)
    void*** rax_3 = j_sub_140a82f30(0x68)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = &data_142d3ff08
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0
        rbx_1[2].w = 0x100
        rbx_1[3] = r15_1
        rbx_1[4] = 0
        rbx_1[5].b = 1
        *rbx_1 = &data_142efcdf0
        __builtin_memset(&rbx_1[6], 0, 0x14)
        rbx_1[9].d = arg3
        rbx_1[0xa] = &data_142efcd90
        rbx_1[0xb] = 0
        rbx_1[0xc] = 0
        *(rbx_1 + 0x4c) &= 0xfc
        *(rbx_1 + 0x44) = 0xffffffff
    
    if (r14 != 0)
        sub_1405d16e0(&r14[4], rbx_1)
        
        if (rbx_1 != 0)
            rbx_1[5].b = 0
    else
        rbp = rbx_1
    
    r14 = rbx_1
    i = not.d(1 << rdi.b) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(i)
        rdi = temp0_2
        int32_t arg_18 = rdi
    else
        rdi = 0x20
while (i != 0)
*arg2 = rbp

if (rbp != 0)
    rbp[1].d += 1

return arg2
