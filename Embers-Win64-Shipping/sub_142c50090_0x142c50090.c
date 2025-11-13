// 函数: sub_142c50090
// 地址: 0x142c50090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1 = (arg3 - 1) s>> 1
int64_t rbp = arg2
int64_t r10 = arg2

if (arg2 s< rdi_1)
    do
        int64_t r11_1 = r10 * 2
        int64_t r10_1 = sx.q(*(arg1 + (r11_1 << 2) + 8)) * 0x624
        int64_t r8 = sx.q(*(arg1 + (r11_1 << 2) + 4)) * 0x624
        bool c_1 = (sx.q(*(r10_1 + arg5 + 0x10c)) << 0x20 | sx.q(*(r10_1 + arg5 + 0x108)))
            u< (sx.q(*(r8 + arg5 + 0x10c)) << 0x20 | sx.q(*(r8 + arg5 + 0x108)))
        r10 = sbb.q(r10_1, r10_1, c_1) + 2 + r11_1
        *(arg1 + (arg2 << 2)) = *(arg1 + (r10 << 2))
        arg2 = r10
    while (r10 s< rdi_1)

if (r10 == rdi_1 && (arg3.b & 1) == 0)
    *(arg1 + (arg2 << 2)) = *(arg1 + (arg3 << 2) - 4)
    arg2 = arg3 - 1

int32_t result

if (rbp s>= arg2)
label_142c501b4:
    result = *arg4
    *(arg1 + (arg2 << 2)) = result
else
    int64_t r11_3
    
    do
        int64_t r8_4 = sx.q(*arg4) * 0x624
        r11_3 = (arg2 - 1) s>> 1
        int64_t rdi_2 = sx.q(*(arg1 + (r11_3 << 2)))
        int64_t r10_4 = rdi_2 * 0x624
        
        if ((sx.q(*(r10_4 + arg5 + 0x10c)) << 0x20 | sx.q(*(r10_4 + arg5 + 0x108)))
                u>= (sx.q(*(r8_4 + arg5 + 0x10c)) << 0x20 | sx.q(*(r8_4 + arg5 + 0x108))))
            goto label_142c501b4
        
        *(arg1 + (arg2 << 2)) = rdi_2.d
        arg2 = r11_3
    while (rbp s< r11_3)
    
    result = *arg4
    *(arg1 + (r11_3 << 2)) = result

return result
