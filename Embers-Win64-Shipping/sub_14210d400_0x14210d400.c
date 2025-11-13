// 函数: sub_14210d400
// 地址: 0x14210d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t** var_18 = nullptr
int32_t result_1 = 0
sub_140d3cc80(sub_1425312f0(), &var_18, 1, 0x10, 0)
char arg_10 = 0
sub_142105410(var_18, result_1, 0)
int64_t** rbx = var_18
int64_t result = sx.q(result_1)
void* rcx_2 = &rbx[result]
uint64_t rsi_3 = (rcx_2 - rbx + 7) u>> 3

if (rbx u> rcx_2)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        result = sub_14210db20(*rbx, 0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_3)
    
    rbx = var_18

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
