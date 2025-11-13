// 函数: sub_142249330
// 地址: 0x142249330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
sub_140b33630("Physics")
int64_t* rax_2 = sub_140d3c6e0(&arg1[2])
void** rdi = nullptr

if (rax_2 != 0)
    void* const rdx = 0x6d0
    
    if (*(rax_2 + 0xa54) == 0)
        rdx = 0x678
    
    int128_t* rdx_1 = rdx + rax_2
    
    if (&rax_2[0x143] != rdx_1)
        int128_t zmm1_1 = *(rax_2 + 0xa18)
        int128_t var_40_1 = zmm1_1
        *(rax_2 + 0xa18) = *rdx_1
        *rdx_1 = zmm1_1
    
    sub_142249610(rax_2)
    int64_t* rcx_2 = rax_2[0x13c]
    rax_2[0x13c] = 0
    
    if (rcx_2 != 0)
        rcx_2[9].d -= 1
        
        if (rcx_2[9].d == 1)
            sub_140a2f6e0(rcx_2)
    
    int64_t* rcx_3 = rax_2[0x13d]
    rax_2[0x13d] = 0
    
    if (rcx_3 != 0)
        rcx_3[9].d -= 1
        
        if (rcx_3[9].d == 1)
            sub_140a2f6e0(rcx_3)

sub_140b37f60("Physics")
arg1[3].b = 0
sub_140a22e70(arg1[4], arg2, arg3)
*arg1 = &data_14330acc8
int64_t* rcx_5 = arg1[4]

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
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
__security_check_cookie(rax_1 ^ &var_68)
return result
