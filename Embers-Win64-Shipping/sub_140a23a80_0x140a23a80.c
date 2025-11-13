// 函数: sub_140a23a80
// 地址: 0x140a23a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_2[0x2]
QueryPerformanceCounter(&performanceCount_2)
void* rax = arg1[4]
void* rcx_1 = &arg1[6]
int32_t arg_18 = arg3

if (rax != 0)
    rcx_1 = rax

arg1[2]((*(*rcx_1 + 8))(rcx_1), &arg_18)
void performanceCount_3
QueryPerformanceCounter(&performanceCount_3)
int32_t* rcx_4 = arg1[0xb]

if (rcx_4 != 0)
    int32_t rax_3 = *rcx_4
    *rcx_4 -= 1
    
    if (rax_3 == 1)
        int64_t* rcx_7 = arg1[0xd]
        (*(*rcx_7 + 0x10))(rcx_7)
        void performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
    else
        int64_t* rcx_5 = arg1[0xc]
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
            void performanceCount
            QueryPerformanceCounter(&performanceCount)

if (arg1[2] != 0)
    void* rax_6 = arg1[4]
    void* rcx_8 = &arg1[6]
    
    if (rax_6 != 0)
        rcx_8 = rax_6
    
    (*(*rcx_8 + 0x10))(rcx_8)

arg1[0x10].b = 0
sub_140a22e70(arg1[0x11], arg2, arg3)
*arg1 = &data_142e51ac8
int64_t* rcx_10 = arg1[0x11]

if (rcx_10 != 0)
    sub_140a2f7d0(rcx_10)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rsi_1 = nullptr
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
    rsi_1 = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
