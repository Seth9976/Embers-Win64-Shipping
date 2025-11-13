// 函数: sub_1423ef860
// 地址: 0x1423ef860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a80e70() != 0)
    return sub_140b72cd0(data_143a302a8) __tailcall

if (sub_140a80f10() != 0)
    return sub_140b72cd0(data_143a302b0) __tailcall

if (data_143de5480 != 0)
    uint32_t rax_4
    rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_4.b == 0)
        int64_t* rax_5 = sub_140a242a0()
        int64_t r8_2 = *rax_5
        (*(r8_2 + 0x10))(rax_5, 0, r8_2)
        sub_140b72cd0(data_143a30298)
        data_143f5b550 -= 1
        uint64_t result = 0
        bool z
        
        if (0 == data_143f5b550)
            data_143f5b550 = 0
            z = true
        else
            result = zx.q(data_143f5b550)
            z = false
        
        if (not(z))
            int128_t zmm6 = 0x38d1b717
            bool z_1
            
            do
                zmm6 = sub_140b73230(zmm6)
                result = 0
                
                if (0 == data_143f5b550)
                    data_143f5b550 = 0
                    z_1 = true
                else
                    result = zx.q(data_143f5b550)
                    z_1 = false
            while (not(z_1))
        
        return result

return sub_140b72cd0(data_143a302a0) __tailcall
