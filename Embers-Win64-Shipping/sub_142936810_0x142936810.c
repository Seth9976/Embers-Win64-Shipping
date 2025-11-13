// 函数: sub_142936810
// 地址: 0x142936810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
__chkstk(0x20)
int32_t* rcx = *arg2

if (rcx != 0)
    char* rax_1 = sub_1428a6ca0(*(rcx + 8), *rcx)
    sub_1428e8b00("keyid", rax_1, &arg_18)
    sub_1428a6780(rax_1)
    arg3 = arg_18

int32_t* rdx_3 = arg2[1]

if (rdx_3 != 0)
    void* rax_2 = sub_14292bec0(0, rdx_3, arg3)
    arg3 = rax_2
    arg_18 = rax_2

int32_t* rcx_3 = arg2[2]

if (rcx_3 == 0)
    return arg3

char* rax_3 = sub_1428a6ca0(*(rcx_3 + 8), *rcx_3)
sub_1428e8b00("serial", rax_3, &arg_18)
sub_1428a6780(rax_3)
return arg_18
