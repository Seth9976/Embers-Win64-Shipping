// 函数: sub_140745b20
// 地址: 0x140745b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)
int64_t* rcx

if (result.d == 0)
    rcx = nullptr
else
    rcx = *arg1

if (rcx != 0)
label_140745b4d:
    result = (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        result = sub_140a84c80(rcx_1, 0, 0)
        *arg1 = result
    
    arg1[1].d = 0
else if (result.d != 0)
    rcx = *arg1
    
    if (rcx != 0)
        goto label_140745b4d

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall
