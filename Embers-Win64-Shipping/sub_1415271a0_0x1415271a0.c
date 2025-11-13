// 函数: sub_1415271a0
// 地址: 0x1415271a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141527310(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
int32_t* rdi = *(*(arg1 + 0xa0) + 0x18)
*rdi = 0xfffffffb
rdi[3] = 0xfffffffb
rdi[6] = 0xfffffffb
rdi[0xf] = 0xfffffffa
rdi[0x12] = 0xfffffffa
rdi[0x15] = 0xfffffffa
*(rdi + 4) = -3
rdi[4] = 0xfffffffe
rdi[5] = 0xfffffffd
rdi[7] = 0xffffffff
__builtin_memcpy(&rdi[8], 
    "\xfc\xff\xff\xff\xfb\xff\xff\xff\xfc\xff\xff\xff\xfe\xff\xff\xff\xfa\xff\xff\xff", 0x14)
rdi[0xd] = 0xffffffff
rdi[0xe] = 0xfffffffd
rdi[0x10] = 0xfffffffd
rdi[0x11] = 0xfffffffe
*(rdi + 0x4c) = -4
rdi[0x16] = 0xfffffffe
rdi[0x17] = 0xfffffffc
**(arg1 + 0xa8) = rdi
*(*(arg1 + 0xa8) + 8) = &rdi[3]
*(*(arg1 + 0xa8) + 0x10) = &rdi[6]
*(*(arg1 + 0xa8) + 0x18) = &rdi[9]
*(*(arg1 + 0xa8) + 0x20) = &rdi[0xc]
*(*(arg1 + 0xa8) + 0x28) = &rdi[0xf]
*(*(arg1 + 0xa8) + 0x30) = &rdi[0x12]
void* result = *(arg1 + 0xa8)
*(result + 0x38) = &rdi[0x15]
return result
