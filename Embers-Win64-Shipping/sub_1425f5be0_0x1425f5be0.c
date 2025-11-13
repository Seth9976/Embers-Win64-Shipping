// 函数: sub_1425f5be0
// 地址: 0x1425f5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = data_143f70ce8
sub_140b34200("NewRecording", r12)
int128_t* rbx

if ((*(*arg1 + 0x10))(arg1) == 0)
    rbx.b = 0
else
    bool z_1
    
    if (0 == arg1[4].d)
        arg1[4].d = 0
        z_1 = true
    else
        arg1[4].d
        z_1 = false
    
    if (not(z_1))
        rbx.b = 0
    else
        *(arg1 + 0x28) = *arg3
        arg1[0xb] = 0
        int128_t* var_48 = nullptr
        int64_t var_40_1 = 0
        sub_1405947f0(&var_48, 0xa)
        int32_t r15_1 = var_40_1:4.d
        int32_t r14_1 = var_40_1.d + 0xa
        var_40_1.d = r14_1
        
        if (r14_1 s> r15_1)
            sub_140594770(&var_48)
            r15_1 = var_40_1:4.d
            r14_1 = var_40_1.d
        
        rbx = var_48
        sub_1405a7220(rbx, 0xa, "recording", 0xa, 0x3f)
        
        if (&arg1[7] != &var_48)
            int64_t rcx_4 = arg1[7]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            arg1[7] = rbx
            arg1[8].d = r14_1
            *(arg1 + 0x44) = r15_1
        else if (rbx != 0)
            sub_140a74f90(rbx)
        
        arg1[0xd] = 0
        arg1[0xc] = 0
        
        if (arg2 != 0 && arg1[7] != arg2)
            if (*arg2 == 0)
                rbx = nullptr
            else
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (arg2[rbx_1] != 0)
                
                rbx = zx.q(rbx_1.d + 1)
            
            int32_t rdx_2 = 0
            arg1[8].d = 0
            
            if (*(arg1 + 0x44) != rbx.d)
                sub_1405947f0(&arg1[7], rbx.d)
                rdx_2 = arg1[8].d
            
            int32_t rax_3 = rdx_2 + rbx.d
            arg1[8].d = rax_3
            
            if (rax_3 s> *(arg1 + 0x44))
                sub_140594770(&arg1[7])
            
            if (rbx.d != 0)
                memcpy(arg1[7], arg2, rbx.d * 2)
        
        sub_1425f5e40(arg1)
        void* rcx_10 = arg1[0xe]
        bool z_2
        
        if (0 == *(rcx_10 + 8))
            *(rcx_10 + 8) = 0
            z_2 = true
        else
            *(rcx_10 + 8)
            z_2 = false
        
        char rax_6
        
        if (z_2)
            int64_t rax_5 = arg1[5]
            double zmm1_1[0x2] = zx.o(0)
            zmm1_1[0] = float.d(rax_5)
            
            if (rax_5 s< 0)
                zmm1_1[0] = zmm1_1[0] + 1.8446744073709552e+19
            
            rax_6 = sub_1425f70b0(arg1[0xe], zmm1_1)
        
        if (z_2 && rax_6 == 0)
            rbx.b = 0
        else
            int32_t rsi_2 = data_143f70ce8
            rbx = arg1[0xe]
            sub_140b34200("HighlightRecorder_Pause", rsi_2)
            bool z_3
            
            if (0 == *(rbx + 8))
                *(rbx + 8) = 0
                z_3 = true
            else
                *(rbx + 8)
                z_3 = false
            
            if (not(z_3) && rbx[7].q == 0)
                void arg_20
                rbx[7].q = *sub_1425f5580(rbx, &arg_20)
                *(rbx + 8)
                *(rbx + 8) = 2
            
            sub_140b38680("HighlightRecorder_Pause", rsi_2)
            arg1[4].d
            arg1[4].d = 4
            
            if (arg1[6].b != 0)
                (*(*arg1 + 0x20))(arg1)
            
            rbx.b = 1

sub_140b38680("NewRecording", r12)
return zx.q(rbx.b)
