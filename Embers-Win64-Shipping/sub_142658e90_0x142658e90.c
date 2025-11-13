// 函数: sub_142658e90
// 地址: 0x142658e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) s<= 1)
    return *(arg1 + 0x28)

int32_t arg_8
sub_142652400(arg1 + 0x1f8, &arg_8, arg2)
int64_t rax_1 = sx.q(arg_8)
int32_t i = 0
void* const rcx_3

if (rax_1.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax_1 << 6) + *(arg1 + 0x1f8)

int32_t* rax_2 = rcx_3 + 0x30

if (rcx_3 == 0)
    rax_2 = nullptr

int64_t result

if (rax_2 == 0)
    result = 0
label_142658f64:
    void* var_c8 = nullptr
    int32_t i_3 = 0
    sub_14263fea0(arg1 + 0x1f8, &var_c8)
    char var_b8 = var_b8 & 0xe0
    bool cond:3_1 = (*(arg1 + 0x68) & 0x100) == 0
    int128_t zmm10 = 0xff7fffff
    int96_t var_b4_1 = data_143458450[0].12
    int64_t var_a0_1
    __builtin_memset(&var_a0_1, 0, 0x18)
    int128_t zmm9 = 0xff7fffff
    int128_t zmm11
    
    if (cond:3_1)
        zmm11 = *(arg2 + 8)
    else
        zmm11 = zx.o(0)
    
    int32_t i_2 = i_3
    void* r15_1 = var_c8
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    uint64_t var_98
    
    for (; i s>= 0; i += 1)
        if (i s>= i_2)
            break
        
        char* rbx_3 = sx.q(i) * 0x30 + r15_1
        
        if (sub_141ded5a0(rbx_3, arg2) != 0)
            zmm8.d = (*(rbx_3 + 4)).d f- *(arg2 + 4)
            
            if ((*(arg1 + 0x68) & 0x100) == 0)
                zmm7.d = (*(rbx_3 + 8)).d f- zmm11.d
            else
                zmm7 = zx.o(0)
            
            char r9_1
            
            if (zmm8.d f!= 0f || not(zmm9.d f!= 0f))
                zmm8.d f- 0f
                bool cond:5_1 = zmm8.d f>= 0f
                
                if (zmm8.d f<= 0f)
                    goto label_14265904e
                
                zmm9.d f- 0f
                
                if (zmm9.d f< 0f || (not(zmm9.d f<= 0f) && zmm8.d f< zmm9.d))
                    r9_1 = 1
                else
                    cond:5_1 = zmm8.d f>= 0f
                label_14265904e:
                    
                    if (cond:5_1 || zmm9.d f>= 0f || zmm8.d f<= zmm9.d)
                        r9_1 = 0
                    else
                        r9_1 = 1
            else
                r9_1 = 1
            
            char r8_1
            
            if (zmm7.d f!= 0f || not(zmm10.d f!= 0f))
                zmm7.d f- 0f
                bool cond:7_1 = zmm7.d f>= 0f
                
                if (zmm7.d f<= 0f)
                    goto label_142659085
                
                zmm10.d f- 0f
                
                if (zmm10.d f< 0f || (not(zmm10.d f<= 0f) && zmm7.d f< zmm10.d))
                    r8_1 = 1
                else
                    cond:7_1 = zmm7.d f>= 0f
                label_142659085:
                    
                    if (cond:7_1 || zmm10.d f>= 0f || zmm7.d f<= zmm10.d)
                        r8_1 = 0
                    else
                        r8_1 = 1
            else
                r8_1 = 1
            
            char rdx_3
            
            if (zmm9.d f< 0f || zmm10.d f< 0f)
                rdx_3 = 0
            else
                rdx_3 = 1
            
            char rcx_7
            
            if (zmm8.d f!= zmm9.d)
                rcx_7 = 0
            else
                rcx_7 = 1
            
            char rax_4
            
            if (zmm7.d f!= zmm10.d)
                rax_4 = 0
            else
                rax_4 = 1
            
            if ((r9_1 != 0 || rcx_7 != 0) && (r8_1 != 0 || rax_4 != 0))
            label_1426590f0:
                var_b8 = *rbx_3
                var_b4_1.d = (*(rbx_3 + 4))[0]
                var_b4_1:4.d = *(rbx_3 + 8)
                var_b4_1:8.d = (*(rbx_3 + 0xc))[0]
                var_b4_1:0xc.d = *(rbx_3 + 0x10)
                int64_t var_a0_2 = *(rbx_3 + 0x18)
                sub_140597df0(&var_98, &rbx_3[0x20])
                zmm10 = zmm7
                zmm9 = zmm8
            else if (rdx_3 == 0)
                if (r9_1 != 0)
                    goto label_1426590f0
                
                if (rcx_7 != 0 && r8_1 != 0)
                    goto label_1426590f0
    
    float zmm3_1 = var_b4_1.d
    
    if (not(zmm3_1 < 0f))
        int32_t zmm2_1 = var_b4_1:4.d
        
        if (not(zmm2_1 f< 0f))
            void* rdx_10
            
            if (*(arg1 + 0x200) == *(arg1 + 0x22c))
            label_14265925a:
                result = 0
                rdx_10 = nullptr
            else
                void* r8_2 = *(arg1 + 0x238)
                void* r9_2 = arg1 + 0x230
                float zmm1_1 = var_b4_1:8.d
                
                if (r8_2 != 0)
                    r9_2 = r8_2
                
                int32_t rbx_4 = *(r9_2 + ((((sx.q(sx.d((int.d(zmm3_1)).w) << 0x10)
                    | sx.q((int.d(zmm2_1)).w)) ^ sx.q(int.d(zmm1_1))) & (sx.q(*(arg1 + 0x240)) - 1))
                    << 2))
                
                if (rbx_4 == 0xffffffff)
                    goto label_14265925a
                
                void* rax_13 = *(arg1 + 0x1f8)
                int64_t rdi_1
                
                while (true)
                    rdi_1 = sx.q(rbx_4) << 6
                    uint32_t zmm0_1[0x4] = *(rax_13 + rdi_1 + 4)
                    void* rcx_13 = rax_13 + rdi_1
                    zmm0_1[0] = zmm0_1[0] f- zmm3_1
                    
                    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f))
                        zmm0_1 = *(rcx_13 + 8)
                        zmm0_1[0] = zmm0_1[0] f- zmm2_1
                        
                        if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f))
                            zmm0_1 = *(rcx_13 + 0xc)
                            
                            if (zmm0_1[0] f< 0f || zmm1_1 < 0f)
                            label_142659232:
                                
                                if (sub_141ded5a0(rcx_13, &var_b8) != 0)
                                    break
                                
                                zmm1_1 = var_b4_1:8.d
                                zmm2_1 = var_b4_1:4.d
                                zmm3_1 = var_b4_1.d
                            else
                                zmm0_1[0] = zmm0_1[0] f- zmm1_1
                                
                                if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f))
                                    goto label_142659232
                    
                    rax_13 = *(arg1 + 0x1f8)
                    rbx_4 = *(rax_13 + rdi_1 + 0x38)
                    
                    if (rbx_4 == 0xffffffff)
                        goto label_14265925a
                
                if (rbx_4 == 0xffffffff)
                    goto label_14265925a
                
                rdx_10 = *(arg1 + 0x1f8) + rdi_1
                result = 0
            
            int32_t* rcx_14 = rdx_10 + 0x30
            
            if (rdx_10 == 0)
                rcx_14 = nullptr
            
            if (rcx_14 != 0)
                result = sub_140d3c6e0(rcx_14)
    
    uint64_t rcx_15 = var_98
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (i_2 != 0)
        int64_t* rbx_6 = var_c8 + 0x20
        int32_t i_1
        
        do
            int64_t rcx_16 = *rbx_6
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            rbx_6 = &rbx_6[6]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    void* rax_16 = var_c8
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)
    
    if (result == 0)
        return *(arg1 + 0x28)
else
    int64_t result_1 = sub_140d3c6e0(rax_2)
    result = result_1
    
    if (result_1 == 0)
        goto label_142658f64

return result
