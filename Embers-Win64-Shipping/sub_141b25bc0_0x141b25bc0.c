// 函数: sub_141b25bc0
// 地址: 0x141b25bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a53e40(arg1, arg2, arg3, arg4, arg5)
void var_78
__FrameHandler3::TryBlockMap::TryBlockMap(&var_78, &arg1[0x23], &arg1[0x28])
int32_t var_50 = 0
char var_4c = 0
int16_t var_48 = 2
char var_46 = 0
int64_t r14 = sx.q(sub_141a4b2f0(&var_78, arg3, 0))

if (r14.d == 0xffffffff)
    r14 = sx.q(sub_141a376d0(&var_78, arg3))
    int32_t r15_1 = arg1[0x26].d
    arg1[0x26].d = r15_1 + 1
    
    if (r15_1 + 1 s> *(arg1 + 0x134))
        sub_1405c50f0(&arg1[0x25])
    
    int64_t rdi_1 = r14 * 0x1c
    int64_t rdx_6 = arg1[0x25] + rdi_1
    memmove(rdx_6 + 0x1c, rdx_6, (r15_1 - r14.d) * 0x1c)
    int128_t* rcx_7 = arg1[0x25]
    *(rcx_7 + rdi_1) = zx.o(0)
    *(rcx_7 + rdi_1 + 0x10) = var_50.q
    *(rcx_7 + rdi_1 + 0x18) = var_48.d
else
    int128_t* r8_1 = r14 * 0x1c
    int64_t rdx_2 = arg1[0x25]
    *(r8_1 + rdx_2) = zx.o(0)
    *(r8_1 + rdx_2 + 0x10) = var_50.q
    *(r8_1 + rdx_2 + 0x18) = var_48.d

void arg_20
int32_t* result = sub_141a50d30(&var_78, &arg_20, r14.d)

if (arg4 s<= 0)
    return result

int128_t zmm6 = data_142d4cc00
int32_t rbx_1 = arg3 + arg4
int32_t var_50_1 = 0
char var_4c_1 = 0
int16_t var_48_1 = 2
char var_46_1 = 0
int64_t rdi_2 = sx.q(sub_141a4b2f0(&var_78, rbx_1, 0))

if (rdi_2.d == 0xffffffff)
    rdi_2 = sx.q(sub_141a376d0(&var_78, rbx_1))
    int32_t r14_1 = arg1[0x26].d
    arg1[0x26].d = r14_1 + 1
    
    if (r14_1 + 1 s> *(arg1 + 0x134))
        sub_1405c50f0(&arg1[0x25])
    
    int128_t* rbx_2 = rdi_2 * 0x1c
    void* rdx_13 = arg1[0x25] + rbx_2
    memmove(rdx_13 + 0x1c, rdx_13, (r14_1 - rdi_2.d) * 0x1c)
    int64_t rcx_15 = arg1[0x25]
    *(rbx_2 + rcx_15) = zmm6
    *(rbx_2 + rcx_15 + 0x10) = var_50_1.q
    *(rbx_2 + rcx_15 + 0x18) = var_48_1.d
else
    int128_t* r8_4 = rdi_2 * 0x1c
    int64_t rdx_9 = arg1[0x25]
    *(r8_4 + rdx_9) = zmm6
    *(r8_4 + rdx_9 + 0x10) = var_50_1.q
    *(r8_4 + rdx_9 + 0x18) = var_48_1.d

return sub_141a50d30(&var_78, &arg_20, rdi_2.d)
