// 函数: sub_142c807b0
// 地址: 0x142c807b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* rcx = *arg1
int32_t rdi = arg3.d

if (arg2 - 0xc8 u>= 0x64)
    sub_142c64760(rcx, "Couldn't set desired mode", arg3, arg4)
    return 0x11

if (arg2 != 0xc8)
    arg2, arg4 = sub_142c64850(rcx, "Got a %03d response code instead of the assumed 200\n", 
        zx.q(arg2), arg4)

if (rdi == 0x13)
    rbx = sub_142c804f0(arg1)
else if (rdi == 0x14)
    rbx = sub_142c7f3a0(arg1)
else
    int32_t r8_1
    
    if (rdi == 0x15)
        r8_1 = rdi - 8
    label_142c8083d:
        arg2.b = 1
        rbx = sub_142c80010(arg1, arg2.b, r8_1, arg4)
    else if (rdi == 0x16)
        r8_1 = rdi - 8
        goto label_142c8083d

return zx.q(rbx)
