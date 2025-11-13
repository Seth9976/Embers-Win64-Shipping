// 函数: sub_14196feb0
// 地址: 0x14196feb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = data_143f02f28
int64_t rbp = 0
void** var_58 = nullptr
int32_t i_2 = 0
int32_t var_4c = 4
void* var_78

if (rax_2 != 0)
    i_2 = 1
    var_78 = rax_2
    *(rax_2 + 0x48) += 1
    rax_2 = data_143f02f28

int64_t* rcx = data_143f02f30
data_143f02f30 = rax_2

if (rax_2 != 0)
    *(rax_2 + 0x48) += 1

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

void var_90
int64_t* rax_4 = sub_141969670(&var_90, &var_78, arg3)
*(*rax_4 + 0x10) = arg1[2]
void* rcx_3 = *rax_4
int32_t r8_1 = rax_4[2].d
int64_t* rdx_2 = rax_4[1]
void* rbx = *(rcx_3 + 0x20)

if (rbx != 0)
    *(rbx + 0x48) += 1

sub_141987710(rcx_3, rdx_2, r8_1, 1)
int64_t* rcx_4 = data_143f02f28
data_143f02f28 = rbx

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

void** rcx_6 = var_58
void** rbx_1 = &var_78
int32_t i_1 = i_2

if (rcx_6 != 0)
    rbx_1 = rcx_6

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            rcx_5[9].d -= 1
            
            if (rcx_5[9].d == 1)
                sub_140a2f6e0(rcx_5)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[4].b = 0
sub_140a22e70(arg1[5], arg2, arg3)
*arg1 = &data_143002830
int64_t* rcx_8 = arg1[5]

if (rcx_8 != 0)
    rcx_8[9].d -= 1
    
    if (rcx_8[9].d == 1)
        sub_140a2f6e0(rcx_8)

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
    rbp = lpTlsValue[1]
else
    int64_t rdx_5 = *lpTlsValue
    
    if (rdx_5 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_5)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rbp
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
__security_check_cookie(rax_1 ^ &var_b8)
return result
