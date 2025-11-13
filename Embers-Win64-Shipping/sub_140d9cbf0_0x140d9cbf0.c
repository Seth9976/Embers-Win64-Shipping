// 函数: sub_140d9cbf0
// 地址: 0x140d9cbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140dbbc40(arg1, 0)

if (arg1[3].d != 0)
    int32_t* r11_1 = arg1[2]
    rax = sx.q(arg1[3].d)
    void* rsi_1 = &r11_1[rax]
    
    if (r11_1 != rsi_1)
        int64_t* r8_1 = arg1[5]
        
        do
            int64_t rcx = sx.q(*r11_1)
            int32_t r10_1 = rol.d(1, rcx.b)
            
            if (*(r8_1 + 0x34) != 0)
                *((sx.q(r8_1[6].d) << 7) + *r8_1) = rcx.d
            
            int32_t* r9_3 = (rcx << 7) + *r8_1
            *r9_3 = 0xffffffff
            int32_t rax_2
            
            if (*(r8_1 + 0x34) s<= 0)
                rax_2 = -1
            else
                rax_2 = r8_1[6].d
            
            r9_3[1] = rax_2
            void* rdx_3 = &r8_1[2]
            *(r8_1 + 0x34) += 1
            r8_1[6].d = rcx.d
            void* rax_3 = r8_1[4]
            
            if (rax_3 != 0)
                rdx_3 = rax_3
            
            if (rcx.d s< 0)
                rcx = zx.q(rcx.d + 0x1f)
            
            rax = sx.q(rcx.d s>> 5)
            r11_1 = &r11_1[1]
            *(rdx_3 + (rax << 2)) &= not.d(r10_1)
        while (r11_1 != rsi_1)
    
    arg1[3].d = 0
    
    if (*(arg1 + 0x1c) s<= 0xffffffff)
        rax = sub_1405dadb0(&arg1[2], 0)

void* r8_2 = arg1[6]

if (r8_2 != 0)
    void* rcx_3 = data_143e20d08
    
    if (rcx_3 == 0)
        rax = sub_140d978f0(r8_2, 1)
    else
        int64_t* rcx_4 = *(rcx_3 + 0x20)
        
        if (rcx_4 != 0)
            int64_t rax_5 = (*(*rcx_4 + 0x158))(rcx_4, r8_2)
            arg1[6] = 0
            return rax_5
    
    arg1[6] = 0

return rax
