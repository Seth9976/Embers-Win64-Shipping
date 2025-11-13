// 函数: sub_140b1f9a0
// 地址: 0x140b1f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
double _Y = (zx.o(0)).q
double _Y_1 = (zx.o(0)).q
double _X

if (not(arg2.q f<= 0.0))
    _X = arg2.q
    modf(_X, &_Y)

int64_t* rdi_5

if (arg2.q f<= 0.0 || _X != 0.0 || _Y > 2147483647.0)
    void var_100
    char* var_d8
    char** rax_31 = sub_140a96390(&var_d8, 
        _vfprintf_p_l(&var_100, Invalid framerate numerator: {0}", FFrameRate"))
    int64_t var_90_1 = arg2.q
    int32_t var_98_1 = 3
    char var_70_1 = 0
    int32_t* var_1c0 = nullptr
    int32_t var_1b8_1 = 1
    sub_1405a4b40(&var_1c0, 1, 0)
    int32_t* rcx_23 = var_1c0
    *rcx_23 = var_98_1
    *(rcx_23 + 8) = var_90_1
    *(rcx_23 + 8) = var_90_1
    rcx_23[2] = var_90_1.d
    *(rcx_23 + 8) = var_90_1
    rcx_23[0xa].b = 0
    int64_t* var_80
    
    if (var_70_1 != 0)
        int64_t var_88
        *(rcx_23 + 0x10) = var_88
        *(rcx_23 + 0x18) = var_80
        
        if (var_80 != 0)
            var_80[1].d += 1
        
        int32_t var_78
        rcx_23[8] = var_78
        rcx_23[0xa].b = 1
    
    char* var_158 = *rax_31
    void* rax_39 = rax_31[1]
    void* var_150_1 = rax_39
    
    if (rax_39 != 0)
        *(rax_39 + 8) += 1
    
    void var_118
    int64_t* rax_40 = sub_140aac870(&var_118, &var_158, &var_1c0)
    int64_t var_180 = *rax_40
    int64_t* rcx_26 = rax_40[1]
    
    if (rcx_26 != 0)
        rcx_26[1].d += 1
    
    int32_t var_170_1 = rax_40[2].d
    int64_t* var_110
    
    if (var_110 != 0)
        var_110[1].d -= 1
        
        if (var_110[1].d == 1)
            (**var_110)(var_110)
            int32_t rax_44 = *(var_110 + 0xc)
            *(var_110 + 0xc) -= 1
            
            if (rax_44 == 1)
                (*(*var_110 + 8))(var_110, 1)
    
    sub_140596f50(&var_1c0)
    
    if (var_70_1 != 0)
        char var_70_2 = 0
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t rax_48 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rax_48 == 1)
                    (*(*var_80 + 8))(var_80, 1)
    
    int64_t* rdi_8 = rax_31[1]
    
    if (rdi_8 != 0)
        rdi_8[1].d -= 1
        
        if (rdi_8[1].d == 1)
            (**rdi_8)(rdi_8)
            int32_t rax_52 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (rax_52 == 1)
                (*(*rdi_8 + 8))(rdi_8, 1)
    
    int64_t* var_1a0 = &var_180
    sub_140aca4f0(arg1, &var_1a0)
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            (**rcx_26)(rcx_26)
            int32_t rax_56 = *(rcx_26 + 0xc)
            *(rcx_26 + 0xc) -= 1
            
            if (rax_56 == 1)
                (*(*rcx_26 + 8))(rcx_26, 1)
    
    int64_t* var_f8
    rdi_5 = var_f8
label_140b1fec1:
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rbx_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, zx.q(rbx_1))
else
    if (arg3.q f<= 0.0)
    label_140b1faa5:
        void var_130
        char* var_e8
        char** rax_3
        int64_t zmm8_1
        rax_3, zmm8_1 = sub_140a96390(&var_e8, 
            _vfprintf_p_l(&var_130, Invalid framerate denominator: {0}", FFrameRate"))
        int32_t var_c8_1 = 3
        char var_a0_1 = 0
        int32_t* var_1d0 = nullptr
        int32_t var_1c8_1 = 1
        sub_1405a4b40(&var_1d0, 1, 0)
        int32_t* rcx_6 = var_1d0
        *rcx_6 = var_c8_1
        *(rcx_6 + 8) = zmm8_1
        *(rcx_6 + 8) = zmm8_1
        rcx_6[2] = zmm8_1.d
        *(rcx_6 + 8) = zmm8_1
        rcx_6[0xa].b = 0
        int64_t* var_b0
        
        if (var_a0_1 != 0)
            int64_t var_b8
            *(rcx_6 + 0x10) = var_b8
            *(rcx_6 + 0x18) = var_b0
            
            if (var_b0 != 0)
                var_b0[1].d += 1
            
            int32_t var_a8
            rcx_6[8] = var_a8
            rcx_6[0xa].b = 1
        
        char* var_168 = *rax_3
        void* rax_11 = rax_3[1]
        void* var_160_1 = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        void var_148
        int64_t* rax_12 = sub_140aac870(&var_148, &var_168, &var_1d0)
        int64_t var_198 = *rax_12
        int64_t* rcx_9 = rax_12[1]
        
        if (rcx_9 != 0)
            rcx_9[1].d += 1
        
        int32_t var_188_1 = rax_12[2].d
        int64_t* var_140
        
        if (var_140 != 0)
            var_140[1].d -= 1
            
            if (var_140[1].d == 1)
                (**var_140)(var_140)
                int32_t rax_16 = *(var_140 + 0xc)
                *(var_140 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*var_140 + 8))(var_140, 1)
        
        sub_140596f50(&var_1d0)
        
        if (var_a0_1 != 0)
            char var_a0_2 = 0
            
            if (var_b0 != 0)
                var_b0[1].d -= 1
                
                if (var_b0[1].d == 1)
                    (**var_b0)(var_b0)
                    int32_t rax_20 = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (rax_20 == 1)
                        (*(*var_b0 + 8))(var_b0, 1)
        
        int64_t* rdi_3 = rax_3[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_24 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* var_1a8 = &var_198
        sub_140aca4f0(arg1, &var_1a8)
        
        if (rcx_9 != 0)
            rcx_9[1].d -= 1
            
            if (rcx_9[1].d == 1)
                (**rcx_9)(rcx_9)
                int32_t rax_28 = *(rcx_9 + 0xc)
                *(rcx_9 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rcx_9 + 8))(rcx_9, 1)
        
        int64_t* var_128
        rdi_5 = var_128
        goto label_140b1fec1
    
    _X = arg3.q
    modf(_X, &_Y_1)
    
    if (_X != 0.0)
        goto label_140b1faa5
    
    _X = _Y_1
    
    if (_X > 2147483647.0)
        goto label_140b1faa5
    
    int32_t rcx = int.d(fconvert.t(_Y))
    int32_t var_1d8
    int32_t* var_1b0 = &var_1d8
    var_1d8 = rcx
    int32_t var_1d4_1 = int.d(_X)
    sub_140b07c30(arg1, &var_1b0)
__security_check_cookie(rax_1 ^ &var_208)
return arg1
