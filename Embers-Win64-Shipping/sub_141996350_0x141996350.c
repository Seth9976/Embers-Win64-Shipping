// 函数: sub_141996350
// 地址: 0x141996350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143009e28
int64_t* rcx = arg1[2]
int64_t entry_r9

if (rcx != 0)
    entry_r9 = sub_141996220(rcx, 1)
    arg1[2] = 0

int64_t* rcx_1 = arg1[3]

if (rcx_1 != 0)
    entry_r9 = sub_141996220(rcx_1, 1)
    arg1[3] = 0

bool cond:0 = arg1[1].d == 0xffffffff
*arg1 = &data_142d54860

if (not(cond:0) && data_143de542b == 0)
    sub_140af98a0("Unknown", 0x95, A FRenderResource was deleted without being released first!", 
        entry_r9)
    sub_140afbb40()

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
