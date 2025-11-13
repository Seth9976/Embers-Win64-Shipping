// 函数: sub_140ca4780
// 地址: 0x140ca4780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_19 = *arg1
uint32_t r9 = zx.d(arg3)

if (arg3 == 0)
    int64_t* r9_7 = *(rax_19 + 8)
    int64_t* rcx_8 = r9_7[1]
    char* r8_8 = *rcx_8
    
    if (&r8_8[1] u> rcx_8[1])
        jump(*(*r9_7 + 0x150))
    
    *arg2 = *r8_8
    int64_t* rax_17 = r9_7[1]
    *rax_17 += 1
    return rax_17

if (r9 == 1)
    int64_t* r9_5 = *(rax_19 + 8)
    int64_t* rcx_5 = r9_5[1]
    int16_t* r8_5 = *rcx_5
    
    if (&r8_5[1] u<= rcx_5[1])
        *arg2 = *r8_5
        int64_t* rax_12 = r9_5[1]
        *rax_12 += 2
        return rax_12
    
    if ((*(r9_5 + 0x29) & 0x20) != 0)
        return sub_140b54000(r9_5, arg2, arg4) __tailcall
    
    jump(*(*r9_5 + 0x150))

int64_t* r9_2 = *(rax_19 + 8)
int64_t* rcx = r9_2[1]
int64_t* r8 = *rcx

if (r9 == 2)
    if (r8 + 4 u<= rcx[1])
        *arg2 = *r8
        int64_t* rax_7 = r9_2[1]
        *rax_7 += 4
        return rax_7
    
    if ((*(r9_2 + 0x29) & 0x20) != 0)
        return sub_140b54070(r9_2, arg2, arg4) __tailcall
    
    jump(*(*r9_2 + 0x150))

if (&r8[1] u<= rcx[1])
    *arg2 = *r8
    int64_t* rax_2 = r9_2[1]
    *rax_2 += 8
    return rax_2

if ((*(r9_2 + 0x29) & 0x20) != 0)
    return sub_140b540d0(r9_2, arg2, arg4) __tailcall

jump(*(*r9_2 + 0x150))
