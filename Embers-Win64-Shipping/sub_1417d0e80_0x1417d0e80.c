// 函数: sub_1417d0e80
// 地址: 0x1417d0e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68 = arg2
int64_t var_60
__builtin_memset(&var_60, 0, 0x40)
int32_t r9 = 0
int32_t r8 = 0
int64_t var_48
int64_t var_38

if (&var_60 != arg3)
    int64_t rbx_1 = sx.q(arg3[1].d)
    int64_t rsi_1 = *arg3
    int64_t var_58
    var_58.d = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1407c3650(&var_60, rbx_1.d, 0)
        memcpy(var_60, rsi_1, (rbx_1 * 0xc).d)
        r8 = var_38:4.d
        r9 = var_48:4.d

uint64_t var_50

if (&var_50 != arg4)
    int64_t rbx_2 = sx.q(arg4[1].d)
    int64_t rdi_1 = *arg4
    var_48.d = rbx_2.d
    
    if (rbx_2.d != 0 || r9 != 0)
        sub_140638750(&var_50, rbx_2.d, r9)
        memcpy(var_50, rdi_1, (rbx_2 << 2).d)
        r8 = var_38:4.d
    else
        var_48:4.d = 0

int64_t var_40

if (&var_40 != arg5)
    int64_t rbx_3 = sx.q(arg5[1].d)
    int64_t rdi_2 = *arg5
    var_38.d = rbx_3.d
    
    if (rbx_3.d != 0 || r8 != 0)
        sub_1407c3650(&var_40, rbx_3.d, r8)
        memcpy(var_40, rdi_2, (rbx_3 * 0xc).d)
    else
        var_38:4.d = 0

uint64_t var_30

if (&var_30 != arg6)
    int64_t rbx_4 = sx.q(arg6[1].d)
    int64_t rdi_3 = *arg6
    int64_t var_28
    var_28.d = rbx_4.d
    
    if (rbx_4.d != 0)
        sub_140638750(&var_30, rbx_4.d, 0)
        memcpy(var_30, rdi_3, (rbx_4 << 2).d)
    else
        var_28:4.d = 0

int64_t result = sub_1405a9f90(arg1, &var_68)
uint64_t rcx_9 = var_30

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_40

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

uint64_t rcx_11 = var_50

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_60

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
