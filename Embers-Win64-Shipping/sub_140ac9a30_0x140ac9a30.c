// 函数: sub_140ac9a30
// 地址: 0x140ac9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *(arg1 + 0x60)
void* rax_1 = *(arg1 + 0x68)
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140ac9040(arg2, u"LOCGEN_PERCENT", arg1 + 0x10, arg1 + 0x40, arg4, arg5, &var_18)
int64_t* rbx_1 = *(arg3 + 8)

if (rbx_1 == 0)
    int64_t rax_2
    rax_2.b = 1
    return rax_2

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rdi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

uint64_t rax_4
rax_4.b = 1
return rax_4
