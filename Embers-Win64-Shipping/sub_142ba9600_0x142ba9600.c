// 函数: sub_142ba9600
// 地址: 0x142ba9600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x6a]()
int32_t rsi = *arg2
int32_t rdi_1 = 1

if (rsi u>= 1)
    do
        int32_t r8_1 = arg1[6].d
        
        if (r8_1 s< 2)
            if (*(arg1 + 0x315) != 0)
                arg1[3].d = 0x81
            
            arg1[6].d = 0
            break
        
        int64_t rdx = arg1[5]
        arg1[6].d = r8_1 - 2
        int16_t r10_1 = *(rdx + (sx.q(r8_1 - 1) << 2))
        int32_t r8_3 = *(rdx + (sx.q(r8_1 - 2) << 2))
        
        if (r10_1 u< *(arg1 + 0x44))
            uint32_t rdx_1 = zx.d(arg1[0x43].b)
            int32_t rcx_3 = r8_3 u>> 4 & 0xf
            
            if (rdx_1 == 0x71)
                rcx_3 += 0x10
            else if (rdx_1 == 0x72)
                rcx_3 += 0x20
            
            if (rax == zx.d(arg1[0x3e].w) + rcx_3)
                int32_t r9_1 = (r8_3 & 0xf) - 7
                
                if ((r8_3 & 0xf) - 8 s< 0)
                    r9_1 = (r8_3 & 0xf) - 8
                
                if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0)
                    arg1[0x68](arg1, &arg1[7], zx.q(r10_1), zx.q(r9_1 << (6 - (*(arg1 + 0x1f2)).b)))
                else if ((*(arg1 + 0x374) == 0 || *(arg1 + 0x375) == 0) && ((*(arg1 + 0x314) != 0
                        && arg1[0x3a].w != 0) || (*(zx.q(r10_1) + arg1[0xc]) & 0x10) != 0))
                    arg1[0x68](arg1, &arg1[7], zx.q(r10_1), zx.q(r9_1 << (6 - (*(arg1 + 0x1f2)).b)))
        else if (*(arg1 + 0x315) != 0)
            arg1[3].d = 0x86
        
        rdi_1 += 1
    while (rdi_1 u<= rsi)

int32_t result = arg1[6].d
*(arg1 + 0x34) = result
return result
