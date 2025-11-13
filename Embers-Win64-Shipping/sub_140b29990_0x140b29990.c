// 函数: sub_140b29990
// 地址: 0x140b29990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint64_t result = 0
    
    if (0 == *(arg1 + 0x40))
        *(arg1 + 0x40) = 0
    else
        result = *(arg1 + 0x40)
    
    uint64_t result_1 = result
    int32_t i
    
    for (i = result.d & 0x3ffffff; i != 0; i = result.d & 0x3ffffff)
        if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                u< (result_1 & 0xfffffffffc000000))
            sub_140a2c900()
        
        void* rdx_1
        
        if (i != 0)
            rdx_1 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18
        else
            rdx_1 = nullptr
        
        result = result_1
        bool z_1
        
        if (result == *(arg1 + 0x40))
            *(arg1 + 0x40) = zx.q(*(rdx_1 + 0x10)) | ((result_1 & 0xfffffffffc000000) + 0x4000000)
            z_1 = true
        else
            result = *(arg1 + 0x40)
            z_1 = false
        
        if (z_1)
            *(rdx_1 + 0x10) = 0
            break
        
        result = 0
        
        if (0 == *(arg1 + 0x40))
            *(arg1 + 0x40) = 0
        else
            result = *(arg1 + 0x40)
        
        result_1 = result
    
    int64_t rbx_1
    
    if (i != 0)
        rbx_1 = *(*((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18 + 8)
        result = sub_140a24050(i)
    
    if (i == 0 || rbx_1 == 0)
        return result
    
    sub_140a74fd0(rbx_1)
