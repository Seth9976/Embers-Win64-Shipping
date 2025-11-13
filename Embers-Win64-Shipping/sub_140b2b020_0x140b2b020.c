// 函数: sub_140b2b020
// 地址: 0x140b2b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
wchar16* rsi = arg3
int64_t rbx = -1

do
    rbx += 1
while (arg2[rbx] != 0)

arg3.b = 1
void* rax = sub_140b28470(arg1, arg2, arg3.b)

if (rax == 0)
    return rax

int64_t rax_1 = sx.q(rbx.d)
void* r9 = rax + (rax_1 << 1)
int16_t rax_2 = *(rax + (rax_1 << 1))
wchar16* rax_8
void* const wcs2

if (rax_2 != 0x22)
    void* rdx_1 = r9
    
    if (rax_2 != 0)
        do
            wchar16 const* const rax_3 = u" \r\n\t"
            
            while (true)
                wchar16 const rcx_2 = *rax_3
                
                if (rcx_2 == 0)
                    goto label_140b2b0db
                
                if (*rdx_1 == rcx_2)
                    break
                
                rax_3 = &rax_3[1]
            
            rdx_1 += 2
        while (*rdx_1 != 0)
    
label_140b2b0db:
    wcsncpy(rsi, r9 + (sx.q(((rdx_1 - r9) s>> 1).d) << 1), rdi - 1)
    rsi[rdi - 1] = 0
    wchar16* rax_5 = wcsstr(rsi, &data_142d404d4)
    
    if (rax_5 != 0)
        *rax_5 = 0
    
    wchar16* rax_6 = wcsstr(rsi, U"\r'")
    
    if (rax_6 != 0)
        *rax_6 = 0
    
    wchar16* rax_7 = wcsstr(rsi, &data_142d576a0)
    
    if (rax_7 != 0)
        *rax_7 = 0
    
    rax_8 = wcsstr(rsi, U"\t")
    
    if (rax_8 != 0)
        *rax_8 = 0
    
    if (arg5 != 0)
        wchar16* rax_9 = wcsstr(rsi, U",")
        
        if (rax_9 != 0)
            *rax_9 = 0
        
        wcs2 = &data_142da76f4
        goto label_140b2b16c
else
    wcsncpy(rsi, r9 + 2, rdi - 1)
    wcs2 = &data_142d4056c
    rsi[rdi - 1] = 0
label_140b2b16c:
    rax_8 = wcsstr(rsi, wcs2)
    
    if (rax_8 != 0)
        *rax_8 = 0
rax_8.b = 1
return rax_8
