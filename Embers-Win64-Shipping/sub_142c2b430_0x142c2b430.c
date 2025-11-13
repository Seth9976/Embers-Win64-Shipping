// 函数: sub_142c2b430
// 地址: 0x142c2b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint32_t rsi_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
char rax_1 = sub_142c21bd0(arg1)
uint32_t r9_3 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3]) - zx.d(rax_1)
int32_t r9_4 = r9_3 - 1

if (r9_3 - 1 s>= 0)
    int32_t r10_1 = *arg2
    
    do
        uint32_t rax_4 = (r9_4 + rbx) u>> 1
        void* r8_3 = &arg1[zx.q(rax_4 * rsi_2)]
        int32_t rcx_2
        
        if (r10_1 u>= (zx.d(*(r8_3 + 0xc)) << 8) + zx.d(*(r8_3 + 0xd)))
            rcx_2.b = r10_1 u> (zx.d(*(r8_3 + 0xa)) << 8) + zx.d(*(r8_3 + 0xb))
        
        if (r10_1 u< (zx.d(*(r8_3 + 0xc)) << 8) + zx.d(*(r8_3 + 0xd)) || rcx_2 s< 0)
            r9_4 = rax_4 - 1
        else
            if (rcx_2 s<= 0)
                return r8_3 + 0xa
            
            rbx = rax_4 + 1
    while (rbx s<= r9_4)

return nullptr
