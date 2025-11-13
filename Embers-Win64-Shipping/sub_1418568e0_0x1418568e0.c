// 函数: sub_1418568e0
// 地址: 0x1418568e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void** const var_68 = &data_142fe8568
int64_t var_60 = *arg3
int64_t* r13 = arg4
void*** var_78 = nullptr
int128_t var_58
sub_140596d10(&var_58, &arg3[1])
var_68 = &data_142fe8588
int64_t* (* var_88)(int64_t* arg1, int64_t* arg2) = sub_14187aed0
void*** rax_3 = sub_14181d010(r13)
void* r14 = &rax_3[2]
void* var_138 = r14
void*** var_130 = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t rax_6 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*rax_3)[1](rax_3, 1)
    
    r14 = var_138

char var_128 = 1
void* var_b0 = r14

if (rax_3 != 0)
    rax_3[1].d += 1
    r14 = var_138

if (arg2 s>= 0)
    if (arg2 s<= 1)
        int32_t r13_1 = 2
        
        if (arg2 == 0)
            r13_1 = 0xff
        
        void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
        void** lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        void*** rsi_3 = lpTlsValue[1]
        int32_t rcx_25
        
        if (rsi_3 != 0)
            rcx_25 = lpTlsValue[2].d
        else
            void*** rax_36 = *lpTlsValue
            
            if (rax_36 == 0)
                int64_t rax_37 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_37
                
                if (rax_37 == 0)
                    int64_t* rax_38 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_38
                    int64_t i_1 = 0x1f
                    int64_t* rcx_26
                    int64_t i
                    
                    do
                        rcx_26 = &rax_38[0x20]
                        *rax_38 = rcx_26
                        rax_38 = rcx_26
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    *rcx_26 = i_1
                
                rsi_3 = lpTlsValue[1]
                rcx_25 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rcx_25 = 0x20
                *lpTlsValue = rsi_3
                lpTlsValue[2].d = 0x20
                rsi_3 = rax_36
                lpTlsValue[1] = rax_36
        
        lpTlsValue[1] = *rsi_3
        lpTlsValue[2].d = rcx_25 - 1
        rsi_3[1].d = 0xff
        *rsi_3 = &data_142d40498
        int64_t var_98_1 = 0
        int64_t var_90_1 = 0
        *(rsi_3 + 0xc) = 1
        *rsi_3 = &data_142fe5a18
        rsi_3[0xe].b = 0
        rsi_3[0xf] = 0
        rsi_3[2] = var_88
        rsi_3[4] = var_78
        int128_t zmm0_1 = var_68.o
        var_78 = nullptr
        int64_t* var_c0 = nullptr
        *(rsi_3 + 0x30) = zmm0_1
        var_138 = nullptr
        int64_t var_c8_1 = 0
        *(rsi_3 + 0x40) = var_58
        int64_t* (* rax_43)(int64_t* arg1, int64_t* arg2) = var_88
        
        if (rsi_3[2] != 0)
            rax_43 = nullptr
        
        var_88 = rax_43
        void*** rax_44 = var_130
        var_130 = nullptr
        rsi_3[0xa] = r14
        rsi_3[0xb] = rax_44
        sub_1405aeff0(&var_130, &var_c0)
        int64_t* rcx_28 = var_c0
        
        if (rcx_28 != 0)
            rcx_28[1].d -= 1
            
            if (rcx_28[1].d == 1)
                int64_t* rbx_6 = var_c0
                (**rbx_6)(rbx_6)
                int32_t rax_47 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_47 == 1)
                    int64_t* rcx_30 = var_c0
                    (*(*rcx_30 + 8))(rcx_30, 1)
        
        rsi_3[0xc].b = var_128
        rsi_3[0xd].d = r13_1
        int64_t* r14_2 = rsi_3[0xf]
        
        if (r14_2 != 0)
            r14_2[9].d += 1
        
        sub_140bd0840(rsi_3, nullptr, 0xff, 1)
        
        if (r14_2 != 0)
            r14_2[9].d -= 1
            
            if (r14_2[9].d == 1)
                sub_140a2f6e0(r14_2)
        
        r13 = arg4
    else if (arg2 == 2)
        char rax_19
        int128_t zmm1_2
        rax_19, zmm1_2 = sub_140a54810()
        
        if (rax_19 == 0)
            sub_14181d5b0(&var_138, &var_88, arg5, arg6, zmm1_2)
        else
            CRITICAL_SECTION* var_110
            sub_1405eb890(&var_110)
            void*** rax_20 = j_sub_140a82f30(0x80)
            int64_t* var_108
            int64_t* rbx_3 = var_108
            void*** rsi_2 = rax_20
            CRITICAL_SECTION* r14_1
            
            if (rax_20 == 0)
                r14_1 = var_110
                rsi_2 = nullptr
            else
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    r14 = var_138
                    rbx_3 = var_108
                
                int64_t* var_d0 = nullptr
                *rsi_2 = &data_142fe5a28
                rsi_2[2] = var_88
                rsi_2[4] = var_78
                int128_t zmm0_3 = var_68.o
                var_78 = nullptr
                var_138 = nullptr
                *(rsi_2 + 0x30) = zmm0_3
                int64_t var_d8_1 = 0
                *(rsi_2 + 0x40) = var_58
                int64_t* (* rax_23)(int64_t* arg1, int64_t* arg2) = var_88
                
                if (rsi_2[2] != 0)
                    rax_23 = nullptr
                
                var_88 = rax_23
                void*** rax_24 = var_130
                rsi_2[0xa] = r14
                rsi_2[0xb] = rax_24
                var_130 = nullptr
                sub_1405aeff0(&var_130, &var_d0)
                int64_t* rcx_12 = var_d0
                
                if (rcx_12 != 0)
                    rcx_12[1].d -= 1
                    
                    if (rcx_12[1].d == 1)
                        int64_t* rbx_4 = var_d0
                        (**rbx_4)(rbx_4)
                        int32_t rax_27 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_27 == 1)
                            int64_t* rcx_14 = var_d0
                            (*(*rcx_14 + 8))(rcx_14, 1)
                    
                    rbx_3 = var_108
                
                r14_1 = var_110
                rsi_2[0xc].b = var_128
                rsi_2[0xd] = r14_1
                rsi_2[0xe] = rbx_3
            
            int16_t* var_a8
            sub_140a2e390(&var_a8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_5 = &data_142d40450
            int32_t var_a0
            
            if (var_a0 != 0)
                rdx_5 = var_a8
            
            void*** rax_31
            int128_t zmm1_4
            rax_31, zmm1_4 = sub_140a6e140(rsi_2, rdx_5, 0, 0, -1, 0)
            r14_1->__offset(0x80).q = rax_31
            sub_1405fc0f0(r14_1, zmm1_4, arg5, arg6)
            int16_t* rcx_18 = var_a8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**var_108)(var_108)
                    int32_t rax_34 = *(var_108 + 0xc)
                    *(var_108 + 0xc) -= 1
                    
                    if (rax_34 == 1)
                        (*(*var_108 + 8))(var_108, 1)
    else if (arg2 == 3)
        void*** rax_8 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** rsi_1 = rax_8
        
        if (rax_8 == 0)
            rsi_1 = nullptr
        else
            int64_t* var_e0 = nullptr
            *rsi_1 = &data_142fe5a58
            rsi_1[2] = var_88
            rsi_1[4] = var_78
            int128_t zmm0_2 = var_68.o
            var_78 = nullptr
            var_138 = nullptr
            *(rsi_1 + 0x30) = zmm0_2
            int64_t var_e8_1 = 0
            *(rsi_1 + 0x40) = var_58
            int64_t* (* rax_11)(int64_t* arg1, int64_t* arg2) = var_88
            
            if (rsi_1[2] != 0)
                rax_11 = nullptr
            
            var_88 = rax_11
            void*** rax_12 = var_130
            rsi_1[0xa] = r14
            rsi_1[0xb] = rax_12
            var_130 = nullptr
            sub_1405aeff0(&var_130, &var_e0)
            int64_t* rcx_6 = var_e0
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    int64_t* rbx_2 = var_e0
                    (**rbx_2)(rbx_2)
                    int32_t rax_15 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        int64_t* rcx_8 = var_e0
                        (*(*rcx_8 + 8))(rcx_8, 1)
            
            rsi_1[0xc].b = var_128
        
        int64_t* rcx_9 = data_143db7ac8
        (*(*rcx_9 + 0x10))(rcx_9, rsi_1)

void** result = arg1
void*** rcx_33 = var_130
*result = var_b0
result[1] = rax_3

if (rcx_33 != 0)
    rcx_33[1].d -= 1
    
    if (rcx_33[1].d == 1)
        void*** rbx_7 = var_130
        (**rbx_7)(rbx_7)
        int32_t rdi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void*** rcx_35 = var_130
            (*rcx_35)[1](rcx_35, zx.q(rdi_1))
        
        result = arg1

if (var_88 != 0)
    void** const* rcx_36 = &var_68
    
    if (var_78 != 0)
        rcx_36 = var_78
    
    (*rcx_36)[2](rcx_36)

if (*r13 != 0)
    void* rdx_10 = r13[2]
    void* rcx_37 = &r13[4]
    
    if (rdx_10 != 0)
        rcx_37 = rdx_10
    
    int64_t rdx_11 = *rcx_37
    (*(rdx_11 + 0x10))(rcx_37, rdx_11)

__security_check_cookie(rax_1 ^ &var_168)
return result
