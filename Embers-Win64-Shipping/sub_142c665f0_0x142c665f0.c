// 函数: sub_142c665f0
// 地址: 0x142c665f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*arg1)
uint32_t rcx
void* rdx

if (rax == 2)
    rdx = &arg1[2]
    rcx = 2
label_142c6662f:
    
    if (sub_142c71770(rcx, rdx, arg2, 0x2e, arg4) != 0)
        *arg3 = zx.d(ntohs(arg1[1]))
        uint32_t rax_3
        rax_3.b = 1
        return rax_3
else if (rax == 0x17)
    rdx = &arg1[4]
    rcx = rax
    goto label_142c6662f
*arg2 = 0
*arg3 = 0
*_errno() = 0x273f
int32_t* rax_4
rax_4.b = 0
return rax_4
