// 函数: sub_141ea4e00
// 地址: 0x141ea4e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* i = arg1

do
    int64_t* rcx = *i
    uint32_t count = *(rcx + 0x3c)
    int64_t r8_1 = sx.q(i[1].d * count) + sx.q(*(rcx + 0x4c))
    void** r10_1 = r8_1 + arg3
    void** r11_1 = r8_1 + arg4
    
    if (rcx == 0)
    label_141ea4e99:
        
        if (r10_1 != r11_1)
            if (not(test_bit(zx.q(rcx[8].d), 0x1e)))
                (*(*rcx + 0xb0))(rcx, r10_1, r11_1, 1)
            else
                memcpy(r10_1, r11_1, count)
    else if (((zx.q(*(rcx[1] + 0x10)) u>> 0x14).b & 1) == 0)
        if (rcx == 0 || ((zx.q(*(rcx[1] + 0x10)) u>> 0x15).b & 1) == 0)
            goto label_141ea4e99
        
        sub_141ea4c10(rcx, i[2], r10_1, r11_1)
    else
        uint64_t rax = i[2]
        
        if (rax == 0)
            goto label_141ea4e99
        
        sub_141ea4e00(rax, rcx[0xf], r10_1, r11_1)
    
    i = i[3]
while (i != 0)
