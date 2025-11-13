// 函数: sub_141c3c800
// 地址: 0x141c3c800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x10])
sub_141c35490(arg1)
sub_141c35bb0(arg1)
int64_t* rdx = arg1[0xe]
int32_t rsi = -1
void* r9_2 = &rdx[sx.q(arg1[0xf].d) * 2]

if (rdx == r9_2)
    rsi = -1
else
    do
        void* rcx_3 = *rdx
        
        if (rcx_3 != 0)
            int32_t rax_1 = 0
            
            if (0 == *(rcx_3 + 0x14))
                *(rcx_3 + 0x14) = 0
            else
                rax_1 = *(rcx_3 + 0x14)
            
            int32_t rax_2 = 0
            
            if (0 == *(rcx_3 + 0x18))
                *(rcx_3 + 0x18) = 0
            else
                rax_2 = *(rcx_3 + 0x18)
            
            int32_t rax_3
            
            if (rax_2 s< rax_1)
                rax_3 = rax_2 + *(rcx_3 + 0x10) - rax_1
            else
                rax_3 = rax_2 - rax_1
            
            if (rsi u<= rax_3)
                rax_3 = rsi
            
            rsi = rax_3
        
        rdx = &rdx[2]
    while (rdx != r9_2)
    
    if (rsi == 0xffffffff)
        rsi = -1

if (arg1 != -0x80)
    LeaveCriticalSection(&arg1[0x10])

return zx.q(rsi)
