// 函数: sub_1421f5160
// 地址: 0x1421f5160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(data_143a2ef90)

if (rax.d != *(arg1 + 0x78))
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    *(arg1 + 0x78) = rax.d
    int32_t var_18_1 = 0xffffffff
    sub_140d3cc80(sub_14255cbc0(), &var_28, 1, 0x10, 0)
    int32_t rdx_2 = var_20_1
    int32_t i = var_18_1 + 1
    int64_t r8_2 = var_28
    int32_t i_2 = i
    
    if (i s< rdx_2)
        while (*(r8_2 + (sx.q(i) << 3)) == 0)
            int32_t i_3 = i + 1
            i_2 = i_3
            i = i_3
            
            if (i_3 s>= rdx_2)
                break
    
    while (i s>= 0)
        if (i s>= rdx_2)
            break
        
        int64_t* rbx_1 = *(r8_2 + (sx.q(i) << 3))
        void* rax_4 = rbx_1[0x15]
        
        if (rax_4 == 0)
            rax_4 = sub_141ee69e0(rbx_1)
            i = i_2
            rdx_2 = var_20_1
            r8_2 = var_28
        
        if (rax_4 == *(arg1 + 0x10))
            char rax_6
            int64_t rdx_3
            rax_6, rdx_3 = (*(*rbx_1 + 0x350))(rbx_1)
            
            if (rax_6 != 0)
                rdx_3.b = 1
                (*(*rbx_1 + 0x340))(rbx_1, rdx_3)
            
            r8_2 = var_28
            rdx_2 = var_20_1
            i = i_2
        
        int32_t i_4 = i + 1
        i_2 = i_4
        i = i_4
        
        if (i_4 s< rdx_2)
            while (*(r8_2 + (sx.q(i) << 3)) == 0)
                int32_t i_5 = i + 1
                i_2 = i_5
                i = i_5
                
                if (i_5 s>= rdx_2)
                    break
    
    if (r8_2 != 0)
        sub_140a74f90(r8_2)
    
    rax = sx.q(*(arg1 + 0x20))
    void* i_1 = *(arg1 + 0x18)
    uint64_t rdi_1 = rax * 3
    
    if (*(arg1 + 0x78) == 0)
        for (void* rdi_5 = (rdi_1 << 4) + i_1; i_1 != rdi_5; i_1 += 0x30)
            rdx_2.b = *(i_1 + 8) == 0
            rax, rdx_2 = sub_1423c9cb0(i_1, rdx_2.b)
    else
        void* rdi_3 = (rdi_1 << 4) + i_1
        
        if (i_1 != rdi_3)
            int64_t rax_9
            
            do
                rdx_2.b = 1
                rax_9, rdx_2 = sub_1423c9cb0(i_1, rdx_2.b)
                i_1 += 0x30
            while (i_1 != rdi_3)
            
            return rax_9

return rax
