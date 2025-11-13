// 函数: sub_142921500
// 地址: 0x142921500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(8)
int32_t result = 0
int64_t* r10 = arg2
int64_t* r11 = arg1

if (arg4 s<= 0)
    return result

while ((arg4 & 0xfffffffc) != 0)
    int64_t rbx_1 = *r10
    int64_t rdi_1 = *arg3
    *r11 = rbx_1 - sx.q(result) - rdi_1
    
    if (rbx_1 != rdi_1)
        result.b = rbx_1 u< rdi_1
    
    int64_t rbx_2 = r10[1]
    int64_t rdi_2 = arg3[1]
    r11[1] = rbx_2 - sx.q(result) - rdi_2
    
    if (rbx_2 != rdi_2)
        result.b = rbx_2 u< rdi_2
    
    int64_t rbx_3 = r10[2]
    int64_t rdi_3 = arg3[2]
    r11[2] = rbx_3 - sx.q(result) - rdi_3
    
    if (rbx_3 != rdi_3)
        result.b = rbx_3 u< rdi_3
    
    int64_t rbx_4 = r10[3]
    int64_t rdi_4 = arg3[3]
    r11[3] = rbx_4 - sx.q(result) - rdi_4
    
    if (rbx_4 != rdi_4)
        result.b = rbx_4 u< rdi_4
    
    r10 = &r10[4]
    arg3 = &arg3[4]
    r11 = &r11[4]
    arg4 -= 4

if (arg4 != 0)
    int64_t* r8 = arg3 - r10
    int64_t* r11_1 = r11 - r10
    int32_t i
    
    do
        int64_t rbx_5 = *r10
        int64_t rdi_5 = *(r8 + r10)
        *(r11_1 + r10) = rbx_5 - sx.q(result) - rdi_5
        
        if (rbx_5 != rdi_5)
            result.b = rbx_5 u< rdi_5
        
        r10 = &r10[1]
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
