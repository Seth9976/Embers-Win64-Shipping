// 函数: sub_141763050
// 地址: 0x141763050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
void** rbx = nullptr
uint64_t result
int64_t r9

if (arg2 == 0)
    r9 = 0
label_141763090:
    int64_t rsi_1 = r9 << 2
    *((sx.q(*(*(r8 + 0xc8) + rsi_1)) << 5) + *(r8 + 8) + 0x18) = 0xffffffff
    void* rdx_1 = *arg1
    uint64_t* rcx_4 = (sx.q(*(*(rdx_1 + 0xc8) + rsi_1)) << 5) + *(rdx_1 + 8)
    rcx_4[1].d = 0
    
    if (*(rcx_4 + 0xc) != 0)
        sub_1405dadb0(rcx_4, 0)
    
    void* rdx_2 = *arg1
    result = *(rdx_2 + 8)
    void** rdx_3 = *((sx.q(*(*(rdx_2 + 0xc8) + rsi_1)) << 5) + result + 0x10)
    
    if (rdx_3 != 0)
        if (*(rdx_3 + 0xc) u>= 2)
            rbx = rdx_3
        
        if (rbx != 0)
            void* rdx_4 = *rbx
            int64_t rcx_7 = sx.q(rbx[1].d)
            result = *(rdx_4 + 0x398)
            
            if (*(rcx_7 + result) != 2)
                result = *(rdx_4 + 0x350)
                *(result + (rcx_7 << 2)) = 0xffffffff
else
    r9 = sx.q(arg2)
    int64_t rdx = *(r8 + 0xc8)
    result = zx.q(*(rdx + (r9 << 2) - 4))
    
    if (*(rdx + (r9 << 2)) != result.d)
        goto label_141763090
return result
