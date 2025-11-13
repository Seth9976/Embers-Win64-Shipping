// 函数: sub_1427f5be0
// 地址: 0x1427f5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = 0
uint64_t rcx

if (*(arg1 + 0x24) == 0)
    *arg3 = 0
label_1427f5c62:
    
    if (*(arg1 + 0x34) == arg1[4].d)
        int32_t rax_5 = *(arg1 + 0x24)
        int32_t rdx = 0x10
        
        if (rax_5 != 0)
            rdx = rax_5 * 2
        
        if (rdx u> rax_5)
            sub_1427cdca0(arg1, rdx)
        
        r11 = zx.q(sub_1427f5dc0(arg1, arg2))
    
    uint64_t r9_3 = zx.q(*(arg1 + 0x2c))
    int64_t rcx_3 = arg1[2]
    *(arg1 + 0x2c) = (r9_3 + 1).d
    uint64_t rdx_2 = zx.q(r11.d) << 2
    *(rcx_3 + (r9_3 << 2)) = *(rdx_2 + arg1[3])
    rcx = r9_3 * 3
    *(rdx_2 + arg1[3]) = r9_3.d
    *(arg1 + 0x34) += 1
    arg1[6].d += 1
else
    r11 = zx.q(sub_1427f5dc0(arg1, arg2).d)
    int32_t i = *(arg1[3] + (r11 << 2))
    bool cond:0_1 = i != 0xffffffff
    
    if (i != 0xffffffff)
        int64_t r9_2 = arg1[1]
        
        do
            uint64_t i_1 = zx.q(i)
            uint64_t rax_2 = i_1 * 3
            
            if (*(r9_2 + (rax_2 << 3)) == *arg2 && *(r9_2 + (rax_2 << 3) + 8) == arg2[1].d)
                break
            
            i = *(arg1[2] + (i_1 << 2))
        while (i != 0xffffffff)
        
        cond:0_1 = i != 0xffffffff
    
    uint64_t rax_1
    rax_1.b = cond:0_1
    *arg3 = rax_1.b
    
    if (rax_1.b == 0)
        goto label_1427f5c62
    
    rcx = zx.q(i) * 3

return arg1[1] + (rcx << 3)
