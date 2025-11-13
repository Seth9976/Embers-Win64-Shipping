// 函数: sub_1418ad470
// 地址: 0x1418ad470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* r14 = arg3
int64_t var_158
sub_140a98020(&var_158)
int64_t r13 = *(arg1 + 0x100)
int16_t* var_170
sub_1418abd30(arg1, &var_170, arg2)
int64_t* rcx_2 = *(arg1 + 0x28)
int16_t* const rsi = &data_142d40450
int16_t* rbx = var_170
int16_t* const r8_1 = &data_142d40450
int32_t var_168

if (var_168 != 0)
    r8_1 = rbx

int64_t* var_178
(*(*rcx_2 + 0x48))(rcx_2, &var_178, r8_1, 0)
int64_t* rcx_3 = *(arg1 + 0x30)
(*(*rcx_3 + 0x10))(rcx_3, arg2, 0)
int64_t* rcx_4 = var_178
int32_t rsi_1

if (rcx_4 == 0)
    int64_t* rcx_21 = *(arg1 + 0x28)
    
    if (var_168 != 0)
        rsi = rbx
    
    int32_t rsi_2
    rsi_2.b = (*(*rcx_21 + 0x80))(rcx_21, rsi) != 0
    rsi_1 = rsi_2 + 2
else
    int64_t rax_5 = (*(*rcx_4 + 0x28))(rcx_4)
    
    if (rax_5 == *(r14 + 0x58))
        void var_128
        sub_140b2f110(&var_128)
        int64_t* rcx_7 = var_178
        int64_t var_140
        __builtin_memset(&var_140, 0, 0x14)
        rsi_1 = 0
        
        if ((*(*rcx_7 + 0x30))(rcx_7) == 0)
            int128_t zmm6 = 0x3dcccccd
            char i
            
            do
                bool z_1
                
                if (0 == *(arg1 + 0xfc))
                    *(arg1 + 0xfc) = 0
                    z_1 = true
                else
                    *(arg1 + 0xfc)
                    z_1 = false
                
                if (not(z_1))
                    break
                
                bool z_2
                
                if (0 == *(arg1 + 0xf8))
                    *(arg1 + 0xf8) = 0
                    z_2 = true
                else
                    *(arg1 + 0xf8)
                    z_2 = false
                
                if (not(z_2))
                    bool z_4
                    
                    do
                        bool z_3
                        
                        if (0 == *(arg1 + 0xfc))
                            *(arg1 + 0xfc) = 0
                            z_3 = true
                        else
                            *(arg1 + 0xfc)
                            z_3 = false
                        
                        if (not(z_3))
                            break
                        
                        zmm6 = sub_140b73230(zmm6)
                        
                        if (0 == *(arg1 + 0xf8))
                            *(arg1 + 0xf8) = 0
                            z_4 = true
                        else
                            *(arg1 + 0xf8)
                            z_4 = false
                    while (not(z_4))
                
                int64_t rax_13 = _Query_perf_frequency()
                int64_t* rcx_8 = var_178
                var_158 = rax_13
                int64_t rax_15 = (*(*rcx_8 + 0x20))(rcx_8)
                int64_t* rcx_9 = var_178
                int64_t r8_3 = rax_5 - rax_15
                
                if (r8_3 s>= 0x400000)
                    r8_3 = 0x400000
                
                (*(*rcx_9 + 0x150))(rcx_9, *(arg1 + 0x40))
                sub_140b4ad80(&var_128, *(arg1 + 0x40), r8_3)
                int64_t* rcx_11 = var_178
                *(arg1 + 0x100) = (*(*rcx_11 + 0x20))(rcx_11) + r13
                int64_t rax_20 = _Query_perf_frequency()
                int64_t* rcx_12 = *(arg1 + 0x30)
                int64_t var_150_1 = rax_20
                (*(*rcx_12 + 0x20))(rcx_12, &var_158)
                int64_t* rcx_13 = var_178
                int64_t rbx_1 = **(arg1 + 0x30)
                int64_t rax_24 = (*(*rcx_13 + 0x20))(rcx_13)
                (*(rbx_1 + 0x10))(*(arg1 + 0x30), arg2, rax_24)
                int64_t* rcx_15 = *(arg1 + 0x30)
                (*(*rcx_15 + 0x28))(rcx_15, *(arg1 + 0x100))
                int64_t* rcx_16 = var_178
                i = (*(*rcx_16 + 0x30))(rcx_16)
            while (i == 0)
            rbx = var_170
            r14 = arg3
        
        sub_140b39010(&var_128)
        sub_140b3da80(&var_128, &var_140)
        int64_t var_138
        int32_t var_130
        
        if (var_140 != *(r14 + 0x20) || var_138 != *(r14 + 0x28) || var_130 != *(r14 + 0x30))
            bool z_5
            
            if (0 == *(arg1 + 0xfc))
                *(arg1 + 0xfc) = 0
                z_5 = true
            else
                *(arg1 + 0xfc)
                z_5 = false
            
            rbx = var_170
            rsi_1 = 1
            
            if (z_5)
                rsi_1 = 4
        
        sub_140b30ae0(&var_128)
        int64_t* rcx_20 = var_178
        (*(*rcx_20 + 0x1b8))(rcx_20)
    else
        int64_t* rcx_5 = var_178
        rsi_1 = 5
        (*(*rcx_5 + 0x1b8))(rcx_5)

*(arg1 + 0x100) = *(r14 + 0x58) + r13

if (rsi_1 != 0)
    int64_t* rcx_24 = *(arg1 + 0x30)
    (*(*rcx_24 + 0x10))(rcx_24, arg2, *(r14 + 0x58))
    int64_t* rcx_25 = *(arg1 + 0x30)
    (*(*rcx_25 + 0x28))(rcx_25, *(arg1 + 0x100))

int64_t* rcx_26 = var_178

if (rcx_26 != 0)
    int64_t r8_7 = *rcx_26
    (*r8_7)(rcx_26, 1, r8_7)

if (rbx != 0)
    sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(rsi_1)
