// 函数: sub_141f1b4f0
// 地址: 0x141f1b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143f5a0d0

if (*result != 0)
    sub_1423ab100(arg2, nullptr)
    int64_t rax = *arg1
    int64_t* var_58 = nullptr
    int32_t var_50_1 = 0
    result = (*(rax + 0x680))(arg1, &var_58, 0)
    int32_t rdx_1 = var_50_1
    int64_t* rcx_4
    
    if (rdx_1 == 0)
        rcx_4 = var_58
    else
        TEB* gsbase
        
        if (data_143f3b1cc
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3b1cc)
            
            if (data_143f3b1cc == 0xffffffff)
                int64_t rcx_9
                int64_t rdi_2
                rdi_2, rcx_9 = __memfill_u32(&data_143a2d7a4, 0x3f800000, 4)
                _Init_thread_footer(&data_143f3b1cc)
            
            rdx_1 = var_50_1
        
        int64_t var_48 = 0
        result = &data_143a2d7a0
        void* var_40_1 = &data_143a2d7a0
        int32_t var_38_1 = 0xffff0000
        
        if (rdx_1 == 0)
            rcx_4 = var_58
        else
            rcx_4 = var_58
            bool cond:1_1
            
            do
                int64_t rsi_1 = *rcx_4
                
                if (rsi_1 != 0)
                    int128_t zmm3 = arg1[0x23].d
                    var_48 = rsi_1
                    result = sub_1423b34d0(arg2, &arg1[0x20], &var_48, zmm3, arg3)
                    rdx_1 = var_50_1
                    rcx_4 = var_58
                
                int32_t rdi_1 = 0
                cond:1_1 = rdx_1 != 0
                
                if (rdx_1 s> 0)
                    int64_t* rbx_1 = nullptr
                    
                    do
                        if (*(rbx_1 + rcx_4) == rsi_1)
                            int32_t rax_5 = rdx_1 - rdi_1 - 1
                            
                            if (rax_5 s>= 1)
                                rax_5 = 1
                            
                            if (rax_5 != 0)
                                memcpy(&rcx_4[sx.q(rdi_1)], &rcx_4[sx.q(rdx_1 - rax_5)], rax_5 << 3)
                                rdx_1 = var_50_1
                            
                            var_50_1 = rdx_1 - 1
                            result = sub_1405c53d0(&var_58)
                            rdx_1 = var_50_1
                            rdi_1 -= 1
                            rcx_4 = var_58
                            rbx_1 -= 8
                        
                        rdi_1 += 1
                        rbx_1 = &rbx_1[1]
                    while (rdi_1 s< rdx_1)
                    
                    cond:1_1 = rdx_1 != 0
            while (cond:1_1)
    
    if (rcx_4 != 0)
        return sub_140a74f90(rcx_4)

return result
