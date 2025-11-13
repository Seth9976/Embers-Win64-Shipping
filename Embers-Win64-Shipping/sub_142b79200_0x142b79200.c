// 函数: sub_142b79200
// 地址: 0x142b79200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = *arg1
int64_t r8_1 = sx.q(arg3 + 1)
int32_t rcx = *(rax_3 + (r8_1 << 2))
void* rax = rax_3 + (r8_1 << 2)

if (rcx.b s< 0)
    do
        rcx = *(rax + 4)
        rax += 4
    while (rcx.b s< 0)
else
    int32_t r8_3 = rcx & 0x7f
    
    if (r8_3 != 0)
        if (arg2.w != 0)
            return sub_142b2c310(arg2, arg4, r8_3) __tailcall
        
        uint32_t rax_6 = zx.d((arg2 u>> 0x10).b)
        
        if (arg4 == 0)
            int32_t r8_11 = r8_3 - 2 + rax_6
            return zx.q((arg2 & 0xff000000) + ((r8_11 s/ 0xfe) << 0x18))
                | zx.q((r8_11 s% 0xfe + 2) << 0x10)
        
        int32_t r8_6 = r8_3 - 4 + rax_6
        return zx.q((arg2 & 0xff000000) + ((r8_6 s/ 0xfb) << 0x18))
            | zx.q((r8_6 s% 0xfb + 4) << 0x10)

return zx.q(rcx)
