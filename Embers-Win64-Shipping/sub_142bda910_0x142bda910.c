// 函数: sub_142bda910
// 地址: 0x142bda910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
void* r10 = &arg1[1]
int32_t i_3 = *arg1
uint32_t r14 = zx.d(arg1[0x208].b)

if (i_3 != 0)
    int32_t r9 = arg1[0x207]
    int32_t i
    
    do
        int32_t rdx_1 = arg2 - *(r10 + 0xc)
        
        if (rdx_1 s< neg.d(r9))
            break
        
        if (arg2 s<= *(r10 + 8) + r9)
            if (r14 != 0 || rdx_1 s<= arg1[0x206])
                *arg4 = 1
                arg4[1] = *(r10 + 0x10)
            
            break
        
        r10 += 0x20
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg1[0x81]
uint64_t result = zx.q(i_2) << 5
void* rcx_3 = &arg1[0x7a] + result

if (i_2 != 0)
    int32_t r10_1 = arg1[0x207]
    int32_t i_1
    
    do
        int32_t r8_3 = *(rcx_3 + 8) - arg3
        
        if (r8_3 s< neg.d(r10_1))
            break
        
        result = zx.q(*(rcx_3 + 0xc) - r10_1)
        
        if (arg3 s>= result.d)
            if (r14 != 0 || r8_3 s< arg1[0x206])
                *arg4 |= 2
                result = zx.q(*(rcx_3 + 0x10))
                arg4[2] = result.d
            
            break
        
        rcx_3 -= 0x20
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
