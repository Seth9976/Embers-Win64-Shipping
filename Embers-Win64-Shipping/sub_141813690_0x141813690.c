// 函数: sub_141813690
// 地址: 0x141813690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b214e0(arg3)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(arg3)
int64_t var_18 = *arg2
int64_t* rax_1 = arg2[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t result = sub_141818f00(arg1 + 0x40, arg3, &var_18)

if (rax_1 != 0)
    result = rax_1[1].d
    rax_1[1].d -= 1
    
    if (result == 1)
        (**rax_1)(rax_1)
        result = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rax_1 + 8))(rax_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

int64_t rcx_8 = *arg3

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
