// 函数: sub_140d381b0
// 地址: 0x140d381b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *(arg2 + 0x20)
uint32_t rcx = zx.d(*result)
*(arg2 + 0x20) = &result[1]

if (rcx.b == 0)
    TEB* gsbase
    
    if (data_143cd6ff0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd6ff0)
        
        if (data_143cd6ff0 == 0xffffffff)
            sub_140a96080(&data_143cd6fd8)
            atexit(sub_142cb0d20)
            _Init_thread_footer(&data_143cd6ff0)
    
    return sub_14065da90(arg3, &data_143cd6fd8) __tailcall

int16_t* rcx_12

if (rcx == 1)
    int16_t* var_b8 = nullptr
    int32_t var_b0_1 = 0
    uint32_t rcx_27 = zx.d(result[1])
    *(arg2 + 0x20) = &result[2]
    (&data_143e1cd60)[zx.q(rcx_27)](*(arg2 + 0x18), arg2, &var_b8, rcx - 1)
    char* rax_22 = *(arg2 + 0x20)
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    uint32_t rcx_29 = zx.d(*rax_22)
    *(arg2 + 0x20) = &rax_22[1]
    (&data_143e1cd60)[zx.q(rcx_29)](*(arg2 + 0x18), arg2, &var_c8)
    char* rax_25 = *(arg2 + 0x20)
    int16_t* var_d8 = nullptr
    int32_t var_d0_1 = 0
    uint32_t rcx_31 = zx.d(*rax_25)
    *(arg2 + 0x20) = &rax_25[1]
    (&data_143e1cd60)[zx.q(rcx_31)](*(arg2 + 0x18), arg2, &var_d8)
    int16_t* rdx_21 = &data_142d40450
    int16_t* r8_8 = &data_142d40450
    
    if (var_d0_1 != 0)
        r8_8 = var_d8
    
    if (var_b0_1 != 0)
        rdx_21 = var_b8
    
    void var_30
    int64_t* rax_28 = _vfprintf_p_l(&var_30, rdx_21, r8_8)
    int64_t rdx_22 = *arg3
    *arg3 = *rax_28
    *rax_28 = rdx_22
    int64_t rdx_23 = arg3[1]
    arg3[1] = rax_28[1]
    rax_28[1] = rdx_23
    result = zx.q(rax_28[2].d)
    arg3[2].d = result.d
    int64_t* var_28
    
    if (var_28 != 0)
        result = zx.q(var_28[1].d)
        var_28[1].d -= 1
        
        if (result.d == 1)
            result = (**var_28)(var_28)
            int32_t rbx_4 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rbx_4 == 1)
                result = (*(*var_28 + 8))(var_28, zx.q(rbx_4))
    
    int16_t* rcx_38 = var_d8
    
    if (rcx_38 != 0)
        result = sub_140a74f90(rcx_38)
    
    int64_t rcx_39 = var_c8
    
    if (rcx_39 != 0)
        result = sub_140a74f90(rcx_39)
    
    rcx_12 = var_b8
label_140d3830c:
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)
else
    if (rcx == 2)
        int16_t* var_88 = nullptr
        int64_t var_80_1 = 0
        uint32_t rcx_20 = zx.d(result[1])
        *(arg2 + 0x20) = &result[2]
        (&data_143e1cd60)[zx.q(rcx_20)](*(arg2 + 0x18), arg2, &var_88, rcx - 2)
        void var_48
        int64_t* rax_17 = sub_140a9fb70(&var_48, &var_88)
        int64_t rdx_15 = *arg3
        *arg3 = *rax_17
        *rax_17 = rdx_15
        int64_t rdx_16 = arg3[1]
        arg3[1] = rax_17[1]
        rax_17[1] = rdx_16
        result = zx.q(rax_17[2].d)
        arg3[2].d = result.d
        int64_t* var_40
        
        if (var_40 != 0)
            result = zx.q(var_40[1].d)
            var_40[1].d -= 1
            
            if (result.d == 1)
                result = (**var_40)(var_40)
                int32_t rbx_3 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    result = (*(*var_40 + 8))(var_40, zx.q(rbx_3))
        
        rcx_12 = var_88
        goto label_140d3830c
    
    if (rcx == 3)
        int16_t* var_98 = nullptr
        int64_t var_90_1 = 0
        uint32_t rcx_13 = zx.d(result[1])
        *(arg2 + 0x20) = &result[2]
        (&data_143e1cd60)[zx.q(rcx_13)](*(arg2 + 0x18), arg2, &var_98, rcx - 3)
        void var_60
        int64_t* rax_12 = sub_140aae2f0(&var_60, &var_98)
        int64_t rdx_10 = *arg3
        *arg3 = *rax_12
        *rax_12 = rdx_10
        int64_t rdx_11 = arg3[1]
        arg3[1] = rax_12[1]
        rax_12[1] = rdx_11
        result = zx.q(rax_12[2].d)
        arg3[2].d = result.d
        int64_t* var_58
        
        if (var_58 != 0)
            result = zx.q(var_58[1].d)
            var_58[1].d -= 1
            
            if (result.d == 1)
                result = (**var_58)(var_58)
                int32_t rbx_2 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_58 + 8))(var_58, zx.q(rbx_2))
        
        rcx_12 = var_98
        goto label_140d3830c
    
    if (rcx == 4)
        *(arg2 + 0x20) = &result[9]
        int16_t* var_e8 = nullptr
        int64_t var_e0_1 = 0
        uint32_t rcx_1 = zx.d(result[9])
        *(arg2 + 0x20) = &result[0xa]
        (&data_143e1cd60)[zx.q(rcx_1)](*(arg2 + 0x18), arg2, &var_e8, rcx - 3, var_e8, var_e0_1)
        char* rax_3 = *(arg2 + 0x20)
        int64_t var_a8 = 0
        int64_t var_a0_1 = 0
        uint32_t rcx_3 = zx.d(*rax_3)
        *(arg2 + 0x20) = &rax_3[1]
        (&data_143e1cd60)[zx.q(rcx_3)](*(arg2 + 0x18), arg2, &var_a8)
        int16_t* const rdx_3 = &data_142d40450
        
        if (var_e0_1.d != 0)
            rdx_3 = var_e8
        
        void*** var_78
        void arg_10
        void**** rax_7 = sub_140aae5a0(&var_78, *sub_140b58260(&arg_10, rdx_3, 1), &var_a8, 1)
        void*** rdx_5 = *arg3
        *arg3 = *rax_7
        *rax_7 = rdx_5
        int64_t rdx_6 = arg3[1]
        arg3[1] = rax_7[1]
        rax_7[1] = rdx_6
        result = zx.q(rax_7[2].d)
        arg3[2].d = result.d
        int64_t* var_70
        
        if (var_70 != 0)
            result = zx.q(var_70[1].d)
            var_70[1].d -= 1
            
            if (result.d == 1)
                result = (**var_70)(var_70)
                int32_t rbx_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    result = (*(*var_70 + 8))(var_70, zx.q(rbx_1))
        
        int64_t rcx_11 = var_a8
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rcx_12 = var_e8
        goto label_140d3830c
return result
