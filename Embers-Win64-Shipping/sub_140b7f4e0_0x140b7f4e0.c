// 函数: sub_140b7f4e0
// 地址: 0x140b7f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg2[1].d == 0
int16_t* const rsi = &data_142d40450
int64_t var_b8 = 0
int64_t var_b0 = 0
int16_t* const rdx

if (cond:0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rdi_1

if (sub_140b1f370(&var_b8, rdx, 0, 0) != 0)
    int128_t var_98 = zx.o(0)
    void*** rax_7 = j_sub_140a82f30(0x88)
    void*** rbx_2
    
    if (rax_7 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_1406ca050(rax_7, &var_b8)
    
    void*** rax_9 = j_sub_140a82f30(0x18)
    
    if (rax_9 != 0)
        rax_9[1].d = 1
        *rax_9 = &data_142d83c20
        *(rax_9 + 0xc) = 1
        rax_9[2] = rbx_2
    
    uint128_t zmm0_1 = rbx_2.o
    uint128_t var_68 = zmm0_1
    void* rax_10 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
        
        if (rax_9 != 0)
            rax_9[1].d -= 1
            
            if (rax_9[1].d == 1)
                (**rax_9)(rax_9)
                int32_t temp3_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rax_9)[1](rax_9, 1)
    
    char rax_13 = sub_1409173d0(&var_68, &var_98, 0)
    int64_t* rbx_4
    
    if (rax_13 != 0)
        rbx_4 = var_98.q
    
    if (rax_13 == 0 || rbx_4 == 0)
        if (arg2[1].d != 0)
            rsi = *arg2
        
        int64_t var_78
        sub_140a2e390(&var_78, u"Failed to read file %s", rsi)
        void var_30
        int64_t* rax_16 = sub_140aae2f0(&var_30, &var_78)
        int64_t rdx_10 = *arg3
        *arg3 = *rax_16
        *rax_16 = rdx_10
        int64_t rdx_11 = arg3[1]
        arg3[1] = rax_16[1]
        rax_16[1] = rdx_11
        arg3[2].d = rax_16[2].d
        int64_t* var_28
        
        if (var_28 != 0)
            var_28[1].d -= 1
            
            if (var_28[1].d == 1)
                (**var_28)(var_28)
                int32_t rbx_5 = *(var_28 + 0xc)
                *(var_28 + 0xc) -= 1
                
                if (rbx_5 == 1)
                    (*(*var_28 + 8))(var_28, zx.q(rbx_5))
        
        int64_t rcx_21 = var_78
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rdi_1.b = 0
    else
        int64_t var_58
        char rax_15 = sub_140b85d70(arg1, rbx_4, sub_140b1a780(&var_58, arg2), arg3)
        int64_t rcx_14 = var_58
        rdi_1 = zx.q(rax_15)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    int64_t* rbx_6 = var_68:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp7_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    int64_t* rbx_7 = var_98:8.q
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp8_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
else
    if (arg2[1].d != 0)
        rsi = *arg2
    
    int64_t var_88
    sub_140a2e390(&var_88, u"Failed to open descriptor file %s", rsi)
    void var_48
    int64_t* rax_1 = sub_140aae2f0(&var_48, &var_88)
    int64_t rdx_2 = *arg3
    *arg3 = *rax_1
    *rax_1 = rdx_2
    int64_t rdx_3 = arg3[1]
    arg3[1] = rax_1[1]
    rax_1[1] = rdx_3
    arg3[2].d = rax_1[2].d
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rbx_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_40 + 8))(var_40, zx.q(rbx_1))
    
    int64_t rcx_7 = var_88
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    rdi_1.b = 0

int64_t rcx_26 = var_b8

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return zx.q(rdi_1.b)
