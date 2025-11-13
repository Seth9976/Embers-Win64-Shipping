// 函数: sub_140692be0
// 地址: 0x140692be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8b390
int64_t* rcx = arg1[0xf]

if (rcx != 2)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (*(*rcx + 8))(rcx)

void* rcx_2 = arg1[0x29]

if (rcx_2 != 0)
    if (((arg1[0x2b] - rcx_2) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_1 = *(rcx_2 - 8)
        
        if (rcx_2 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8_1
    
    j_sub_140a74f90(rcx_2)
    __builtin_memset(&arg1[0x29], 0, 0x18)

sub_140692b70(&arg1[0x11])
int32_t result = _Mtx_destroy_in_situ(&arg1[4])
int64_t* rbx_1 = arg1[3]

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
