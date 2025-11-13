// 函数: sub_1417f20a0
// 地址: 0x1417f20a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*arg1)
int16_t* rbx = arg1

if (result.w == 0x2d || result.w == 0x2b)
    result = zx.d(rbx[1])
    rbx = &rbx[1]

int64_t rdi
rdi.b = 0

while (result.w != 0)
    if (result.w != 0x2e)
        if (iswdigit(result.w) == 0)
            result.b = 0
            return result
    else
        if (rdi.b != 0)
            result.b = 0
            return result
        
        rdi.b = 1
    
    result = zx.d(rbx[1])
    rbx = &rbx[1]

result.b = 1
return result
