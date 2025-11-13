// 函数: sub_141a4a240
// 地址: 0x141a4a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x280))()
int64_t* rdx_5

if (*(rax_1 + 0x88) == *(rax_1 + 0xb4))
label_141a4a2de:
    rdx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8_1 = rax_1 + 0xb8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(rax_1 + 0xc8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141a4a2de_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 5) + *(rax_1 + 0x80)
            
            if (*rdx_5 == arg3)
                break
            
            rax_5 = rdx_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141a4a2de_2
        
        if (rax_5 == 0xffffffff)
        label_141a4a2de_2:
            rdx_5 = nullptr

void* rax_6 = &rdx_5[1]

if (rdx_5 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    TEB* gsbase
    
    if (data_143f2a9a8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2a9a8)
        
        if (data_143f2a9a8 == 0xffffffff)
            data_143f2a998 = 0
            data_143f2a9a0 = 0
            atexit(sub_142cf4d20)
            _Init_thread_footer(&data_143f2a9a8)
    
    rax_6 = &data_143f2a998

int128_t* rdx_6 = *rax_6

if (rdx_6 == rdx_6 + sx.q(*(rax_6 + 8)) * 0x18)
    void*** var_88
    void var_60
    void**** rax_12 = sub_140b9e470(&var_88, arg1, sub_140a96170(&var_60))
    void*** var_b8 = *rax_12
    int64_t* rcx_8 = rax_12[1]
    
    if (rcx_8 != 0)
        rcx_8[1].d += 1
    
    void arg_8
    sub_140b58170(&arg_8, "PIE", 1)
    void var_78
    int64_t* rax_13 = _vfprintf_p_l(&var_78, Attempted to find a named binding that did not exist", 
        UMovieSceneSequence")
    void var_a8
    void var_98
    void var_48
    sub_140aced10(*sub_140ae44d0(sub_140accdf0(&var_48, &arg_8), &var_98, rax_13), &var_a8, &var_b8)
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            (**var_a0)(var_a0)
            int32_t temp3_1 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_a0 + 8))(var_a0, 1)
    
    int64_t* var_90
    
    if (var_90 != 0)
        var_90[1].d -= 1
        
        if (var_90[1].d == 1)
            (**var_90)(var_90)
            int32_t temp4_1 = *(var_90 + 0xc)
            *(var_90 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_90 + 8))(var_90, 1)
    
    sub_140acd9c0(&var_48)
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_22 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            (**rcx_8)(rcx_8)
            int32_t temp7_1 = *(rcx_8 + 0xc)
            *(rcx_8 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_8 + 8))(rcx_8, 1)
    
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp8_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rsi_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_58 + 8))(var_58, zx.q(rsi_1))
    
    *arg2 = data_143f29fb0
    *(arg2 + 4) = 1
    *(arg2 + 8) = 0
    arg2[1].q = 0
else
    int64_t zmm0 = rdx_6[1].q
    *arg2 = *rdx_6
    arg2[1].q = zmm0

return arg2
