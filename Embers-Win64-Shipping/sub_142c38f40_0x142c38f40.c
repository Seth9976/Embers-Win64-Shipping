// 函数: sub_142c38f40
// 地址: 0x142c38f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t rsi = *(*(rbx + 0x70) + zx.q(*(rbx + 0x5c)) * 0x14)
int32_t arg_10 = 0
int32_t rax_3

if (arg2 != 0)
    void* rcx = *(arg1 + 0x10)
    arg_10 = 0
    void* r10_1 = *(rcx + 0x40)
    rax_3 = (*(r10_1 + 0x130))(arg3, *(rcx + 0x48), zx.q(rsi), &arg_10, *(r10_1 + 0x20))

if (arg2 == 0 || rax_3 == 0)
    int32_t result = sub_142c38df0(arg1, arg2, rsi, arg3)
    
    if (result != 0)
        *(rbx + 0x5c) += 1
        return result
    
    int32_t rax_7
    
    if (arg2 == 0)
        void* rcx_2 = *(arg1 + 0x10)
        arg_10 = 0
        void* r10_2 = *(rcx_2 + 0x40)
        rax_7 = (*(r10_2 + 0x130))(rcx_2, *(rcx_2 + 0x48), zx.q(rsi), &arg_10, *(r10_2 + 0x20))
    
    int32_t rax_20
    uint64_t rdx_10
    
    if (arg2 == 0 && rax_7 != 0)
    label_142c390ff:
        rdx_10 = zx.q(*(rbx + 0x5c)) * 5
        rax_20 = arg_10
    else
        int32_t arg_8
        
        if ((*(*(rbx + 0x70) + zx.q(*(rbx + 0x5c)) * 0x14 + 0x10) & 0x1f) == 0x1d)
            int32_t rax_10 = sub_142c39540(rsi)
            
            if (rax_10 != 0)
                void* rcx_5 = *(arg1 + 0x10)
                arg_8 = 0
                void* r10_3 = *(rcx_5 + 0x40)
                
                if ((*(r10_3 + 0x130))(rcx_5, *(rcx_5 + 0x48), 0x20, &arg_8, *(r10_3 + 0x20)) != 0)
                    uint64_t rcx_6 = zx.q(*(rbx + 0x5c)) * 5
                    int64_t rax_13 = *(rbx + 0x70)
                    int16_t rcx_7 = *(rax_13 + (rcx_6 << 2) + 0x10)
                    
                    if ((rcx_7.b & 0x1f) == 0x1d)
                        *(rax_13 + (rcx_6 << 2) + 0x10) = (rcx_7 & 0xff) | rax_10.w << 8
                    
                    *(*(rbx + 0x70) + zx.q(*(rbx + 0x5c)) * 0x14 + 0xc) = arg_8
                    result = sub_142c08c10(rbx)
                    *(rbx + 0x28) |= 4
                    return result
        
        if (rsi != 0x2011)
            goto label_142c390ff
        
        void* rcx_10 = *(arg1 + 0x10)
        arg_8 = 0
        void* r10_4 = *(rcx_10 + 0x40)
        
        if ((*(r10_4 + 0x130))(rcx_10, *(rcx_10 + 0x48), zx.q(rsi - 1), &arg_8, *(r10_4 + 0x20))
                == 0)
            goto label_142c390ff
        
        rdx_10 = zx.q(*(rbx + 0x5c)) * 5
        rax_20 = arg_8
    
    *(*(rbx + 0x70) + (rdx_10 << 2) + 0xc) = rax_20
else
    *(*(rbx + 0x70) + zx.q(*(rbx + 0x5c)) * 0x14 + 0xc) = arg_10

return sub_142c08c10(rbx)
