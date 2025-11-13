// 函数: sub_141a61130
// 地址: 0x141a61130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_141a53450(arg2)
void* rdx = arg1[8]
void* r9 = &arg1[7]
int32_t r10 = 0
int64_t rsi_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r9 = rdx

int32_t i = *(r9 + ((sx.q(rax_1) & rsi_1) << 2))

if (i != 0xffffffff)
    int64_t r8_1 = *arg1
    
    do
        int64_t r11_1 = sx.q(i) * 0x38
        
        if (((*(r11_1 + r8_1 + 4) ^ rdi[1]) | (*(r11_1 + r8_1 + 8) ^ rdi[2])
                | (*(r11_1 + r8_1 + 0xc) ^ rdi[3]) | (*rdi ^ *(r11_1 + r8_1))) == 0
                && *(r11_1 + r8_1 + 0x10) == rdi[4])
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rax_14 = sx.q(*(r11_1 + r8_1 + 0x34)) & rsi_1
                void* rcx_6 = r9 + (rax_14 << 2)
                
                for (int32_t j = *(r9 + (rax_14 << 2)); j != 0xffffffff; j = *rcx_6)
                    if (j == i)
                        *rcx_6 = *(r11_1 + r8_1 + 0x30)
                        break
                    
                    rcx_6 = sx.q(j) * 0x38 + 0x30 + r8_1
            
            r10 = 1
            void* r9_1 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(sx.q(arg1[6].d) * 0x38 + *arg1) = i
            
            int32_t* rcx_11 = *arg1
            int32_t rax_19 = -1
            rcx_11[sx.q(i) * 0xe] = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_19 = arg1[6].d
            
            rcx_11[sx.q(i) * 0xe + 1] = rax_19
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            void* rcx_12 = *(r9_1 + 0x10)
            
            if (rcx_12 != 0)
                r9_1 = rcx_12
            
            int64_t rcx_13 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_1 + (rcx_13 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r11_1 + r8_1 + 0x30)
    while (i != 0xffffffff)

return zx.q(r10)
