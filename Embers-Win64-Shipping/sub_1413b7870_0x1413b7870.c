// 函数: sub_1413b7870
// 地址: 0x1413b7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_14081d830(0x40, *(arg1 + 8), 1, 0)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    int128_t* var_48
    TEB* gsbase
    
    if (data_143e53938
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e53938)
        
        if (data_143e53938 == 0xffffffff)
            int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1410e17f0
            var_48 = nullptr
            int32_t var_40_2 = 0
            
            do
                char var_58
                i = i(zx.q(var_58), &var_48)
            while (i != 0)
            
            int128_t* r9_2 = var_48
            int32_t r8_2 = var_40_2 - 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_40_2)
            int32_t i_3 = (temp1_1 - temp0_1) s>> 1
            
            if (i_3 s> 0)
                uint64_t i_2 = zx.q(i_3)
                int128_t* rcx_6 = r9_2
                uint64_t i_1
                
                do
                    int128_t* rax_10 = &r9_2[sx.q(r8_2) * 3]
                    
                    if (rcx_6 != rax_10)
                        int128_t zmm2 = *rcx_6
                        int128_t zmm3 = rcx_6[1]
                        int128_t zmm4_2 = rcx_6[2]
                        *rcx_6 = *rax_10
                        rcx_6[1] = rax_10[1]
                        rcx_6[2] = rax_10[2]
                        *rax_10 = zmm2
                        rax_10[1] = zmm3
                        rax_10[2] = zmm4_2
                    
                    rcx_6 = &rcx_6[3]
                    r8_2 -= 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            int128_t** var_60_1 = &var_48
            int32_t var_68_1 = 0x90
            sub_1419c2220(&data_143e538a0, 0, FRenderTargetParameters", FRenderTargetParameters", 
                0, nullptr)
            int128_t* rcx_7 = var_48
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            atexit(&data_142cd1c00)
            _Init_thread_footer(&data_143e53938)
    
    var_48 = arg3
    void* var_40_1 = &data_143e538d0
    var_48.o = var_48.o
    sub_141992bd0(rsi, arg2, &var_48, arg4)
    *rsi = &data_142f78f38

return sub_1419968d0(arg1, rsi) __tailcall
