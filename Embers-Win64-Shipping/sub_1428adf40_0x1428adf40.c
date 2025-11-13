// 函数: sub_1428adf40
// 地址: 0x1428adf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 - 2 u> 0xfffd)
    sub_1428a5670(0x32, 0x6f, 0x69, "crypto\ct\ct_oct.c", 0x108)
    return 0

char* r9 = *arg2
uint64_t rbx_2 = zx.q(*r9) << 8 | zx.q(r9[1])
*arg2 = &r9[2]

if (rbx_2 != arg3 - 2)
    sub_1428a5670(0x32, 0x6f, 0x69, "crypto\ct\ct_oct.c", 0x10e)
    return 0

int32_t* rdi_1

if (arg1 != 0)
    rdi_1 = *arg1

if (arg1 == 0 || rdi_1 == 0)
    int32_t* rax_9 = sub_142898ba0()
    rdi_1 = rax_9
    
    if (rax_9 == 0)
        return rax_9
else
    for (void* i = sub_142898c80(rdi_1); i != 0; i = sub_142898c80(rdi_1))
        sub_1428ad420(i)

if (rbx_2 != 0)
    while (true)
        if (rbx_2 u< 2)
            sub_1428a5670(0x32, 0x6f, 0x69, "crypto\ct\ct_oct.c", 0x123)
        else
            char* rcx_3 = *arg2
            uint64_t r8_2 = zx.q(*rcx_3) << 8 | zx.q(rcx_3[1])
            *arg2 = &rcx_3[2]
            
            if (r8_2 == 0 || r8_2 u> rbx_2 - 2)
                sub_1428a5670(0x32, 0x6f, 0x69, "crypto\ct\ct_oct.c", 0x12a)
            else
                rbx_2 = rbx_2 - 2 - r8_2
                int32_t* rax_7 = sub_1428adc50(nullptr, arg2, r8_2)
                
                if (rax_7 != 0)
                    if (sub_142898d50(rdi_1, rax_7) == 0)
                        sub_1428ad420(rax_7)
                    else
                        if (rbx_2 == 0)
                            break
                        
                        continue
        
        if (arg1 == 0 || *arg1 == 0)
            sub_1428ad210(rdi_1)
        
        return nullptr

if (arg1 != 0 && *arg1 == 0)
    *arg1 = rdi_1

return rdi_1
