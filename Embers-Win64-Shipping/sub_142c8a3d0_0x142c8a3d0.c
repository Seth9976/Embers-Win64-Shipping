// 函数: sub_142c8a3d0
// 地址: 0x142c8a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg4
uint64_t rsi_1 = arg2 * arg3
void* rdi = nullptr

if (rax != 0)
    if (*(rax + 8) - 3 u> 1)
    label_142c8a430:
        
        while (true)
            void* rcx_1 = *arg4
            int64_t rdx_1 = arg4[1]
            void* rax_4 = rsi_1 - rdi
            int64_t r8_2 = *(rcx_1 + 0x18) - rdx_1
            
            if (r8_2 u> rax_4)
                memcpy(rdi + arg1, *(rcx_1 + 0x10) + arg4[1], rax_4.d)
                rax = rsi_1
                arg4[1] += rsi_1 - rdi
                break
            
            memcpy(rdi + arg1, rdx_1 + *(rcx_1 + 0x10), r8_2.d)
            int64_t* rcx_3 = *arg4
            rdi += rcx_3[3] - arg4[1]
            arg4[1] = 0
            void* rax_7 = *rcx_3
            *arg4 = rax_7
            
            if (rax_7 != 0 && *(rax_7 + 8) s< 3)
                continue
            
            return rdi
    else
        rax = sub_142c8ae60(arg4, arg1, rsi_1, arg5)
        rdi = rax
        
        if (rax == 0)
            goto label_142c8a430

return rax
