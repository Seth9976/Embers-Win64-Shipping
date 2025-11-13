// 函数: sub_142b15d90
// 地址: 0x142b15d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg5)
int32_t r10 = rdi.d
int16_t* rbx = arg1 + (sx.q(arg2) << 1)
int16_t* r11_1 = rbx - arg4
uint32_t result

while (true)
    int16_t rcx = *(r11_1 + arg4)
    result = zx.d(*arg4)
    arg4 = &arg4[1]
    
    if (rcx != result.w)
        break
    
    r10 -= 1
    
    if (r10 s<= 0)
        if ((arg2 s> 0 && (zx.d(rbx[-1]) & 0xfffffc00) == 0xd800
                && (zx.d(*rbx) & 0xfffffc00) == 0xdc00) || (rdi.d s< arg3 - arg2
                && (zx.d(rbx[sx.q((rdi - 1).d)]) & 0xfffffc00) == 0xd800
                && (zx.d(rbx[rdi]) & 0xfffffc00) == 0xdc00))
            break
        
        result.b = 1
        return result

result.b = 0
return result
