// 函数: sub_141412cc0
// 地址: 0x141412cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0x42f7e2a8
data_143ed4aa8 = 0
*arg1 = &data_142f7e2a8
int32_t i_1 = arg1[0x13].d
int64_t* rbx = arg1[0x12]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = rcx[9].d
            rcx[9].d -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(rcx)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
