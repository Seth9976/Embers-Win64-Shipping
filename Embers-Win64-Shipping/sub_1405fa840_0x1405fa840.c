// 函数: sub_1405fa840
// 地址: 0x1405fa840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t var_38 = -2
CRITICAL_SECTION* arg_8 = &arg1[5]
EnterCriticalSection(&arg1[5])
int64_t* rcx_1 = data_143f0f180

if (rcx_1 == 0)
    if (arg1 != -0x28)
        LeaveCriticalSection(&arg1[5])
    
    int64_t* rcx_3 = *arg2
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))(rcx_3)
    
    int64_t rax
    rax.b = 0
    return rax

if (sub_140a54510((*(*rcx_1 + 0x20))(rcx_1), u"D3D11") != 0)
    if (arg1 != -0x28)
        LeaveCriticalSection(&arg1[5])
    
    int64_t* rcx_6 = *arg2
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
    
    int32_t rax_4
    rax_4.b = 0
    return rax_4

void* rbp = *arg2
CRITICAL_SECTION* arg_18 = rbp + 0x20
EnterCriticalSection(rbp + 0x20)

if (MFCreateEventQueue(rbp + 0x48) s< 0)
    if (rbp != -0x20)
        LeaveCriticalSection(rbp + 0x20)
    
    if (arg1 != -0x28)
        LeaveCriticalSection(&arg1[5])
    
    int64_t* rcx_11 = *arg2
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x10))(rcx_11)
    
    HRESULT rax_6
    rax_6.b = 0
    return rax_6

int64_t* rcx_12 = *(rbp + 0x58)

if (rcx_12 != arg1)
    if (arg1 != 0)
        (*(*arg1 + 8))(arg1)
        rcx_12 = *(rbp + 0x58)
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x10))(rcx_12)
    
    *(rbp + 0x58) = arg1

if (rbp != -0x20)
    LeaveCriticalSection(rbp + 0x20)

sub_1405ed160(&arg1[0xc], arg2)
char rax_10 = sub_1405f3e10(arg1)

if (arg1 != -0x28)
    LeaveCriticalSection(&arg1[5])

int64_t* rcx_18 = *arg2

if (rcx_18 != 0)
    (*(*rcx_18 + 0x10))(rcx_18)

return zx.q(rax_10)
