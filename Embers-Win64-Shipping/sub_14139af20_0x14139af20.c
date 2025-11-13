// 函数: sub_14139af20
// 地址: 0x14139af20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_40 = &arg_8
void*** (* var_48)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_48, &data_143958018) + 0x10
int64_t* var_38 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_20 = 0
int64_t rcx_3 = rax_1[3]
rax_1[3] = &var_38
int64_t* rax_2 = var_38
rax_2[4].d += 1

if (sub_1413a0e80(arg1[2], arg1[4].d, &arg1[2], 0) != 0)
    *(arg1[2] + 0x31) = 1
    int64_t* rcx_5 = arg1[2][4]
    (*(*rcx_5 + 0x10))(rcx_5)

if (var_20 == 0)
    int64_t* rax_7 = var_38
    char var_20_1 = 1
    rax_7[4].d -= 1
    int64_t* rcx_6 = var_38
    
    if (rcx_2 != rcx_6[2])
        sub_140b16b40(rcx_6, rcx_2)
        rcx_6 = var_38
    
    *rcx_6 = rcx_1
    var_38[3] = rcx_3

int64_t* rbx = arg1[3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_12 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[5].b = 0
*arg1 = &data_142f6e2f0
int64_t* rcx_10 = arg1[6]

if (rcx_10 != 0)
    rcx_10[9].d -= 1
    
    if (rcx_10[9].d == 1)
        sub_140a2f6e0(rcx_10)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rdi_2 = nullptr
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
    rdi_2 = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_2
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
