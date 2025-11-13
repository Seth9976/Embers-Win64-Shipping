// 函数: sub_14265cd80
// 地址: 0x14265cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142686420(1)
int64_t rax_1 = (*(*rax + 0x80))(rax)
void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rax_1

int64_t var_28 = rax_1
void*** var_20 = rbx

if (arg4 + 0x10 != &var_28)
    *(arg4 + 0x10) = rax_1
    var_28 = 0
    sub_1405aeff0(arg4 + 0x18, &var_20)
    rbx = var_20

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rbx)[1](rbx, zx.q(rdi_1))

return sub_14265cc10(arg1, arg2, arg3, arg4) __tailcall
