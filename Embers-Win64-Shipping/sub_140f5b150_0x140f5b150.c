// 函数: sub_140f5b150
// 地址: 0x140f5b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3f800000
uint128_t zmm7 = 0x3f800000
uint128_t zmm8 = 0x3f800000
int128_t var_68 = zx.o(0)
int64_t* rdx

if (arg1[0x77].d != 0)
    int64_t* rcx = arg1[0x76]
    
    if (rcx != 0)
        char rax_2
        rax_2, rdx = (*(*rcx + 0x28))(rcx)
        
        if (rax_2 != 0)
            int64_t* rcx_1
            
            if (arg1[0x77].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x76]
            
            int32_t rax_4
            rax_4, rdx = (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x75].d = rax_4

if (arg1[0x75].d == 6)
    void* var_58
    sub_140e66250(data_143e29f28, &var_58)
    void* rcx_3 = var_58
    
    if (rcx_3 != 0)
        int64_t* rsi_1 = *(rcx_3 + 0x390)
        int64_t* rcx_4 = *(rcx_3 + 0x398)
        int64_t* rbx_1 = rcx_4
        
        if (rcx_4 != 0)
            *(rcx_4 + 0xc) += 1
        
        int64_t* r8_1 = rcx_4
        
        if (rcx_4 != 0)
            int32_t rax_5 = rcx_4[1].d
            
            if (rax_5 == 0)
                rbx_1 = nullptr
            else
                rcx_4[1].d = rax_5 + 1
            
            int32_t temp3_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
            
            r8_1 = nullptr
        
        if (rbx_1 == 0)
            rsi_1 = nullptr
        
        if (r8_1 != 0)
            int32_t temp2_1 = *(r8_1 + 0xc)
            *(r8_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*r8_1 + 8))(r8_1, 1)
        
        if (rsi_1 != 0)
            int64_t arg_10
            (*(*rsi_1 + 0x10))(rsi_1, &arg_10)
            int64_t rax_10 = arg_10
            void* rcx_7 = data_143e29f28
            int32_t arg_8 = _mm_cvtepi32_ps(zx.o(rax_10.d)).d
            int32_t arg_c = _mm_cvtepi32_ps(zx.o((rax_10 u>> 0x20).d)).d
            rdx, zmm6 = sub_140da9b20(rcx_7, &var_68)
            int64_t rax_12 = arg_10
            zmm7 = _mm_cvtepi32_ps(zx.o(rax_12.d))
            zmm8 = _mm_cvtepi32_ps(zx.o((rax_12 u>> 0x20).d))
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp1_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

rdx.b = 1
float temp0_6 = __maxss_xmmss_memss(var_68:4.d, var_68:0xc.d)
uint128_t zmm0
zmm0.d = __maxss_xmmss_memss(var_68.d.d, var_68:8.d).d f/ zmm7.d
zmm6.d = zmm6.d f- _mm_max_ss(temp0_6 f/ zmm8.d, zmm0.d)
arg1[0x7e].d = zmm6.d
int64_t result = sub_140e19ef0(arg1, rdx.b)
sub_140e1a0f0(arg1)
return result
