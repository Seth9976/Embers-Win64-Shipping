// 函数: sub_1426bf280
// 地址: 0x1426bf280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f9cfe0(arg1, arg2, arg3)
void* rbx = arg1[0x5f]

if (rbx != 0)
    void* r9_1 = *(rbx + 0xc0)
    
    if (r9_1 != 0)
        int32_t r10_1 = *(r9_1 + 0x40)
        int32_t r8_1 = 0
        
        if (r10_1 s> 0)
            result = data_143f72000
            
            while (true)
                if (*(*(r9_1 + 0x38) + sx.q(r8_1) * 0x18) == result)
                    result.b = *(r9_1 + 0x4c) + r8_1.b
                    break
                
                r8_1 += 1
                
                if (r8_1 s>= r10_1)
                    goto label_1426bf2d6
            
            goto label_1426bf2ee
        
    label_1426bf2d6:
        void* rcx_1 = *(r9_1 + 0x30)
        
        if (rcx_1 != 0)
            result = sub_1426b5dd0(rcx_1, &data_143f72000, 0)
        label_1426bf2ee:
            
            if (result.b != 0xff)
                return sub_1426a4fb0(rbx, result.b, arg1[0x4a])

return result
