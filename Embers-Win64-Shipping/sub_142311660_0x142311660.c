// 函数: sub_142311660
// 地址: 0x142311660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f587d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f587d0)
    
    if (data_143f587d0 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_6 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.FreeSkeletalMeshBuffers", r8_3)
        int64_t rax_4
        
        if (rax_6 == 0)
            rax_4 = 0
        else
            int64_t rdx_5 = *rax_6
            rax_4 = (*(rdx_5 + 0x58))(rax_6, rdx_5)
        
        data_143f587c8 = rax_4
        _Init_thread_footer(&data_143f587d0)

int32_t* result = data_143f587c8

if (*result == 1)
    sub_1419a21e0(0)
    int64_t var_38 = 0
    int32_t i_2 = 0
    int32_t var_28_1 = 0xffffffff
    result = sub_140d3cc80(sub_14258cb80(), &var_38, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_28_1 + 1
    int64_t rdx_2 = var_38
    int32_t var_28_2 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            var_28_2 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        result = sub_1423448e0(*(*(rdx_2 + (sx.q(i_1) << 3)) + 0x58), data_1439c7a08)
        rdx_2 = var_38
        
        if (result.b == 0)
            result = sx.q(var_28_2)
            void* rbp_1 = *(rdx_2 + (result << 3))
            void*** rsi_1 = *(rbp_1 + 0x58)
            
            if (rsi_1 != 0)
                int32_t j = 0
                
                if (rsi_1[1].d s> 0)
                    int64_t rdi_1 = 0
                    
                    do
                        result = sub_14233de50(rbp_1 + 0x308, rbp_1, j)
                        
                        if (result.b == 0)
                            result = sub_142343d60(*(*rsi_1 + rdi_1), 0)
                        
                        j += 1
                        rdi_1 += 8
                    while (j s< rsi_1[1].d)
                    
                    rdx_2 = var_38
        
        i = i_2
        i_1 = var_28_2 + 1
        var_28_2 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(rdx_2 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                var_28_2 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (rdx_2 != 0)
        return sub_140a74f90(rdx_2)

return result
