// 函数: sub_142c2b4f0
// 地址: 0x142c2b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint32_t rbp_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
char rax_1 = sub_142c330c0(arg1)
uint32_t r9_3 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3]) - zx.d(rax_1)
int32_t r9_4 = r9_3 - 1

if (r9_3 - 1 s>= 0)
    int32_t r10_1 = *arg2
    
    do
        uint32_t r8_2 = (r9_4 + rbx) u>> 1
        uint64_t rax_4 = zx.q(r8_2 * rbp_2)
        uint32_t rcx = zx.d(zx.w(arg1[rax_4 + 0xa]) * 0x100 + zx.w(arg1[rax_4 + 0xb]))
        int32_t rax_6
        
        if (r10_1 u>= rcx)
            rax_6.b = r10_1 != rcx
        
        if (r10_1 u< rcx || rax_6 s< 0)
            r9_4 = r8_2 - 1
        else
            if (rax_6 s<= 0)
                return &arg1[0xa + zx.q(rax_4.d)]
            
            rbx = r8_2 + 1
    while (rbx s<= r9_4)

return nullptr
