// 函数: sub_1417cbd70
// 地址: 0x1417cbd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

uint32_t r9_1 = (arg2 u>> 4).d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
void* r14 = &arg1[7]
int32_t r11 = 0
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r14 = rax_15

int32_t i = *(r14 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    void* rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_19 = i_1 << 5
        
        if (*(rax_19 + rdx) == arg2)
            int32_t* rsi_1 = i_1 << 5
            int64_t rax_21 = sx.q(*(rsi_1 + rdx + 0x1c)) & rbp_1
            void* rcx_11 = r14 + (rax_21 << 2)
            
            for (int32_t j = *(r14 + (rax_21 << 2)); j != 0xffffffff; j = *rcx_11)
                if (j == i)
                    *rcx_11 = *(rsi_1 + rdx + 0x18)
                    break
                
                rcx_11 = rdx + 0x18 + (sx.q(j) << 5)
            
            int64_t rdx_1 = *arg1
            int64_t rcx_13 = *(rdx_1 + rsi_1 + 8)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
                rdx_1 = *arg1
            
            r11 = 1
            void* r9_8 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *((sx.q(arg1[6].d) << 5) + rdx_1) = i
                rdx_1 = *arg1
            
            int32_t rax_27 = -1
            *(rsi_1 + rdx_1) = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_27 = arg1[6].d
            
            *(rsi_1 + rdx_1 + 4) = rax_27
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_28 = *(r9_8 + 0x10)
            
            if (rax_28 != 0)
                r9_8 = rax_28
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_15 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_8 + (rcx_15 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(rax_19 + rdx + 0x18)
    while (i != 0xffffffff)

return zx.q(r11)
