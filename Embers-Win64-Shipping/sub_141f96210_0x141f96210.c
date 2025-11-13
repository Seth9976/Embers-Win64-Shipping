// 函数: sub_141f96210
// 地址: 0x141f96210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r11 = &arg1[7]
uint32_t r9_1 = (arg2 u>> 4).d
int64_t rsi_1 = sx.q(arg1[9].d) - 1
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rbp = 0
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r11 = rax_15

int32_t i = *(r11 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & rsi_1) << 2))

if (i != 0xffffffff)
    void* rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_18 = i_1 * 5
        
        if (*(rdx + (rax_18 << 3)) == arg2)
            int64_t r14_1 = i_1 * 0x28
            int64_t rax_21 = sx.q(*(rdx + r14_1 + 0x24)) & rsi_1
            void* rcx_11 = r11 + (rax_21 << 2)
            int32_t j = *(r11 + (rax_21 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_11 = *(rdx + r14_1 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rcx_13 = j_1 + ((j_1 + 1) << 2)
                j = *(rdx + (rcx_13 << 3))
                rcx_11 = rdx + (rcx_13 << 3)
            
            rbp = 1
            int64_t* rsi_2 = *(r14_1 + *arg1 + 0x10)
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp1_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            void* r9_8 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x28) = i
            
            int32_t rax_28 = -1
            int32_t* rcx_19 = *arg1 + r14_1
            *rcx_19 = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_28 = arg1[6].d
            
            rcx_19[1] = rax_28
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_29 = *(r9_8 + 0x10)
            
            if (rax_29 != 0)
                r9_8 = rax_29
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i)
            int64_t rcx_20 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
            *(r9_8 + (rcx_20 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(rdx + (rax_18 << 3) + 0x20)
    while (i != 0xffffffff)

return zx.q(rbp)
