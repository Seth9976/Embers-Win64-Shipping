// 函数: sub_141955890
// 地址: 0x141955890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = sub_14197f080()
bool cond:0 = data_143eff5c7 == 0
int128_t* rsi = arg2[4]
uint32_t var_78 = rax

if (not(cond:0))
    data_143eff9e8(0x8db9)
    int64_t rax_1 = data_143efbcf0
    uint32_t rdi = 0
    
    if (arg6 != 0)
        rdi = var_78
    
    if (rax_1 != 0 && *(rsi + 0x1c) != rdi)
        rax_1(zx.q(rdi))
        *(rsi + 0x1c) = rdi
    
    SwapBuffers(*(rsi + 8))
    int64_t result
    result.b = 1
    return result

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x78)
uint64_t r12
uint64_t var_28 = r12
EnterCriticalSection(lpCriticalSection)
int128_t var_70 = *rsi
int32_t arg_10
int64_t param1_2

if (*(arg1 + 0x68) != 1)
    param1_2 = (rsi[1]).q
    arg_10 = rsi[2].d
else
    param1_2 = *(arg1 + 0x40)
    arg_10 = *(arg1 + 0x50)

HDC param0_3 = wglGetCurrentDC()
HDC param0 = var_70:8.q
HGLRC param1_3 = wglGetCurrentContext()
HGLRC rax_3
rax_3.b = param0_3 == param0

if (param1_3 != param1_2 || rax_3.b == 0)
    r12.b = 0
    
    if (wglMakeCurrent(param0, param1_2) == 0)
        wglMakeCurrent(nullptr, nullptr)
else
    r12.b = 1

if ((*(*arg2 + 0x30))(arg2) == 0)
    goto label_141955a47

*(arg1 + 0x70) = 0
data_143eff9e8(0x8db9)
int64_t* rax_8 = (*(*arg2 + 0x30))(arg2)
int64_t r8 = *rax_8
uint32_t rdi_1 = zx.d((*(r8 + 0x18))(rax_8, &var_78, r8))
data_143effa08(0x8db9)

if (rdi_1.b != 0)
    *(arg1 + 0x70) = 1
label_141955a47:
    rdi_1 = 0
    
    if (*(arg1 + 0x68) == 1 && *(arg1 + 0x70) != 0)
        data_143f000f8(0x8d40, zx.q(arg_10))
        data_143f00120(0x8d40, 0x8ce0, zx.q(*(rsi + 0x2c)), zx.q(*(rsi + 0x28)), 0)
        *(arg1 + 0x70) = 0
    
    data_143eff9e8(0x8db9)
    data_143f000f8(0x8ca9, 0)
    data_143eff9f8(0x405)
    data_143f000f8(0x8ca8, zx.q(arg_10))
    data_143effae0(0x8ce0)
    data_143f00150(0, 0, arg3, zx.q(arg4), 0, arg4, arg3, 0, 0x4000, 0x2600)
    data_143effa08(0x8db9)
    
    if (arg5 != 0)
        int64_t rax_12 = data_143efbcf0
        
        if (arg6 != 0)
            rdi_1 = var_78
        
        if (rax_12 != 0 && *(rsi + 0x1c) != rdi_1)
            rax_12(zx.q(rdi_1))
            *(rsi + 0x1c) = rdi_1
        
        SwapBuffers(*(rsi + 8))
    
    if (r12.b == 0)
        HDC param0_2
        HGLRC param1_1
        
        if (param1_3 == 0)
            param1_1 = nullptr
            param0_2 = nullptr
        else
            param1_1 = param1_3
            param0_2 = param0_3
        
        if (wglMakeCurrent(param0_2, param1_1) == 0)
            wglMakeCurrent(nullptr, nullptr)
    
    rdi_1.b = 1
else
    if (r12.b == 0)
        HDC param0_1
        HGLRC param1
        
        if (param1_3 == 0)
            param1 = nullptr
            param0_1 = nullptr
        else
            param1 = param1_3
            param0_1 = param0_3
        
        if (wglMakeCurrent(param0_1, param1) == 0)
            wglMakeCurrent(nullptr, nullptr)
    
    rdi_1.b = 0

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi_1.b)
