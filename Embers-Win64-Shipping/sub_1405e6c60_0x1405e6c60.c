// 函数: sub_1405e6c60
// 地址: 0x1405e6c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 0x80070057

if (arg2 != 0)
    return 0xc00d36b3

if (arg3 != 0)
    return 0xc00d36b9

EnterCriticalSection(arg1 + 0x10)
bool cond:0 = *(arg1 + 0x38) != 0
int64_t* ppMFType = nullptr
HRESULT rdi

if (cond:0)
    HRESULT rax_4 = MFCreateMediaType(&ppMFType)
    rdi = rax_4
    
    if (rax_4 s>= 0)
        int64_t* ppMFType_1 = ppMFType
        HRESULT rax_6 = (*(*ppMFType_1 + 0xc0))(ppMFType_1, &data_1434cbb80, "vids")
        rdi = rax_6
        
        if (rax_6 s>= 0)
            int64_t* const r8
            
            if ((*(arg1 + 0xb0) != 0x494d767a48617035 || *(arg1 + 0xb8) != 0x3790dc259df278b4) &&
                    (*(arg1 + 0xb0) != 0x494d767a4861704d || *(arg1 + 0xb8) != 0x3790dc259df278b4))
                r8 = "NV12"
            else
                r8 = &data_1434cb7b0
            
            int64_t* ppMFType_2 = ppMFType
            HRESULT rax_12 = (*(*ppMFType_2 + 0xc0))(ppMFType_2, &data_1434cbb90, r8)
            rdi = rax_12
            
            if (rax_12 s>= 0)
                int64_t* ppMFType_3 = ppMFType
                HRESULT rax_14 = (*(*ppMFType_3 + 0xa8))(ppMFType_3, &data_1434cbbb0, 1)
                rdi = rax_14
                
                if (rax_14 s>= 0)
                    int64_t* ppMFType_4 = ppMFType
                    HRESULT rax_16 = (*(*ppMFType_4 + 0xa8))(ppMFType_4, &data_1434cbba0, 1)
                    rdi = rax_16
                    
                    if (rax_16 s>= 0)
                        int64_t* ppMFType_5 = ppMFType
                        HRESULT rax_18 = (*(*ppMFType_5 + 0xa8))(ppMFType_5, &data_1434cbbc0, 
                            zx.q(*(arg1 + 0x5c)))
                        rdi = rax_18
                        
                        if (rax_18 s>= 0)
                            int64_t* ppMFType_6 = ppMFType
                            int64_t r9 = *ppMFType_6
                            HRESULT rax_20 = (*(r9 + 0xb0))(ppMFType_6, &data_1434cbc10, 
                                zx.q(*(arg1 + 0x48)) << 0x20 | zx.q(*(arg1 + 0x4c)), r9)
                            rdi = rax_20
                            
                            if (rax_20 s>= 0)
                                int64_t* ppMFType_7 = ppMFType
                                int64_t r9_1 = *ppMFType_7
                                HRESULT rax_22 = (*(r9_1 + 0xb0))(ppMFType_7, &data_1434cbc20, 
                                    zx.q(*(arg1 + 0x50)) << 0x20 | zx.q(*(arg1 + 0x54)), r9_1)
                                rdi = rax_22
                                
                                if (rax_22 s>= 0)
                                    int64_t* ppMFType_8 = ppMFType
                                    HRESULT rax_24 =
                                        (*(*ppMFType_8 + 0xa8))(ppMFType_8, &data_1434cbc40, 2)
                                    rdi = rax_24
                                    
                                    if (rax_24 s>= 0)
                                        int64_t* ppMFType_9 = ppMFType
                                        HRESULT rax_26 = (*(*ppMFType_9 + 0xb0))(ppMFType_9, 
                                            &data_1434cbc30, 0x100000001)
                                        rdi = rax_26
                                        
                                        if (rax_26 s>= 0)
                                            int64_t* ppMFType_10 = ppMFType
                                            *arg4 = ppMFType_10
                                            (*(*ppMFType_10 + 8))()
    
    int64_t* ppMFType_11 = ppMFType
    
    if (ppMFType_11 != 0)
        (*(*ppMFType_11 + 0x10))(ppMFType_11)
else
    rdi = 0xc00d6d60

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi)
