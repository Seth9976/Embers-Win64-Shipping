// 函数: sub_1405f9f60
// 地址: 0x1405f9f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int32_t arg_18 = 0
uint64_t result = (*(*arg3 + 0x38))(arg3, &data_1434cb770, &arg_18)

if (result.d s>= 0)
    int64_t* arg_20 = nullptr
    PROPVARIANT pvar
    __builtin_memset(&pvar, 0, 0x18)
    int32_t rax_2 = (*(*arg3 + 0x120))(arg3, &pvar)
    int32_t rdi_1 = rax_2
    
    if (rax_2 s>= 0)
        if (pvar...w == 0xd)
            int64_t* rcx_2 = pvar...__offset(0x8).q
            rdi_1 = (**rcx_2)(rcx_2, &data_142d602e8, &arg_20)
        else
            rdi_1 = -0x7fff0001
    
    result = PropVariantClear(&pvar)
    
    if (rdi_1 s>= 0)
        result = *(arg1 + 0x48)
        
        if (arg_20 == result)
            result = zx.q(*(arg1 + 0xc4))
            
            if (result.d == 1)
                result = sub_1405f4d20(arg1)
            else if (arg2 s< 0)
                if (result.d == 4)
                    *(arg1 + 0xc4) = 1
                    int64_t* rax_5 = j_sub_140a82f30(zx.q((result + 0xc).d))
                    int64_t* var_40_1 = rax_5
                    
                    if (rax_5 != 0)
                        *rax_5 = 0
                        rax_5[1].d = 4
                        int64_t** rcx_6 = *(arg1 + 0x50)
                        *(arg1 + 0x50) = rax_5
                        *rcx_6 = rax_5
                
                result = sub_1405f4d20(arg1)
            else if (arg_18 == 0x64)
                sub_1406084c0(arg1)
                int32_t rax_6 = *(arg1 + 0xc4)
                
                if (rax_6 == 4)
                    *(arg1 + 0xc4) = 5
                    int64_t* rax_7 = j_sub_140a82f30(zx.q(rax_6 + 0xc))
                    int64_t* var_40_2 = rax_7
                    
                    if (rax_7 != 0)
                        *rax_7 = 0
                        rax_7[1].d = 3
                        int64_t** rcx_10 = *(arg1 + 0x50)
                        *(arg1 + 0x50) = rax_7
                        *rcx_10 = rax_7
                else if (rax_6 == 2 && *(arg1 + 0xb8) == 0)
                    if (0x14395f8f0 != arg1)
                        if (*(arg1 + 0xb8) != 0)
                            *(arg1 + 0xb8) = 0
                        
                        *(arg1 + 0xb0) = data_14395f9a0
                        *(arg1 + 0xb8) = 1
                    
                    *(arg1 + 0x78) = 1
                
                result = sub_1405f4d70(arg1)
    
    int64_t* rcx_13 = arg_20
    
    if (rcx_13 != 0)
        return (*(*rcx_13 + 0x10))(rcx_13)

return result
