// 函数: sub_142c1f0f0
// 地址: 0x142c1f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
uint32_t r10_1 = zx.d(*(arg1 + 6)) << 8
int32_t rax_1 = zx.d(*(arg1 + 7)) - 1
int32_t r10_2 = r10_1 + rax_1
void* r8_1

if (r10_1 + rax_1 s< 0)
label_142c1f1aa:
    r8_1 = &data_14369a5d0
else
    while (true)
        uint64_t rax_3 = zx.q((r10_2 + r11) u>> 1)
        uint64_t r9_1 = zx.q(rax_3.d)
        uint64_t rax_4 = rax_3 * 3
        void* rbx_1 = arg1 + 0xe + (rax_4 << 1)
        uint32_t rcx = zx.d(zx.w(*(arg1 + 0xe + (rax_4 << 1))) * 0x100
            + zx.w(*(arg1 + 0xe + (rax_4 << 1) + 1)))
        int32_t rax_6
        bool cond:1_1
        
        if (arg2 u>= rcx)
            rax_6.b = arg2 != rcx
            cond:1_1 = rax_6 s>= 0
            
            if (rax_6 == 0)
                uint32_t rcx_1 = zx.d(zx.w(*(rbx_1 + 3)) + zx.w(*(rbx_1 + 2)) * 0x100)
                
                if (arg3 u>= rcx_1)
                    rax_6.b = arg3 != rcx_1
                else
                    rax_6 = -1
                
                cond:1_1 = rax_6 s>= 0
        else
            rax_6 = -1
            cond:1_1 = rax_6 s>= 0
        
        if (cond:1_1)
            if (rax_6 s<= 0)
                r8_1 = arg1 + 0xe + r9_1 * 6
                break
            
            r11 = (r9_1 + 1).d
        else
            r10_2 = (r9_1 - 1).d
        
        if (r11 s> r10_2)
            goto label_142c1f1aa

return zx.q(sx.d(zx.w(*(r8_1 + 5)) + zx.w(*(r8_1 + 4)) * 0x100))
