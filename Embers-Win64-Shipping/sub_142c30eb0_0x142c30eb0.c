// 函数: sub_142c30eb0
// 地址: 0x142c30eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint32_t r11_3 =
    (zx.d(*(arg1 + 0xd)) << 0x10) + (zx.d(*(arg1 + 0xe)) << 8) + (zx.d(*(arg1 + 0xc)) << 0x18)
int32_t rax_5 = zx.d(*(arg1 + 0xf)) - 1
int32_t r11_4 = r11_3 + rax_5
void* r8_1

if (r11_3 + rax_5 s< 0)
label_142c30f9b:
    r8_1 = &data_14369a5d0
else
    while (true)
        uint64_t rax_7 = zx.q((r11_4 + rbx) u>> 1)
        uint64_t r9 = zx.q(rax_7.d)
        void* r10_2 = rax_7 * 6 + arg1
        uint32_t rcx = zx.d(zx.w(*(r10_2 + 0x1c)) * 0x100 + zx.w(*(r10_2 + 0x1d)))
        int32_t rax_10
        bool cond:0_1
        
        if (arg2 u>= rcx)
            rax_10.b = arg2 != rcx
            cond:0_1 = rax_10 s>= 0
            
            if (rax_10 == 0)
                uint32_t rcx_1 = zx.d(zx.w(*(r10_2 + 0x1f)) + zx.w(*(r10_2 + 0x1e)) * 0x100)
                
                if (arg3 u>= rcx_1)
                    rax_10.b = arg3 != rcx_1
                else
                    rax_10 = -1
                
                cond:0_1 = rax_10 s>= 0
        else
            rax_10 = -1
            cond:0_1 = rax_10 s>= 0
        
        if (cond:0_1)
            if (rax_10 s<= 0)
                r8_1 = arg1 + 0x1c + r9 * 6
                break
            
            rbx = (r9 + 1).d
        else
            r11_4 = (r9 - 1).d
        
        if (rbx s> r11_4)
            goto label_142c30f9b

int32_t rcx_2 = sx.d(zx.w(*(r8_1 + 4)) * 0x100 + zx.w(*(r8_1 + 5)))
uint32_t r8_5 =
    (zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8) + (zx.d(*(arg1 + 8)) << 0x18)
uint32_t rax_16 = zx.d(*(arg1 + 0xb))
uint32_t r8_6 = r8_5 + rax_16

if (r8_5 == neg.d(rax_16) || arg4 == 0)
    return zx.q(rcx_2)

void* rbx_2 = zx.q(rcx_2) + arg1

if (r8_6 u< 0x7fffffff && sub_142bf7510(arg4 + 0x20, rbx_2, r8_6 * 2) != 0)
    return zx.q(sx.d(zx.w(*(rbx_2 + 1)) + zx.w(*rbx_2) * 0x100))

return 0
