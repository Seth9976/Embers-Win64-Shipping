// 函数: sub_14216a340
// 地址: 0x14216a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void*** rax_2 = j_sub_140a82f30(0x2c0)
void* rsi = nullptr
void*** rcx_1

if (rax_2 == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_141cccd20(rax_2, arg1 + 0x5e0)

int64_t var_d8
int64_t* result = &var_d8

if (arg1 + 0x108 != &var_d8)
    void*** r8_1 = *(arg1 + 0x108)
    *(arg1 + 0x108) = rcx_1
    
    if (r8_1 != 0)
        result = (**r8_1)(r8_1, 1)
else if (rcx_1 != 0)
    result = (**rcx_1)(rcx_1, 1)

void*** rbx = *(arg1 + 0x108)

if (rbx != 0)
    void*** var_98_1 = nullptr
    void** const var_88 = &data_142da2668
    void* var_80_1 = arg1
    int64_t (* var_a8_1)(int64_t arg1, int64_t* arg2, int64_t arg3) = sub_142161420
    int64_t (* var_68)(int64_t arg1, int64_t* arg2, int64_t arg3) = sub_142161420
    int128_t* var_58 = nullptr
    sub_14074cce0(&var_88, &var_58)
    int128_t var_48
    
    if (&rbx[8] != &var_68)
        arg3 = *(rbx + 0x40)
        arg4 = *(rbx + 0x50)
        int128_t zmm4_1 = *(rbx + 0x60)
        int128_t zmm5_1 = *(rbx + 0x70)
        arg2 = var_58.o
        *(rbx + 0x40) = var_68.o
        int128_t zmm0_1 = var_48
        *(rbx + 0x50) = arg2
        int128_t var_38
        arg2 = var_38
        *(rbx + 0x60) = zmm0_1
        *(rbx + 0x70) = arg2
        var_68.o = arg3
        var_58.o = arg4
        var_48 = zmm4_1
        int128_t var_38_1 = zmm5_1
    
    if (var_68 != 0)
        int128_t* rax_5 = var_58
        int128_t* rcx_3 = &var_48
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        (*(*rcx_3 + 0x10))(rcx_3, arg2, arg3, arg4)
    
    if (var_a8_1 != 0)
        void** const* rcx_4 = &var_88
        
        if (var_98_1 != 0)
            rcx_4 = var_98_1
        
        (*rcx_4)[2](rcx_4, arg2, arg3, arg4)
    
    var_d8 = *(arg1 + 0x130)
    void* rax_10 = *(arg1 + 0x138)
    void* var_d0_1 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    int64_t var_c8 = *(arg1 + 0x120)
    void* rax_12 = *(arg1 + 0x128)
    void* var_c0_1 = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    sub_141ccecc0(*(arg1 + 0x108), &var_c8, &var_d8)
    int64_t var_e8_1 = *(arg1 + 0x190)
    var_c8.o = zx.o(0)
    sub_141cce5b0(*(arg1 + 0x108), 1, 0x400, 1, &var_c8, 0)
    var_d8 = 0
    int32_t var_d0_2 = 0
    sub_1405947f0(&var_d8, 0x47)
    int32_t rax_14 = var_d0_2 + 0x47
    var_d0_2 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_d8)
    
    UnDecorator::getReferenceType(var_d8, 
        Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)", 0x8e)
    int64_t var_b8
    sub_141ccd290(*(arg1 + 0x108), &var_b8, &var_d8, 1)
    int64_t rcx_11 = var_d8
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d += 1
    
    *(arg1 + 0x110) = var_b8
    int64_t* rcx_12 = *(arg1 + 0x118)
    
    if (var_b0 != rcx_12)
        if (var_b0 != 0)
            *(var_b0 + 0xc) += 1
            rcx_12 = *(arg1 + 0x118)
        
        if (rcx_12 != 0)
            int32_t temp2_1 = *(rcx_12 + 0xc)
            *(rcx_12 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_12 + 8))(rcx_12, 1)
        
        *(arg1 + 0x118) = var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t temp1_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_b0 + 8))(var_b0, 1)
    
    if (*(arg1 + 0x110) != 0)
        int64_t* rbx_3 = *(arg1 + 0x118)
        
        if (rbx_3 != 0)
            int32_t rax_19 = rbx_3[1].d
            
            if (rax_19 s> 0)
                if (rbx_3 != 0)
                    if (rax_19 != 0)
                        rbx_3[1].d = rax_19 + 1
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        rbx_3 = nullptr
                    
                    if (rbx_3 != 0)
                        rsi = *(arg1 + 0x110)
                
                sub_14219da60(rsi, arg1)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp6_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
    
    result = sub_141ccea90(*(arg1 + 0x108))
    
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
