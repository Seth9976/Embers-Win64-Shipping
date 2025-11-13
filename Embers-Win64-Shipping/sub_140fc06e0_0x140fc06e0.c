// 函数: sub_140fc06e0
// 地址: 0x140fc06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x48)
int64_t rax = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

float var_f8
char rax_1

if (rax == data_143e1e008)
    float zmm4 = *arg3
    float zmm5 = arg3[1]
    float zmm3 = zmm5 f* arg3[9]
    float zmm2 = zmm4 f* arg3[7]
    zmm5 = zmm5 f* arg3[0xa]
    zmm4 = zmm4 f* arg3[8]
    int128_t zmm1 = arg3[0xc]
    float var_f0_1 = zmm2
    float var_e8_1 = zmm3
    var_f8 = arg3[0xb].d
    int32_t var_f4_1 = zmm1.d
    float var_ec_1 = zmm4
    float var_e4_1 = zmm5
    rax_1 = sub_140db3460(&var_f8, arg4 + 0x18)

int64_t rsi

if (rax != data_143e1e008 || rax_1 == 0)
    rsi.b = 0
else
    rsi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rsi_1 = *(arg1 + 0x398)
    int128_t* rax_4 = nullptr
    
    if (rsi_1 != 0)
        int32_t rcx_3 = rsi_1[1].d
        
        if (rcx_3 == 0)
            rsi_1 = nullptr
        else
            rsi_1[1].d = rcx_3 + 1
            rax_4 = *(arg1 + 0x390)
    
    int128_t zmm6 = *rax_4
    
    if (*(arg1 + 0x3c8) != 0)
        int64_t* rcx_4 = *(arg1 + 0x3c0)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            var_f8.o = zmm6
            int64_t* rcx_5
            
            if (*(arg1 + 0x3c8) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg1 + 0x3c0)
            
            (*(*rcx_5 + 0x50))(rcx_5, &var_f8)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    char var_d8 = 1
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    char var_b8_1 = 0
    int32_t var_24
    int32_t var_24_1 = (var_24 & 0xffffff01) | 1
    int64_t var_b0
    __builtin_memset(&var_b0, 0, 0x88)
    int32_t var_28_1 = 0x20702
    sub_140596b00(arg2, &var_d8)
    sub_140597700(&var_d8)

return arg2
