// 函数: sub_141910930
// 地址: 0x141910930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x14e40) == arg2)
    *(arg1 + 0x14e40) = 0xffffffff

if (*(arg1 + 0x156d8) == arg2)
    *(arg1 + 0x156d8) = 0xffffffff

if (*(arg1 + 0x14ea4) == arg2)
    *(arg1 + 0x14e98) = 0xffffffff

if (*(arg1 + 0x1573c) == arg2)
    *(arg1 + 0x15730) = 0xffffffff

if (*(arg1 + 0x14ecc) == arg2)
    *(arg1 + 0x14ec0) = 0xffffffff

if (*(arg1 + 0x15764) == arg2)
    *(arg1 + 0x15758) = 0xffffffff

if (*(arg1 + 0x14ef4) == arg2)
    *(arg1 + 0x14ee8) = 0xffffffff

if (*(arg1 + 0x1578c) == arg2)
    *(arg1 + 0x15780) = 0xffffffff

if (*(arg1 + 0x14f1c) == arg2)
    *(arg1 + 0x14f10) = 0xffffffff

if (*(arg1 + 0x157b4) == arg2)
    *(arg1 + 0x157a8) = 0xffffffff

if (*(arg1 + 0x14f44) == arg2)
    *(arg1 + 0x14f38) = 0xffffffff

if (*(arg1 + 0x157dc) == arg2)
    *(arg1 + 0x157d0) = 0xffffffff

if (*(arg1 + 0x14f6c) == arg2)
    *(arg1 + 0x14f60) = 0xffffffff

if (*(arg1 + 0x15804) == arg2)
    *(arg1 + 0x157f8) = 0xffffffff

if (*(arg1 + 0x14f94) == arg2)
    *(arg1 + 0x14f88) = 0xffffffff

if (*(arg1 + 0x1582c) == arg2)
    *(arg1 + 0x15820) = 0xffffffff

if (*(arg1 + 0x14fbc) == arg2)
    *(arg1 + 0x14fb0) = 0xffffffff

if (*(arg1 + 0x15854) == arg2)
    *(arg1 + 0x15848) = 0xffffffff

if (*(arg1 + 0x14fe4) == arg2)
    *(arg1 + 0x14fd8) = 0xffffffff

if (*(arg1 + 0x1587c) == arg2)
    *(arg1 + 0x15870) = 0xffffffff

if (*(arg1 + 0x1500c) == arg2)
    *(arg1 + 0x15000) = 0xffffffff

if (*(arg1 + 0x158a4) == arg2)
    *(arg1 + 0x15898) = 0xffffffff

if (*(arg1 + 0x15034) == arg2)
    *(arg1 + 0x15028) = 0xffffffff

if (*(arg1 + 0x158cc) == arg2)
    *(arg1 + 0x158c0) = 0xffffffff

if (*(arg1 + 0x1505c) == arg2)
    *(arg1 + 0x15050) = 0xffffffff

if (*(arg1 + 0x158f4) == arg2)
    *(arg1 + 0x158e8) = 0xffffffff

if (*(arg1 + 0x15084) == arg2)
    *(arg1 + 0x15078) = 0xffffffff

if (*(arg1 + 0x1591c) == arg2)
    *(arg1 + 0x15910) = 0xffffffff

if (*(arg1 + 0x150ac) == arg2)
    *(arg1 + 0x150a0) = 0xffffffff

if (*(arg1 + 0x15944) == arg2)
    *(arg1 + 0x15938) = 0xffffffff

if (*(arg1 + 0x150d4) == arg2)
    *(arg1 + 0x150c8) = 0xffffffff

if (*(arg1 + 0x1596c) == arg2)
    *(arg1 + 0x15960) = 0xffffffff

if (*(arg1 + 0x150fc) == arg2)
    *(arg1 + 0x150f0) = 0xffffffff

if (*(arg1 + 0x15994) == arg2)
    *(arg1 + 0x15988) = 0xffffffff

void* rdi = arg1 + 0x159b0
void* result

for (int32_t i = 0; i u< 0x10; )
    void* rax_1 = *(rdi - 0x898)
    
    if (rax_1 != 0 && *(rax_1 + 0x28) == arg2)
        data_143f00318(zx.q(i), 0, 0, 0)
        *(rdi - 0x898) = 0
    
    result = *rdi
    
    if (result != 0 && *(result + 0x28) == arg2)
        result = data_143f00318(zx.q(i), 0, 0, 0)
        *rdi = 0
    
    i += 1
    rdi += 0x18

return result
