// 函数: sub_1423bffd0
// 地址: 0x1423bffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6].b != 0 && *(arg1 + 0x31) != 0)
    void* rax_1 = arg1[2]
    void* i = *(rax_1 + 0x10)
    
    for (void* rsi_3 = (sx.q(*(rax_1 + 0x18)) << 4) + i; i != rsi_3; i += 0x10)
        void* rcx = *(i + 8)
        
        if (rcx != 0)
            sub_1423ca700(rcx, 2)

void* rax_4 = arg1[2]

if (*(rax_4 + 0xb) != 0)
    float zmm1 = arg1[3].d
    
    if (0f f!= *(rax_4 + 0xc))
        void* rcx_1 = arg1[5]
        float zmm0
        
        if ((*(rax_4 + 0xa) & 1) == 0)
            zmm0 = *(rcx_1 + 0x520)
        else
            zmm0 = *(rcx_1 + 0x524)
        
        void* rcx_2 = *(rax_4 + 0x20)
        float zmm2 = *(rcx_2 + 0x24)
        
        if (not(zmm2 < 0f))
            zmm1 = zmm0 - zmm2
        
        *(rcx_2 + 0x24) = zmm0
    else
        *(*(rax_4 + 0x20) + 0x24) = 0xbf800000
    
    int64_t* rcx_3 = arg1[2]
    (*(*rcx_3 + 8))(rcx_3, zmm1, zx.q(*(arg1 + 0x1c)), zx.q(arg3), &arg1[8])
    rax_4 = arg1[2]

void** rsi_4 = nullptr
*(*(rax_4 + 0x20) + 0x10) = 0
arg1[7].b = 0
sub_140a22e70(arg1[8], arg2, arg3)
*arg1 = &data_14333d570
int64_t* rcx_5 = arg1[8]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rsi_4 = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi_4
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
