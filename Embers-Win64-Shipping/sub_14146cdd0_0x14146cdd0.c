// 函数: sub_14146cdd0
// 地址: 0x14146cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ee22b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ee22b8)
    
    if (data_143ee22b8 == 0xffffffff)
        int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1414b65c0
        int128_t* var_20 = nullptr
        int32_t var_18_1 = 0
        
        do
            char var_28
            i = i(zx.q(var_28), &var_20)
        while (i != 0)
        
        int128_t* r9_1 = var_20
        int32_t r8_1 = var_18_1 - 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_18_1)
        int32_t i_3 = (temp1_1 - temp0_1) s>> 1
        
        if (i_3 s> 0)
            uint64_t i_2 = zx.q(i_3)
            int128_t* rcx_3 = r9_1
            uint64_t i_1
            
            do
                int128_t* rax_9 = &r9_1[sx.q(r8_1) * 3]
                
                if (rcx_3 != rax_9)
                    int128_t zmm2 = *rcx_3
                    int128_t zmm3 = rcx_3[1]
                    int128_t zmm4_1 = rcx_3[2]
                    *rcx_3 = *rax_9
                    rcx_3[1] = rax_9[1]
                    rcx_3[2] = rax_9[2]
                    *rax_9 = zmm2
                    rax_9[1] = zmm3
                    rax_9[2] = zmm4_1
                
                rcx_3 = &rcx_3[3]
                r8_1 -= 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        int128_t** var_30_1 = &var_20
        int32_t var_38_1 = 0x1a0
        sub_1419c2220(&data_143ee2220, 0, FWaterCompositeParameters", FWaterCompositeParameters", 
            0, nullptr)
        int128_t* rcx_4 = var_20
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        atexit(sub_142ce6120)
        _Init_thread_footer(&data_143ee22b8)

*arg1 = arg2
arg1[1] = &data_143ee2250
return arg1
