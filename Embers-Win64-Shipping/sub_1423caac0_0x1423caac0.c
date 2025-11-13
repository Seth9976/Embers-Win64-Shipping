// 函数: sub_1423caac0
// 地址: 0x1423caac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[0xf]

if ((*(arg1 + 0x3d) & 8) != 0 && arg1[0x1c] == 0 && rbp != 0 && *(rbp + 0x58) != 0
        && arg2 s> sub_1423c1c20(arg1))
    int32_t rcx = data_143f5a49c
    
    if (rcx != 2)
        int64_t* rbx_1 = arg1[0xd]
        void* rsi_1 = &rbx_1[sx.q(arg1[0xe].d)]
        
        if (rbx_1 != rsi_1)
            do
                if (*rbx_1 != 0)
                    sub_1425b5960()
                
                rbx_1 = &rbx_1[1]
            while (rbx_1 != rsi_1)
            
            rcx = data_143f5a49c
    
    void*** rbx_2
    
    if (rcx == 1)
        void*** rax_6 = j_sub_140a82f30(0x140)
        rbx_2 = nullptr
        void*** rbp_1
        
        if (rax_6 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_1423a5210(rax_6, arg3)
        
        int64_t* rsi_2
        
        if (data_143f0f1bb == 0)
            void*** rax_10 = j_sub_140a82f30(0x60)
            
            if (rax_10 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = sub_1423a51e0(rax_10)
        else
            void*** rax_8 = j_sub_140a82f30(0xa8)
            
            if (rax_8 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = sub_1423a51a0(rax_8)
        
        void*** rax_12 = j_sub_140a82f30(0x3d0)
        
        if (rax_12 != 0)
            rbx_2 = sub_1423a5940(rax_12, arg1, arg2, rsi_2, arg5, arg4, 0, rbp_1)
    else if (*(rbp + 0x59) != 0)
        void*** rax_2 = j_sub_140a82f30(0x250)
        
        if (rax_2 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_1423a55e0(rax_2, arg1, arg2, arg3)
    else if (data_143f0f1bb == 0)
        void*** rax_5 = j_sub_140a82f30(0x250)
        
        if (rax_5 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_1423a54f0(rax_5, arg1, arg2, arg3)
    else
        void*** rax_4 = j_sub_140a82f30(0x250)
        
        if (rax_4 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_1423a5400(rax_4, arg1, arg2, arg3)
    
    int64_t* rcx_8 = arg1[0x1c]
    arg1[0x1c] = rbx_2
    
    if (rbx_2 != 0)
        *(rbx_2 + 0x5c) += 1
    
    if (rcx_8 != 0)
        sub_142394bb0(rcx_8)
    
    void* rax_13
    rax_13.b = *(arg1[0x1c] + 0x54) == 0
    return rax_13

int32_t rax
rax.b = 0
return rax
