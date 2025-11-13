// 函数: sub_142398030
// 地址: 0x142398030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2[0xd].d s<= 0)
    return 

int64_t r14_1 = 0

do
    int64_t* rax_1 = arg2[0xc]
    int64_t* rcx = arg2
    
    if (rax_1 != 0)
        rcx = rax_1
    
    void* rsi_1 = *(rcx + r14_1)
    void arg_10
    int32_t* rax = sub_1408296b0(arg1 + 0x20, &arg_10, rsi_1)
    
    if (*rax != 0xffffffff)
        EnterCriticalSection(arg1 + 0x580)
        
        if (rsi_1 != 0)
            rax = sx.q(*(rsi_1 + 0x34))
        
        if (rsi_1 != 0 && rax.d s>= 0 && rax.d s< *(arg1 + 0x18))
            int64_t* rdi_1 = nullptr
            int64_t* rcx_4 = rax * 0xd8 + *(arg1 + 0x10)
            
            if (*rcx_4 == rsi_1)
                rdi_1 = rcx_4
            
            if (arg1 != -0x580)
                LeaveCriticalSection(arg1 + 0x580)
            
            if (rdi_1 != 0)
                rdi_1[0xf] = data_143dbb3b8
        else if (arg1 != -0x580)
            LeaveCriticalSection(arg1 + 0x580)
    
    i += 1
    r14_1 += 8
while (i s< arg2[0xd].d)
