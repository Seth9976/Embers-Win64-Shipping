// 函数: sub_14188bfe0
// 地址: 0x14188bfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* result = sub_14183e320(sx.q(*arg3) + *arg2, arg1[0xc].d)
void* result_1 = result

if (result != 0)
    int128_t var_c8
    sub_140b214c0(&var_c8)
    void* result_2 = result_1
    int32_t r11_2 = (result_2 u>> 0x20).d * 0x17 + result_2.d
    void* rdi_1
    
    if (arg1[0x2d].d == *(arg1 + 0x194))
    label_14188c0be:
        rdi_1 = sub_141819350(&arg1[0x2c], r11_2, &result_1)
    else
        void* rcx_3 = arg1[0x34]
        void* r8 = &arg1[0x33]
        
        if (rcx_3 != 0)
            r8 = rcx_3
        
        int32_t rax_6 = *(r8 + (((sx.q(arg1[0x35].d) - 1) & sx.q(r11_2)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_14188c0be_1:
            rdi_1 = sub_141819350(&arg1[0x2c], r11_2, &result_1)
        else
            int64_t* rcx_7
            
            while (true)
                rcx_7 = sx.q(rax_6) * 0x60 + arg1[0x2c]
                
                if (*rcx_7 == result_2)
                    break
                
                rax_6 = rcx_7[0xb].d
                
                if (rax_6 == 0xffffffff)
                    goto label_14188c0be_2
            
            if (rax_6 == 0xffffffff || rcx_7 == 0)
            label_14188c0be_2:
                rdi_1 = sub_141819350(&arg1[0x2c], r11_2, &result_1)
            else
                rdi_1 = &rcx_7[1]
    
    int32_t var_e8
    sub_140598750(rdi_1, &var_e8)
    int32_t* var_e0
    *var_e0 = var_c8
    var_e0[4] = 0xffffffff
    void var_d8
    sub_14093ebb0(rdi_1, &var_d8, sub_140a6b260(var_e0, 0x10), var_e0, var_e8, nullptr)
    sub_1418182f0(&arg1[0x36], &var_c8, &result_1)
    void* rcx_15 = sx.q(*arg3) + *arg2
    uint64_t rdx_8 = zx.q(arg1[0xc].d)
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x14)
    sub_140b3f690(rcx_15, rdx_8, &var_a0)
    int32_t* rax_10 = (*(*arg1 + 0x50))(arg1, &var_d8, &var_a0)
    sub_14186d450(&arg1[0x40], &var_e8)
    *var_e0 = var_c8
    var_e0[4] = *rax_10
    var_e0[5] = 0xffffffff
    void var_b8
    sub_141835dd0(&arg1[0x40], &var_b8, sub_140a6b260(var_e0, 0x10), var_e0, var_e8, nullptr)
    int64_t var_b0[0x2]
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_b0)
    sub_14184deb0(arg4, sx.q(*arg3), zx.q(arg1[0xc].d), &var_b0)
    var_e8.q = arg1
    int128_t* var_e0_1 = &var_c8
    int128_t zmm0_3 = var_e8.o
    void*** var_78_1 = nullptr
    void** const var_68 = &data_142d42ed8
    int64_t (* var_88)(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4) = sub_14187aec0
    int128_t var_60_1 = zmm0_3
    sub_141884840(&arg1[3], &var_b0, &var_88)
    
    if (var_88 != 0)
        void** const* rcx_23 = &var_68
        
        if (var_78_1 != 0)
            rcx_23 = var_78_1
        
        (*rcx_23)[2](rcx_23)
    
    result = sub_1418221b0(&var_b0)

__security_check_cookie(rax_1 ^ &var_118)
return result
