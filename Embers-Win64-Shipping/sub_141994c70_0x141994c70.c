// 函数: sub_141994c70
// 地址: 0x141994c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0)
    data_143db7a64 -= 1
else
    data_143f138f5 = *arg1
    data_143db7a64 -= 1
    
    if (*arg1 != 0 && arg1[1] != 0)
        sub_1419af2a0()
        int32_t rbp_1 = data_14399e5dc
        void*** rax_2 = sub_140a84c80(0, 0x20, 0)
        void*** var_48 = rax_2
        void*** rdi_1 = rax_2
        
        if (rax_2 != 0)
            *rdi_1 = &data_142d40dc0
            rdi_1[1] = sub_140594850
            rdi_1[3] = sub_140a387b0()
            *rdi_1 = &data_142d40e18
        
        void var_38
        int64_t* rax_4 = sub_140958da0(&var_38, nullptr, 0xff)
        int64_t* rbx_2 = *rax_4 + 0x10
        *rbx_2 = 0
        rbx_2[1].d = 0
        
        if (&var_48 != rbx_2 && rdi_1 != 0)
            void** r8_1 = *rdi_1
            r8_1[8](rdi_1, rbx_2, r8_1)
        
        rbx_2[2].d = rbp_1
        void* rcx_2 = *rax_4
        int32_t r8_2 = rax_4[2].d
        int64_t* rdx_2 = rax_4[1]
        int64_t* rbx_3 = *(rcx_2 + 0x30)
        int64_t* arg_10 = rbx_3
        int32_t* rsi_2 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rsi_2 += 1
            rdi_1 = var_48
            rbx_3 = arg_10
        
        sub_140978a40(rcx_2, rdx_2, r8_2, 1)
        
        if (rbx_3 != 0)
            int32_t rax_5 = *rsi_2
            *rsi_2 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(arg_10)
            
            rdi_1 = var_48
        
        if (rdi_1 != 0)
            (*rdi_1)[7](rdi_1, 0)
            int64_t rax_7 = sub_140a84c80(rdi_1, 0, 0)
            
            if (rax_7 != 0)
                sub_140a74f90(rax_7)

data_14399fa40()
char result = data_14399fa30()

if (result == 0)
    return result

jump(data_14399fa20)
