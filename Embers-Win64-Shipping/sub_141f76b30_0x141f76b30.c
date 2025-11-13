// 函数: sub_141f76b30
// 地址: 0x141f76b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1b0) == 0)
    return 

if (data_143f3b734 != 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    int32_t var_18_1 = 0xffffffff
    sub_140d3cc80(sub_14259ad30(), &var_28, 1, 0x10, 0)
    int32_t r8_2 = var_20_1
    int32_t i = var_18_1 + 1
    int64_t rdx_2 = var_28
    int32_t i_1 = i
    void* rax
    
    if (i s< r8_2)
        while (*(rdx_2 + (sx.q(i) << 3)) == 0)
            rax = zx.q(i + 1)
            i_1 = rax.d
            i = rax.d
            
            if (rax.d s>= r8_2)
                break
    
    while (i s>= 0)
        if (i s>= r8_2)
            break
        
        void* rbx_1 = *(rdx_2 + (sx.q(i) << 3))
        
        if (sub_14242f5b0(arg1, *(rbx_1 + 0xa0)).b != 0)
            int32_t rax_3 = *(rbx_1 + 0xc)
            void* const rax_7
            
            if (rax_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rdx_4 = zx.d(rax_3.w)
                
                if (rax_3 s< 0)
                    rax_3 += 0xffff
                    rdx_4 -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_4) * 0x18
            
            if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
                sub_141f70300(rbx_1)
        
        r8_2 = var_20_1
        i = i_1 + 1
        rdx_2 = var_28
        i_1 = i
        
        if (i s< r8_2)
            while (*(rdx_2 + (sx.q(i) << 3)) == 0)
                rax = zx.q(i + 1)
                i_1 = rax.d
                i = rax.d
                
                if (rax.d s>= r8_2)
                    break
    
    if (rdx_2 != 0)
        sub_140a74f90(rdx_2)

int128_t entry_zmm3

if (data_143f3b9c8 s> 0)
    EnterCriticalSection(&data_143f3b838)
    entry_zmm3 = sub_141f76d00(arg1, &data_143f3b9c0, 1, entry_zmm3)
    LeaveCriticalSection(&data_143f3b838)

if (data_143f3b9d8 s> 0)
    return sub_141f76d00(arg1, &data_143f3b9d0, 0, entry_zmm3) __tailcall
