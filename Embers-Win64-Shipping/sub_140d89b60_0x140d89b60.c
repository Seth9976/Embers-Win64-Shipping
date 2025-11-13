// 函数: sub_140d89b60
// 地址: 0x140d89b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int64_t* rbx = *(rax + 0x40)

if (rbx != 0)
    rbx[1].d += 1

int32_t result = Concurrency::details::_Context::_IsSynchronouslyBlocked(*(rax + 0x38))
*(arg1 + 0xb0) = result

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0xb0) == 0)
    char* rax_3 = sub_140a752e0()
    int64_t* rbx_1 = *(rax_3 + 0x70)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = Concurrency::details::_Context::_IsSynchronouslyBlocked(*(rax_3 + 0x68))
    *(arg1 + 0xb0) = result
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
