// 函数: sub_141dadef0
// 地址: 0x141dadef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[0x3e].d = 0

if (*(arg2 + 0x1f4) != 0)
    sub_1405c5510(&arg2[0x3d], 0)

arg2[0x3f].d = 0

if ((*(*arg2 + 0x78))(arg2, 0, zx.q(arg2[0x59].d)).b == 0)
    arg2[0x29].d = 0
    
    if (*(arg2 + 0x14c) != 0)
        sub_1405c5510(&arg2[0x28], 0)
    
    *(arg2 + 0x27c) = 0
    arg2[0x47].d = 0

arg2[0x2a].d = 0
*(arg2 + 0x154) = 0

if (arg2[0x57].d != 0)
    int64_t* rcx_3 = arg2[0x56]
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3).b != 0)
        int32_t var_20_1 = 0
        void** const var_28 = &data_142fc8f88
        int64_t var_18_1 = arg2[0x59]
        int64_t var_10_1 = -1
        int64_t* rcx_4
        
        if (arg2[0x57].d == 0)
            rcx_4 = nullptr
        else
            rcx_4 = arg2[0x56]
        
        (*(*rcx_4 + 0x48))(rcx_4, &var_28)
        void var_38
        
        if (&var_38 != &arg2[0x56] && arg2[0x57].d != 0)
            int64_t* rcx_5 = arg2[0x56]
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x38))(rcx_5, 0)
                int64_t rcx_6 = arg2[0x56]
                
                if (rcx_6 != 0)
                    arg2[0x56] = sub_140a84c80(rcx_6, 0, 0)
                
                arg2[0x57].d = 0

void* result
result.b = 1
arg2[0x59] = -1
return result
