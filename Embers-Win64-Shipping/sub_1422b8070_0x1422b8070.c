// 函数: sub_1422b8070
// 地址: 0x1422b8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = data_143a2fdc8
int32_t result = 1

if (r8 s> 1)
    void* r11_1 = data_143a2fdc0
    int64_t* rdx_1 = r11_1 + 0x128
    
    while (*rdx_1 != arg1[9].q)
        result += 1
        rdx_1 = &rdx_1[0x13]
        
        if (result s>= r8)
            return result
    
    if (result != 0xffffffff)
        void* rcx_2 = sx.q(result) * 0x98 + r11_1
        *rcx_2 = *arg1
        *(rcx_2 + 0x10) = arg1[1]
        *(rcx_2 + 0x20) = arg1[2]
        *(rcx_2 + 0x30) = arg1[3]
        *(rcx_2 + 0x40) = arg1[4]
        *(rcx_2 + 0x50) = arg1[5]
        *(rcx_2 + 0x60) = arg1[6]
        *(rcx_2 + 0x70) = arg1[7]
        *(rcx_2 + 0x80) = arg1[8].q
        result = *(arg1 + 0x88)
        *(rcx_2 + 0x88) = result
        int64_t* rcx_3 = data_143f53cc8
        data_143f53cc8 = 0
        
        if (rcx_3 != 0)
            jump(*(*rcx_3 + 0x38))

return result
