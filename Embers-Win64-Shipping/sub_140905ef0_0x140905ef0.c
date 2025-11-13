// 函数: sub_140905ef0
// 地址: 0x140905ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* rbx = &arg1[7]
int32_t rsi = 0
int64_t rdi_1 = sx.q(arg1[9].d) - 1

if (rax_1 != 0)
    rbx = rax_1

int32_t i = *(rbx + ((r11 & rdi_1) << 2))

if (i != 0xffffffff)
    void* r10_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rcx_1 = i_1 * 2
        
        if (**(r10_1 + (rcx_1 << 3)) == r11.d)
            int64_t r9_1 = i_1 * 2
            int64_t rax_6 = sx.q(*(r10_1 + (r9_1 << 3) + 0xc)) & rdi_1
            void* rcx_2 = rbx + (rax_6 << 2)
            
            for (int32_t j = *(rbx + (rax_6 << 2)); j != 0xffffffff; j = *rcx_2)
                if (j == i)
                    *rcx_2 = *(r10_1 + (r9_1 << 3) + 8)
                    break
                
                rcx_2 = r10_1 + 8 + (sx.q(j) << 4)
            
            rsi = 1
            void* r11_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x10) = i
            
            int64_t rcx_7 = *arg1
            int32_t rax_11 = -1
            *(rcx_7 + (r9_1 << 3)) = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_11 = arg1[6].d
            
            *(rcx_7 + (r9_1 << 3) + 4) = rax_11
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_12 = *(r11_2 + 0x10)
            
            if (rax_12 != 0)
                r11_2 = rax_12
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_8 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r11_2 + (rcx_8 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r10_1 + (rcx_1 << 3) + 8)
    while (i != 0xffffffff)

return zx.q(rsi)
