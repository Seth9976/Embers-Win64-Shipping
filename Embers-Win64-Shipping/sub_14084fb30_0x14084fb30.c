// 函数: sub_14084fb30
// 地址: 0x14084fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[6]
void* r14 = &arg1[2]
int64_t rdi = sx.q(arg1[7].d)
int32_t rsi = arg3
int64_t* r15 = arg2

if (r9 != 0)
    r14 = r9

void* rax = r14 + (rdi << 3)

if (r14 != rax)
    do
        int64_t* rdi_1 = *r14
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        
        void* rsi_2 = &arg1[9][3]
        int64_t r15_1 = sx.q(*(rsi_2 + 0x28))
        int32_t rax_1 = (r15_1 + 1).d
        *(rsi_2 + 0x28) = rax_1
        
        if (rax_1 s> *(rsi_2 + 0x2c))
            sub_14083a490(rsi_2, r15_1.d)
        
        void* rax_2 = *(rsi_2 + 0x20)
        
        if (rax_2 != 0)
            rsi_2 = rax_2
        
        void* rcx_1 = rsi_2 + (r15_1 << 3)
        
        if (rcx_1 == 0)
            goto label_14084fbe3
        
        *rcx_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        label_14084fbe3:
            
            if (rdi_1 != 0)
                rdi_1[9].d -= 1
                
                if (rdi_1[9].d == 1)
                    sub_140a2f6e0(rdi_1)
        
        r14 += 8
    while (r14 != rax)
    
    r9 = arg1[6]
    rdi = zx.q(arg1[7].d)
    rsi = arg3
    r15 = arg2

void* rbx_2 = &arg1[2]

if (r9 != 0)
    rbx_2 = r9

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t* rcx_3 = *rbx_2
        
        if (rcx_3 != 0)
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                sub_140a2f6e0(rcx_3)
        
        rbx_2 += 8
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

void** rdi_2 = nullptr
arg1[7].d = 0

if (*(arg1 + 0x3c) != 0)
    sub_14085a940(&arg1[2], 0)

sub_1408466d0(&arg1[2])
arg1[8].b = 0
sub_140a22e70(arg1[9], r15, rsi)
*arg1 = &data_142ddbc58
int64_t* rcx_7 = arg1[9]

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
