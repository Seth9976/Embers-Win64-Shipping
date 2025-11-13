// 函数: sub_14214c4d0
// 地址: 0x14214c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void*** rax_2 = j_sub_140a82f30(0x2c0)
void* rsi = nullptr
void*** rcx_1

if (rax_2 == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_141cccd20(rax_2, 0)

int64_t* var_d8
int32_t result = &var_d8

if (arg1 + 0x140 != &var_d8)
    void*** r8_1 = *(arg1 + 0x140)
    *(arg1 + 0x140) = rcx_1
    
    if (r8_1 != 0)
        result = (**r8_1)(r8_1, 1)
else if (rcx_1 != 0)
    result = (**rcx_1)(rcx_1, 1)

void*** rcx_2 = *(arg1 + 0x140)

if (rcx_2 != 0)
    void*** var_98_1 = nullptr
    bool cond:0_1 = *(*(arg1 + 0x58) + 0x88) == 0
    void** const var_88 = &data_142da2668
    int64_t (* var_a8_1)(int64_t arg1, int64_t* arg2, int64_t arg3) = sub_14213f030
    int64_t r15
    r15.b = cond:0_1
    int64_t (* var_68)(int64_t arg1, int64_t* arg2, int64_t arg3) = sub_14213f030
    void* var_80_1 = arg1
    int128_t* var_58 = nullptr
    sub_14074cce0(&var_88, &var_58)
    int128_t var_48
    
    if (&rcx_2[8] != &var_68)
        arg3 = *(rcx_2 + 0x40)
        arg4 = *(rcx_2 + 0x50)
        int128_t zmm4_1 = *(rcx_2 + 0x60)
        int128_t zmm5_1 = *(rcx_2 + 0x70)
        arg2 = var_58.o
        *(rcx_2 + 0x40) = var_68.o
        int128_t zmm0_1 = var_48
        *(rcx_2 + 0x50) = arg2
        int128_t var_38
        arg2 = var_38
        *(rcx_2 + 0x60) = zmm0_1
        *(rcx_2 + 0x70) = arg2
        var_68.o = arg3
        var_58.o = arg4
        var_48 = zmm4_1
        int128_t var_38_1 = zmm5_1
    
    if (var_68 != 0)
        int128_t* rax_6 = var_58
        int128_t* rcx_4 = &var_48
        
        if (rax_6 != 0)
            rcx_4 = rax_6
        
        (*(*rcx_4 + 0x10))(rcx_4, arg2, arg3, arg4)
    
    if (var_a8_1 != 0)
        void** const* rcx_5 = &var_88
        
        if (var_98_1 != 0)
            rcx_5 = var_98_1
        
        (*rcx_5)[2](rcx_5, arg2, arg3, arg4)
    
    int32_t var_c0_1 = 0
    int64_t (* var_c8)(int64_t* arg1) = sub_14094eb04
    var_d8 = nullptr
    int32_t var_d0_1 = 0
    void*** rax_10 = sub_1405978f0(0x30, &var_d8)
    
    if (rax_10 != 0)
        *rax_10 = &data_1432a4e08
        sub_140d3a3a0(&rax_10[1], arg1)
        *(rax_10 + 0x10) = var_c8.o
        rax_10[5] = sub_140a387b0()
        *rax_10 = &data_1432a4e60
    
    void* rbx_4 = &(*(arg1 + 0x140))[3]
    
    if (&var_d8 != rbx_4)
        int64_t* rcx_7
        
        if (var_d0_1 != 0)
            rcx_7 = var_d8
        
        if (var_d0_1 != 0 && rcx_7 != 0)
            (*(*rcx_7 + 0x40))(rcx_7, rbx_4)
        else if (*(rbx_4 + 8) != 0)
            int64_t* rcx_8 = *rbx_4
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x38))(rcx_8, 0)
                int64_t rcx_9 = *rbx_4
                
                if (rcx_9 != 0)
                    *rbx_4 = sub_140a84c80(rcx_9, 0, 0)
                
                *(rbx_4 + 8) = 0
    
    sub_140745b20(&var_d8)
    void* rcx_11 = *(arg1 + 0x58)
    var_c8 = *(rcx_11 + 0x130)
    void* rax_16 = *(rcx_11 + 0x138)
    var_c0_1.q = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
        rcx_11 = *(arg1 + 0x58)
    
    var_d8 = *(rcx_11 + 0x120)
    void* rax_18 = *(rcx_11 + 0x128)
    var_d0_1.q = rax_18
    
    if (rax_18 != 0)
        *(rax_18 + 8) += 1
    
    sub_141ccecc0(*(arg1 + 0x140), &var_d8, &var_c8)
    var_c8.o = zx.o(0)
    int64_t var_e8_1 = *(*(arg1 + 0x58) + 0x190)
    sub_141cce5b0(*(arg1 + 0x140), r15.b, *(arg1 + 0xa0) << 3, 0, &var_c8, 0)
    var_d8 = nullptr
    var_d0_1.q = 0
    sub_1405947f0(&var_d8, 0x47)
    int32_t var_d0_2 = var_d0_1 + 0x47
    int32_t var_cc
    
    if (var_d0_1 + 0x47 s> var_cc)
        sub_140594770(&var_d8)
    
    UnDecorator::getReferenceType(var_d8, 
        Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)", 0x8e)
    int64_t var_b8
    sub_141ccd290(*(arg1 + 0x140), &var_b8, &var_d8, 1)
    int64_t* rcx_18 = var_d8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d += 1
    
    *(arg1 + 0x148) = var_b8
    int64_t* rcx_19 = *(arg1 + 0x150)
    
    if (var_b0 != rcx_19)
        if (var_b0 != 0)
            *(var_b0 + 0xc) += 1
            rcx_19 = *(arg1 + 0x150)
        
        if (rcx_19 != 0)
            int32_t temp2_1 = *(rcx_19 + 0xc)
            *(rcx_19 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_19 + 8))(rcx_19, 1)
        
        *(arg1 + 0x150) = var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t temp1_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_b0 + 8))(var_b0, 1)
    
    if (*(arg1 + 0x148) != 0)
        int64_t* rbx_6 = *(arg1 + 0x150)
        
        if (rbx_6 != 0)
            int32_t rax_26 = rbx_6[1].d
            
            if (rax_26 s> 0)
                if (rbx_6 != 0)
                    if (rax_26 != 0)
                        rbx_6[1].d = rax_26 + 1
                        rax_26.b = 1
                    
                    if (rax_26.b == 0)
                        rbx_6 = nullptr
                    
                    if (rbx_6 != 0)
                        rsi = *(arg1 + 0x148)
                
                sub_14219da60(rsi, *(arg1 + 0x58))
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp6_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
    
    sub_141ccea90(*(arg1 + 0x140))
    result = sub_141ccdee0(*(arg1 + 0x140))
    *(arg1 + 0x130) = result
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            result = (**var_b0)(var_b0)
            int32_t temp4_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*var_b0 + 8))(var_b0, 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
