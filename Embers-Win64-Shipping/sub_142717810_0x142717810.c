// 函数: sub_142717810
// 地址: 0x142717810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x14]

if (rbx == 0)
    return 

void* rax_1 = sub_1427249f0()
void* rdx_1 = rbx[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

rax = zx.q(arg1[0x37].b)

if (rax.b == 3)
    int64_t r9 = *arg1
    int64_t var_28
    (*(r9 + 0x460))(arg1, &var_28, (rbx[0x5a].d u>> 4).b & 1, r9)
    int64_t r8_4
    r8_4.b = 1
    int32_t var_20
    int32_t var_10 = var_20
    int64_t rax_3 = *rbx
    int64_t var_18 = var_28
    (*(rax_3 + 0x7d8))(rbx, &var_18, r8_4)
    return 

if (rax.b == 0)
    rdx_1.b = 1
    (*(*rbx + 0x7e8))(rbx, rdx_1)
