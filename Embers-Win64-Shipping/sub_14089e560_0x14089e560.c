// 函数: sub_14089e560
// 地址: 0x14089e560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = *(arg1 + 0x18)
int128_t var_18 = *(arg1 + 0x28)
void** rdi = nullptr
arg1[5] = 0
arg1[6] = 7
arg1[3].w = 0
sub_1405921a0(&arg1[2][0x66], &var_28)
int64_t rdx_1 = arg1[6]

if (rdx_1 u>= 8)
    void* rcx_2 = arg1[3]
    
    if ((rdx_1 << 1) + 2 u>= 0x1000)
        void* r8_1 = *(rcx_2 - 8)
        
        if (rcx_2 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8_1
    
    j_sub_140a74f90(rcx_2)

arg1[5] = 0
arg1[6] = 7
arg1[3].w = 0
arg1[7].b = 0
*arg1 = &data_142dfbeb0
int64_t* rcx_4 = arg1[8]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    int64_t* lpTlsValue_2 = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[1] = arg1
lpTlsValue[2].d += 1
return result
