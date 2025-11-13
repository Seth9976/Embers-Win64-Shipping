// 函数: sub_1406b9eb0
// 地址: 0x1406b9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) == 0 || *(arg1 + 0x3b8) == 0 || *(arg1 + 0x3bc) == 0)
    return 

_Query_perf_frequency()
_Query_perf_counter()

if (*(arg1 + 0x4e0) != 0)
    int64_t arg_8 = 0
    
    while (true)
        int64_t* rdx_1 = *(*(arg1 + 0x4c8) + (((*(arg1 + 0x4d0) - 1) & *(arg1 + 0x4d8)) << 3))
        int64_t* rdi_1 = *rdx_1
        void var_38
        
        if (rdi_1 == 0)
            std::_Throw_future_error(std::make_error_code(&var_38, 4))
            noreturn
        
        if (rdx_1[1].b != 0 && rdi_1[0x17].b != 0)
            std::_Throw_future_error(std::make_error_code(&var_38, 4))
            noreturn
        
        void* mtx = &rdi_1[4]
        char var_d0_1 = 0
        int32_t code = _Mtx_lock(&rdi_1[4])
        
        if (code != 0)
            std::_Throw_C_error(code)
            noreturn
        
        char var_d0_2 = 1
        void* mtx_1
        
        if ((*(*rdi_1 + 0x18))(rdi_1) != 0)
            mtx_1 = &rdi_1[4]
        else if (sub_1406b4ff0(&rdi_1[0xe], &mtx, &arg_8, rdi_1) == 0)
            if (var_d0_2 == 0)
                break
            
            mtx_1 = mtx
        else
            if (var_d0_2 != 0)
                _Mtx_unlock(mtx)
            
            int64_t* rcx_11 = **(*(arg1 + 0x4c8) + (((*(arg1 + 0x4d0) - 1) & *(arg1 + 0x4d8)) << 3))
            
            if (rcx_11 != 0)
                rcx_11[1].d -= 1
                
                if (rcx_11[1].d == 1)
                    int64_t* r8_2 = rcx_11[0x19]
                    
                    if (r8_2 == 0)
                        (**rcx_11)(rcx_11, 1, r8_2)
                    else
                        (**r8_2)(r8_2, rcx_11)
            
            int64_t temp1_1 = *(arg1 + 0x4e0)
            *(arg1 + 0x4e0) -= 1
            
            if (temp1_1 == 1)
                *(arg1 + 0x4d8) = 0
                break
            
            *(arg1 + 0x4d8) += 1
            continue
        
        _Mtx_unlock(mtx_1)
        break

_Query_perf_frequency()
_Query_perf_counter()
uint64_t var_c8 = 0
int32_t var_c0_1 = 0
int32_t var_80_1 = *(arg1 + 0x3b8)
int32_t var_7c_1 = *(arg1 + 0x3bc)
int64_t var_b8_1 = 6
char var_b0_1 = 1
int16_t var_a8_1 = 0
int128_t var_58 = 0.o
float zmm1[0x4] = var_b8_1.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0_2[0] = 0x467a0000
float var_78[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
int32_t var_68_1 = var_a8_1.d
int128_t entry_zmm3

if (sub_1423eb890(*(arg1 + 0xb8), &var_c8, &var_78, &var_58, entry_zmm3) != 0)
    int64_t* rdx_5 = *(arg1 + 0xb8)
    int64_t* rcx_15 = rdx_5[0x13]
    
    if (rcx_15 == 0)
        int64_t* rcx_17 = *(*(*rdx_5 + 8))(rdx_5)
        (*(*rcx_17 + 0x38))(rcx_17)
    else
        (*(*rcx_15 + 0x10))(rcx_15)
    
    _Query_perf_frequency()
    _Query_perf_counter()
    void* var_a0 = arg1
    uint64_t var_98
    uint64_t* arg_10 = &var_98
    var_98 = 0
    int64_t rbx_1 = sx.q(var_c0_1)
    uint64_t rsi_2 = var_c8
    int32_t var_90_1 = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1405c4a90(&var_98, rbx_1.d, 0)
        memcpy(var_98, rsi_2, (rbx_1 << 2).d)
    else
        int32_t var_8c_1 = 0
    
    void*** var_48
    void**** rax_15 = sub_1406b4cb0(&var_48, 1, &var_a0)
    int64_t rdx_8 = *(arg1 + 0x4e0)
    int64_t rsi_3 = *(arg1 + 0x4d0)
    
    if (rsi_3 u<= rdx_8 + 1)
        sub_1406c3e30(arg1 + 0x4c0, 1)
        rsi_3 = *(arg1 + 0x4d0)
        rdx_8 = *(arg1 + 0x4e0)
    
    int64_t rax_17 = (rsi_3 - 1) & *(arg1 + 0x4d8)
    *(arg1 + 0x4d8) = rax_17
    int64_t rsi_5 = (rsi_3 - 1) & (rax_17 + rdx_8)
    int64_t rcx_23 = *(arg1 + 0x4c8)
    
    if (*(rcx_23 + (rsi_5 << 3)) == 0)
        *(*(arg1 + 0x4c8) + (rsi_5 << 3)) = j_sub_140a82f30(0x10)
        rcx_23 = *(arg1 + 0x4c8)
    
    void**** rcx_25 = *(rcx_23 + (rsi_5 << 3))
    *rcx_25 = nullptr
    
    if (rcx_25 != rax_15)
        *rcx_25 = *rax_15
        *rax_15 = nullptr
    
    rcx_25[1].b = 1
    *(arg1 + 0x4e0) += 1
    void*** rcx_26 = var_48
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            int64_t* r8_7 = rcx_26[0x19]
            
            if (r8_7 == 0)
                (**rcx_26)(rcx_26, 1, r8_7)
            else
                (**r8_7)(r8_7, rcx_26)
    
    uint64_t rcx_28 = var_98
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    _Query_perf_frequency()
    _Query_perf_counter()

uint64_t rcx_29 = var_c8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)
