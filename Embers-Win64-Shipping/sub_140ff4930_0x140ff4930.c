// 函数: sub_140ff4930
// 地址: 0x140ff4930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void buffer2
sub_140fd95b0(&buffer2, arg3, arg3.b)
int32_t var_68
int128_t buffer2_1
void* const buffer1

if (data_1439b4a58 == data_1439b4a84)
label_140ff4a2f:
    buffer1 = nullptr
else
    void* rcx_1 = data_1439b4a90
    void* rax_4 = &data_1439b4a88
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t var_60
    int32_t rbx_1 = *(rax_4 + (((sx.q(data_1439b4a98) - 1) & sx.q(var_60)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_140ff4a2f_1:
        buffer1 = nullptr
    else
        int64_t rbp_1 = data_1439b4a50
        
        while (true)
            buffer1 = sx.q(rbx_1) * 0x240 + rbp_1
            int64_t rax_6 = sx.q(*(buffer1 + 0x200))
            
            if (rax_6.d == var_68)
                int32_t rax_7 = memcmp(buffer1, &buffer2, rax_6 << 5)
                
                if (rax_7 == 0 && memcmp(buffer1 + 0x20c, &buffer2_1, zx.q(rax_7 + 0x20)) == 0)
                    break
            
            rbx_1 = *(buffer1 + 0x238)
            
            if (rbx_1 == 0xffffffff)
                goto label_140ff4a2f_2
        
        if (rbx_1 == 0xffffffff)
        label_140ff4a2f_2:
            buffer1 = nullptr

void* rsi_2 = buffer1 + 0x230

if (buffer1 == 0)
    rsi_2 = nullptr

if (rsi_2 == 0)
    void*** rax_9 = j_sub_140a82f30(0x240)
    void*** rbx_2 = rax_9
    
    if (rax_9 == 0)
        rbx_2 = nullptr
    else
        *rbx_2 = &data_142d3ff08
        rbx_2[1].d = 0
        *rbx_2 = &data_142ef5850
        *(rbx_2 + 0xc) = 0
        rbx_2[2].w = 0x100
        int64_t rsi_3 = sx.q(var_68)
        rbx_2[0x43].d = rsi_3.d
        
        if (rsi_3.d != 0)
            sub_140ffca30(&rbx_2[3], rsi_3.d, 0)
            memcpy(&rbx_2[3], &buffer2, (rsi_3 << 5).d)
        else
            *(rbx_2 + 0x21c) = 0x10
        
        *(rbx_2 + 0x220) = buffer2_1
        int128_t var_4c
        *(rbx_2 + 0x230) = var_4c
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rsi_2 = sub_140fd4790(&data_1439b4a50, &buffer2)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_11
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_11 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                void** r8_5 = *rbx_2
                (*r8_5)(rbx_2, 1, r8_5)
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

void* rcx_8 = *rsi_2
*arg2 = rcx_8

if (rcx_8 != 0)
    *(rcx_8 + 8) += 1

__security_check_cookie(rax_1 ^ &var_298)
return arg2
