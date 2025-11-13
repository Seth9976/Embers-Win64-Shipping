// 函数: sub_141892bb0
// 地址: 0x141892bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140a6b260(arg2, 0x10)
void* rcx_1 = arg1[8]
void* rsi = &arg1[7]
int32_t r11 = 0
int64_t rbp_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    rsi = rcx_1

int32_t i = *(rsi + ((sx.q(rax_1) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r9_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        void* r8_2 = i_1 * 0x1c + r9_1
        int32_t rcx_6 = (*(r8_2 + 4) ^ *(arg2 + 4)) | (*(r8_2 + 8) ^ arg2[1].d)
            | (*(r8_2 + 0xc) ^ *(arg2 + 0xc)) | (*arg2 ^ *r8_2)
        
        if (rcx_6 == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t r8_3 = i_1 * 0x1c
                int64_t rax_12 = sx.q(*(r8_3 + r9_1 + 0x18)) & rbp_1
                void* rcx_7 = rsi + (rax_12 << 2)
                
                for (int32_t j = *(rsi + (rax_12 << 2)); j != 0xffffffff; j = *rcx_7)
                    if (j == i)
                        *rcx_7 = *(r8_3 + r9_1 + 0x14)
                        break
                    
                    rcx_7 = sx.q(j) * 0x1c + 0x14 + r9_1
            
            r11 = 1
            void* r9_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(sx.q(arg1[6].d) * 0x1c + *arg1) = i
            
            int32_t rcx_12 = -1
            int32_t* rax_18 = i_1 * 0x1c + *arg1
            *rax_18 = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rcx_12 = arg1[6].d
            
            rax_18[1] = rcx_12
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            void* rcx_13 = *(r9_2 + 0x10)
            
            if (rcx_13 != 0)
                r9_2 = rcx_13
            
            int64_t rcx_14 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_2 + (rcx_14 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r8_2 + 0x14)
    while (i != 0xffffffff)

return zx.q(r11)
