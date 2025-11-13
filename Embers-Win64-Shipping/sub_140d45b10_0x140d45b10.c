// 函数: sub_140d45b10
// 地址: 0x140d45b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t rbx = sx.q(arg4)
void* const rcx_1

if (arg1[1].d == *(arg1 + 0x34))
label_140d45b90:
    rcx_1 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140d45b90_1:
        rcx_1 = nullptr
    else
        int64_t r9_3 = *arg1
        
        while (true)
            int64_t rdx = sx.q(rax_2) * 5
            rcx_1 = r9_3 + (rdx << 3)
            
            if (*(r9_3 + (rdx << 3)) == arg3)
                break
            
            rax_2 = *(rcx_1 + 0x20)
            
            if (rax_2 == 0xffffffff)
                goto label_140d45b90_2
        
        if (rax_2 == 0xffffffff)
        label_140d45b90_2:
            rcx_1 = nullptr

void* rax_3 = rcx_1 + 8

if (rcx_1 == 0)
    rax_3 = nullptr

if (rax_3 != 0)
label_140d45e39:
    void* rcx_27 = &data_143e202b8
    
    if (rax_3 != 0)
        rcx_27 = rax_3
    
    *arg2 = *rcx_27
    arg2[1] = *(rcx_27 + 8)
    void* rax_29 = *(rcx_27 + 0x10)
    arg2[2] = rax_29
    
    if (rax_29 != 0)
        *(rax_29 + 8) += 1
else
    void* const rcx_4
    
    if (arg1[0xb].d == *(arg1 + 0x84))
    label_140d45c01:
        rcx_4 = nullptr
    else
        void* rcx_2 = arg1[0x12]
        void* r8 = &arg1[0x11]
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_5 = *(r8 + (((sx.q(arg1[0x13].d) - 1) & rbx) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140d45c01_1:
            rcx_4 = nullptr
        else
            int64_t r8_1 = arg1[0xa]
            
            while (true)
                int64_t rdx_4 = sx.q(rax_5) * 5
                rcx_4 = r8_1 + (rdx_4 << 3)
                
                if (*(r8_1 + (rdx_4 << 3)) == rbx.d)
                    break
                
                rax_5 = *(rcx_4 + 0x20)
                
                if (rax_5 == 0xffffffff)
                    goto label_140d45c01_2
            
            if (rax_5 == 0xffffffff)
            label_140d45c01_2:
                rcx_4 = nullptr
    
    rax_3 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_3 = nullptr
    
    if (rax_3 != 0 || rbx.d u<= 0x20)
        goto label_140d45e39
    
    int16_t* var_160
    sub_140a2e390(&var_160, u"%s%d", data_1439ae1f0)
    int16_t* const rdx_5 = &data_142d40450
    int32_t var_158
    
    if (var_158 != 0)
        rdx_5 = var_160
    
    int64_t var_178
    sub_140b58260(&var_178, rdx_5, 1)
    int16_t* rcx_7 = var_160
    int128_t var_170_1 = zx.o(0)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t var_d8
    void var_c8
    int64_t* rax_7 = sub_140a9fb70(&var_c8, sub_140a22250(&var_d8, rbx.w))
    int64_t var_150 = *rax_7
    int64_t* rcx_11 = rax_7[1]
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t var_140_1 = rax_7[2].d
    char var_138_1 = 1
    int64_t var_130 = 0
    int32_t var_128_1 = 0
    void var_108
    sub_140a96170(&var_108)
    int64_t var_120 = var_178
    int64_t var_118_1 = var_170_1.q
    void* rax_11 = var_170_1:8.q
    char var_f0_1 = 0
    int64_t var_e8 = 0
    int32_t var_e0_1 = 0
    void* var_110_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    void var_b0
    sub_140d431a0(sub_140d42c80(&var_b0, &var_120, &var_150, 0x110, 0, &var_108))
    sub_140d430e0(&var_b0)
    sub_140745b20(&var_e8)
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rax_15 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*var_100 + 8))(var_100, 1)
    
    sub_140745b20(&var_130)
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            (**rcx_11)(rcx_11)
            int32_t rax_19 = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rdi_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_c0 + 8))(var_c0, zx.q(rdi_1))
    
    int64_t rcx_25 = var_d8
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    sub_140d422f0(&arg1[0xa], &arg_20, &var_178)
    *arg2 = var_178
    arg2[1] = var_170_1.q
    arg2[2] = var_170_1:8.q

return arg2
