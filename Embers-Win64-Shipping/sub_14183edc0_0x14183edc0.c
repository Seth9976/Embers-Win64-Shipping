// 函数: sub_14183edc0
// 地址: 0x14183edc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_28 = 0
int64_t var_20 = 0

if (rbx != 0)
    rbx[1].d += 1

int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

int32_t result = (*(*arg1 + 0x120))(arg1, &var_18, &var_28, arg3)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rbp_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rbp_1 == 1)
            result = (*(*rbx + 8))(rbx, zx.q(rbp_1))

int64_t rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
