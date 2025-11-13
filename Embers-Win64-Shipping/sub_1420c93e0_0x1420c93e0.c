// 函数: sub_1420c93e0
// 地址: 0x1420c93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx

if (arg3[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *arg3

int64_t rbp
rbp.b = 1
*arg1 = 0
arg1[1] = 0
void* i = *arg2

for (void* r14_2 = (sx.q(arg2[1].d) << 4) + i; i != r14_2; i += 0x10)
    if (rbp.b == 0)
        int64_t r8 = -1
        
        do
            r8 += 1
        while (rbx[r8] != 0)
        
        sub_140a20ba0(arg1, rbx, r8.d)
    else
        rbp.b = 0
    
    int32_t rax_1 = *(i + 8)
    int32_t r8_1 = rax_1 - 1
    
    if (rax_1 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg1, *i, r8_1)

return arg1
