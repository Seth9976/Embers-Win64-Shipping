// 函数: sub_140d29f20
// 地址: 0x140d29f20
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
        int64_t rax_18 = i_1 * 3
        
        if (*(r8_8 + (rax_18 << 3)) == arg2)
            int64_t r11_1 = i_1 * 0x18
            int64_t rax_21 = sx.q(*(r11_1 + r8_8 + 0x14)) & rsi_1
            void* rdx = rdi + (rax_21 << 2)
            int32_t j = *(rdi + (rax_21 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rdx = *(r11_1 + r8_8 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_2 = j_1 + ((j_1 + 1) << 1)
                j = *(r8_8 + (rdx_2 << 3))
                rdx = r8_8 + (rdx_2 << 3)
            
            rbx = 1
            void* r9_9 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x18) = i
            
            int32_t* rdx_4 = *arg1
            int32_t rax_25 = -1
            rdx_4[i_1 * 6] = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_25 = arg1[6].d
            
            rdx_4[i_1 * 6 + 1] = rax_25
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_26 = *(r9_9 + 0x10)
            
            if (rax_26 != 0)
                r9_9 = rax_26
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_11 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_9 + (rcx_11 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r8_8 + (rax_18 << 3) + 0x10)
    while (i != 0xffffffff)

return zx.q(rbx)
