// 函数: sub_142381480
// 地址: 0x142381480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x11]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xf]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = sub_1423811d0(&arg1[0xc])
int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t* rcx_5 = arg1[8]

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        result = (**rcx_5)(rcx_5, 1)

int64_t rcx_6 = arg1[6]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
