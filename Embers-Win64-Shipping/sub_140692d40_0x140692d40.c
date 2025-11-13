// 函数: sub_140692d40
// 地址: 0x140692d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x40)

if (rcx != 0)
    if (((*(arg1 + 0x50) - rcx) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)
    __builtin_memset(arg1 + 0x40, 0, 0x18)

int32_t result = Concurrency::details::_ContextCallback::_Reset(arg1 + 0x20)
int64_t* rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    result = rcx_3[1].d
    rcx_3[1].d -= 1
    
    if (result == 1)
        result = (*(*rcx_3 + 8))(rcx_3)

*(arg1 + 0x18) = 0
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
