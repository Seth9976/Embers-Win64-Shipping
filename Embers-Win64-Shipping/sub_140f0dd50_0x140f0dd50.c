// 函数: sub_140f0dd50
// 地址: 0x140f0dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t r12
r12.b = *(arg4 + 0x38) == data_143e1e008

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r12.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    bool cond:0_1 = *(arg1 + 0x4c8) == 1
    *(arg1 + 0x398) = 0
    
    if (not(cond:0_1))
        float zmm4 = *arg3
        float zmm5 = arg3[1]
        float zmm3 = zmm5 f* arg3[9]
        float zmm2 = zmm4 f* arg3[7]
        zmm5 = zmm5 f* arg3[0xa]
        zmm4 = zmm4 f* arg3[8]
        int512_t zmm1
        zmm1.o = arg3[0xc]
        float var_f0_1 = zmm2
        float var_e8_1 = zmm3
        float var_f8 = arg3[0xb].d
        int32_t var_f4_1 = zmm1.d
        float var_ec_1 = zmm4
        float var_e4_1 = zmm5
        char rax_3
        rax_3, zmm1 = sub_140db3460(&var_f8, arg4 + 0x18)
        
        if (rax_3 != 0)
            char rax_4
            
            if (*(arg1 + 0x4c8) != 2)
                rax_4 = sub_140e19840(arg1, zmm1)
            
            if (*(arg1 + 0x4c8) == 2 || rax_4 != 0)
                sub_140f19af0(arg1)
                char rcx_6 = *sub_140eff7d0(arg1 + 0x3a0)
                
                if (rcx_6 == 1)
                    sub_140e78f50(data_143e29f28, arg1 + 0x4f8, 0)
                else if (rcx_6 == 0)
                    sub_140e78f50(data_143e29f28, arg1 + 0x510, 0)
    
    char var_d8 = 1
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    char var_b8_1 = 0
    int64_t var_b0
    __builtin_memset(&var_b0, 0, 0x88)
    int32_t var_24
    int32_t var_24_1 = (var_24 & 0xffffff01) | 1
    int32_t var_28_1 = 0x20702
    sub_140596b00(arg2, &var_d8)
    sub_140597700(&var_d8)

return arg2
