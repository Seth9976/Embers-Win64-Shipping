// 函数: sub_14239ba90
// 地址: 0x14239ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x580)
int64_t* result = sub_141f8dce0(sub_141f88540())

if (result.b != 0 && arg2 != 0)
    sub_14238b8b0(*(arg1 + 0x200), 1)
    void* rdi_1 = *(arg1 + 0x208)
    void* rbp_1 = nullptr
    int64_t* rcx_3 = *(rdi_1 + 0x58)
    
    if (rcx_3 == 0)
        bool z_1
        
        if (0 == *(rdi_1 + 0x48))
            *(rdi_1 + 0x48) = 0
            z_1 = true
        else
            *(rdi_1 + 0x48)
            z_1 = false
        
        if (not(z_1))
            sub_1423ae170(rdi_1 + 8)
            *(rdi_1 + 0x48) -= 1
        
        goto label_14239bb42
    
    if ((*(*rcx_3 + 0x18))(rcx_3, rdi_1) == 0)
    label_14239bb42:
        
        if (*(rdi_1 + 0x58) != 0)
            int64_t* rcx_7 = *(rdi_1 + 0x50)
            (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
            *(rdi_1 + 0x58) = 0
    else
        sub_1423ae170(rdi_1 + 8)
        *(rdi_1 + 0x48) -= 1
        int64_t* rcx_5 = *(rdi_1 + 0x50)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x10))(rcx_5)
        
        *(rdi_1 + 0x58) = 0
    
    float zmm0_1 = sub_14239bed0(arg1, 0)
    result = sub_1423900e0(arg1, arg2)
    
    if (result != 0)
        uint32_t rax_6 = zx.d(result[0x16].b)
        uint64_t r8_1
        
        if (rax_6 == 0)
            rbp_1 = arg1 + 0xc8
            r8_1 = 0x31
        else if (rax_6 == 1)
            rbp_1 = *(arg1 + 0x190)
            r8_1 = zx.q(*(arg1 + 0x198))
        else if (rax_6 == 2)
            rbp_1 = *(arg1 + 0x1a0)
            r8_1 = zx.q(*(arg1 + 0x1a8))
        else
            r8_1 = 0xffffffff
        
        sub_1423b7af0(result, rbp_1, r8_1, arg1 + 0x1b0, zmm0_1, 0)
        
        if ((*(result + 0xb4) & 8) != 0)
            int32_t rax_8 = result[0xd].d
            *(result + 0x94) = rax_8
            *(result + 0x9c) = rax_8
        
        result = sub_1423b6350(result)

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580) __tailcall
