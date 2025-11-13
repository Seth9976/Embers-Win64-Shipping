// 函数: ?Close@Mod1@@UEAAHXZ
// 地址: 0x141970260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[4]
int64_t rax_1 = (*(*rcx + 8))(rcx)
int64_t rsi = 0
int32_t i = 0

if (arg1[3].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rdx = *(r14_1 + arg1[2])
        *(rdx + 0x20) = rax_1
        *(rdx + 0x28) = rax_1
        char* rbx_1 = *(r14_1 + arg1[2])
        
        if (rbx_1 != 0)
            if (*(rbx_1 + 0x14) u> 0)
                if (sub_140a80f40() != 0 && data_143f02ba8 == 0 && data_143f02bac u> 0)
                    arg5, arg4 = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg4)
                
                arg5, arg4 = sub_14196ef60(&data_143f02b88, rbx_1, arg5, arg4)
            
            data_143f02b90 -= 1
            sub_1408466d0(&rbx_1[0x58])
            sub_140b16b40(&rbx_1[0x30], 0)
            sub_140a74f90(rbx_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[3].d)

int64_t* rcx_5 = arg1[4]
(*(*rcx_5 + 0x18))(rcx_5)
arg1[6].b = 0
sub_140a22e70(arg1[7], arg2, arg3)
*arg1 = &data_143002af8
int64_t* rcx_7 = arg1[7]

if (rcx_7 != 0)
    rcx_7[9].d -= 1
    
    if (rcx_7[9].d == 1)
        sub_140a2f6e0(rcx_7)

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
    rsi = lpTlsValue[1]
else
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
