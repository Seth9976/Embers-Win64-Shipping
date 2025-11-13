// 函数: sub_1421912d0
// 地址: 0x1421912d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (data_143f4d370 == 0)
    return 0

if (arg1[8].d s>= data_143a2ed04 || arg1[5].d == 0)
    sub_14218eae0(result)
else
    int64_t* rax_1 = arg1[4]
    
    if (rax_1 != 0)
        arg1 = rax_1
    
    void* rdx = *arg1
    
    if (rdx == 0)
        sub_14218eae0(result)
    else
        int64_t rax_2 = 0
        
        if (0 == *(rdx + 8))
            *(rdx + 8) = 0
        else
            rax_2 = *(rdx + 8)
        
        if (((rax_2 u>> 0x1a).b & 1) != 0)
            sub_14218eae0(result)

if (result[5].d == 0)
    int64_t* var_58
    int64_t** rax_4 = sub_140a228d0(&var_58)
    int64_t rdi_1 = sx.q(result[5].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    result[5].d = rcx_2
    
    if (rcx_2 s> *(result + 0x2c))
        sub_14083a490(result, rdi_1.d)
    
    int64_t* result_3 = result[4]
    int64_t* result_2 = result
    
    if (result_3 != 0)
        result_2 = result_3
    
    result_2[rdi_1] = *rax_4
    *rax_4 = nullptr
    int64_t* rcx_4 = var_58
    
    if (rcx_4 != 0)
        rcx_4[9].d -= 1
        
        if (rcx_4[9].d == 1)
            sub_140a2f6e0(rcx_4)
    
    int64_t* var_50
    int64_t** rax_7 = sub_140a228d0(&var_50)
    
    if (&result[6] != rax_7)
        int64_t* rcx_6 = result[6]
        result[6] = *rax_7
        *rax_7 = nullptr
        
        if (rcx_6 != 0)
            rcx_6[9].d -= 1
            
            if (rcx_6[9].d == 1)
                sub_140a2f6e0(rcx_6)
    
    int64_t* rcx_7 = var_50
    
    if (rcx_7 != 0)
        rcx_7[9].d -= 1
        
        if (rcx_7[9].d == 1)
            sub_140a2f6e0(rcx_7)
    
    int64_t* result_4 = result[4]
    int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
    int64_t* lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
        lpTlsValue = lpTlsValue_2
        
        if (lpTlsValue_2 == 0)
            lpTlsValue = nullptr
        else
            __builtin_memset(lpTlsValue_2, 0, 0x14)
        
        TlsSetValue(data_143cf0950, lpTlsValue)
    
    int64_t* rcx_11 = lpTlsValue[1]
    int32_t rdx_4
    
    if (rcx_11 != 0)
        rdx_4 = lpTlsValue[2].d
    else
        int64_t* rax_10 = *lpTlsValue
        
        if (rax_10 == 0)
            int64_t rax_11 = sub_14059e7c0(&data_143cf0958)
            lpTlsValue[1] = rax_11
            
            if (rax_11 == 0)
                int64_t* rax_12 = sub_140a82f70(0x2000, 0)
                lpTlsValue[1] = rax_12
                int64_t i_1 = 0x1f
                int64_t* rcx_12
                int64_t i
                
                do
                    rcx_12 = &rax_12[0x20]
                    *rax_12 = rcx_12
                    rax_12 = rcx_12
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                *rcx_12 = 0
            
            rcx_11 = lpTlsValue[1]
            rdx_4 = 0x20
            lpTlsValue[2].d = 0x20
        else
            rdx_4 = 0x20
            lpTlsValue[1] = rax_10
            lpTlsValue[2].d = 0x20
            rcx_11 = rax_10
            *lpTlsValue = 0
    
    lpTlsValue[1] = *rcx_11
    lpTlsValue[2].d = rdx_4 - 1
    *rcx_11 = &data_142d40498
    rcx_11[1].d = 0xff
    int64_t var_48_1 = 0
    int64_t var_40_1 = 0
    *(rcx_11 + 0xc) = 1
    *rcx_11 = &data_1432e9968
    int64_t* result_1 = result
    rcx_11[3].b = 0
    
    if (result_4 != 0)
        result_1 = result_4
    
    rcx_11[4] = 0
    int64_t var_48_2 = 0
    void* rdx_5 = *result_1
    rcx_11[2] = rdx_5
    
    if (rdx_5 != 0)
        *(rdx_5 + 0x48) += 1
    
    int64_t* rbp_1 = rcx_11[4]
    int64_t* var_38_1 = rbp_1
    
    if (rbp_1 != 0)
        rbp_1[9].d += 1
    
    sub_141f4a6e0(rcx_11, nullptr, 2, 1)
    
    if (rbp_1 != 0)
        rbp_1[9].d -= 1
        
        if (rbp_1[9].d == 1)
            sub_140a2f6e0(rbp_1)
    
    int32_t* rax_16 = j_sub_140a82f30(4)
    
    if (rax_16 == 0)
        rax_16 = nullptr
    else
        *rax_16 = 0
    
    result[7] = rax_16

void* rax_17 = result[6]
int64_t* rcx_14 = *arg2
*arg2 = rax_17

if (rax_17 != 0)
    *(rax_17 + 0x48) += 1

if (rcx_14 != 0)
    rcx_14[9].d -= 1
    
    if (rcx_14[9].d == 1)
        sub_140a2f6e0(rcx_14)

int32_t* rax_18 = result[7]
*rax_18 += 1
*arg3 = result[7]
result[8].d += 1
return result
