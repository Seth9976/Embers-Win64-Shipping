// 函数: sub_140588000
// 地址: 0x140588000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t rsi = 0
int32_t i = 0

if (((arg1[1] - rax) s>> 3).d s<= 0)
    *(arg1 + 0x69) = 1
    return 0

int64_t* rdi = nullptr

do
    int64_t* rcx = *(rdi + rax)
    
    if (rcx != 0)
        rsi += sub_14058cb50(rcx)
        rax = *arg1
    
    i += 1
    rdi = &rdi[1]
while (i s< ((arg1[1] - rax) s>> 3).d)

*(arg1 + 0x69) = 1
return zx.q(rsi)
