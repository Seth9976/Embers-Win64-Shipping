// 函数: sub_141959990
// 地址: 0x141959990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void var_22c
sub_141951bd0(&var_22c, arg3)
int32_t var_6c
void* const r9_3

if (data_1439c7998 == data_1439c79c4)
label_141959b08:
    r9_3 = nullptr
else
    void* rcx_1 = data_1439c79d0
    void* rax_4 = &data_1439c79c8
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t var_64
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439c79d8) - 1) & sx.q(var_64)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141959b08_1:
        r9_3 = nullptr
    else
        int32_t i_1
        
        while (true)
            r9_3 = (sx.q(rax_5) << 9) + data_1439c7990
            i_1 = *(r9_3 + 0x1c0)
            
            if (i_1 == var_6c)
                break
            
        label_141959af6:
            rax_5 = *(r9_3 + 0x1f8)
            
            if (rax_5 == 0xffffffff)
                goto label_141959b08_2
        
        if (i_1 != 0)
            void var_228
            int32_t* r10_1 = &var_228 - r9_3
            int32_t* r11_1 = &var_22c - r9_3
            void* rcx_2 = r9_3 + 8
            int32_t i
            
            do
                if (*(rcx_2 - 8) != *(r11_1 + rcx_2 - 8))
                    goto label_141959af6
                
                if (*(rcx_2 - 4) != *(r10_1 + rcx_2 - 8))
                    goto label_141959af6
                
                if (*rcx_2 != *(r11_1 + rcx_2))
                    goto label_141959af6
                
                if (*(rcx_2 + 4) != *(r10_1 + rcx_2))
                    goto label_141959af6
                
                void var_224
                
                if (*(rcx_2 + 8) != *(&var_224 - r9_3 + rcx_2))
                    goto label_141959af6
                
                void var_21c
                
                if (*(rcx_2 + 0x10) != *(&var_21c - r9_3 + rcx_2))
                    goto label_141959af6
                
                void var_21b
                
                if (*(rcx_2 + 0x11) != *(&var_21b - r9_3 + rcx_2))
                    goto label_141959af6
                
                void var_21a
                
                if (*(rcx_2 + 0x12) != *(&var_21a - r9_3 + rcx_2))
                    goto label_141959af6
                
                void var_220
                
                if (*(rcx_2 + 0xc) != *(&var_220 - r9_3 + rcx_2))
                    goto label_141959af6
                
                rcx_2 += 0x1c
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (rax_5 == 0xffffffff)
        label_141959b08_2:
            r9_3 = nullptr

void* rdi_2 = r9_3 + 0x1f0

if (r9_3 == 0)
    rdi_2 = nullptr

if (rdi_2 == 0)
    void*** rax_6 = j_sub_140a82f30(0x200)
    void*** rbx_2 = rax_6
    
    if (rax_6 == 0)
        rbx_2 = nullptr
    else
        *rbx_2 = &data_142d3ff08
        rbx_2[1].d = 0
        *rbx_2 = &data_142ff8b18
        *(rbx_2 + 0xc) = 0
        rbx_2[2].w = 0x100
        rbx_2[0x3b].d = var_6c
        
        if (var_6c != 0)
            sub_14195adf0(&rbx_2[3], var_6c, 0)
            memcpy(&rbx_2[3], &var_22c, var_6c * 0x1c)
        else
            *(rbx_2 + 0x1dc) = 0x10
        
        int128_t var_60
        *(rbx_2 + 0x1e0) = var_60
        int128_t var_50
        *(rbx_2 + 0x1f0) = var_50
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rdi_2 = sub_141950d60(&data_1439c7990, &var_22c)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_9
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_9 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
                void** r8_1 = *rbx_2
                (*r8_1)(rbx_2, 1, r8_1)
            else
                bool z_1
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_2 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_2)

void* rcx_6 = *rdi_2
*arg2 = rcx_6

if (rcx_6 != 0)
    *(rcx_6 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
