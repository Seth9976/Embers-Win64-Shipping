// 函数: sub_140ccd8d0
// 地址: 0x140ccd8d0
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
    void* r10_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        void* r8_3 = (i_1 << 5) + r10_1
        int32_t rcx_6 = (*(r8_3 + 4) ^ *(arg2 + 4)) | (*(r8_3 + 8) ^ arg2[1].d)
            | (*(r8_3 + 0xc) ^ *(arg2 + 0xc)) | (*arg2 ^ *r8_3)
        
        if (rcx_6 == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t r8_5 = i_1 << 5
                int64_t rax_12 = sx.q(*(r8_5 + r10_1 + 0x1c)) & rbp_1
                void* rcx_7 = rsi + (rax_12 << 2)
                
                for (int32_t j = *(rsi + (rax_12 << 2)); j != 0xffffffff; j = *rcx_7)
                    if (j == i)
                        *rcx_7 = *(r8_5 + r10_1 + 0x18)
                        break
                    
                    rcx_7 = r10_1 + 0x18 + (sx.q(j) << 5)
            
            r11 = 1
            void* r10_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *((sx.q(arg1[6].d) << 5) + *arg1) = i
            
            int32_t rax_17 = -1
            int32_t* r9_2 = (i_1 << 5) + *arg1
            *r9_2 = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_17 = arg1[6].d
            
            r9_2[1] = rax_17
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            void* rcx_12 = *(r10_2 + 0x10)
            
            if (rcx_12 != 0)
                r10_2 = rcx_12
            
            int64_t rcx_13 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r10_2 + (rcx_13 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r8_3 + 0x18)
    while (i != 0xffffffff)

return zx.q(r11)
