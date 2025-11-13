// 函数: sub_142a92320
// 地址: 0x142a92320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg2

if (arg2 == 0 || *arg2 s> 0)
    return 0

char* rax = *(arg1 + 0x10)

if (rax != 0 && *rax != 0)
    return sub_142a91490(arg1, arg2) __tailcall

int64_t* rcx_1 = data_144015b90

if (rcx_1 != 0)
    void* rax_2 = sub_142a86c30(rcx_1, *(arg1 + 0x18))
    
    if (rax_2 != 0)
        *(rax_2 + 4) += 1
        return rax_2

int128_t* rax_3 = sub_142a91490(arg1, rsi)

if (*rsi s> 0 || rax_3 == 0)
    return 0

if (*(arg1 + 8) == 0)
    int64_t* rcx_3 = data_144015b90
    int32_t arg_10 = 0
    
    if (rcx_3 != 0)
        goto label_142a92432
    
    int32_t* var_18_1 = &arg_10
    data_144015b90 =
        sub_142a86ee0(sub_142a86cb0, sub_142a86ad0, 0, zx.d(sub_142af5420(&arg_10)) * 2)
    sub_142a7db20(0x10, sub_142a91940)
    
    if (arg_10 s<= 0)
        rcx_3 = data_144015b90
    label_142a92432:
        int64_t rdx_4 = rax_3[1].q + 4
        *(rax_3 + 0x18) = 1
        sub_142a86f50(rcx_3, rdx_4, rax_3, &arg_10)

return rax_3
