// 函数: sub_141ccf540
// 地址: 0x141ccf540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x1f8)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x200)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rcx = *i
    
    if (rcx != 0)
        (*(*rcx + 0x70))(rcx, arg2)

int64_t* rbx = nullptr
void** result

while (true)
    void* rdx_1 = **(arg1 + 0x258)
    
    if (rdx_1 != 0)
        rbx = *(rdx_1 + 8)
        int64_t rcx_1 = *(arg1 + 0x258)
        *(arg1 + 0x258) = rdx_1
        *(rdx_1 + 8) = 0
        j_sub_140a74f90(rcx_1)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    void** var_d8
    sub_140b4c480(&var_d8)
    sub_140b53d10(&var_d8, *rbx, zx.q(rbx[1].d))
    sub_141ccf290(arg1, rbx[8], &var_d8, rbx + 0xc)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    sub_140b4cb40(&var_d8)

return result
