// 函数: sub_142197cc0
// 地址: 0x142197cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142197a50(arg1)
int32_t i = 0

if (arg1[9].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = arg1[8]
        void* rcx = *(rdi_1 + result)
        
        if (rcx != 0)
            result = *(rcx + 0x30)
            
            if (result != 0)
                int64_t* rcx_1 = *(result + 0x30)
                
                if (rcx_1 != 0)
                    result = sub_140cd85e0(rcx_1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[9].d)

return result
