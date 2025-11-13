// 函数: sub_141856320
// 地址: 0x141856320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t var_60 = *arg3
int64_t* r12 = arg4
void* rax_3 = arg3[1]
void*** var_78 = nullptr

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t var_50 = arg3[2]
void** const var_68 = &data_142fe8548
int64_t (* var_88)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
    int128_t arg4 @ zmm3) = j_sub_141869da0
void*** rax_5 = sub_1405eac40(arg4)
void* r14 = &rax_5[2]
void* var_148 = r14
void*** var_140 = rax_5

if (rax_5 != 0)
    rax_5[1].d += 1
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t rax_8 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*rax_5)[1](rax_5, 1)
    
    r14 = var_148

char var_138 = 1
void* var_c0 = r14

if (rax_5 != 0)
    rax_5[1].d += 1
    r14 = var_148

if (arg2 s>= 0)
    if (arg2 s<= 1)
        void var_a8
        void** rax_39 = sub_1405f45f0(&var_a8, nullptr, 0xff)
        void** rbx_6 = rax_39
        void* r12_1 = *rax_39
        int32_t rax_40 = 2
        
        if (arg2 == 0)
            rax_40 = 0xff
        
        *(r12_1 + 0x10) = var_88
        *(r12_1 + 0x20) = var_78
        int128_t zmm0_3 = var_68.o
        var_140 = nullptr
        int64_t* var_c8 = nullptr
        *(r12_1 + 0x30) = zmm0_3
        int64_t var_148_3 = 0
        int64_t var_d0_1 = 0
        *(r12_1 + 0x40) = rax_3.o
        int64_t (* rax_43)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
            int128_t arg4 @ zmm3) = var_88
        
        if (*(r12_1 + 0x10) != 0)
            rax_43 = nullptr
        
        var_88 = rax_43
        *(r12_1 + 0x50) = r14
        *(r12_1 + 0x58) = rax_5
        sub_1405aeff0(&var_140, &var_c8)
        int64_t* rcx_25 = var_c8
        
        if (rcx_25 != 0)
            rcx_25[1].d -= 1
            
            if (rcx_25[1].d == 1)
                int64_t* rbx_7 = var_c8
                (**rbx_7)(rbx_7)
                int32_t rax_46 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_46 == 1)
                    int64_t* rcx_27 = var_c8
                    (*(*rcx_27 + 8))(rcx_27, 1)
                
                rbx_6 = rax_39
        
        *(r12_1 + 0x60) = 0
        *(r12_1 + 0x68) = rax_40
        void* rcx_28 = *rbx_6
        int64_t* rsi_3 = *(rcx_28 + 0x78)
        
        if (rsi_3 != 0)
            rsi_3[9].d += 1
        
        sub_1405ff810(rcx_28, rbx_6[1], rbx_6[2].d, 1)
        
        if (rsi_3 != 0)
            rsi_3[9].d -= 1
            
            if (rsi_3[9].d == 1)
                sub_140a2f6e0(rsi_3)
        
        r12 = arg4
    else if (arg2 == 2)
        char rax_20
        int128_t zmm1_2
        rax_20, zmm1_2 = sub_140a54810()
        
        if (rax_20 == 0)
            void*** rcx_20 = &var_68
            
            if (var_78 != 0)
                rcx_20 = var_78
            
            var_88((*rcx_20)[1](rcx_20))
            *(r14 + 0x80) = 0
            sub_1405fc0f0(r14, zmm1_2, arg5, arg6)
        else
            CRITICAL_SECTION* var_120
            sub_1405eb890(&var_120)
            void*** rax_21 = j_sub_140a82f30(0x80)
            void*** rsi_2 = rax_21
            int64_t* var_118
            int64_t* rbx_3
            CRITICAL_SECTION* r14_1
            
            if (rax_21 == 0)
                r14_1 = var_120
                rsi_2 = nullptr
                rbx_3 = var_118
            else
                rbx_3 = var_118
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    r14 = var_148
                    rbx_3 = var_118
                
                *rsi_2 = &data_142d5ec40
                rsi_2[2] = var_88
                rsi_2[4] = var_78
                int128_t zmm0_2 = var_68.o
                int64_t* var_d8 = nullptr
                int64_t var_148_2 = 0
                *(rsi_2 + 0x30) = zmm0_2
                int64_t var_e0_1 = 0
                *(rsi_2 + 0x40) = rax_3.o
                int64_t (* rax_24)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
                    int128_t arg4 @ zmm3) = var_88
                
                if (rsi_2[2] != 0)
                    rax_24 = nullptr
                
                var_88 = rax_24
                void*** rax_25 = var_140
                var_140 = nullptr
                rsi_2[0xa] = r14
                rsi_2[0xb] = rax_25
                sub_1405aeff0(&var_140, &var_d8)
                int64_t* rcx_11 = var_d8
                
                if (rcx_11 != 0)
                    rcx_11[1].d -= 1
                    
                    if (rcx_11[1].d == 1)
                        int64_t* rbx_4 = var_d8
                        (**rbx_4)(rbx_4)
                        int32_t rax_28 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_28 == 1)
                            int64_t* rcx_13 = var_d8
                            (*(*rcx_13 + 8))(rcx_13, 1)
                    
                    rbx_3 = var_118
                
                r14_1 = var_120
                rsi_2[0xc].b = 0
                rsi_2[0xd] = r14_1
                rsi_2[0xe] = rbx_3
            
            int16_t* var_b8
            sub_140a2e390(&var_b8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_4 = &data_142d40450
            int32_t var_b0
            
            if (var_b0 != 0)
                rdx_4 = var_b8
            
            void*** rax_31
            int128_t zmm1_4
            rax_31, zmm1_4 = sub_140a6e140(rsi_2, rdx_4, 0, 0, -1, 0)
            r14_1->__offset(0x80).q = rax_31
            sub_1405fc0f0(r14_1, zmm1_4, arg5, arg6)
            int16_t* rcx_17 = var_b8
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**var_118)(var_118)
                    int32_t rax_34 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (rax_34 == 1)
                        (*(*var_118 + 8))(var_118, 1)
    else if (arg2 == 3)
        void*** rax_10 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** rsi_1 = rax_10
        
        if (rax_10 == 0)
            rsi_1 = nullptr
        else
            int64_t* var_e8 = nullptr
            *rsi_1 = &data_142d5ec70
            rsi_1[2] = var_88
            rsi_1[4] = var_78
            int64_t var_148_1 = 0
            int64_t var_f0_1 = 0
            *(rsi_1 + 0x30) = var_68.o
            *(rsi_1 + 0x40) = rax_3.o
            int64_t (* rax_13)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
                int128_t arg4 @ zmm3) = var_88
            
            if (rsi_1[2] != 0)
                rax_13 = nullptr
            
            var_88 = rax_13
            void*** rax_14 = var_140
            rsi_1[0xa] = r14
            rsi_1[0xb] = rax_14
            var_140 = nullptr
            sub_1405aeff0(&var_140, &var_e8)
            int64_t* rcx_5 = var_e8
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    int64_t* rbx_2 = var_e8
                    (**rbx_2)(rbx_2)
                    int32_t rax_17 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_17 == 1)
                        int64_t* rcx_7 = var_e8
                        (*(*rcx_7 + 8))(rcx_7, 1)
            
            rsi_1[0xc].b = 0
        
        int64_t* rcx_8 = data_143db7ac8
        (*(*rcx_8 + 0x10))(rcx_8, rsi_1)

void*** rcx_30 = var_140
*arg1 = var_c0
arg1[1] = rax_5

if (rcx_30 != 0)
    rcx_30[1].d -= 1
    
    if (rcx_30[1].d == 1)
        void*** rbx_8 = var_140
        (**rbx_8)(rbx_8)
        int32_t rdi_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void*** rcx_32 = var_140
            (*rcx_32)[1](rcx_32, zx.q(rdi_1))

if (var_88 != 0)
    void** const* rcx_33 = &var_68
    
    if (var_78 != 0)
        rcx_33 = var_78
    
    (*rcx_33)[2](rcx_33)

if (*r12 != 0)
    void* rdx_8 = r12[2]
    void* rcx_34 = &r12[4]
    
    if (rdx_8 != 0)
        rcx_34 = rdx_8
    
    int64_t rdx_9 = *rcx_34
    (*(rdx_9 + 0x10))(rcx_34, rdx_9)

__security_check_cookie(rax_1 ^ &var_178)
return arg1
