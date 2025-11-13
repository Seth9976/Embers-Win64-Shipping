// 函数: sub_1423640d0
// 地址: 0x1423640d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 0x204))
int64_t var_18 = 0
int32_t var_c = 0
int64_t* rcx = &var_18
int64_t rbx

if (r8.d != 0)
    sub_140a2e390(rcx, u"%d Channels", r8)
    rbx = var_18
else
    int32_t var_10_1 = 0
    sub_1405947f0(rcx, 0xc)
    
    if (var_10_1 + 0xc s> var_c)
        sub_140594770(&var_18)
    
    rbx = var_18
    __builtin_memcpy(rbx, u"Unconverted", 0x18)

sub_140a2e390(arg2, u"%3.2fs %s", _mm_cvtps_pd(*(arg1 + 0xf8)))

if (rbx != 0)
    sub_140a74f90(rbx)

return arg2
