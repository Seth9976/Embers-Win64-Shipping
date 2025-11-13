// 函数: sub_140cb9510
// 地址: 0x140cb9510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cc8570(arg1[2], arg1[3], &arg1[6])
uint64_t* rbx = arg1[3]
void** rdi = nullptr
void* r12 = arg1[4]
rbx[1].d = 0

if (*(rbx + 0xc) s<= 0xffffffff)
    sub_1405c5570(rbx, 0)

int32_t rax = sub_140a20af0()
uint64_t rcx_2 = zx.q(rax)
void* const rax_1

if (rax != 0)
    rax_1 = *(&data_143cf0bf8 + (rcx_2 u>> 0xe << 3)) + (zx.q(rcx_2.d) & 0x3fff) * 0x18
else
    rax_1 = nullptr

*(rax_1 + 8) = rbx
sub_140ccd2c0(r12, rcx_2.d)
arg1[5].b = 0
sub_140a22e70(arg1[6], arg2, arg3)
*arg1 = &data_142ea18f8
int64_t* rcx_5 = arg1[6]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** lpTlsValue = result

if (result == 0)
    void** lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    void* rdx_7 = *lpTlsValue
    
    if (rdx_7 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_7)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
