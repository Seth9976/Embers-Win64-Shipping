// 函数: sub_142120140
// 地址: 0x142120140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int128_t var_48 = zx.o(0)
void* result = (*(*arg1 + 0x270))(zmm0, &var_48)

if (result == 0)
    return result

char arg_8 = 0

if (sub_142112c50(result, &arg_8, arg2) != 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        return (*(*arg1 + 0x2d0))(arg1, zx.q(arg2))
    
    int64_t** rax_3 = j_sub_140a82f30(0x10)
    int64_t** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        *rax_3 = arg1
        rax_3[1].d = arg2
    
    void*** rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        rax_4[1].d = 1
        *rax_4 = &data_1432d4590
        *(rax_4 + 0xc) = 1
        rax_4[2] = rbx_1
    
    arg_8 = 0
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    void*** rax_5 = sub_140a84c80(0, 0x30, 0)
    void*** var_68 = rax_5
    void*** rbx_2 = rax_5
    
    if (rax_5 != 0)
        *rbx_2 = &data_1432d44d0
        rbx_2[1] = rbx_1
        rbx_2[2] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 0xc) += 1
            rbx_2 = var_68
        
        rbx_2[3] = sub_142116ba0
        rbx_2[5] = sub_140a387b0()
        *rbx_2 = &data_1432d4528
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rax_9 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*rax_4)[1](rax_4, 1)
        
        rbx_2 = var_68
    
    void var_38
    int64_t* rax_11 = sub_140958da0(&var_38, nullptr, 0xff)
    int64_t* rdi_3 = *rax_11 + 0x10
    *rdi_3 = 0
    rdi_3[1].d = 0
    
    if (&var_68 != rdi_3 && rbx_2 != 0)
        void** r8_2 = *rbx_2
        r8_2[8](rbx_2, rdi_3, r8_2)
    
    rdi_3[2].d = 0x102
    void* rcx_5 = *rax_11
    int64_t* rbp_1 = *(rcx_5 + 0x30)
    
    if (rbp_1 != 0)
        rbp_1[9].d += 1
        rbx_2 = var_68
    
    sub_140978a40(rcx_5, rax_11[1], rax_11[2].d, 1)
    
    if (rbp_1 != 0)
        rbp_1[9].d -= 1
        
        if (rbp_1[9].d == 1)
            sub_140a2f6e0(rbp_1)
        
        rbx_2 = var_68
    
    if (rbx_2 != 0)
        (*rbx_2)[7](rbx_2, 0)
        void*** rax_15 = sub_140a84c80(rbx_2, 0, 0)
        var_68 = rax_15
        
        if (rax_15 != 0)
            sub_140a74f90(rax_15)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rsi_2 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*rax_4)[1](rax_4, zx.q(rsi_2))

return zx.q(arg_8)
