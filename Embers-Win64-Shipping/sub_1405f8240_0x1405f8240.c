// 函数: sub_1405f8240
// 地址: 0x1405f8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x20
EnterCriticalSection(arg1 + 0x20)
void* rdi

if (*(arg1 + 0xc0) == 0)
label_1405f82fc:
    rdi.b = 0
else
    while (true)
        void var_20
        sub_1405fcdd0(arg1 + 0xb8, &var_20, 1)
        int64_t* var_10
        int64_t* rcx_2 = var_10
        
        if (rcx_2 != 0)
            if (*arg2 != rcx_2)
                (*(*rcx_2 + 8))(rcx_2)
                int64_t* rcx_8 = *arg2
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x10))(rcx_8)
                
                rcx_2 = var_10
                *arg2 = rcx_2
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x10))(rcx_2)
            
            rdi.b = 1
            break
        
        PROPVARIANT* pvar
        (*(*(arg1 + 0x10) + 0x30))(arg1 + 0x10, 0x132, &data_1434cb1d0, 0, pvar)
        PropVariantClear(pvar)
        j_sub_140a74f90(pvar)
        
        if (var_10 != 0)
            (*(*var_10 + 0x10))(var_10)
        
        if (*(arg1 + 0xc0) == 0)
            goto label_1405f82fc

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi.b)
