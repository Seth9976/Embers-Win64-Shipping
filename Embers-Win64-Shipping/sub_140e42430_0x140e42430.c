// 函数: sub_140e42430
// 地址: 0x140e42430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x368)
uint32_t rsi = 0
int32_t rdx_1
int32_t i

for (i = 0x600; i s> 0; i -= 1)
    if (r8 != 0)
    label_140e42483:
        char* rax_3 = arg1[0x36].q
        char rcx_2 = *rax_3
        r8 -= 1
        arg1[0x36].q = &rax_3[1]
        *(arg1 + 0x368) = r8
        rdx_1 = r8
        
        if (rcx_2 == 0xff)
            break
    else
        sub_140e41c20(arg1, arg2)
        r8 = *(arg1 + 0x368)
        rdx_1 = r8
        
        if (r8 != 0)
            goto label_140e42483
        
        int32_t rcx_1 = *(arg1 + 0x36c)
        *(arg1 + 0x36c) = rcx_1 ^ 1
        
        if (rcx_1 == 0)
            break

bool cond:1 = i == 0

if (i != 0)
    if (i s> 0)
        do
            if (rdx_1 != 0)
            label_140e424f2:
                char* rax_7 = arg1[0x36].q
                rsi = zx.d(*rax_7)
                rdx_1 -= 1
                arg1[0x36].q = &rax_7[1]
                *(arg1 + 0x368) = rdx_1
                
                if (rsi != 0xff)
                    break
            else
                sub_140e41c20(arg1, arg2)
                rdx_1 = *(arg1 + 0x368)
                
                if (rdx_1 != 0)
                    goto label_140e424f2
                
                int32_t rcx_4 = *(arg1 + 0x36c)
                *(arg1 + 0x36c) = rcx_4 ^ 1
                
                if (rcx_4 != 0)
                    rsi = 0xd9
                    break
                
                rsi = 0xff
            
            i -= 1
        while (i s> 0)
        
        cond:1 = i == 0
    
    if (not(cond:1) && rsi == *(arg1 + 0x2504) + 0xd0)
        memset(arg1 + 0x2524, 0, sx.q(*(arg1 + 0x1cc)) << 2)
        arg1[0x250].d = *(arg1 + 0x24fc)
        int32_t rax_13 = *(arg1 + 0x2504) + 1
        *(arg1 + 0x348) = 0
        *(arg1 + 0x24f4) = 0x10
        *(arg1 + 0x2504) = rax_13 & 7
        sub_140e3cc80(arg1, 0x10, arg2)
        return sub_140e3cc80(arg1, 0x10, arg2) __tailcall

sub_140e43530(arg1, 0xffffff1b)
noreturn
