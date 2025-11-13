// 函数: sub_142c1c100
// 地址: 0x142c1c100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x90)
uint32_t r11_2 = (zx.d(*arg3) << 8) + zx.d(arg3[1])
uint64_t r15 = zx.q(arg4)
int32_t r10_2 = r11_2 u>> 1 & 0x5b6db6db
int32_t r11_4 = r11_2 - (r10_2 u>> 1 & 0x5b6db6db) - r10_2
int32_t r9_4 = (((r11_4 u>> 3) + r11_4) & 0xc71c71c7) u% 0x3f
uint32_t r8_2 = (zx.d(arg3[2]) << 8) + zx.d(arg3[3])
int32_t rdx_3 = r8_2 u>> 1 & 0x5b6db6db
int32_t r8_4 = r8_2 - (rdx_3 u>> 1 & 0x5b6db6db) - rdx_3
uint32_t r8_6 = zx.d(*arg1) << 8
int32_t r12_4 = (((r8_4 u>> 3) + r8_4) & 0xc71c71c7) u% 0x3f
uint32_t rax_19 = zx.d(arg1[1])
uint32_t r8_7 = r8_6 + rax_19

if (r8_6 == neg.d(rax_19))
    rax_19.b = 0
    return rax_19

int32_t r9_5 = 0
int32_t r8_8 = r8_7 - 1
uint64_t rbx = r15 * 0x14
int32_t r10_3 = *(rbx + *(rbp + 0x70))
uint64_t rax_20

if (r8_7 - 1 s< 0)
label_142c1c272:
    rax_20.b = 0
else
    while (true)
        uint32_t rdx_6 = (r8_8 + r9_5) u>> 1
        void* rsi_3 = &arg1[zx.q(rdx_6 * ((zx.q(r12_4 + r9_4) << 1) + 2).d)]
        rax_20 = zx.q((zx.d(*(rsi_3 + 2)) << 8) + zx.d(*(rsi_3 + 3)))
        
        if (r10_3 u>= rax_20.d)
            if (r10_3 u<= rax_20.d)
                int64_t r8_9 = *(rbp + 0x80)
                char* r9_6 = &data_14369a5d0
                void* rdx_7 = rsi_3 + 4 + (zx.q(r9_4) << 1)
                
                if (rdx_7 u>= rsi_3 + 4)
                    r9_6 = rdx_7
                
                if ((sub_142c1d4c0(&arg3[2], arg2, arg1, r9_6, r8_9 + rbx) | sub_142c1d4c0(arg3, 
                        arg2, arg1, rsi_3 + 4, r8_9 + zx.q(*(rbp + 0x5c)) * 0x14)) != 0)
                    int32_t rdx_10 = *(rbp + 0x5c)
                    int32_t r8_12 = (r15 + 1).d
                    
                    if (r8_12 - rdx_10 u>= 2)
                        sub_142bf5c70(rbp, rdx_10, r8_12)
                
                rax_20 = zx.q((r15 + 1).d)
                
                if (r12_4 == 0)
                    rax_20 = zx.q(r15.d)
                
                *(rbp + 0x5c) = rax_20.d
                rax_20.b = 1
                break
            
            r9_5 = rdx_6 + 1
        else
            r8_8 = rdx_6 - 1
        
        if (r9_5 s> r8_8)
            goto label_142c1c272

return rax_20
