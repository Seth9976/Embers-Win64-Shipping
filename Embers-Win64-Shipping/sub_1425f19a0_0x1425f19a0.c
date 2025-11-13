// 函数: sub_1425f19a0
// 地址: 0x1425f19a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x90)
*(arg1 + 0x90) = 0

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

HRESULT result

if (MFCreateMediaType(arg1 + 0x90) s>= 0)
    int64_t* rcx_2 = *(arg1 + 0x90)
    
    if ((*(*rcx_2 + 0xc0))(rcx_2, &data_1434cbb80, "auds") s>= 0 && *(arg1 + 0x40) == 0)
        int64_t* rcx_3 = *(arg1 + 0x90)
        
        if ((*(*rcx_3 + 0xc0))(rcx_3, &data_1434cbb90, &data_1434cbb60) s>= 0)
            int64_t* rcx_4 = *(arg1 + 0x90)
            
            if ((*(*rcx_4 + 0xa8))(rcx_4, &data_1434cbc00, 0x10) s>= 0)
                int64_t* rcx_5 = *(arg1 + 0x90)
                
                if ((*(*rcx_5 + 0xa8))(rcx_5, &data_1434cbbe0, zx.q(*(arg1 + 0x68))) s>= 0)
                    int64_t* rcx_6 = *(arg1 + 0x90)
                    
                    if ((*(*rcx_6 + 0xa8))(rcx_6, &data_1434cbbd0, zx.q(*(arg1 + 0x6c))) s>= 0)
                        int64_t* rcx_7 = *(arg1 + 0x90)
                        
                        if ((*(*rcx_7 + 0xa8))(rcx_7, &data_1434cbbf0, zx.q(*(arg1 + 0x70) u>> 3))
                                s>= 0)
                            int64_t* rcx_8 = *(arg1 + 0x88)
                            
                            if ((*(*rcx_8 + 0x80))(rcx_8, 0, *(arg1 + 0x90), 0) s>= 0)
                                result.b = 1
                                return result

result.b = 0
return result
