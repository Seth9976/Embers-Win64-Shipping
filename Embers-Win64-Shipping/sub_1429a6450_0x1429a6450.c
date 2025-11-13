// 函数: sub_1429a6450
// 地址: 0x1429a6450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx_2 = (arg1[1] - *arg1) s>> 3
void* result = sub_142985580(arg3, rbx_2)
int64_t rcx_1 = 0
int32_t r11 = (rbx_2 - 1).d
int32_t r10 = 0

if (r11 s>= 0)
    int64_t r9_1 = 0
    
    do
        r9_1 += 8
        int64_t r8 = 0
        
        if (mods.dp.d(sx.q(r10), arg2) != 0)
            r8 = rcx_1
        
        r10 += 1
        *(r9_1 + *arg3 - 8) = r8
        result = *arg1
        rcx_1 = *(result + r9_1 - 8) + r8
    while (r10 s<= r11)

return result
