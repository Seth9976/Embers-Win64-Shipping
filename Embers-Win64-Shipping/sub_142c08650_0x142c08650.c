// 函数: sub_142c08650
// 地址: 0x142c08650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[3]
j_sub_142c19240(arg1[1], rdi)

if ((*(*arg1 + 0xb8) & 0x20) != 0)
    void* rax_1 = arg1[3]
    int32_t i_2 = *(rax_1 + 0x60)
    
    if (i_2 != 0)
        char* rcx_2 = *(rax_1 + 0x70) + 0xc
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            char rdx_1 = (*(rcx_2 + 4)).b
            int16_t rax_4
            
            if ((rdx_1 & 0x1f) != 0xc || ((rdx_1 & 0x20) != 0 && (*rcx_2 u>> 5 & 1) == 0))
                rax_4 = 2
            else
                rax_4 = 8
            
            *rcx_2 = rax_4
            rcx_2 = &rcx_2[0x14]
            i = i_1
            i_1 -= 1
        while (i != 1)

void* rax_5 = *arg1
void* rdx_2 = arg1[1]

if ((*(rax_5 + 0xb9) & 8) == 0)
    return sub_142c29a40(rax_5 + 0x28, rax_5, rdx_2, rdi) __tailcall

return sub_142c32470(rax_5, rdx_2, rdi) __tailcall
