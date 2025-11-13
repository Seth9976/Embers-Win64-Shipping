// 函数: sub_1404dcdd0
// 地址: 0x1404dcdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f13bf8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f13bf8)
    
    if (data_143f13bf8 == 0xffffffff)
        int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1419bc680
        int128_t* var_18 = nullptr
        int32_t var_10_1 = 0
        
        do
            i = i(zx.q(arg1), &var_18)
        while (i != 0)
        
        int128_t* r9_2 = var_18
        int32_t r8_2 = var_10_1 - 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_10_1)
        int32_t i_3 = (temp1_1 - temp0_1) s>> 1
        
        if (i_3 s> 0)
            uint64_t i_2 = zx.q(i_3)
            int128_t* rcx_3 = r9_2
            uint64_t i_1
            
            do
                int128_t* rax_9 = &r9_2[sx.q(r8_2) * 3]
                
                if (rcx_3 != rax_9)
                    int128_t zmm2 = *rcx_3
                    int128_t zmm3 = rcx_3[1]
                    int128_t zmm4_2 = rcx_3[2]
                    *rcx_3 = *rax_9
                    rcx_3[1] = rax_9[1]
                    rcx_3[2] = rax_9[2]
                    *rax_9 = zmm2
                    rax_9[1] = zmm3
                    rax_9[2] = zmm4_2
                
                rcx_3 = &rcx_3[3]
                r8_2 -= 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        int32_t var_60
        var_60.q = &var_18
        int32_t var_68_1 = 0x20
        sub_1419c2220(&data_143f13b60, 0, u"FParameters", u"FParameters", 0, nullptr)
        int128_t* rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        atexit(sub_142cf2520)
        _Init_thread_footer(&data_143f13bf8)

sub_1419b6eb0()
void* var_28 = &data_143f13b60
sub_1419c2be0(&data_143f0ff10, 0, &data_143f13de8, FIntersectionMainRG", 
    /Engine/Private/RayTracing/RayTracingBuiltInShaders.usf", 0x43008b60, 6, 1, sub_1405e13f0, 
    sub_14199abd0, sub_140594850, sub_141461b80, 0x405948d0, 0x118)
data_143f0ff10 = &data_142d54980
return atexit(sub_142cf1230) __tailcall
