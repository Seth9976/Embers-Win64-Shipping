// 函数: sub_142388e00
// 地址: 0x142388e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x88]

if (rax != 0)
    int64_t* rdx_1 = *(rax + 0x50)
    
    if (rdx_1 != 0)
        int32_t rcx = rdx_1[1].d
        
        if (rcx != 0)
            int32_t r8_1 = *(rax + 0x60)
            int32_t rcx_1 = rcx - 1
            
            if (r8_1 s< 0)
                rcx_1 = 0
            else if (r8_1 s< rcx_1)
                rcx_1 = r8_1
            
            if (*(*(*rdx_1 + (sx.q(rcx_1) << 3)) + 0xec) != 0)
                void*** rax_2 = j_sub_140a82f30(0x640)
                
                if (rax_2 == 0)
                    return nullptr
                
                return sub_14237f650(rax_2, arg1, 0)

return 0
