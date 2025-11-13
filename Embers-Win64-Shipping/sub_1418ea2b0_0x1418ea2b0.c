// 函数: sub_1418ea2b0
// 地址: 0x1418ea2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143efb330 != 2)
    sub_1418c2d40(*(arg1 + 0x58))
    void*** rax_9 = sub_1418c0d30(*(*(*(arg1 + 0x58) + 0x1a50) + 0x240))
    int64_t rdx_2 = *arg2
    int64_t rax_10 = (*(rdx_2 + 0x20))(arg2, rdx_2)
    int64_t rdx_3 = *arg2
    int32_t var_40_1
    int32_t* var_38_1
    uint64_t* var_30_1
    int128_t var_18
    void* r9
    
    if (rax_10 == 0)
        var_30_1 = arg4
        r9 = (*(rdx_3 + 8))(arg2, rdx_3) + 0x70
        var_38_1 = &var_18
        var_40_1 = arg6
    else
        var_30_1 = arg4
        r9 = (*(rdx_3 + 0x20))(arg2, rdx_3) + 0x70
        var_38_1 = &var_18
        var_40_1 = arg5 + arg6 * 6
    
    void* rdx_5 = *(arg1 + 0x58)
    var_18 = *arg3
    void var_28
    std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getmfld(
        &var_28, rdx_5, rax_9, r9, arg7, var_40_1, var_38_1, var_30_1)
    return sub_1418c2ee0(*(*(*(arg1 + 0x58) + 0x1a50) + 0x240))

int64_t rax_1 = (*(*arg2 + 0x20))(arg2)
int64_t rdx = *arg2
void* rax_2

if (rax_1 == 0)
    rax_2 = (*(rdx + 8))(arg2, rdx)
else
    rax_2 = (*(rdx + 0x20))(arg2, rdx)

int32_t rsi_1 = 0
char rcx_2 = arg7.b
int32_t rcx_3 = *(arg4 + 0xc)
int32_t rdi_3 = (*(rax_2 + 0x94) u>> rcx_2) * (*(rax_2 + 0x90) u>> rcx_2)
arg4[1].d = 0

if (rcx_3 != 0)
    sub_1405c5570(arg4, 0)
    rcx_3 = *(arg4 + 0xc)
    rsi_1 = arg4[1].d

int32_t rax_5 = rsi_1 + rdi_3
arg4[1].d = rax_5

if (rax_5 s> rcx_3)
    sub_1405a4d70(arg4)

return memset(*arg4 + (sx.q(rsi_1) << 3), 0, sx.q(rdi_3) << 3)
