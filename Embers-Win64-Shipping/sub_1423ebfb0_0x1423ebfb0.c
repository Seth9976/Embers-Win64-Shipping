// 函数: sub_1423ebfb0
// 地址: 0x1423ebfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int64_t r11 = *arg2
int32_t rbx = 0
int64_t rsi_1 = sx.q(arg1[9].d) - 1
void* rdi = &arg1[7]

if (rax_1 != 0)
    rdi = rax_1

int32_t i = *(rdi + ((sx.q((r11 u>> 0x20).d * 0x17 + r11.d) & rsi_1) << 2))

if (i != 0xffffffff)
    void* r10_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_9 = i_1 * 2
        
        if (*(r10_1 + (rax_9 << 3)) == r11)
            int64_t r9_1 = i_1 * 2
            int64_t rax_11 = sx.q(*(r10_1 + (r9_1 << 3) + 0xc)) & rsi_1
            void* rcx = rdi + (rax_11 << 2)
            
            for (int32_t j = *(rdi + (rax_11 << 2)); j != 0xffffffff; j = *rcx)
                if (j == i)
                    *rcx = *(r10_1 + (r9_1 << 3) + 8)
                    break
                
                rcx = r10_1 + 8 + (sx.q(j) << 4)
            
            rbx = 1
            void* r11_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x10) = i
            
            int64_t rcx_5 = *arg1
            int32_t rax_16 = -1
            *(rcx_5 + (r9_1 << 3)) = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_16 = arg1[6].d
            
            *(rcx_5 + (r9_1 << 3) + 4) = rax_16
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_17 = *(r11_2 + 0x10)
            
            if (rax_17 != 0)
                r11_2 = rax_17
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r11_2 + (rcx_6 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r10_1 + (rax_9 << 3) + 8)
    while (i != 0xffffffff)

return zx.q(rbx)
