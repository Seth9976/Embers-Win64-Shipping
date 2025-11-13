// 函数: sub_14193a900
// 地址: 0x14193a900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_14193dd60(arg3)
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    rbx_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_14193a9ab:
    *arg2 = 0xffffffff
else
    int64_t rbp_1 = *arg1
    
    while (true)
        void* buffer1 = sx.q(rbx_1) * 0xe0 + rbp_1
        
        if (memcmp(buffer1, arg3, 0xc0) == 0 && *(buffer1 + 0xc0) == *(arg3 + 0xc0)
                && *(buffer1 + 0xc8) == *(arg3 + 0xc8))
            *arg2 = rbx_1
            break
        
        rbx_1 = *(buffer1 + 0xd8)
        
        if (rbx_1 == 0xffffffff)
            goto label_14193a9ab

return arg2
