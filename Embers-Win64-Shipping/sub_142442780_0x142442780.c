// 函数: sub_142442780
// 地址: 0x142442780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1
int32_t r13 = data_14399fa54
int32_t rdi = sx.d(*(result + 0x78))

if (rdi != 1)
    int32_t i
    
    do
        int64_t r15_2 = sx.q(rdi) << 6
        int64_t* rbx_2 = *arg1 + r15_2
        result = zx.q(r13 - rbx_2[6].d)
        i = sx.d(rbx_2[7].w)
        
        if (result.d u< data_143a30568)
            break
        
        void* rcx = rbx_2[1]
        int64_t rax_1 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_1 = *(rcx + 8)
        
        result = rax_1 u>> 0x1a
        
        if ((result.b & 1) == 0)
            break
        
        *(rbx_2 + 0x34) += 1
        int64_t* rcx_1 = rbx_2[1]
        rbx_2[1] = 0
        
        if (rcx_1 != 0)
            rcx_1[9].d -= 1
            
            if (rcx_1[9].d == 1)
                sub_140a2f6e0(rcx_1)
        
        int64_t rax_3 = sx.q(rbx_2[2].d)
        uint8_t rsi_3 = ((*rbx_2 u>> 0x20).d u>> 0x1c).b
        
        if ((rsi_3 & 1) != 0)
            *(arg2 + 0x38) -= 1
            int64_t r9_1 = *(arg2 + 0x28)
            int64_t r11_2 = rax_3 << 6
            int64_t r8_1 = sx.q(*(sx.q(*(r11_2 + r9_1 + 0x34)) * 0x60 + *(arg2 + 0x18) + 0x58))
            *(r11_2 + r9_1 + 0x38) = r8_1.d
            int64_t r10_2 = r8_1 << 6
            *(r11_2 + r9_1 + 0x3c) = *(r10_2 + r9_1 + 0x3c)
            *((sx.q(*(r10_2 + r9_1 + 0x3c)) << 6) + *(arg2 + 0x28) + 0x38) = rax_3.d
            *(r10_2 + r9_1 + 0x3c) = rax_3.d
        
        int64_t rax_4 = sx.q(*(rbx_2 + 0x14))
        
        if ((rsi_3 & 2) != 0)
            *(arg2 + 0x38) -= 1
            int64_t r9_2 = *(arg2 + 0x28)
            int64_t r11_4 = rax_4 << 6
            int64_t r8_2 = sx.q(*(sx.q(*(r11_4 + r9_2 + 0x34)) * 0x60 + *(arg2 + 0x18) + 0x58))
            *(r11_4 + r9_2 + 0x38) = r8_2.d
            int64_t r10_4 = r8_2 << 6
            *(r11_4 + r9_2 + 0x3c) = *(r10_4 + r9_2 + 0x3c)
            *((sx.q(*(r10_4 + r9_2 + 0x3c)) << 6) + *(arg2 + 0x28) + 0x38) = rax_4.d
            *(r10_4 + r9_2 + 0x3c) = rax_4.d
        
        int64_t rax_5 = sx.q(rbx_2[3].d)
        
        if ((rsi_3 & 4) != 0)
            *(arg2 + 0x38) -= 1
            int64_t r9_3 = *(arg2 + 0x28)
            int64_t r11_6 = rax_5 << 6
            int64_t r8_3 = sx.q(*(sx.q(*(r11_6 + r9_3 + 0x34)) * 0x60 + *(arg2 + 0x18) + 0x58))
            *(r11_6 + r9_3 + 0x38) = r8_3.d
            int64_t r10_6 = r8_3 << 6
            *(r11_6 + r9_3 + 0x3c) = *(r10_6 + r9_3 + 0x3c)
            *((sx.q(*(r10_6 + r9_3 + 0x3c)) << 6) + *(arg2 + 0x28) + 0x38) = rax_5.d
            *(r10_6 + r9_3 + 0x3c) = rax_5.d
        
        int64_t rax_6 = sx.q(*(rbx_2 + 0x1c))
        
        if ((rsi_3 & 8) != 0)
            *(arg2 + 0x38) -= 1
            int64_t r9_4 = *(arg2 + 0x28)
            int64_t r11_8 = rax_6 << 6
            int64_t r8_4 = sx.q(*(sx.q(*(r11_8 + r9_4 + 0x34)) * 0x60 + *(arg2 + 0x18) + 0x58))
            *(r11_8 + r9_4 + 0x38) = r8_4.d
            int64_t r10_8 = r8_4 << 6
            *(r11_8 + r9_4 + 0x3c) = *(r10_8 + r9_4 + 0x3c)
            *((sx.q(*(r10_8 + r9_4 + 0x3c)) << 6) + *(arg2 + 0x28) + 0x38) = rax_6.d
            *(r10_8 + r9_4 + 0x3c) = rax_6.d
        
        int64_t rdx_16 = *arg1
        void* r8_5 = r15_2 + rdx_16
        *((sx.q(*(r8_5 + 0x3a)) << 6) + rdx_16 + 0x38) = *(r15_2 + rdx_16 + 0x38)
        *((sx.q(*(r8_5 + 0x38)) << 6) + *arg1 + 0x3a) = *(r8_5 + 0x3a)
        *(r8_5 + 0x3a) = rdi.w
        *(r8_5 + 0x38) = rdi.w
        void* rdx_19 = *arg1
        *(r15_2 + rdx_19 + 0x38) = 0
        *(r15_2 + rdx_19 + 0x3a) = *(rdx_19 + 0x3a)
        result = *arg1
        *((sx.q(*(rdx_19 + 0x3a)) << 6) + result + 0x38) = rdi.w
        *(rdx_19 + 0x3a) = rdi.w
        
        if (rdi u< arg1[3].d)
            uint64_t rcx_24 = zx.q(*(rbx_2 + 0x36)) & zx.q(*(arg1 + 0x14))
            int64_t rax_11 = arg1[4]
            result = zx.q(*(rax_11 + (rcx_24 << 2)))
            
            if (result.d == rdi)
                result = arg1[5]
                *(rax_11 + (rcx_24 << 2)) = *(result + (zx.q(rdi) << 2))
            else if (result.d != 0xffffffff)
                int64_t r8_6 = arg1[5]
                
                do
                    uint64_t rdx_21 = zx.q(result.d) << 2
                    result = zx.q(*(rdx_21 + r8_6))
                    
                    if (result.d == rdi)
                        result = zx.q(rdi)
                        *(rdx_21 + r8_6) = *(r8_6 + (result << 2))
                        break
                while (result.d != 0xffffffff)
        
        rdi = i
    while (i != 1)

return result
