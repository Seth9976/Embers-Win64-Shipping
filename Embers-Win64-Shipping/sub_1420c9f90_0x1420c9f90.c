// 函数: sub_1420c9f90
// 地址: 0x1420c9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != 0)
    result = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (result != 0)
        void* rax = *(result + 0x188)
        void* rcx_2
        
        if (rax == 0)
            rcx_2 = *(result + 0x300)
        else
            rcx_2 = *(rax + 0xc0)
        
        int64_t arg_10 = arg2
        result = sub_1423dce10(rcx_2, &arg_10)
        
        if (result != 0 && *(result + 1) != 2)
            result.b = 1
            return result

result.b = 0
return result
