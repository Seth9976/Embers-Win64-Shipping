// 函数: sub_140a35a60
// 地址: 0x140a35a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3[5].d

if (rsi s< 8)
    int32_t r10_1 = 0
    
    if (rsi s<= 0)
    label_140a35ad3:
        jump(*(*arg2 + 0x10))
    
    int64_t r8 = 0
    
    while (true)
        int64_t* rax_1 = arg3[4]
        int64_t* rcx = arg3
        
        if (rax_1 != 0)
            rcx = rax_1
        
        int64_t rax_2 = 0
        void* rdx = *(rcx + r8)
        
        if (0 == *(rdx + 8))
            *(rdx + 8) = 0
        else
            rax_2 = *(rdx + 8)
        
        rsi = arg3[5].d
        
        if (((rax_2 u>> 0x1a).b & 1) == 0)
            break
        
        r10_1 += 1
        r8 += 8
        
        if (r10_1 s>= rsi)
            goto label_140a35ad3

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

void*** rdi = lpTlsValue[1]
int32_t rcx_5

if (rdi != 0)
    rcx_5 = lpTlsValue[2].d
else
    void*** rax_5 = *lpTlsValue
    
    if (rax_5 == 0)
        int64_t rax_6 = sub_14059e7c0(&data_143cf0958)
        lpTlsValue[1] = rax_6
        
        if (rax_6 == 0)
            int64_t* rax_7 = sub_140a82f70(0x2000, 0)
            lpTlsValue[1] = rax_7
            int64_t i_1 = 0x1f
            int64_t* rcx_6
            int64_t i
            
            do
                rcx_6 = &rax_7[0x20]
                *rax_7 = rcx_6
                rax_7 = rcx_6
                i = i_1
                i_1 -= 1
            while (i != 1)
            *rcx_6 = 0
        
        rdi = lpTlsValue[1]
        rcx_5 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rcx_5 = 0x20
        lpTlsValue[1] = rax_5
        lpTlsValue[2].d = 0x20
        rdi = rax_5
        *lpTlsValue = 0

lpTlsValue[1] = *rdi
lpTlsValue[2].d = rcx_5 - 1
int64_t* arg_18
int64_t** rax_10 = sub_140a228d0(&arg_18)
int64_t* rcx_8 = *rax_10
*rax_10 = nullptr
*rdi = &data_142d40498
int64_t* var_30 = rcx_8
rdi[1].d = 0xff
*(rdi + 0xc) = rsi + 1
*rdi = &data_142e51ab8
rdi[4].b = 0
rdi[5] = rcx_8
int64_t* rcx_9 = arg_18

if (rcx_9 != 0)
    sub_140a2f7d0(rcx_9)

rdi[3].d = arg5
rdi[2] = arg2
int64_t* rbx = rdi[5]

if (rbx != 0)
    rbx[9].d += 1

uint64_t result = sub_140a327a0(rdi, arg3, arg4, 1)

if (rbx == 0)
    return result

return sub_140a2f7d0(rbx)
