// 函数: sub_142340bc0
// 地址: 0x142340bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_44
int32_t var_44_1 = var_44 & 0xffffff00
char var_f8 = 1
int64_t var_f0 = 0
int64_t var_e8 = 0
char var_d8 = 0
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x88)
int32_t var_48 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_f8)
sub_140597700(&var_f8)
sub_140d96150(arg1 + 0x120, arg3)
sub_142348be0(arg1 - 0xd0, arg3, arg4)

if (*(arg1 - 0x98) != 0)
    void* r14_1 = arg1 - 0xc8
    void arg_8
    int32_t* rax_2 = (*(*r14_1 + 0x18))(r14_1, &arg_8)
    
    if (*rax_2 != data_143dbb180.d || rax_2[1] != data_143dbb180:4.d)
        int64_t* rax_3 = &data_143e1dfc0
        
        if (*(arg4 + 0x64) < 0f)
            rax_3 = &data_143e1dfd8
        
        int64_t* rdi_1 = rax_3[2]
        int64_t rbx_1 = *rax_3
        int64_t r12_1 = rax_3[1]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        char rcx_7 = *(arg4 + 0x5c)
        
        if (arg1 == 0xd0)
            r14_1 = nullptr
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t var_140_1 = *(arg4 + 0xc)
        void* var_148 = r14_1
        int64_t var_138_1 = rbx_1
        int64_t var_130_1 = r12_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t var_120_1 = 0
        int32_t var_11c_1 = 0x3f800000
        char var_118_1 = rcx_7
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rcx_10 = *(arg1 - 0x98)
        (*(*rcx_10 + 0x48))(rcx_10, &var_148)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        char rcx_13 = *(arg4 + 0x5c)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t var_130_2 = r12_1
        int32_t var_140_2 = *(arg4 + 0xc)
        var_148 = r14_1
        int64_t var_138_2 = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t var_120_2 = 1
        int32_t var_11c_2 = 0x3f800000
        char var_118_2 = rcx_13
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rcx_16 = *(arg1 - 0x98)
        (*(*rcx_16 + 0x48))(rcx_16, &var_148)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        uint128_t zmm0_1 = zx.o(data_14399f938)
        float zmm1_1 = *(arg4 + 0x64)
        int64_t var_110 = data_143e1dff0
        int64_t var_108_1 = data_143e1dff8
        void* rax_19 = data_143e1e000
        void* var_100_1 = rax_19
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        int64_t* rcx_19 = *(arg1 - 0x98)
        (*(*rcx_19 + 0x50))(rcx_19, r14_1, zx.q(*(arg4 + 0xc)), &var_110, zmm1_1, 
            _mm_cvtpd_ps(zmm0_1).d, 1, 0)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp9_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

sub_140596b00(arg2, arg1 + 0x10)
return arg2
