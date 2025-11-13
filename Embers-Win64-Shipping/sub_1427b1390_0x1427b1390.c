// 函数: sub_1427b1390
// 地址: 0x1427b1390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void var_138
memset(&var_138, 0, 0x88)
int32_t var_130 = 0x3f800000
int32_t result = (*(*arg1 + 0x318))(arg1, arg2, &var_138)

if (result.b != 0)
    int64_t rax_3 = *arg1
    int512_t zmm1
    zmm1.o = zx.o(0)
    int128_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x20)
    int64_t* rax_4
    int64_t rdx_1
    rax_4, rdx_1 = (*(rax_3 + 0x280))(arg1, zmm1)
    int32_t var_12c
    zmm1.o = var_12c
    int128_t var_1b8
    void var_168
    int64_t* rax_5 = sub_140aa1120(&var_168, rdx_1, nullptr, &var_1b8)
    void var_150
    int32_t var_134
    int64_t* rax_6 = sub_140aa10e0(&var_150, var_134, nullptr, &var_1c8)
    void var_190
    char* var_178
    char** rax_8 = sub_140a96390(&var_178, 
        _vfprintf_p_l(&var_190, 
            UMeshSurfacePointTool::OnUpdateDrag: Hit triangle index {0} at ray distance {1}", 
        UMeshSurfacePointTool"))
    int64_t var_98_1 = *rax_6
    void* rcx_8 = rax_6[1]
    int32_t var_a8_1 = 4
    void* var_90_1 = rcx_8
    
    if (rcx_8 != 0)
        *(rcx_8 + 8) += 1
    
    int32_t var_88_1 = rax_6[2].d
    int64_t var_68_1 = *rax_5
    void* rax_11 = rax_5[1]
    char var_80_1 = 1
    int32_t var_78_1 = 4
    void* var_60_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    int64_t i_1 = 2
    int32_t var_58_1 = rax_5[2].d
    char var_50_1 = 1
    void* var_208 = nullptr
    int32_t var_200_1 = 2
    sub_1405a4b40(&var_208, 2, 0)
    void var_a0
    void* rdx_4 = &var_a0
    int64_t* rcx_11 = var_208 + 8
    int32_t i_2 = 2
    int32_t i
    
    do
        rcx_11[-1].d = *(rdx_4 - 8)
        *rcx_11 = *rdx_4
        *rcx_11 = *rdx_4
        *rcx_11 = *rdx_4
        *rcx_11 = *rdx_4
        rcx_11[4].b = 0
        
        if (*(rdx_4 + 0x20) != 0)
            rcx_11[1] = *(rdx_4 + 8)
            void* rax_19 = *(rdx_4 + 0x10)
            rcx_11[2] = rax_19
            
            if (rax_19 != 0)
                *(rax_19 + 8) += 1
            
            rcx_11[3].d = *(rdx_4 + 0x18)
            rcx_11[4].b = 1
        
        rcx_11 = &rcx_11[6]
        rdx_4 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)
    char* var_1d8 = *rax_8
    void* rax_22 = rax_8[1]
    void* var_1d0_1 = rax_22
    
    if (rax_22 != 0)
        *(rax_22 + 8) += 1
    
    void var_1a8
    int64_t* rax_23 = sub_140aac870(&var_1a8, &var_1d8, &var_208)
    int64_t var_1f0 = *rax_23
    int64_t* rcx_14 = rax_23[1]
    
    if (rcx_14 != 0)
        rcx_14[1].d += 1
    
    int32_t var_1e0_1 = rax_23[2].d
    int64_t* var_1a0
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rax_27 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)
    
    sub_140596f50(&var_208)
    int64_t __saved_r12
    int64_t* rsi_1 = &__saved_r12
    
    do
        i_1 -= 1
        rsi_1 = &rsi_1[-6]
        
        if (*rsi_1 != 0)
            *rsi_1 = 0
            int64_t* rbx_2 = rsi_1[-2]
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_31 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_31 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    while (i_1 != 0)
    
    int64_t* rbx_3 = rax_8[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_35 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = rax_6[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_39 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rbx_5 = rax_5[1]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_43 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    result = (*(*rax_4 + 0x2d8))(rax_4, &var_1f0, 0)
    
    if (rcx_14 != 0)
        result = rcx_14[1].d
        rcx_14[1].d -= 1
        
        if (result == 1)
            (**rcx_14)(rcx_14)
            result = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_14 + 8))(rcx_14, 1)
    
    int64_t* var_188
    
    if (var_188 != 0)
        result = var_188[1].d
        var_188[1].d -= 1
        
        if (result == 1)
            (**var_188)(var_188)
            result = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_188 + 8))(var_188, 1)
    
    int64_t* rbx_8 = var_1c8:8.q
    
    if (rbx_8 != 0)
        result = rbx_8[1].d
        rbx_8[1].d -= 1
        
        if (result == 1)
            (**rbx_8)(rbx_8)
            result = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_9 = var_1b8:8.q
    
    if (rbx_9 != 0)
        result = rbx_9[1].d
        rbx_9[1].d -= 1
        
        if (result == 1)
            result = (**rbx_9)(rbx_9)
            int32_t rdi_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*rbx_9 + 8))(rbx_9, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_228)
return result
