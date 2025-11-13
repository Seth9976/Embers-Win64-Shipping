// 函数: sub_1429c9e00
// 地址: 0x1429c9e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (((*(arg1 + 0x1d0) - *(arg1 + 0x1c8)) s>> 3).d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdi_1 = *(rsi_1 + *(arg1 + 0x1c8))
        
        if (rdi_1 != 0)
            sub_1429cfff0(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< ((*(arg1 + 0x1d0) - *(arg1 + 0x1c8)) s>> 3).d)

void* rcx_3 = *(arg1 + 0x1c8)

if (rcx_3 != 0)
    int64_t rax_9 = (*(arg1 + 0x1d8) - rcx_3) s>> 3
    
    if (rax_9 u> 0x1fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_9 << 3 u>= 0x1000)
        if ((rcx_3.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_11 = *(rcx_3 - 8)
        
        if (rax_11 u>= rcx_3)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_2 = rcx_3 - rax_11
        
        if (rcx_2 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_2 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_3 = rax_11
    
    j_sub_140a74f90(rcx_3)
    __builtin_memset(arg1 + 0x1c8, 0, 0x18)

void* rcx_5 = *(arg1 + 0x1b0)

if (rcx_5 != 0)
    int64_t rax_14 = (*(arg1 + 0x1c0) - rcx_5) s>> 1
    
    if (rax_14 u> 0x7fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_14 * 2 u>= 0x1000)
        if ((rcx_5.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_16 = *(rcx_5 - 8)
        
        if (rax_16 u>= rcx_5)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_4 = rcx_5 - rax_16
        
        if (rcx_4 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_4 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = rax_16
    
    j_sub_140a74f90(rcx_5)
    __builtin_memset(arg1 + 0x1b0, 0, 0x18)

void* rcx_7 = *(arg1 + 0x198)

if (rcx_7 != 0)
    int64_t rax_19 = (*(arg1 + 0x1a8) - rcx_7) s>> 2
    
    if (rax_19 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_19 << 2 u>= 0x1000)
        if ((rcx_7.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_21 = *(rcx_7 - 8)
        
        if (rax_21 u>= rcx_7)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_6 = rcx_7 - rax_21
        
        if (rcx_6 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_6 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = rax_21
    
    j_sub_140a74f90(rcx_7)
    __builtin_memset(arg1 + 0x198, 0, 0x18)

void* rcx_9 = *(arg1 + 0x180)

if (rcx_9 != 0)
    int64_t rax_24 = (*(arg1 + 0x190) - rcx_9) s>> 1
    
    if (rax_24 u> 0x7fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_24 * 2 u>= 0x1000)
        if ((rcx_9.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_26 = *(rcx_9 - 8)
        
        if (rax_26 u>= rcx_9)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_8 = rcx_9 - rax_26
        
        if (rcx_8 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_8 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_9 = rax_26
    
    j_sub_140a74f90(rcx_9)
    __builtin_memset(arg1 + 0x180, 0, 0x18)

void* rcx_11 = *(arg1 + 0x168)

if (rcx_11 != 0)
    int64_t rax_29 = (*(arg1 + 0x178) - rcx_11) s>> 2
    
    if (rax_29 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_29 << 2 u>= 0x1000)
        if ((rcx_11.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_31 = *(rcx_11 - 8)
        
        if (rax_31 u>= rcx_11)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_10 = rcx_11 - rax_31
        
        if (rcx_10 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_10 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_11 = rax_31
    
    j_sub_140a74f90(rcx_11)
    __builtin_memset(arg1 + 0x168, 0, 0x18)

void* rcx_13 = *(arg1 + 0x150)

if (rcx_13 != 0)
    int64_t rax_34 = (*(arg1 + 0x160) - rcx_13) s>> 2
    
    if (rax_34 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_34 << 2 u>= 0x1000)
        if ((rcx_13.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_36 = *(rcx_13 - 8)
        
        if (rax_36 u>= rcx_13)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_12 = rcx_13 - rax_36
        
        if (rcx_12 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_12 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_13 = rax_36
    
    j_sub_140a74f90(rcx_13)
    __builtin_memset(arg1 + 0x150, 0, 0x18)

void* rcx_15 = *(arg1 + 0x138)

if (rcx_15 != 0)
    int64_t rax_39 = (*(arg1 + 0x148) - rcx_15) s>> 1
    
    if (rax_39 u> 0x7fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_39 * 2 u>= 0x1000)
        if ((rcx_15.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_41 = *(rcx_15 - 8)
        
        if (rax_41 u>= rcx_15)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_14 = rcx_15 - rax_41
        
        if (rcx_14 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_14 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_15 = rax_41
    
    j_sub_140a74f90(rcx_15)
    __builtin_memset(arg1 + 0x138, 0, 0x18)

void* rcx_17 = *(arg1 + 0x120)

if (rcx_17 != 0)
    int64_t rax_44 = (*(arg1 + 0x130) - rcx_17) s>> 2
    
    if (rax_44 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_44 << 2 u>= 0x1000)
        if ((rcx_17.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_46 = *(rcx_17 - 8)
        
        if (rax_46 u>= rcx_17)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_16 = rcx_17 - rax_46
        
        if (rcx_16 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_16 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_17 = rax_46
    
    j_sub_140a74f90(rcx_17)
    __builtin_memset(arg1 + 0x120, 0, 0x18)

void* rcx_19 = *(arg1 + 0x108)

if (rcx_19 != 0)
    int64_t rax_49 = (*(arg1 + 0x118) - rcx_19) s>> 2
    
    if (rax_49 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_49 << 2 u>= 0x1000)
        if ((rcx_19.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_51 = *(rcx_19 - 8)
        
        if (rax_51 u>= rcx_19)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_18 = rcx_19 - rax_51
        
        if (rcx_18 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_18 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_19 = rax_51
    
    j_sub_140a74f90(rcx_19)
    __builtin_memset(arg1 + 0x108, 0, 0x18)

void* rcx_21 = *(arg1 + 0xf0)

if (rcx_21 != 0)
    if (*(arg1 + 0x100) - rcx_21 u>= 0x1000)
        if ((rcx_21.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_54 = *(rcx_21 - 8)
        
        if (rax_54 u>= rcx_21)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_20 = rcx_21 - rax_54
        
        if (rcx_20 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_20 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_21 = rax_54
    
    j_sub_140a74f90(rcx_21)
    __builtin_memset(arg1 + 0xf0, 0, 0x18)

void* rcx_23 = *(arg1 + 0xd8)

if (rcx_23 != 0)
    int64_t rax_57 = (*(arg1 + 0xe8) - rcx_23) s>> 2
    
    if (rax_57 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_57 << 2 u>= 0x1000)
        if ((rcx_23.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_59 = *(rcx_23 - 8)
        
        if (rax_59 u>= rcx_23)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_22 = rcx_23 - rax_59
        
        if (rcx_22 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_22 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_23 = rax_59
    
    j_sub_140a74f90(rcx_23)
    __builtin_memset(arg1 + 0xd8, 0, 0x18)

void* rcx_25 = *(arg1 + 0xc0)

if (rcx_25 != 0)
    int64_t rax_62 = (*(arg1 + 0xd0) - rcx_25) s>> 1
    
    if (rax_62 u> 0x7fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_62 * 2 u>= 0x1000)
        if ((rcx_25.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_64 = *(rcx_25 - 8)
        
        if (rax_64 u>= rcx_25)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_24 = rcx_25 - rax_64
        
        if (rcx_24 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_24 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_25 = rax_64
    
    j_sub_140a74f90(rcx_25)
    __builtin_memset(arg1 + 0xc0, 0, 0x18)

void* rcx_27 = *(arg1 + 0xa8)

if (rcx_27 != 0)
    int64_t rax_67 = (*(arg1 + 0xb8) - rcx_27) s>> 2
    
    if (rax_67 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_67 << 2 u>= 0x1000)
        if ((rcx_27.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_69 = *(rcx_27 - 8)
        
        if (rax_69 u>= rcx_27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_26 = rcx_27 - rax_69
        
        if (rcx_26 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_26 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_27 = rax_69
    
    j_sub_140a74f90(rcx_27)
    __builtin_memset(arg1 + 0xa8, 0, 0x18)

void* rdx_2 = *(arg1 + 0x90)

if (rdx_2 != 0)
    sub_1429cc220(arg1 + 0x90, rdx_2, (*(arg1 + 0xa0) - rdx_2) s>> 2)
    __builtin_memset(arg1 + 0x90, 0, 0x18)

void* rdx_3 = *(arg1 + 0x78)

if (rdx_3 != 0)
    sub_1429cc220(arg1 + 0x78, rdx_3, (*(arg1 + 0x88) - rdx_3) s>> 2)
    __builtin_memset(arg1 + 0x78, 0, 0x18)

int64_t result = sub_1429caef0(arg1 + 0x60)
void* rdx_4 = *(arg1 + 0x48)

if (rdx_4 != 0)
    result = sub_1429cc220(arg1 + 0x48, rdx_4, (*(arg1 + 0x58) - rdx_4) s>> 2)
    __builtin_memset(arg1 + 0x48, 0, 0x18)

void* rdx_5 = *(arg1 + 0x30)

if (rdx_5 != 0)
    result = sub_1429cc220(arg1 + 0x30, rdx_5, (*(arg1 + 0x40) - rdx_5) s>> 2)
    __builtin_memset(arg1 + 0x30, 0, 0x18)

void* rdx_6 = *(arg1 + 0x18)

if (rdx_6 != 0)
    result = sub_1429cc220(arg1 + 0x18, rdx_6, (*(arg1 + 0x28) - rdx_6) s>> 2)
    __builtin_memset(arg1 + 0x18, 0, 0x18)

return result
