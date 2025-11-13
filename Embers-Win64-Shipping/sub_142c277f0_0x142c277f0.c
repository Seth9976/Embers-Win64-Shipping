// 函数: sub_142c277f0
// 地址: 0x142c277f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142c29560(arg1, arg2)

if (rax == 0)
    return rax

int32_t rdi = 0
uint32_t rcx_1 = zx.d(sub_142c21bd0(arg1))
uint32_t rsi_2 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
uint32_t rax_2

if (rsi_2 == rcx_1)
label_142c27938:
    rax_2.b = 1
else
    while (true)
        int32_t rdx_5
        
        if (zx.w(arg1[2]) * 0x100 == neg.w(zx.w(arg1[3])))
        label_142c278ef:
            rdx_5 = 0
        else
            int32_t i = 0
            void* rax_9 = zx.q((zx.d(arg1[1]) + (zx.d(*arg1) << 8))
                * (zx.d(arg1[3]) - 1 + (zx.d(arg1[2]) << 8))) + 0xa + arg1
            
            do
                if (zx.w(*(rax_9 + 1)) + zx.w(*rax_9) * 0x100 != 0xffff)
                    goto label_142c278ef
                
                i += 1
                rax_9 += 2
            while (i u< 2)
            
            rdx_5 = 1
        
        char* rcx_10
        
        if (rdi u< (zx.d(arg1[2]) << 8) + zx.d(arg1[3]) - rdx_5)
            rcx_10 = &arg1[0xa + zx.q((zx.d(arg1[1]) + (zx.d(*arg1) << 8)) * rdi)]
        else
            rcx_10 = &data_14369a5d0
        
        if (sub_142c25760(rcx_10, arg2, arg3).b == 0)
            rax_2.b = 0
            break
        
        rdi += 1
        
        if (rdi u>= rsi_2 - rcx_1)
            goto label_142c27938

return rax_2
