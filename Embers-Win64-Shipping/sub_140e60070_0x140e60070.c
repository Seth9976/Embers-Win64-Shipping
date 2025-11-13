// 函数: sub_140e60070
// 地址: 0x140e60070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (*(arg1 + 0x172) != 0)
label_140e600c6:
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_88 = *arg2
    void* rax_4 = arg2[1]
    void* var_80_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    int64_t* rax_5 = sub_140de79b0(*arg3, &var_88)
    int64_t* r14_1 = nullptr
    char* rbx_3 = *arg2 + 0x190
    int32_t arg_8 = 0
    
    if (*(rbx_3 + 0x10) != 0)
        int64_t* rcx_5 = *(rbx_3 + 8)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (*(rbx_3 + 0x10) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(rbx_3 + 8)
            
            *rbx_3 = (*(*rcx_6 + 0x48))(rcx_6)
    
    char rdi_1 = *rbx_3
    float zmm2[0x4] = 0x3f19999a
    float zmm6_1[0x4] = data_14399f5c0:0xc.d
    int64_t rax_10 = *arg1
    int32_t zmm4_1 = data_14399f5c0:4.d
    int32_t zmm3 = data_14399f5c0.d
    int32_t zmm5_1 = data_14399f5c0:8.d
    int64_t* rbx_4 = *arg2
    uint128_t var_60_1 = data_14399f5c0
    uint128_t zmm1_1
    zmm1_1.d = 0.600000024f f* zmm3
    uint128_t zmm0_1
    zmm0_1.d = 0.600000024f f* zmm4_1
    int32_t var_50_1 = zmm1_1.d
    zmm2[0] = 0.600000024f * zmm6_1[0]
    int32_t var_4c_1 = zmm0_1.d
    zmm0_1.q = arg1[0x6b] f- arg1[0x6c]
    zmm1_1.d = 0.600000024f f* zmm5_1
    float var_64_1 = zmm6_1[0]
    int32_t var_70 = zmm3
    zmm6_1 = _mm_cvtpd_ps(zmm0_1)
    int32_t var_6c_1 = zmm4_1
    int32_t var_68_1 = zmm5_1
    int32_t var_48_1 = zmm1_1.d
    float var_44_1 = zmm2[0]
    (*(rax_10 + 0x50))(arg1)
    int32_t rax_11
    int128_t zmm0_2
    rax_11, zmm0_2 = sub_140e20310(rbx_4, zmm0_1, zmm6_1, rax_5, &var_70, rdi_1)
    int64_t* rbx_5 = arg1[0x57]
    arg_8 = rax_11
    int32_t* var_78_1 = &arg_8
    uint64_t rax_12 = sx.q(arg1[0x58].d)
    var_88 = arg2
    void* rdi_4 = &rbx_5[rax_12 * 2]
    int64_t* var_80_2 = rax_5
    
    if (rbx_5 != rdi_4)
        do
            void* rdx_1 = *rbx_5
            
            if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
                zmm0_2 = sub_140e5a1d0(&var_88, rdx_1, zmm0_2)
            
            rbx_5 = &rbx_5[2]
        while (rbx_5 != rdi_4)
        
        rax_12 = zx.q(arg1[0x58].d)
    
    void** i = arg1[0x57]
    int32_t i_7 = rax_5.d
    var_88 = arg2
    int32_t* var_78_2 = &arg_8
    
    for (; i != &i[sx.q(rax_12.d) * 2]; i = &i[2])
        void* rdx_2 = *i
        
        if (rdx_2 != 0 && *(rdx_2 + 0x20) != 0)
            zmm0_2 = sub_140e5a1a0(&var_88, rdx_2, zmm0_2)
    
    result = sub_140e12730(*arg2)
    var_88 = nullptr
    int32_t i_5 = result[1].d
    int64_t rbx_6 = *result
    i_7 = i_5
    
    if (i_5 != 0)
        sub_1405a4be0(&var_88, i_5, 0)
        r14_1 = var_88
        int64_t* rcx_13 = r14_1
        void* rbx_7 = rbx_6 - r14_1
        int32_t i_1
        
        do
            *rcx_13 = *(rbx_7 + rcx_13)
            result = *(rbx_7 + rcx_13 + 8)
            rcx_13[1] = result
            
            if (result != 0)
                result[1].d += 1
            
            rcx_13 = &rcx_13[2]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        int32_t i_6 = i_7
        bool cond:1_1 = i_6 == 0
        
        if (i_6 s> 0)
            int64_t* rbx_8 = r14_1
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_2
            
            do
                result = sub_140e60070(arg1, rbx_8, arg3)
                rbx_8 = &rbx_8[2]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            cond:1_1 = i_6 == 0
        
        if (not(cond:1_1))
            void* rsi_1 = &r14_1[1]
            int32_t i_3
            
            do
                int64_t* rbx_9 = *rsi_1
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        result = (**rbx_9)(rbx_9)
                        int32_t temp7_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            result = (*(*rbx_9 + 8))(rbx_9, 1)
                
                rsi_1 += 0x10
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)
else
    result = sub_140e1acc0(*arg2)
    
    if (result.b != 0)
        result = sub_140e1ad10(*arg2)
        
        if (result.b == 0 || data_143dbb3dc != 0)
            goto label_140e600c6

return result
