// 函数: sub_141318960
// 地址: 0x141318960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eb6858 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb6858)
    
    if (data_143eb6858 == 0xffffffff)
        int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_141331d40
        int128_t* var_18 = nullptr
        int32_t var_10 = 0
        
        do
            i = i(zx.q(arg1), &var_18)
        while (i != 0)
        
        int128_t* r9 = var_18
        int32_t r8 = var_10 - 1
        int32_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(var_10)
        int32_t i_3 = (temp1 - temp0) s>> 1
        
        if (i_3 s> 0)
            uint64_t i_2 = zx.q(i_3)
            int128_t* rcx_3 = r9
            uint64_t i_1
            
            do
                int128_t* rax_10 = &r9[sx.q(r8) * 3]
                
                if (rcx_3 != rax_10)
                    int128_t zmm2 = *rcx_3
                    int128_t zmm3 = rcx_3[1]
                    int128_t zmm4_1 = rcx_3[2]
                    *rcx_3 = *rax_10
                    rcx_3[1] = rax_10[1]
                    rcx_3[2] = rax_10[2]
                    *rax_10 = zmm2
                    rax_10[1] = zmm3
                    rax_10[2] = zmm4_1
                
                rcx_3 = &rcx_3[3]
                r8 -= 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        int128_t** var_20 = &var_18
        int32_t var_28 = 0x160
        sub_1419c2220(&data_143eb67c0, 0, u"FParameters", u"FParameters", 0, nullptr)
        int128_t* rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        atexit(sub_142cdbe90)
        _Init_thread_footer(&data_143eb6858)

return &data_143eb67c0
