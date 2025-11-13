// 函数: sub_1405f6b00
// 地址: 0x1405f6b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
CRITICAL_SECTION* arg_8 = &arg1[2]
EnterCriticalSection(&arg1[2])
int32_t rdi_1

if (arg1[7] != 0)
    while (arg1[0x16].d != 0)
        void var_20
        sub_1405fcdd0(&arg1[0x15], &var_20, 1)
        int64_t* var_10
        
        if (var_10 == 0)
            PROPVARIANT* pvar
            (*(*arg1 + 0x30))(arg1, 0x132, &data_1434cb1d0, 0x80004004, pvar)
            PropVariantClear(pvar)
            j_sub_140a74f90(pvar)
            
            if (var_10 != 0)
                (*(*var_10 + 0x10))(var_10)
        else
            (*(*var_10 + 0x10))(var_10)
    
    rdi_1 = 0
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(rdi_1)
