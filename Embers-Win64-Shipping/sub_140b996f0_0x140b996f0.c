// 函数: sub_140b996f0
// 地址: 0x140b996f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10

if (*sub_140ba6ce0(arg2 + 0x58, &arg_10, arg4) != 0xffffffff)
label_140b99736:
    int64_t rax_5 = sub_140d3cb50(arg3)
    char rdx_1
    
    if (rax_5 == 0 || (*(rax_5 + 0x290) & 0x100000) == 0)
        rdx_1 = 0
    else
        rdx_1 = 1
    
    uint8_t rax_4
    
    if (((*(arg3 + 8) u>> 0x15).b & 1) == 0 || rax_5 == 0
            || (*(rax_5 + 0x34c) == 0xffffffff && *(rax_5 + 0x348) == 0))
        rax_4 = 0
    else
        rax_4 = 1
    
    if (rdx_1 != 0 || rax_4 != 0)
        return 0
else
    int32_t rcx_1 = *(arg4 + 8)
    
    if (((rcx_1 u>> 0xa).b & 1) != 0)
        goto label_140b99736
    
    if (((rcx_1 u>> 0x13).b & 1) != 0 && ((rcx_1 u>> 0x15).b & 1) == 0)
        goto label_140b99736

return 1
