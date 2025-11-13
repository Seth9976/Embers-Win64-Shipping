// 函数: sub_140db3680
// 地址: 0x140db3680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0

if (*(arg4 + 0x6c) == 2)
    rbx = 8

void* result = sub_140d99610(arg1)
void*** rax = sub_140d8b720(arg1, result)
sub_140db26f0(result, arg1, rbx, arg2, arg3, arg5)
*(rax + 8) = *arg6
*(rax + 0x18) = *(arg4 + 0x10)
*(rax + 0x28) = *(arg4 + 0x58)
rax[7].d = *(arg4 + 0x68)
rax[9].d = zx.d(*(arg4 + 0x6d))
*(rax + 0x4c) = zx.d(*(arg4 + 0x6e))
rax[0xa].d = zx.d(*(arg4 + 0x6c))
int64_t* rax_5 = *(arg4 + 0x70)

if (rax_5 == 0 || *rax_5 == 0)
    sub_140e277f0(arg4)

int64_t* rbx_1 = *(arg4 + 0x78)
int64_t* rax_6 = *(arg4 + 0x70)

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t rax_7

if (rax_6 != 0)
    rax_7 = *rax_6

if (rax_6 == 0 || rax_7 == 0)
    rax_7 = 0

rax[8] = rax_7

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return result
