// 函数: sub_140b35c00
// 地址: 0x140b35c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143de71a8)
void* lpTlsValue_1 = j_sub_140a82f30(0xa8)
void* const lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    lpTlsValue = nullptr
else
    __builtin_memset(lpTlsValue_1, 0, 0x78)
    uint32_t rax = GetCurrentThreadId()
    *(lpTlsValue + 0x78) = rax
    
    if (rax == data_143de5470)
        *(lpTlsValue + 0x80) = 0
        *(lpTlsValue + 0x88) = 0
        sub_1405947f0(lpTlsValue + 0x80, 0xb)
        int32_t rax_1 = *(lpTlsValue + 0x88) + 0xb
        *(lpTlsValue + 0x88) = rax_1
        
        if (rax_1 s> *(lpTlsValue + 0x8c))
            sub_140594770(lpTlsValue + 0x80)
        
        UnDecorator::getReferenceType(*(lpTlsValue + 0x80), u"GameThread", 0x16)
    else if (rax != data_143de5474)
        sub_140a755d0()
        sub_140596d10(lpTlsValue + 0x80, sub_140a7c900(&data_143db7b50, rax))
    else
        *(lpTlsValue + 0x80) = 0
        *(lpTlsValue + 0x88) = 0
        sub_1405947f0(lpTlsValue + 0x80, 0xd)
        int32_t rax_2 = *(lpTlsValue + 0x88) + 0xd
        *(lpTlsValue + 0x88) = rax_2
        
        if (rax_2 s> *(lpTlsValue + 0x8c))
            sub_140594770(lpTlsValue + 0x80)
        
        UnDecorator::getReferenceType(*(lpTlsValue + 0x80), u"RenderThread", 0x1a)
    
    __builtin_memset(lpTlsValue + 0x90, 0, 0x18)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142e78768
    *(rax_4 + 0xc) = 1
    rax_4[2] = lpTlsValue

TlsSetValue(data_143de7a5c, lpTlsValue)
int64_t rdi = sx.q(data_143de71d8)
int32_t rax_5 = (rdi + 1).d
bool cond:1 = rax_5 s<= data_143de71dc
data_143de71d8 = rax_5

if (not(cond:1))
    sub_1405a4f90(&data_143de71d0)

void** rcx_11 = (rdi << 4) + data_143de71d0
*rcx_11 = lpTlsValue
rcx_11[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    *rax_9 = &data_142e78278
    rax_9[1] = lpTlsValue
    rax_9[2] = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1

sub_140a85420(rax_9)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rdi_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void** r8_1 = *rax_4
            r8_1[1](rax_4, zx.q(rdi_1), r8_1)

LeaveCriticalSection(&data_143de71a8)
return lpTlsValue
