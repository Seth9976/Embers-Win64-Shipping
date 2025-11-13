// 函数: sub_140cfc160
// 地址: 0x140cfc160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t var_108 = 0
void* rcx = arg1[0xf]
int32_t result
void* rcx_22

if (test_bit(arg4, 0x1c))
    if (rcx == 0)
        void* var_88
        int64_t* rax_11 = (*(*arg1 + 0x180))(arg1, &var_88)
        int32_t rcx_24 = rax_11[1].d
        int32_t r8_7 = rcx_24 - 1
        
        if (rcx_24 == 0)
            r8_7 = 0
        
        result = sub_140a20ba0(arg2, *rax_11, r8_7)
        rcx_22 = var_88
        goto label_140cfc58e
    
    uint32_t rsi_1 = zx.d(*arg3)
    arg4 = rsi_1
    int64_t rax = sub_140bdeca0(rcx)
    void* rcx_1 = arg1[0xf]
    int64_t var_100 = rax
    uint32_t r13_1 = rax.d
    
    if (sub_140be1e00(rcx_1, zx.q(rsi_1)) != 0)
        r13_1 = rsi_1
    
    int64_t rbx_2 = *(arg1[0xf] + 0x10)
    int64_t rax_2 = sub_140bdf730()
    void* rcx_3 = arg1[0xf]
    uint64_t var_118
    void* var_e8
    void* var_c8
    int64_t var_b8
    void* var_a8
    void** rax_4
    int32_t rbx_3
    void* rsi_2
    
    if (rbx_2 == rax_2)
        void** rcx_7
        
        if (*(rcx_3 + 0x38) s> 1)
            int32_t rbx_4 = *(rcx_3 + 0x38)
            int64_t rsi_3 = *(rcx_3 + 0x30)
            var_118 = 0
            int32_t var_110_1 = rbx_4
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_118, rbx_4, 0)
                memcpy(var_118, rsi_3, rbx_4 * 2)
            else
                int32_t var_10c_1 = 0
            
            rcx_7 = &var_118
            rbx_3 = 0x18
        else
            int64_t var_f0 = *(rcx_3 + 0x18)
            sub_140b63b70(&var_f0, &var_c8)
            rcx_7 = &var_c8
            rbx_3 = 0x14
        
        rsi_2 = *rcx_7
        *rcx_7 = nullptr
        int32_t var_e0_1 = rcx_7[1].d
        rax_4 = &var_e8
        var_e8 = rsi_2
        rcx_7[1] = 0
    else
        var_108.q = *(rcx_3 + 0x18)
        sub_140b63b70(&var_108, &var_b8)
        rax_4 = sub_140d32080(&var_a8, &var_b8, 0, &data_142e9fe88)
        rbx_3 = 3
        rsi_2 = *rax_4
    
    *rax_4 = nullptr
    int32_t r12_1 = rax_4[1].d
    rax_4[1] = 0
    
    if ((rbx_3.b & 0x10) != 0)
        void* rcx_10 = var_e8
        rbx_3 &= 0xffffffef
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    if ((rbx_3.b & 8) != 0)
        uint64_t rcx_11 = var_118
        rbx_3 &= 0xfffffff7
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    if ((rbx_3.b & 4) != 0)
        void* rcx_12 = var_c8
        rbx_3 &= 0xfffffffb
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    if ((rbx_3.b & 2) != 0)
        void* rcx_13 = var_a8
        rbx_3 &= 0xfffffffd
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    if ((rbx_3.b & 1) != 0)
        int64_t rcx_14 = var_b8
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    int64_t rcx_17
    
    if (r13_1 != var_100.d)
        int64_t var_98
        int64_t* rax_8 = sub_140bdef30(arg1[0xf], &var_98, sx.q(r13_1))
        void* r8_5 = &data_142d40450
        
        if (rax_8[1].d != 0)
            *rax_8
        
        if (r12_1 != 0)
            r8_5 = rsi_2
        
        int64_t var_d8
        sub_140a2e390(&var_d8, u"%s::%s", r8_5)
        int32_t var_d0
        
        if (var_d0 != 0)
            rdi = var_d0 - 1
        
        result = sub_140a20ba0(arg2, var_d8, rdi)
        int64_t rcx_21 = var_d8
        
        if (rcx_21 != 0)
            result = sub_140a74f90(rcx_21)
        
        rcx_17 = var_98
    else
        void* r8_2 = &data_142d40450
        
        if (r12_1 != 0)
            r8_2 = rsi_2
        
        sub_140a2e390(&var_100, u"(%s)(%d)", r8_2)
        int32_t var_f8
        
        if (var_f8 != 0)
            rdi = var_f8 - 1
        
        result = sub_140a20ba0(arg2, var_100, rdi)
        rcx_17 = var_100
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
    
    if (rsi_2 != 0)
        return sub_140a74f90(rsi_2)
else if (rcx == 0 || test_bit(arg4, 0x1a))
    void* var_58
    int64_t* rax_21 = (*(*arg1 + 0x180))(arg1, &var_58)
    int32_t rcx_39 = rax_21[1].d
    int32_t r8_12 = rcx_39 - 1
    
    if (rcx_39 == 0)
        r8_12 = 0
    
    result = sub_140a20ba0(arg2, *rax_21, r8_12)
    rcx_22 = var_58
label_140cfc58e:
    
    if (rcx_22 != 0)
        return sub_140a74f90(rcx_22)
else
    char rax_12 = sub_140be1e00(rcx, zx.q(*arg3))
    uint64_t r12_2 = zx.q(*arg3)
    int64_t rax_13
    rax_13.b = r12_2 == sub_140bdeca0(arg1[0xf])
    
    if (rax_12 == 0)
        return sub_140a20ba0(arg2, u"(INVALID)", 9)
    
    if (rax_13.b != 0 && not(test_bit(arg4, 0xb)))
        return sub_140a20ba0(arg2, u"(INVALID)", 9)
    
    int64_t* rcx_27 = arg1[0xf]
    
    if (not(test_bit(arg4, 0x13)))
        if (arg4.b s>= 0)
            void* var_68
            int64_t* rax_19 = sub_140bdef30(rcx_27, &var_68, r12_2)
            int32_t rcx_35 = rax_19[1].d
            int32_t r8_11 = rcx_35 - 1
            
            if (rcx_35 == 0)
                r8_11 = 0
            
            result = sub_140a20ba0(arg2, *rax_19, r8_11)
            rcx_22 = var_68
        else
            void* var_78
            int64_t* rax_18 = sub_140bdcf10(rcx_27, &var_78, r12_2)
            int32_t rcx_33 = rax_18[1].d
            int32_t r8_10 = rcx_33 - 1
            
            if (rcx_33 == 0)
                r8_10 = 0
            
            result = sub_140a20ba0(arg2, *rax_18, r8_10)
            rcx_22 = var_78
        
        goto label_140cfc58e
    
    void var_48
    int64_t* rax_15 = sub_140ac6680(sub_140bddc50(rcx_27, &var_48, r12_2))
    int32_t rcx_29 = rax_15[1].d
    int32_t r8_9 = rcx_29 - 1
    
    if (rcx_29 == 0)
        r8_9 = 0
    
    result = sub_140a20ba0(arg2, *rax_15, r8_9)
    int64_t* var_40
    
    if (var_40 != 0)
        result = var_40[1].d
        var_40[1].d -= 1
        
        if (result == 1)
            result = (**var_40)(var_40)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_40 + 8))(var_40, zx.q(rdi_1))
return result
