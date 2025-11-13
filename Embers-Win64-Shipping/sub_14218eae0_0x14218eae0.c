// 函数: sub_14218eae0
// 地址: 0x14218eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[8].d == 0)
    return 

int64_t* rbp_1 = arg1[4]
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
int32_t rdx_2

if (rcx_3 != 0)
    rdx_2 = lpTlsValue[2].d
else
    int64_t* rax_1 = *lpTlsValue
    
    if (rax_1 == 0)
        int64_t rax_2 = sub_14059e7c0(&data_143cf0958)
        lpTlsValue[1] = rax_2
        
        if (rax_2 == 0)
            int64_t* rax_3 = sub_140a82f70(0x2000, 0)
            lpTlsValue[1] = rax_3
            int64_t i_2 = 0x1f
            int64_t* rcx_4
            int64_t i
            
            do
                rcx_4 = &rax_3[0x20]
                *rax_3 = rcx_4
                rax_3 = rcx_4
                i = i_2
                i_2 -= 1
            while (i != 1)
            *rcx_4 = 0
        
        rcx_3 = lpTlsValue[1]
        rdx_2 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rdx_2 = 0x20
        lpTlsValue[1] = rax_1
        lpTlsValue[2].d = 0x20
        rcx_3 = rax_1
        *lpTlsValue = 0

lpTlsValue[1] = *rcx_3
lpTlsValue[2].d = rdx_2 - 1
*rcx_3 = &data_142d40498
rcx_3[1].d = 0xff
int64_t arg_18 = 0
int64_t arg_20 = 0
*(rcx_3 + 0xc) = 1
*rcx_3 = &data_1432e9978
int64_t* rax_6 = arg1

if (rbp_1 != 0)
    rax_6 = rbp_1

rcx_3[3].b = 0
rcx_3[4] = 0
void* rdx_3 = *rax_6
rcx_3[2] = rdx_3

if (rdx_3 != 0)
    *(rdx_3 + 0x48) += 1

int64_t* rbx_1 = rcx_3[4]
int64_t* arg_10 = rbx_1
int32_t* rsi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rsi_1 += 1
    rbx_1 = arg_10

sub_14219ee20(rcx_3, nullptr, 2, 1)

if (rbx_1 != 0)
    int32_t rax_7 = *rsi_1
    *rsi_1 -= 1
    
    if (rax_7 == 1)
        sub_140a2f6e0(arg_10)

int64_t* rcx_6 = arg1[6]
arg1[6] = 0

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

void* rax = arg1[4]
void* rbx_2 = arg1
int32_t i_3 = arg1[5].d

if (rax != 0)
    rbx_2 = rax

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            rcx_7[9].d -= 1
            
            if (rcx_7[9].d == 1)
                sub_140a2f6e0(rcx_7)
        
        rbx_2 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_14085a940(arg1, 0)

arg1[8].d = 0
arg1[7] = 0
