// 函数: sub_140cb9880
// 地址: 0x140cb9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x78)
int64_t r10 = *rcx
int32_t result

if (not(test_bit(arg5, 0x1c)))
    if (test_bit(arg5, 0x1a))
        int64_t var_f8_1 = arg6
        int32_t var_100_1 = arg5
        int64_t var_108_1 = arg4
        return (*(r10 + 0xa0))(rcx)
    
    int64_t rax_11 = (*(r10 + 0x168))(rcx, arg3)
    char rax_12 = sub_140be1e00(*(arg1 + 0x80), rax_11)
    int64_t rax_13
    rax_13.b = rax_11 == sub_140bdeca0(*(arg1 + 0x80))
    
    if (rax_12 == 0)
        return sub_140a20ba0(arg2, u"(INVALID)", 9)
    
    if (rax_13.b != 0 && not(test_bit(arg5, 0xb)))
        return sub_140a20ba0(arg2, u"(INVALID)", 9)
    
    int64_t* rcx_26 = *(arg1 + 0x80)
    
    if (test_bit(arg5, 0x13))
        void var_40
        int64_t* rax_15 = sub_140ac6680(sub_140bddc50(rcx_26, &var_40, rax_11))
        int32_t rcx_28 = rax_15[1].d
        int32_t r8_8 = rcx_28 - 1
        
        if (rcx_28 == 0)
            r8_8 = 0
        
        result = sub_140a20ba0(arg2, *rax_15, r8_8)
        int64_t* var_38
        
        if (var_38 != 0)
            result = var_38[1].d
            var_38[1].d -= 1
            
            if (result == 1)
                result = (**var_38)(var_38)
                int32_t rdi_1 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    return (*(*var_38 + 8))(var_38, zx.q(rdi_1))
    else if (arg5.b s>= 0)
        int64_t var_50
        int64_t* rax_19 = sub_140bdef30(rcx_26, &var_50, rax_11)
        int32_t rcx_35 = rax_19[1].d
        int32_t r8_10 = rcx_35 - 1
        
        if (rcx_35 == 0)
            r8_10 = 0
        
        result = sub_140a20ba0(arg2, *rax_19, r8_10)
        int64_t rcx_37 = var_50
        
        if (rcx_37 != 0)
            return sub_140a74f90(rcx_37)
    else
        int64_t var_60
        int64_t* rax_18 = sub_140bdcf10(rcx_26, &var_60, rax_11)
        int32_t rcx_32 = rax_18[1].d
        int32_t r8_9 = rcx_32 - 1
        
        if (rcx_32 == 0)
            r8_9 = 0
        
        result = sub_140a20ba0(arg2, *rax_18, r8_9)
        int64_t rcx_34 = var_60
        
        if (rcx_34 != 0)
            return sub_140a74f90(rcx_34)
else
    int64_t rax = (*(r10 + 0x168))(rcx, arg3)
    void* rcx_1 = *(arg1 + 0x80)
    int64_t var_c8 = rax
    int64_t rax_1 = sub_140bdeca0(rcx_1)
    void* rcx_2 = *(arg1 + 0x80)
    int64_t var_d8 = rax_1
    int64_t r13_1 = rax_1
    
    if (sub_140be1e00(rcx_2, rax) != 0)
        r13_1 = rax
    
    int64_t rbx_2 = *(*(arg1 + 0x80) + 0x10)
    int64_t rax_3 = sub_140bdf730()
    void* rcx_4 = *(arg1 + 0x80)
    uint64_t var_e8
    void* var_b0
    void* var_a0
    int64_t var_90
    void* var_80
    void** rax_5
    int32_t rbx_3
    void* rsi_2
    
    if (rbx_2 == rax_3)
        void** rcx_8
        
        if (*(rcx_4 + 0x38) s> 1)
            int32_t rbx_4 = *(rcx_4 + 0x38)
            int64_t rsi_3 = *(rcx_4 + 0x30)
            var_e8 = 0
            int32_t var_e0_1 = rbx_4
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_e8, rbx_4, 0)
                memcpy(var_e8, rsi_3, rbx_4 * 2)
            else
                int32_t var_dc_1 = 0
            
            rcx_8 = &var_e8
            rbx_3 = 0x18
        else
            int64_t var_b8 = *(rcx_4 + 0x18)
            sub_140b63b70(&var_b8, &var_a0)
            rcx_8 = &var_a0
            rbx_3 = 0x14
        
        rsi_2 = *rcx_8
        *rcx_8 = nullptr
        int32_t var_a8_1 = rcx_8[1].d
        rax_5 = &var_b0
        var_b0 = rsi_2
        rcx_8[1] = 0
    else
        arg_8.q = *(rcx_4 + 0x18)
        sub_140b63b70(&arg_8, &var_90)
        rax_5 = sub_140d32080(&var_80, &var_90, 0, &data_142e9fe88)
        rbx_3 = 3
        rsi_2 = *rax_5
    
    *rax_5 = nullptr
    int32_t r12_1 = rax_5[1].d
    rax_5[1] = 0
    
    if ((rbx_3.b & 0x10) != 0)
        void* rcx_11 = var_b0
        rbx_3 &= 0xffffffef
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    if ((rbx_3.b & 8) != 0)
        uint64_t rcx_12 = var_e8
        rbx_3 &= 0xfffffff7
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    if ((rbx_3.b & 4) != 0)
        void* rcx_13 = var_a0
        rbx_3 &= 0xfffffffb
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    if ((rbx_3.b & 2) != 0)
        void* rcx_14 = var_80
        rbx_3 &= 0xfffffffd
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    if ((rbx_3.b & 1) != 0)
        int64_t rcx_15 = var_90
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    int64_t rcx_18
    
    if (r13_1 != var_d8)
        int64_t var_70
        int64_t* rax_9 = sub_140bdef30(*(arg1 + 0x80), &var_70, r13_1)
        void* r8_5 = &data_142d40450
        
        if (rax_9[1].d != 0)
            *rax_9
        
        if (r12_1 != 0)
            r8_5 = rsi_2
        
        sub_140a2e390(&var_d8, u"%s::%s", r8_5)
        int32_t var_d0
        
        if (var_d0 != 0)
            rdi = var_d0 - 1
        
        result = sub_140a20ba0(arg2, var_d8, rdi)
        int64_t rcx_22 = var_d8
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        rcx_18 = var_70
    else
        void* r8_2 = &data_142d40450
        
        if (r12_1 != 0)
            r8_2 = rsi_2
        
        sub_140a2e390(&var_c8, u"(%s)(%ull)", r8_2)
        int32_t var_c0
        
        if (var_c0 != 0)
            rdi = var_c0 - 1
        
        result = sub_140a20ba0(arg2, var_c8, rdi)
        rcx_18 = var_c8
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
    
    if (rsi_2 != 0)
        return sub_140a74f90(rsi_2)

return result
