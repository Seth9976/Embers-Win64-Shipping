// 函数: sub_141e83f70
// 地址: 0x141e83f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

uint32_t r9_1 = (arg2 u>> 4).d
int64_t rsi_1 = sx.q(arg1[9].d) - 1
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
void* rdi = &arg1[7]
int32_t rbx = 0
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    rdi = rax_15

int32_t i = *(rdi + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & rsi_1) << 2))

if (i != 0xffffffff)
    int64_t r8_8 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t* rax_18 = i_1 * 0x68
        
        if (*(rax_18 + r8_8) == arg2)
            void* r11_1 = i_1 * 0x68
            int64_t rax_20 = sx.q(*(r11_1 + r8_8 + 0x64)) & rsi_1
            void* rcx_11 = rdi + (rax_20 << 2)
            
            for (int32_t j = *(rdi + (rax_20 << 2)); j != 0xffffffff; j = *rcx_11)
                if (j == i)
                    *rcx_11 = *(r11_1 + r8_8 + 0x60)
                    break
                
                rcx_11 = sx.q(j) * 0x68 + 0x60 + r8_8
            
            rbx = 1
            void* r9_9 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(sx.q(arg1[6].d) * 0x68 + *arg1) = i
            
            int32_t* rcx_16 = *arg1
            int32_t rax_25 = -1
            *(rcx_16 + r11_1) = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_25 = arg1[6].d
            
            *(rcx_16 + r11_1 + 4) = rax_25
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_26 = *(r9_9 + 0x10)
            
            if (rax_26 != 0)
                r9_9 = rax_26
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_17 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_9 + (rcx_17 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(rax_18 + r8_8 + 0x60)
    while (i != 0xffffffff)

return zx.q(rbx)
