// 函数: sub_140913660
// 地址: 0x140913660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)

if (rcx == 0)
    return 

(**rcx)(rcx)
sub_140b73230(0x3dcccccd)
int64_t* var_10 = nullptr
int64_t var_18

if (arg1 + 0x10 == &var_18)
    return 

*(arg1 + 0x10) = 0
var_18 = 0
sub_1405aeff0(arg1 + 0x18, &var_10)
int64_t* rcx_2 = var_10

if (rcx_2 == 0)
    return 

rcx_2[1].d -= 1

if (rcx_2[1].d != 1)
    return 

int64_t* rbx_1 = var_10
(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    int64_t* rcx_4 = var_10
    (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))
