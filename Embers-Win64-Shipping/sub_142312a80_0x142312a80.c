// 函数: sub_142312a80
// 地址: 0x142312a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
void* rcx = *(arg1 + 0x430)

if (rcx == 0)
    int64_t result
    result.b = 0
    return result

int64_t rsi
rsi.b = 0
int64_t r9 = sx.q(sub_142312b90(rcx, arg2))

if (r9.d != 0xffffffff)
    *(arg1 + 0x914)
    int32_t* rcx_5
    
    if (*(arg1 + 0x8e8) == *(arg1 + 0x914))
    label_142312b35:
        rcx_5 = nullptr
    else
        void* r8 = arg1 + 0x918
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0x928)) - 1) & r9) << 2))
        
        if (rax_3 == 0xffffffff)
        label_142312b35_1:
            rcx_5 = nullptr
        else
            while (true)
                rcx_5 = sx.q(rax_3) * 0xa0 + *(arg1 + 0x8e0)
                
                if (*rcx_5 == r9.d)
                    break
                
                rax_3 = rcx_5[0x24]
                
                if (rax_3 == 0xffffffff)
                    goto label_142312b35_2
            
            if (rax_3 == 0xffffffff)
            label_142312b35_2:
                rcx_5 = nullptr
    
    void* rdx_3 = &rcx_5[4]
    
    if (rcx_5 == 0)
        rdx_3 = nullptr
    
    if (rdx_3 != 0 && rdi.d s>= 0 && rdi.d s< *(rdx_3 + 8))
        int64_t rax_4 = *rdx_3
        int64_t rcx_6 = rdi * 3
        rsi.b = 1
        *arg4 = *(rax_4 + (rcx_6 << 2))
        arg4[1].d = *(rax_4 + (rcx_6 << 2) + 8)

return zx.q(rsi.b)
