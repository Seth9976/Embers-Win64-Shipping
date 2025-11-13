// 函数: src_callback_read
// 地址: 0x141c2c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg1 != 0 && arg3 s> 0)
    if (arg1[3].d == 0x22c)
        if (arg1[8] == 0)
            arg1[2].d = 0x13
            return 0
        
        int32_t var_40 = 0
        int96_t var_38 = (zx.o(0)).12
        
        if (arg2 < 0.00390625 || arg2 > 256.0)
            arg1[2].d = 6
            return 0
        
        void* r11 = arg1[0xb]
        int32_t rdx = arg1[0xa].d
        int32_t rdi = 0
        void* var_50 = r11
        double var_28 = arg2
        int64_t var_48 = arg4
        int32_t var_3c = arg3
        int32_t var_40_1 = rdx
        
        if (arg3 s> 0)
            do
                if (rdx == 0)
                    int64_t rcx = arg1[9]
                    void arg_8
                    void* var_58 = &arg_8
                    int32_t rax_3 = arg1[8](rcx, &var_58)
                    var_40_1 = rax_3
                    var_50 = var_58
                    int32_t rax_5 = var_38:8.d
                    
                    if (rax_3 == 0)
                        rax_5 = 1
                    
                    var_38:8.d = rax_5
                
                arg1[3].d = 0x22b
                int32_t rax_6 = src_process(arg1, &var_50)
                arg1[3].d = 0x22c
                r10 = rax_6
                
                if (rax_6 != 0)
                    rdx = var_40_1
                    r11 = var_50
                    break
                
                int32_t r8 = var_38:4.d
                rdi += r8
                int32_t r9 = *(arg1 + 0x14)
                var_3c -= r8
                r11 = var_50 + (sx.q(r9 * var_38.d) << 2)
                rdx = var_40_1 - var_38.d
                var_50 = r11
                var_40_1 = rdx
                var_48 += sx.q(r9 * r8) << 2
                
                if (var_38:8.d == 1 && r8 == 0)
                    break
            while (rdi s< arg3)
        
        arg1[0xb] = r11
        arg1[0xa].d = rdx
        
        if (r10 == 0)
            return zx.q(rdi)
        
        arg1[2].d = r10
        return 0
    
    arg1[2].d = 0x12

return 0
