// 函数: sub_142216f60
// 地址: 0x142216f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rax = rbx[0x23]

if (rax == 0)
    (*(*rbx + 0x390))(rbx)
    rax = rbx[0x23]

int64_t* rbx_1 = *(rax + 0x130)
int32_t arg_8
void arg_10
int512_t result

if (rbx_1 != 0)
    (*(*rbx_1 + 0x498))(rbx_1)
    (*(*rbx_1 + 0x490))(rbx_1, &arg_10, &arg_8)
    result.o = arg_8
    return result

int64_t* rbx_2 = *(arg1 + 0x10)
int64_t* rcx_3 = rbx_2[0x23]

if (rcx_3 == 0)
    (*(*rbx_2 + 0x390))(rbx_2)
    rcx_3 = rbx_2[0x23]

(*(*rcx_3 + 0x560))(rcx_3, &arg_10, &arg_8)
result.o = arg_8
return result
