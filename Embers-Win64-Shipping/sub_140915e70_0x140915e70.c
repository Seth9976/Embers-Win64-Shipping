// 函数: sub_140915e70
// 地址: 0x140915e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg1)

if (rcx == 0)
    return arg2

if (rcx == 1)
    if ((*(arg1 + 0x10) | *(arg1 + 0xc) | *(arg1 + 8) | *(arg1 + 4)) != 0)
        void* rax_7 = sub_140d21d80(arg2)
        int128_t zmm0 = *(arg1 + 4)
        int32_t r8_2 = *(rax_7 + 0x58)
        int128_t var_48 = zmm0
        
        if (r8_2 != 0xffffffff)
            void var_38
            zmm0 = *sub_140cba950(&var_48, &var_38, r8_2)
            var_48 = zmm0
        
        int32_t var_28 = 0xffffffff
        int64_t var_24_1 = 0
        int128_t var_1c = zmm0
        void* rax_9 = sub_140d3c6e0(&var_28)
        void* rdi_1 = rax_9
        
        if (rax_9 != 0)
        label_140915fd0:
            void* rax_18 = sub_142452380()
            void* rdx_3 = *(rdi_1 + 0x10)
            int64_t rax_19 = sx.q(*(rax_18 + 0x38))
            
            if (rax_19.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30
                    && sub_141dc9840(rdi_1) == sub_141dc9840(arg2))
                return rdi_1
        else if ((var_1c:0xc.d | var_1c:8.d | var_1c:4.d | var_1c.d) != 0)
            int32_t rax_14 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_14 = data_1439a9d84
            
            if (rax_14 != var_24_1:4.d || var_28 != 0xffffffff)
                void* rax_15 = sub_140ccdeb0(&var_1c)
                sub_140d3a3a0(&var_28, rax_15)
                
                if (rax_15 != 0 || data_143e1d7b4 == 0)
                    int32_t rax_16 = 0
                    
                    if (0 == data_1439a9d84)
                        data_1439a9d84 = 0
                    else
                        rax_16 = data_1439a9d84
                    
                    var_24_1:4.d = rax_16
                
                void* rax_17 = sub_140d3c6e0(&var_28)
                rdi_1 = rax_17
                
                if (rax_17 != 0)
                    goto label_140915fd0
else if (rcx == 2 && *(arg1 + 0x20) s> rcx - 1)
    int16_t* rbx_1
    
    if (*(arg1 + 0x20) == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *(arg1 + 0x18)
    
    return sub_140d2ee50(sub_142459c10(), arg2, rbx_1, 0)

return nullptr
