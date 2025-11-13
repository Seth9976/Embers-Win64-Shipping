// 函数: sub_141e31c70
// 地址: 0x141e31c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x2c].b == 0 && arg3 != 0)
    arg1[0x2c].b = arg3

int128_t zmm6 = zx.o(0)

if (0f f== arg1[0x2a].d)
    int32_t zmm1 = arg2[1].d
    
    if (not(zmm1 f>= arg1[0x27].d))
        sub_141defc90(&arg1[0x26], zmm1)
        sub_141defe90(&arg1[0x26], (zx.o(0)).d)
else
    sub_141defc80(&arg1[0x26], *(arg2 + 0x24))
    sub_141defe60(&arg1[0x26], *arg2)
    sub_141defc90(&arg1[0x26], arg2[1].d)
    sub_141defe90(&arg1[0x26], (zx.o(0)).d)
    
    if (*arg1 != 0)
        int64_t* rax = sub_140d3c6e0(&arg1[0x21])
        
        if (rax != 0)
            int64_t r8 = *rax
            (*(r8 + 0x280))(rax, arg1, r8)
            int64_t* rcx_6 = nullptr
            int64_t* var_48 = nullptr
            int32_t rdx_3 = 0
            int32_t var_40_1 = 0
            
            if (&arg1[3] != &var_48 && arg1[4].d != 0)
                int64_t* r8_2 = arg1[3]
                
                if (r8_2 != 0)
                    (*(*r8_2 + 0x40))(r8_2, &var_48)
                    rdx_3 = var_40_1
                    rcx_6 = var_48
            
            int64_t var_38 = *arg1
            char var_30_1 = arg1[0x2c].b
            int64_t var_28 = 0
            int32_t var_20_1 = 0
            
            if (rdx_3 != 0 && rcx_6 != 0)
                (*(*rcx_6 + 0x40))(rcx_6, &var_28)
            
            sub_140745b20(&var_48)
            zmm6 = sub_141e0a730(rax, &var_38)
            sub_140745b20(&var_28)

if (not(zmm6.d f< arg1[0x27].d))
    arg1[5].b = 0
