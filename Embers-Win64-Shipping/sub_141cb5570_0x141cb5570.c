// 函数: sub_141cb5570
// 地址: 0x141cb5570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3c)
int32_t result
void* const rcx_3

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_141cb5600:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x40
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (result == 0xffffffff)
    label_141cb5600_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_3 = sx.q(result) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                break
            
            result = *(rcx_3 + 0x10)
            
            if (result == 0xffffffff)
                goto label_141cb5600_2
        
        if (result == 0xffffffff)
        label_141cb5600_2:
            rcx_3 = nullptr

void* r14 = rcx_3 + 8

if (rcx_3 == 0)
    r14 = nullptr

if (r14 != 0)
    int64_t* r14_1 = *r14
    int64_t* rax_4 = sub_14098ef70(&r14_1[5])
    void* var_a8 = nullptr
    int32_t i_2 = rax_4[1].d
    void* r13_1 = *rax_4
    int32_t i_4 = i_2
    
    if (i_2 != 0)
        sub_140808f70(&var_a8, i_2, 0)
        void* rbx_1 = r13_1 + 8
        void* rsi_2 = var_a8 - r13_1
        int32_t i
        
        do
            *(rsi_2 + rbx_1 - 8) = *(rbx_1 - 8)
            sub_140596d10(rbx_1 + rsi_2, rbx_1)
            rbx_1 += 0x18
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        int32_t var_9c_1 = 0
    
    int64_t var_88
    sub_140b63b70(arg3, &var_88)
    sub_141c8f920(&var_a8, &data_143e1b438, &var_88)
    int64_t rcx_9 = var_88
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    sub_141c8f920(&var_a8, &data_143e1b5a8, sub_140b63b70(&arg3[2], &var_88))
    int64_t rcx_12 = var_88
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rbx_2 = sx.q(r14_1[8].d)
    int64_t rdi_1 = r14_1[7]
    int64_t var_98 = 0
    int32_t var_90_1 = rbx_2.d
    
    if (rbx_2.d != 0)
        sub_140638750(&var_98, rbx_2.d, 0)
        memcpy(var_98, rdi_1, (rbx_2 << 2).d)
    else
        int32_t var_8c_1 = 0
    
    int32_t i_3 = i_4
    var_88 = 0
    int32_t i_5 = i_3
    
    if (i_3 != 0)
        sub_140808f70(&var_88, i_3, 0)
        void* rax_7 = var_a8
        void* rsi_4 = var_88 - rax_7
        int64_t* rbx_3 = rax_7 + 8
        int32_t i_1
        
        do
            *(rsi_4 + rbx_3 - 8) = rbx_3[-1]
            sub_140596d10(rbx_3 + rsi_4, rbx_3)
            rbx_3 = &rbx_3[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    else
        int32_t var_7c_1 = 0
    
    void var_78
    sub_141c91700(&var_78, r14_1[1], r14_1[2], r14_1[3], r14_1[4], &var_88, &var_98, r14_1[9].d)
    sub_141cb68d0(arg1 - 0x28, r14_1, &var_78)
    int64_t var_40
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t temp5_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    sub_1408464b0(&var_a8)
    result.b = 1
else
    result.b = 0

return result
