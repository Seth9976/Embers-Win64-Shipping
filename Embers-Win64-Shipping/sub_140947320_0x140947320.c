// 函数: sub_140947320
// 地址: 0x140947320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *arg1
int64_t* rdi = rbp
void* rsi_2 = &rbp[sx.q(arg1[1].d) * 2]

if (rbp != rsi_2)
    do
        if ((**arg2)(arg2, *rdi) != 0)
            return zx.q(((rdi - rbp) s>> 4).d)
        
        rdi = &rdi[2]
    while (rdi != rsi_2)

return 0xffffffff
