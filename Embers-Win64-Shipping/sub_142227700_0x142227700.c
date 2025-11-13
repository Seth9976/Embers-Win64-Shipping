// 函数: sub_142227700
// 地址: 0x142227700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x38)
int64_t rdi
rdi.b = 0
void* rsi = *(arg1 + 0x10)

if (rbp == 0)
    rdi.b = *(rsi + 0x88) == 2
label_142227763:
    
    if (rdi.b == 0)
        goto label_14222777e
    
    *(arg1 + 0x31) = 1
    
    if (*(rsi + 0x88) == 2)
        *(arg1 + 0x34) = 0x3f800000
else
    if (sub_142216be0(rbp + 0x2a8) - 2 u<= 1)
        uint32_t rax = zx.d(*(rsi + 0x88))
        
        if (rax.b == 2)
            rdi.b = 1
        else if (rax.b == 0 && (*(rbp + 0x2b4) & 0x10) != 0)
            rdi.b = 1
        
        goto label_142227763
    
label_14222777e:
    *(arg1 + 0x31) = 0
    
    if (*(rsi + 0x88) == 2)
        *(arg1 + 0x34) = 0
