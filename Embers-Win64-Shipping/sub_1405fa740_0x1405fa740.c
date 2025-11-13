// 函数: sub_1405fa740
// 地址: 0x1405fa740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_1405ffa80(arg1)
struct IMFAttributes arg_18 = 0
void* rdi

if (MFCreateAttributes(&arg_18, 2) s>= 0)
    if (arg2 != 0 && sub_140b74110(6, 2) != 0)
        struct IMFAttributes rcx_1 = arg_18
        (*(*rcx_1 + 0xa8))(rcx_1, &data_142d5c268, 1)
    
    void* arg_20 = arg1 + 0x18
    EnterCriticalSection(arg1 + 0x18)
    HRESULT rax_3 = MFCreateMediaSession(arg_18, arg1 + 0x60)
    int32_t rax_5
    
    if (rax_3 s>= 0)
        int64_t* rcx_4 = *(arg1 + 0x60)
        rax_5 = (*(*rcx_4 + 0x20))(rcx_4, arg1, 0)
    
    if (rax_3 s< 0 || rax_5 s< 0)
        rdi.b = 0
    else
        *(arg1 + 0xc4) = 4
        rdi.b = 1
    
    if (arg1 != -0x18)
        LeaveCriticalSection(arg1 + 0x18)
else
    rdi.b = 0

struct IMFAttributes rcx_6 = arg_18

if (rcx_6 != 0)
    int64_t rdx_2 = *rcx_6
    (*(rdx_2 + 0x10))(rcx_6, rdx_2)

return zx.q(rdi.b)
