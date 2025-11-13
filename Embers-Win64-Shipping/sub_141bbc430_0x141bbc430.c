// 函数: sub_141bbc430
// 地址: 0x141bbc430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (arg1[0x52] == 0)
    return 

TEB* gsbase
int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f31828 s> *rbx_2)
    _Init_thread_header(&data_143f31828)
    
    if (data_143f31828 == 0xffffffff)
        sub_140b58260(&data_143f31820, u"TextDelegate", 1)
        _Init_thread_footer(&data_143f31828)

if (data_143f31838 s> *rbx_2)
    _Init_thread_header(&data_143f31838)
    
    if (data_143f31838 == 0xffffffff)
        sub_140b58260(&data_143f31830, u"ColorAndOpacityDelegate", 1)
        _Init_thread_footer(&data_143f31838)

if (data_143f31848 s> *rbx_2)
    _Init_thread_header(&data_143f31848)
    
    if (data_143f31848 == 0xffffffff)
        sub_140b58260(&data_143f31840, u"ShadowColorAndOpacityDelegate", 1)
        _Init_thread_footer(&data_143f31848)

uint64_t rax = *arg2

if (rax == data_143f31820)
    void var_b0
    (*(*arg1 + 0x2d0))(arg1, &var_b0)
    sub_140f8d430(arg1[0x52], &var_b0)
    void var_90
    sub_140745b20(&var_90)
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t rdi_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_a8 + 8))(var_a8, zx.q(rdi_1))
else if (rax == data_143f31830)
    int64_t* var_f8
    int64_t var_e8
    int128_t* rdx_4
    int32_t rsi_1
    
    if (sub_141b28ce0(&arg1[0x2f]) == 0)
        char var_108_1 = arg1[0x2c].b
        int64_t var_100_1 = arg1[0x2d]
        int64_t* rax_14 = arg1[0x2e]
        var_f8 = rax_14
        int128_t var_118 = *(arg1 + 0x150)
        
        if (rax_14 != 0)
            rax_14[1].d += 1
        
        char var_f0_1 = 1
        rdx_4 = &var_118
        var_e8 = 0
        rsi_1 = 2
        int32_t var_e0_1 = 0
    else
        arg_8.q = arg1[0x30]
        void var_58
        rdx_4 = sub_141b70370(&var_58, sub_140d3c6e0(&arg1[0x2f]), &arg_8)
        rsi_1 = 1
    
    int128_t var_158 = *rdx_4
    char var_148_1 = rdx_4[1].b
    int64_t var_140_1 = *(rdx_4 + 0x18)
    int64_t* rax_17 = rdx_4[2].q
    
    if (rax_17 != 0)
        rax_17[1].d += 1
    
    char var_130_1 = *(rdx_4 + 0x28)
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    sub_1407473e0(&var_128, &rdx_4[3])
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        sub_140745b20(&var_e8)
        
        if (var_f8 != 0)
            var_f8[1].d -= 1
            
            if (var_f8[1].d == 1)
                (**var_f8)(var_f8)
                int32_t temp4_1 = *(var_f8 + 0xc)
                *(var_f8 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_f8 + 8))(var_f8, 1)
    
    if ((rsi_1.b & 1) != 0)
        void var_28
        sub_140745b20(&var_28)
        int64_t* var_38
        
        if (var_38 != 0)
            var_38[1].d -= 1
            
            if (var_38[1].d == 1)
                (**var_38)(var_38)
                int32_t temp6_1 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_38 + 8))(var_38, 1)
    
    sub_140f8a450(arg1[0x52], &var_158)
    sub_140745b20(&var_128)
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            (**rax_17)(rax_17)
            int32_t temp5_1 = *(rax_17 + 0xc)
            *(rax_17 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rax_17 + 8))(rax_17, 1)
else if (rax == data_143f31840)
    int64_t var_c0
    int128_t* rdx_8
    int32_t rbx_7
    int32_t rsi_2
    
    if (sub_141b28ce0(&arg1[0x4f]) == 0)
        int128_t zmm0_2 = *(arg1 + 0x268)
        char var_c8_1 = 1
        int128_t var_d8
        rdx_8 = &var_d8
        var_c0 = 0
        rbx_7 = 0
        var_d8 = zmm0_2
        int32_t var_b8_1 = 0
        rsi_2 = 8
    else
        int64_t arg_18 = arg1[0x50]
        void var_80
        rdx_8 = sub_141b700f0(&var_80, sub_140d3c6e0(&arg1[0x4f]), &arg_18)
        rbx_7 = 4
        rsi_2 = 0
    
    int128_t var_188 = *rdx_8
    char var_178_1 = rdx_8[1].b
    int64_t var_170 = 0
    int32_t var_168_1 = 0
    sub_1407473e0(&var_170, rdx_8 + 0x18)
    
    if (rsi_2 != 0)
        sub_140745b20(&var_c0)
    
    void var_68
    
    if (rbx_7 != 0)
        sub_140745b20(&var_68)
    sub_140f8cc90(arg1[0x52], &var_188)
    sub_140745b20(&var_170)
