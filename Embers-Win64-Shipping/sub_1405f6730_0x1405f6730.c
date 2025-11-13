// 函数: sub_1405f6730
// 地址: 0x1405f6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t var_b8 = 0
int64_t* rcx = *arg2
(*(*rcx + 0x120))(rcx, &var_b8)
int32_t rbx = 0
int64_t* result

if (0 u>= var_b8)
label_1405f6997:
    result.b = 0
else
    while (true)
        int64_t* result_1 = nullptr
        int64_t* rcx_1 = *arg2
        (*(*rcx_1 + 0x128))(rcx_1, zx.q(rbx.w), &result_1)
        int64_t* result_3 = result_1
        int32_t var_70
        (*(*result_3 + 0x118))(result_3, &var_70)
        
        if (var_70 == 2)
            int64_t* var_78 = nullptr
            int64_t* result_4 = result_1
            (*(*result_4 + 0x110))(result_4, &var_78)
            int64_t* rcx_2 = var_78
            
            if (rcx_2 != 0)
                int64_t* var_a8 = nullptr
                (**rcx_2)(rcx_2, &data_1434cbd80, &var_a8)
                int64_t* rcx_3 = var_a8
                
                if (rcx_3 != 0)
                    int64_t* var_98 = nullptr
                    (*(*rcx_3 + 0x40))(rcx_3, &var_98)
                    int64_t* rcx_4 = var_98
                    
                    if (rcx_4 != 0)
                        int32_t var_6c = 0
                        int32_t var_58 = 0x206b4fc8
                        int32_t var_54_1 = 0x4c51fcf9
                        int32_t var_50_1 = 0x6497e3af
                        int32_t var_4c_1 = 0xa0339e36
                        
                        if ((*(*rcx_4 + 0x38))(rcx_4, &var_58, &var_6c) == 0)
                            int32_t var_68 = 0
                            int64_t* result_5 = result_1
                            (*(*result_5 + 0x138))(result_5, &var_68)
                            int64_t* var_80 = nullptr
                            int32_t var_64 = 0
                            int64_t* result_6 = result_1
                            (*(*result_6 + 0x158))(result_6, 0, &var_80, &var_64)
                            int64_t* ppvObject = nullptr
                            int64_t* var_88 = nullptr
                            int64_t* rcx_5 = var_80
                            (*(*rcx_5 + 0x110))(rcx_5, &var_88)
                            struct IUnknown punkObject_1 = 0
                            int64_t* rcx_6 = var_88
                            (**rcx_6)(rcx_6, &data_142d5ffd0, &punkObject_1)
                            struct IUnknown punkObject = punkObject_1
                            int64_t* ppvObject_1
                            
                            if (punkObject == 0)
                                ppvObject_1 = ppvObject
                            else
                                MFGetService(punkObject, &data_142d5c258, &data_142d5fe90, 
                                    &ppvObject)
                                ppvObject_1 = ppvObject
                                
                                if (ppvObject_1 != 0)
                                    if (*arg3 != ppvObject_1)
                                        (*(*ppvObject_1 + 8))(ppvObject_1)
                                        int64_t* rcx_13 = *arg3
                                        
                                        if (rcx_13 != 0)
                                            (*(*rcx_13 + 0x10))(rcx_13)
                                        
                                        ppvObject_1 = ppvObject
                                        *arg3 = ppvObject_1
                                    
                                    int64_t* rdx_11 = *arg4
                                    int64_t* result_2 = result_1
                                    
                                    if (rdx_11 != result_2)
                                        if (result_2 != 0)
                                            int64_t rdx_10 = *result_2
                                            (*(rdx_10 + 8))(result_2, rdx_10)
                                            rdx_11 = *arg4
                                            ppvObject_1 = ppvObject
                                        
                                        if (rdx_11 != 0)
                                            (*(*rdx_11 + 0x10))(rdx_11)
                                            ppvObject_1 = ppvObject
                                        
                                        *arg4 = result_1
                                    
                                    int64_t* rdx_13 = *arg5
                                    int64_t* rax_25 = var_a8
                                    
                                    if (rdx_13 != rax_25)
                                        if (rax_25 != 0)
                                            int64_t rdx_12 = *rax_25
                                            (*(rdx_12 + 8))(rax_25, rdx_12)
                                            rdx_13 = *arg5
                                            rax_25 = var_a8
                                            ppvObject_1 = ppvObject
                                        
                                        if (rdx_13 != 0)
                                            (*(*rdx_13 + 0x10))(rdx_13)
                                            rax_25 = var_a8
                                            ppvObject_1 = ppvObject
                                        
                                        *arg5 = rax_25
                                    
                                    struct IUnknown punkObject_2 = punkObject_1
                                    
                                    if (punkObject_2 != 0)
                                        (*(*punkObject_2 + 0x10))(punkObject_2)
                                        rax_25 = var_a8
                                        ppvObject_1 = ppvObject
                                    
                                    int64_t* rdx_14 = var_88
                                    
                                    if (rdx_14 != 0)
                                        (*(*rdx_14 + 0x10))(rdx_14)
                                        rax_25 = var_a8
                                        ppvObject_1 = ppvObject
                                    
                                    if (ppvObject_1 != 0)
                                        (*(*ppvObject_1 + 0x10))(ppvObject_1)
                                        rax_25 = var_a8
                                    
                                    int64_t* rcx_20 = var_80
                                    
                                    if (rcx_20 != 0)
                                        (*(*rcx_20 + 0x10))(rcx_20)
                                        rax_25 = var_a8
                                    
                                    int64_t* rcx_21 = var_98
                                    
                                    if (rcx_21 != 0)
                                        (*(*rcx_21 + 0x10))(rcx_21)
                                        rax_25 = var_a8
                                    
                                    if (rax_25 != 0)
                                        int64_t rdx_15 = *rax_25
                                        (*(rdx_15 + 0x10))(rax_25, rdx_15)
                                    
                                    int64_t* rcx_23 = var_78
                                    
                                    if (rcx_23 != 0)
                                        (*(*rcx_23 + 0x10))(rcx_23)
                                    
                                    result = result_1
                                    
                                    if (result != 0)
                                        int64_t rdx_16 = *result
                                        (*(rdx_16 + 0x10))(result, rdx_16)
                                    
                                    result.b = 1
                                    break
                                
                                punkObject = punkObject_1
                            
                            if (punkObject != 0)
                                int64_t rdx_8 = *punkObject
                                (*(rdx_8 + 0x10))(punkObject, rdx_8)
                                ppvObject_1 = ppvObject
                            
                            int64_t* rax_14 = var_88
                            
                            if (rax_14 != 0)
                                int64_t rdx_9 = *rax_14
                                (*(rdx_9 + 0x10))(rax_14, rdx_9)
                                ppvObject_1 = ppvObject
                            
                            if (ppvObject_1 != 0)
                                (*(*ppvObject_1 + 0x10))(ppvObject_1)
                            
                            int64_t* rcx_10 = var_80
                            
                            if (rcx_10 != 0)
                                (*(*rcx_10 + 0x10))(rcx_10)
                        
                        rcx_4 = var_98
                    
                    if (rcx_4 != 0)
                        (*(*rcx_4 + 0x10))(rcx_4)
                    
                    rcx_3 = var_a8
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 0x10))(rcx_3)
                
                rcx_2 = var_78
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x10))(rcx_2)
        
        int64_t* result_7 = result_1
        
        if (result_7 != 0)
            (*(*result_7 + 0x10))(result_7)
        
        rbx += 1
        
        if (rbx s>= zx.d(var_b8))
            goto label_1405f6997

__security_check_cookie(rax_1 ^ &var_d8)
return result
