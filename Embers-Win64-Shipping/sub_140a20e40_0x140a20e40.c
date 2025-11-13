// 函数: sub_140a20e40
// 地址: 0x140a20e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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

int64_t* rcx_3 = lpTlsValue[1]
int32_t rdx_1

if (rcx_3 != 0)
    rdx_1 = lpTlsValue[2].d
else
    int64_t* rax = *lpTlsValue
    
    if (rax == 0)
        int64_t rax_1 = sub_14059e7c0(&data_143cf0958)
        lpTlsValue[1] = rax_1
        
        if (rax_1 == 0)
            int64_t* rax_2 = sub_140a82f70(0x2000, 0)
            lpTlsValue[1] = rax_2
            int64_t i_1 = 0x1f
            int64_t* rcx_4
            int64_t i
            
            do
                rcx_4 = &rax_2[0x20]
                *rax_2 = rcx_4
                rax_2 = rcx_4
                i = i_1
                i_1 -= 1
            while (i != 1)
            *rcx_4 = 0
        
        rcx_3 = lpTlsValue[1]
        rdx_1 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rdx_1 = 0x20
        lpTlsValue[1] = rax
        lpTlsValue[2].d = 0x20
        rcx_3 = rax
        *lpTlsValue = 0

lpTlsValue[1] = *rcx_3
lpTlsValue[2].d = rdx_1 - 1
*rcx_3 = &data_142d40498
rcx_3[1].d = 0xff
int64_t var_20 = 0
int64_t var_18 = 0
*(rcx_3 + 0xc) = 1
*rcx_3 = &data_142e517a8
rcx_3[0xc].b = 0
rcx_3[0xd] = 0
rcx_3[2].d = arg1
int128_t* rdi_1 = &arg2[4]
rcx_3[4] = *arg2
rcx_3[6] = arg2[2]
arg2[2] = 0
*(rcx_3 + 0x40) = *rdi_1
*(rcx_3 + 0x50) = rdi_1[1]

if (rcx_3[4] != 0)
    *arg2 = 0

int64_t* rbx = rcx_3[0xd]

if (rbx != 0)
    rbx[9].d += 1

uint64_t result = sub_140a31610(rcx_3, nullptr, 0xff, 1)

if (rbx != 0)
    result = sub_140a2f7d0(rbx)

if (*arg2 == 0)
    return result

int128_t* rax_7 = arg2[2]

if (rax_7 != 0)
    rdi_1 = rax_7

return (*(*rdi_1 + 0x10))(rdi_1)
