// 函数: sub_140adf880
// 地址: 0x140adf880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Y = (zx.o(0)).q
modf(arg1.q, &_Y)

if (arg1.q f>= 0.0)
    bool cond:0_1 = arg1.q f< 0.5
    arg1 = zx.o(_Y)
    
    if (not(cond:0_1))
        arg1.q = arg1.q f+ 1.0
else
    bool cond:1_1 = arg1.q f> -0.5
    arg1 = zx.o(_Y)
    
    if (not(cond:1_1))
        arg1.q = arg1.q f- 1.0

return arg1
