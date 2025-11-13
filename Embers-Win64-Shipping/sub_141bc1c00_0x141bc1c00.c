// 函数: sub_141bc1c00
// 地址: 0x141bc1c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = *(arg1 + 0x3a0)
void*** (* var_118)()
int32_t* var_110

if (rax == 0)
label_141bc1cce:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_1 = *(rax + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bc1cce
    
    arg_8.b = 0
    var_110 = &arg_8
    var_118 = sub_140884c50
    void* rax_11
    rax_11, arg5 = sub_140a756e0(&var_118, &data_14397f5f0)
    
    if (*(rax_11 + 0x20) != 0)
        goto label_141bc1cce
    
    int64_t* rcx_5 = *(arg1 + 0x3a0)
    (*(*rcx_5 + 0x3c8))(rcx_5, arg2, arg3, arg4)

int64_t* rbx_1 = *(arg1 + 0x3e0)
int64_t* rsi_1 = nullptr

if (rbx_1 != 0)
    int32_t rax_13 = rbx_1[1].d
    
    if (rax_13 != 0)
        rbx_1[1].d = rax_13 + 1
        rax_13.b = 1
    
    if (rax_13.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rsi_1 = *(arg1 + 0x3d8)

if (*arg2 != 0)
label_141bc21c4:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    int64_t* rax_15 = (*(*rsi_1 + 0x48))(rsi_1, arg1 + 0x3a8)
    
    if (rax_15 == 0)
        goto label_141bc21c4
    
    int64_t rdx_5 = *(arg1 + 0x3a8)
    int32_t rax_16 = (*(rdx_5 + 0x70))(arg1 + 0x3a8, rdx_5)
    int64_t* r14_1 = *(arg4 + 0x48)
    int64_t rcx_8 = *(arg4 + 0x38)
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    char rax_18
    
    if (rcx_8 == data_143e1e008)
        rax_18 = sub_140e19840(arg1, arg5)
        arg_8.b = 1
    
    if (rcx_8 != data_143e1e008 || rax_18 == 0)
        arg_8.b = 0
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp5_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    char var_f8
    int32_t var_44
    
    if (arg_8.b != 0)
        char r14_2 = *(arg1 + 0x3ec)
        
        if (sub_141bb8560(arg1) == 0)
        label_141bc1efb:
            
            if (r14_2 != 0)
                goto label_141bc1f0f
        else
            float zmm4_1 = *arg3
            float zmm5_1 = arg3[1]
            arg5.o = arg3[0xc]
            var_110.d = zmm4_1 f* arg3[7]
            float var_108_1 = zmm5_1 f* arg3[9]
            var_118.d = arg3[0xb].d
            var_118:4.d = arg5.d
            var_110:4.d = zmm4_1 f* arg3[8]
            float var_104_1 = zmm5_1 f* arg3[0xa]
            
            if (sub_140db3460(&var_118, arg4 + 0x18) == 0)
                goto label_141bc1efb
            
            if (rax_16 != 2)
                if (rax_16 != 3)
                    goto label_141bc1efb
                
                if ((*(*rsi_1 + 0x70))(rsi_1) s<= 1)
                    goto label_141bc1efb
                
                if ((*(*rsi_1 + 0x10))(rsi_1, rax_15) == 0)
                    goto label_141bc1efb
                
                (*(*rsi_1 + 0x30))(rsi_1)
                int64_t r9_1
                r9_1.b = 1
                (*(*rsi_1 + 0x28))(rsi_1, *rax_15, 1, r9_1)
                goto label_141bc1f0f
            
            (*(*rsi_1 + 0x30))(rsi_1)
        label_141bc1f0f:
            (*(*rsi_1 + 0x40))(rsi_1, 2)
            var_44 &= 0xffffff00
            var_f8 = 1
            int64_t var_f0_1 = 0
            int64_t var_e8_1 = 0
            char var_d8_1 = 0
            int64_t var_d0
            __builtin_memset(&var_d0, 0, 0x88)
            int32_t var_48_1 = 0x20702
            sub_1405979f0(arg2, &var_f8)
            sub_140597700(&var_f8)
        
        if ((*(*rsi_1 + 0xa8))(rsi_1, *rax_15) != 0)
            int32_t var_44_1 = var_44 & 0xffffff00
            var_f8 = 1
            int64_t var_f0_2 = 0
            int64_t var_e8_2 = 0
            char var_d8_2 = 0
            int64_t var_d0_1
            __builtin_memset(&var_d0_1, 0, 0x88)
            int32_t var_48_2 = 0x20702
            sub_1405979f0(arg2, &var_f8)
            sub_140597700(&var_f8)
        
        sub_140e54f20(arg2, sub_140f896b0(arg2))
        goto label_141bc21c4
    
    int32_t rax_35 = 0
    int32_t r13_1
    int64_t* r14_3
    
    if (rax_16 == 0)
        r14_3 = arg_8.q
        r13_1.b = 0
    else
        rax_35 = 2
        r14_3 = *(arg4 + 0x48)
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        if (*(arg4 + 0x38) != data_143e1e020)
            r13_1.b = 0
        else
            r13_1.b = 1
    
    if (rax_35 != 0 && r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp8_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    if (r13_1.b == 0)
        goto label_141bc21c4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1[1].d == 0xffffffff)
            (**rbx_1)(rbx_1)
            int32_t temp9_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (sub_140f7b490(&rsi_1[-0x9f]) == 0)
        if (sub_141bb8560(arg1) != 0 && (*(*rsi_1 + 0x10))(rsi_1, rax_15) == 0)
            (*(*rsi_1 + 0x30))(rsi_1)
            int64_t r9_2
            r9_2.b = 1
            (*(*rsi_1 + 0x28))(rsi_1, *rax_15, 1, r9_2)
            (*(*rsi_1 + 0x40))(rsi_1, 2)
        
        (*(*rsi_1 + 0xa0))(rsi_1, *rax_15, arg4)
        int32_t var_44_2 = var_44 & 0xffffff00
        var_f8 = 1
        int64_t var_f0_3 = 0
        int64_t var_e8_3 = 0
        char var_d8_3 = 0
        int64_t var_d0_2
        __builtin_memset(&var_d0_2, 0, 0x88)
        int32_t var_48_3 = 0x20702
        sub_1405979f0(arg2, &var_f8)
        sub_140597700(&var_f8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp11_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_141bc21c4

return arg2
