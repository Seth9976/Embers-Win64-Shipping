// 函数: sub_1403e1e30
// 地址: 0x1403e1e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x17f0) = arg2[0xb]
int32_t rcx = 0
*(arg1 + 0x1264) = arg2[0xc]
int32_t rdx = arg2[2]
*(arg1 + 0x11e4) = rdx
*(arg1 + 0x11ec) = arg2[3]
*(arg1 + 0x11f0) = arg2[4]
*(arg1 + 0x11f4) = arg2[5]
*(arg1 + 0x17fc) = arg2[0xa]
*(arg1 + 0x16a8) = *arg2
int32_t rax_7 = arg2[1]
*(arg1 + 0x11d0) = arg4
*(arg1 + 0x16ac) = rax_7
*(arg1 + 0x16b0) = arg5

if (*(arg1 + 0x125c) != 0 && *(arg1 + 0x1268) == 0)
    if (rdx != *(arg1 + 0x11e8))
        int32_t rdx_1 = *(arg1 + 0x11f8)
        
        if (rdx_1 s> 0)
            rcx = sub_1403e2560(arg1, rdx_1)
    
    return zx.q(rcx)

int32_t rbx = sub_1403e7570(arg1, arg2)

if (arg6 != 0)
    rbx = arg6

int32_t rax_13 = sub_1403e2560(arg1, rbx)
int32_t rax_14 = sub_1403e2270(arg1, rbx, zx.q(arg2[6]))
sub_1403e2060(arg1, arg2[9])
*(arg1 + 0x1220) = arg2[8]
sub_1403e1f80(arg1, arg3)
*(arg1 + 0x125c) = 1
return zx.q(rax_13 + rax_14)
