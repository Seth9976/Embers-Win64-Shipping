// 函数: sub_141992c00
// 地址: 0x141992c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_14399fa30() != 0)
    data_14399fa18()

data_14399fa38()
arg1[2] = arg2
*arg1 = data_143f138f5
arg1[1] = data_143f138f4

if (arg2 != 0)
    sub_1419b9b10()
    data_143f138f5 = 0
else if (data_143db7a64 == 0)
    sub_1419a21e0(0)
    
    if (data_143f138f4 != 0)
        int32_t rbp = data_14399e5dc
        void*** rax_5 = sub_140a84c80(0, 0x20, 0)
        void*** var_78 = rax_5
        void*** rbx_1 = rax_5
        
        if (rax_5 != 0)
            *rax_5 = &data_142d40dc0
            rbx_1[1] = sub_1419b9e20
            rbx_1[3] = sub_140a387b0()
            *rbx_1 = &data_142d40e18
        
        void var_68
        int64_t* rax_7 = sub_140958da0(&var_68, nullptr, 0xff)
        int64_t* rsi_1 = *rax_7 + 0x10
        *rsi_1 = 0
        rsi_1[1].d = 0
        
        if (&var_78 != rsi_1 && rbx_1 != 0)
            void** r8_1 = *rbx_1
            r8_1[8](rbx_1, rsi_1, r8_1)
        
        rsi_1[2].d = rbp
        void* rcx_2 = *rax_7
        int32_t r8_2 = rax_7[2].d
        int64_t* rdx_1 = rax_7[1]
        int64_t* rax_8 = *(rcx_2 + 0x30)
        int64_t* arg_8 = rax_8
        
        if (rax_8 != 0)
            rax_8[9].d += 1
            rbx_1 = var_78
        
        sub_140978a40(rcx_2, rdx_1, r8_2, 1)
        
        if (rbx_1 != 0)
            (*rbx_1)[7](rbx_1, 0)
            void*** rax_10 = sub_140a84c80(rbx_1, 0, 0)
            var_78 = rax_10
            
            if (rax_10 != 0)
                sub_140a74f90(rax_10)
        
        int64_t* rax_11 = sub_140a242a0()
        int64_t r8_3 = *rax_11
        
        if ((*(r8_3 + 0x20))(rax_11, 2, r8_3) == 0)
            sub_1405a6220(sub_140a242a0(), &arg_8)
        else
            while (data_143db7a64 == 0)
                sub_140b73230(zx.o(0))
        
        void*** rax_15 = sub_140a84c80(0, 0x20, 0)
        void*** var_88 = rax_15
        void*** rbx_2 = rax_15
        
        if (rax_15 != 0)
            *rax_15 = &data_142d40dc0
            rbx_2[1] = sub_1419ba960
            rbx_2[3] = sub_140a387b0()
            *rbx_2 = &data_142d40e18
        
        void var_50
        int64_t* rax_17 = sub_140958da0(&var_50, nullptr, 0xff)
        int64_t* rsi_3 = *rax_17 + 0x10
        *rsi_3 = 0
        rsi_3[1].d = 0
        
        if (&var_88 != rsi_3 && rbx_2 != 0)
            void** r8_5 = *rbx_2
            r8_5[8](rbx_2, rsi_3, r8_5)
        
        rsi_3[2].d = rbp
        void* rcx_10 = *rax_17
        int64_t* r14_2 = *(rcx_10 + 0x30)
        
        if (r14_2 != 0)
            r14_2[9].d += 1
            rbx_2 = var_88
        
        sub_140978a40(rcx_10, rax_17[1], rax_17[2].d, 1)
        
        if (r14_2 != 0)
            r14_2[9].d -= 1
            
            if (r14_2[9].d == 1)
                sub_140a2f6e0(r14_2)
            
            rbx_2 = var_88
        
        if (rbx_2 != 0)
            (*rbx_2)[7](rbx_2, 0)
            void*** rax_20 = sub_140a84c80(rbx_2, 0, 0)
            var_88 = rax_20
            
            if (rax_20 != 0)
                sub_140a74f90(rax_20)
        
        int64_t* rax_21 = arg_8
        
        if (rax_21 != 0)
            rax_21[9].d -= 1
            
            if (rax_21[9].d == 1)
                sub_140a2f6e0(arg_8)
        
        return arg1

data_143db7a64 += 1
return arg1
