// 函数: sub_141b92cf0
// 地址: 0x141b92cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
sub_140cd7d40(arg1)
(*(*rdi + 0x260))(rdi, 0)
int32_t result = (*(*rdi + 0x280))(rdi)
int64_t* rbx = rdi[0x1e]
void* rcx_2 = nullptr

if (rbx != 0)
    result = rbx[1].d
    
    if (result != 0)
        rbx[1].d = result + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_2 = rdi[0x1d]

if (rcx_2 != 0)
    result = sub_141bdc700(rcx_2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
