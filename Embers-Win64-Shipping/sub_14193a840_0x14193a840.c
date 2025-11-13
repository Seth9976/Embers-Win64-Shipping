// 函数: sub_14193a840
// 地址: 0x14193a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140b212b0(arg3, data_143eff930, 0)
    void* r8 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8 != 0)
        r9_1 = r8
    
    rbx_1 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_14193a8d8:
    *arg2 = 0xffffffff
else
    int64_t r14_1 = *arg1
    uint64_t count = zx.q(data_143eff930)
    
    while (true)
        void* buffer1 = sx.q(rbx_1) * 0x30 + r14_1
        
        if (memcmp(buffer1, arg3, count) == 0)
            *arg2 = rbx_1
            break
        
        rbx_1 = *(buffer1 + 0x28)
        
        if (rbx_1 == 0xffffffff)
            goto label_14193a8d8

return arg2
