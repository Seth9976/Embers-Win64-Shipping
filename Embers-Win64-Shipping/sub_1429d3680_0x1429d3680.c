// 函数: sub_1429d3680
// 地址: 0x1429d3680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &OpenSubdiv::v3_2_0::Vtr::internal::Refinement::`vftable'
int32_t rbp = 0
int32_t result = ((arg1[0x3d] - arg1[0x3c]) s>> 3).d

if (result s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdi_1 = *(rsi_1 + arg1[0x3c])
        
        if (rdi_1 != 0)
            sub_1429d1f20(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        rbp += 1
        rsi_1 = &rsi_1[1]
        result = ((arg1[0x3d] - arg1[0x3c]) s>> 3).d
    while (rbp s< result)

void* rcx_3 = arg1[0x3c]

if (rcx_3 != 0)
    int64_t rax_7 = (arg1[0x3e] - rcx_3) s>> 3
    
    if (rax_7 u> 0x1fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_7 << 3 u>= 0x1000)
        if ((rcx_3.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_9 = *(rcx_3 - 8)
        
        if (rax_9 u>= rcx_3)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_2 = rcx_3 - rax_9
        
        if (rcx_2 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_2 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_3 = rax_9
    
    result = j_sub_140a74f90(rcx_3)
    __builtin_memset(&arg1[0x3c], 0, 0x18)

void* rcx_5 = arg1[0x39]

if (rcx_5 != 0)
    if (arg1[0x3b] - rcx_5 u>= 0x1000)
        if ((rcx_5.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_12 = *(rcx_5 - 8)
        
        if (rax_12 u>= rcx_5)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_4 = rcx_5 - rax_12
        
        if (rcx_4 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_4 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = rax_12
    
    result = j_sub_140a74f90(rcx_5)
    __builtin_memset(&arg1[0x39], 0, 0x18)

void* rcx_7 = arg1[0x36]

if (rcx_7 != 0)
    if (arg1[0x38] - rcx_7 u>= 0x1000)
        if ((rcx_7.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_15 = *(rcx_7 - 8)
        
        if (rax_15 u>= rcx_7)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_6 = rcx_7 - rax_15
        
        if (rcx_6 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_6 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = rax_15
    
    result = j_sub_140a74f90(rcx_7)
    __builtin_memset(&arg1[0x36], 0, 0x18)

void* rcx_9 = arg1[0x33]

if (rcx_9 != 0)
    if (arg1[0x35] - rcx_9 u>= 0x1000)
        if ((rcx_9.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_18 = *(rcx_9 - 8)
        
        if (rax_18 u>= rcx_9)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_8 = rcx_9 - rax_18
        
        if (rcx_8 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_8 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_9 = rax_18
    
    result = j_sub_140a74f90(rcx_9)
    __builtin_memset(&arg1[0x33], 0, 0x18)

void* rcx_11 = arg1[0x30]

if (rcx_11 != 0)
    if (arg1[0x32] - rcx_11 u>= 0x1000)
        if ((rcx_11.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_21 = *(rcx_11 - 8)
        
        if (rax_21 u>= rcx_11)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_10 = rcx_11 - rax_21
        
        if (rcx_10 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_10 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_11 = rax_21
    
    result = j_sub_140a74f90(rcx_11)
    __builtin_memset(&arg1[0x30], 0, 0x18)

void* rcx_13 = arg1[0x2d]

if (rcx_13 != 0)
    if (arg1[0x2f] - rcx_13 u>= 0x1000)
        if ((rcx_13.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_24 = *(rcx_13 - 8)
        
        if (rax_24 u>= rcx_13)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_12 = rcx_13 - rax_24
        
        if (rcx_12 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_12 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_13 = rax_24
    
    result = j_sub_140a74f90(rcx_13)
    __builtin_memset(&arg1[0x2d], 0, 0x18)

void* rcx_15 = arg1[0x2a]

if (rcx_15 != 0)
    if (arg1[0x2c] - rcx_15 u>= 0x1000)
        if ((rcx_15.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_27 = *(rcx_15 - 8)
        
        if (rax_27 u>= rcx_15)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_14 = rcx_15 - rax_27
        
        if (rcx_14 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_14 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_15 = rax_27
    
    result = j_sub_140a74f90(rcx_15)
    __builtin_memset(&arg1[0x2a], 0, 0x18)

void* rcx_17 = arg1[0x27]

if (rcx_17 != 0)
    int64_t rax_30 = (arg1[0x29] - rcx_17) s>> 2
    
    if (rax_30 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_30 << 2 u>= 0x1000)
        if ((rcx_17.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_32 = *(rcx_17 - 8)
        
        if (rax_32 u>= rcx_17)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_16 = rcx_17 - rax_32
        
        if (rcx_16 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_16 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_17 = rax_32
    
    result = j_sub_140a74f90(rcx_17)
    __builtin_memset(&arg1[0x27], 0, 0x18)

void* rcx_19 = arg1[0x24]

if (rcx_19 != 0)
    int64_t rax_35 = (arg1[0x26] - rcx_19) s>> 2
    
    if (rax_35 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_35 << 2 u>= 0x1000)
        if ((rcx_19.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_37 = *(rcx_19 - 8)
        
        if (rax_37 u>= rcx_19)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_18 = rcx_19 - rax_37
        
        if (rcx_18 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_18 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_19 = rax_37
    
    result = j_sub_140a74f90(rcx_19)
    __builtin_memset(&arg1[0x24], 0, 0x18)

void* rcx_21 = arg1[0x21]

if (rcx_21 != 0)
    int64_t rax_40 = (arg1[0x23] - rcx_21) s>> 2
    
    if (rax_40 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_40 << 2 u>= 0x1000)
        if ((rcx_21.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_42 = *(rcx_21 - 8)
        
        if (rax_42 u>= rcx_21)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_20 = rcx_21 - rax_42
        
        if (rcx_20 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_20 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_21 = rax_42
    
    result = j_sub_140a74f90(rcx_21)
    __builtin_memset(&arg1[0x21], 0, 0x18)

void* rcx_23 = arg1[0x1e]

if (rcx_23 != 0)
    int64_t rax_45 = (arg1[0x20] - rcx_23) s>> 2
    
    if (rax_45 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_45 << 2 u>= 0x1000)
        if ((rcx_23.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_47 = *(rcx_23 - 8)
        
        if (rax_47 u>= rcx_23)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_22 = rcx_23 - rax_47
        
        if (rcx_22 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_22 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_23 = rax_47
    
    result = j_sub_140a74f90(rcx_23)
    __builtin_memset(&arg1[0x1e], 0, 0x18)

void* rcx_25 = arg1[0x1b]

if (rcx_25 != 0)
    int64_t rax_50 = (arg1[0x1d] - rcx_25) s>> 2
    
    if (rax_50 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_50 << 2 u>= 0x1000)
        if ((rcx_25.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_52 = *(rcx_25 - 8)
        
        if (rax_52 u>= rcx_25)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_24 = rcx_25 - rax_52
        
        if (rcx_24 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_24 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_25 = rax_52
    
    result = j_sub_140a74f90(rcx_25)
    __builtin_memset(&arg1[0x1b], 0, 0x18)

void* rcx_27 = arg1[0x18]

if (rcx_27 != 0)
    int64_t rax_55 = (arg1[0x1a] - rcx_27) s>> 2
    
    if (rax_55 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_55 << 2 u>= 0x1000)
        if ((rcx_27.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_57 = *(rcx_27 - 8)
        
        if (rax_57 u>= rcx_27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_26 = rcx_27 - rax_57
        
        if (rcx_26 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_26 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_27 = rax_57
    
    result = j_sub_140a74f90(rcx_27)
    __builtin_memset(&arg1[0x18], 0, 0x18)

void* rdx_2 = arg1[0x15]

if (rdx_2 != 0)
    result = sub_1429cc220(&arg1[0x15], rdx_2, (arg1[0x17] - rdx_2) s>> 2)
    __builtin_memset(&arg1[0x15], 0, 0x18)

void* rdx_3 = arg1[0x12]

if (rdx_3 != 0)
    result = sub_1429cc220(&arg1[0x12], rdx_3, (arg1[0x14] - rdx_3) s>> 2)
    __builtin_memset(&arg1[0x12], 0, 0x18)

void* rdx_4 = arg1[0xf]

if (rdx_4 != 0)
    result = sub_1429cc220(&arg1[0xf], rdx_4, (arg1[0x11] - rdx_4) s>> 2)
    __builtin_memset(&arg1[0xf], 0, 0x18)

return result
