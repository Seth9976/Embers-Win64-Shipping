// 函数: sub_1426e27c0
// 地址: 0x1426e27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x44))

if ((result.b & 2) == 0)
    *(arg1 + 0x44) = result.d | 2
    int64_t arg_8 = 0
    result = sub_1426a9410(arg1 + 0x18, arg2, 0, sub_142737760())
    char rcx_1 = (*(arg1 + 0x44)).b
    
    if (((rcx_1 & 1) != 0 || *(arg1 + 0x10) s> 0) && arg3 != 0)
        void* rbx_1 = *(arg1 + 8)
        result = sx.q(*(arg1 + 0x10))
        void* rdi_2 = result * 0x38 + rbx_1
        
        if (rbx_1 != rdi_2)
            do
                if (*(rbx_1 + 0x30) == 0xff && *(rbx_1 + 0x20) != 0)
                    result = sub_1426bdb00(rbx_1 + 0x10, arg3)
                
                rbx_1 += 0x38
            while (rbx_1 != rdi_2)
            
            rcx_1 = (*(arg1 + 0x44)).b
        
        if ((rcx_1 & 1) != 0)
            return sub_1426bdb00(arg1 + 0x18, arg3)

return result
