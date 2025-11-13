// 函数: sub_142185960
// 地址: 0x142185960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && arg1[0x81] != 0)
    arg1[0x86].b &= 0x7f
    
    if (arg2 == 0)
        result = (*(*arg1 + 0x2b0))(arg1)
    
    if (arg2 != 0 || result.b == 1)
        result = sub_142185b40(arg1, arg2)
        
        if ((*(arg1 + 0x8a) & 1) != 0)
            int64_t* var_18
            result = sub_141c5eb40(arg1 + 0x8d, &var_18)
            int64_t* rcx_3 = var_18
            
            if (rcx_3 != 0)
                int64_t* var_28 = arg1
                char var_20_1 = arg2
                result = sub_1405a9f90(rcx_3, &var_28)
            
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    result = (**var_10)(var_10)
                    int32_t temp1_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*var_10 + 8))(var_10, 1)

return result
