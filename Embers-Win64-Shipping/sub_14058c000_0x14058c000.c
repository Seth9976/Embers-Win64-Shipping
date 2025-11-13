// 函数: sub_14058c000
// 地址: 0x14058c000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[2]

if (rsi u> arg2)
    return 

int64_t rax = arg1[3]

if (rax == arg2)
    return 

if (rax u< arg2)
    sub_14058c390(arg1, arg2 - rsi)
    arg1[2] = rsi
    return 

if (arg2 u>= 0x10 || rax u< 0x10)
    return 

void* rbx_1 = *arg1
memcpy(arg1, rbx_1, rsi.d + 1)

if (arg1[3] + 1 u>= 0x1000)
    void* rcx = *(rbx_1 - 8)
    
    if (rbx_1 - rcx - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx_1 = rcx

j_sub_140a74f90(rbx_1)
arg1[3] = 0xf
