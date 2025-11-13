// 函数: sub_142a34cf0
// 地址: 0x142a34cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t count = arg2 * 2
int16_t rsi = -1
memset(arg6, 0, count)
uint64_t rdx = memset(arg7, 0, count)

if (arg3 == 0)
    int32_t r9_1 = 0
    
    if (arg2 s> 0)
        int16_t* r11_1 = arg10
        
        do
            int64_t r8_2 = sx.q(*r11_1)
            int64_t rbx = r8_2 * 2
            int32_t rcx_2 = sx.d(*(rbx + arg1))
            int32_t r10_2 = rcx_2 s>> 0x1f
            int32_t rax_3 = (r10_2 ^ rcx_2) - r10_2
            rdx = zx.q((sbb.q(rdx, rdx, r8_2.d != 0)).d) & 2
            
            if (rax_3 s>= sx.d(*(rdx + arg8)) s>> 2)
                int32_t rax_4 = rax_3 + ((sx.d(*(rdx + arg4)) + 1) s>> 1)
                
                if (rax_4 s< 0xffff8000)
                    rax_4 = -0x8000
                else if (rax_4 s> 0x7fff)
                    rax_4 = 0x7fff
                
                void* rcx_9
                rcx_9.b = r8_2.d != 0
                void* rdx_2 = rcx_9 * 2
                int32_t r8_5 = (sx.d(*(rdx_2 + arg5)) * rax_4) s>> 0xf
                int16_t rcx_11 = (r10_2.w ^ r8_5.w) - r10_2.w
                *(rbx + arg6) = rcx_11
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(sx.d(*(rdx_2 + arg8)) * sx.d(rcx_11))
                rdx = zx.q(temp1_1)
                *(rbx + arg7) = ((temp2_1 - rdx.d) s>> 1).w
                
                if (r8_5 != 0)
                    rsi = r9_1.w
            
            r9_1 += 1
            r11_1 = &r11_1[1]
        while (sx.q(r9_1) s< arg2)

*arg9 = rsi + 1
return arg9
