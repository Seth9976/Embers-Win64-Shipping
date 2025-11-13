// 函数: sub_140a1f6c0
// 地址: 0x140a1f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_c8 = 0
void* var_58 = nullptr
int32_t var_4c = 4
int32_t i_3 = 0xa
void var_78
sub_14083a490(&var_78, 0)
void* rcx_1 = &var_78

if (var_58 != 0)
    rcx_1 = var_58

memset(rcx_1, 0, 0x50)
int64_t* rcx_2 = data_143cf8c40
int32_t rax_4 = (*(*rcx_2 + 0x10))(rcx_2, 0)

for (int64_t i = 0; i s< 0x50; i += 8)
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
    
    int64_t* rdi_1 = lpTlsValue[1]
    int32_t rcx_6
    
    if (rdi_1 != 0)
        rcx_6 = lpTlsValue[2].d
    else
        rdi_1 = *lpTlsValue
        
        if (rdi_1 == 0)
            int32_t rax_5 = sub_140a2d3e0(&data_143cf0958)
            rdi_1 = nullptr
            
            if (rax_5 != 0)
                rdi_1 = *(*(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3))
                    + (zx.q(rax_5) & 0x3fff) * 0x18 + 8)
                sub_140a24050(rax_5)
            
            lpTlsValue[1] = rdi_1
            
            if (rdi_1 == 0)
                int64_t* rax_6 = sub_140a82f70(0x2000, 0)
                lpTlsValue[1] = rax_6
                int64_t j_1 = 0x1f
                int64_t* rcx_11
                int64_t j
                
                do
                    rcx_11 = &rax_6[0x20]
                    *rax_6 = rcx_11
                    rax_6 = rcx_11
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                *rcx_11 = 0
                rdi_1 = lpTlsValue[1]
            
            lpTlsValue[2].d = 0x20
            rcx_6 = 0x20
        else
            lpTlsValue[1] = rdi_1
            rcx_6 = 0x20
            *lpTlsValue = 0
            lpTlsValue[2].d = 0x20
    
    lpTlsValue[1] = *rdi_1
    lpTlsValue[2].d = rcx_6 - 1
    int64_t* var_b0
    int64_t** rax_9 = sub_140a228d0(&var_b0)
    int64_t* rcx_13 = *rax_9
    *rax_9 = nullptr
    *rdi_1 = &data_142d40498
    int64_t* var_a0_1 = rcx_13
    rdi_1[1].d = 0xff
    *(rdi_1 + 0xc) = 1
    *rdi_1 = &data_142e04a50
    *(rdi_1 + 0x14) = 0
    rdi_1[3] = rcx_13
    int64_t* rcx_14 = var_b0
    
    if (rcx_14 != 0)
        sub_140a2f7d0(rcx_14)
    
    rdi_1[2].d = 0xff
    int64_t* rsi_1 = rdi_1[3]
    int64_t* rbx_1 = rsi_1
    var_c8.q = rbx_1
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
        rbx_1 = var_c8.q
    
    sub_1408c3b70(rdi_1, nullptr, rax_4, 1)
    void* rdx_4 = &var_78
    
    if (var_58 != 0)
        rdx_4 = var_58
    
    void* rdx_5 = rdx_4 + i
    
    if (rdx_5 != &var_c8)
        int64_t* rcx_17 = *rdx_5
        *rdx_5 = rbx_1
        var_c8.q = 0
        
        if (rcx_17 != 0)
            sub_140a2f7d0(rcx_17)
    else if (rsi_1 != 0)
        sub_140a2f7d0(rbx_1)

void var_90
int64_t* rax_11 = sub_140a22cb0(&var_90, &var_78, rax_4)
*(*rax_11 + 0x10) = 0xff
void* rcx_21 = *rax_11
int32_t r8_3 = rax_11[2].d
int64_t* rdx_7 = rax_11[1]
int64_t* rdi_2 = *(rcx_21 + 0x18)
int64_t* rbx_2 = rdi_2
int64_t* var_b8 = rbx_2

if (rdi_2 != 0)
    rdi_2[9].d += 1
    rbx_2 = var_b8

sub_1408c3b70(rcx_21, rdx_7, r8_3, 1)
void* rcx_22 = *arg1
void* rax_12 = *(rcx_22 + 0x20)

if (rax_12 != 0)
    rcx_22 = rax_12

void** rdx_8 = rcx_22 + (sx.q(arg2) << 3)
uint64_t result = &var_b8

if (rdx_8 != &var_b8)
    int64_t* rcx_23 = *rdx_8
    *rdx_8 = rdi_2
    
    if (rcx_23 != 0)
        result = sub_140a2f7d0(rcx_23)
else if (rdi_2 != 0)
    result = sub_140a2f7d0(rbx_2)

void* rcx_25 = var_58
void* rbx_3 = &var_78
int32_t i_2 = i_3

if (rcx_25 != 0)
    rbx_3 = rcx_25

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_24 = *rbx_3
        
        if (rcx_24 != 0)
            result = sub_140a2f7d0(rcx_24)
        
        rbx_3 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_25 = var_58

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_e8)
return result
