// 函数: sub_1418158b0
// 地址: 0x1418158b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t zmm0 = *arg3
void** const var_68 = &data_142d5ecb0
char* (* var_88)(char* arg1, int64_t* arg2) = sub_14182a5b0
int64_t* r13 = arg4
void*** var_78 = nullptr
void*** rax_2 = sub_14181cee0(arg4)
void* r14 = &rax_2[2]
void* var_138 = r14
void*** var_130 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rax_5 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*rax_2)[1](rax_2, 1)
    
    r14 = var_138

char var_128 = 1
void* var_b0 = r14

if (rax_2 != 0)
    rax_2[1].d += 1
    r14 = var_138

if (arg2 s>= 0)
    if (arg2 s<= 1)
        int32_t r13_1 = 2
        
        if (arg2 == 0)
            r13_1 = 0xff
        
        int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
        int64_t* lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        void*** rsi_3 = lpTlsValue[1]
        int32_t rcx_24
        
        if (rsi_3 != 0)
            rcx_24 = lpTlsValue[2].d
        else
            rsi_3 = *lpTlsValue
            
            if (rsi_3 == 0)
                void*** rax_35 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_35
                rsi_3 = rax_35
                
                if (rax_35 == 0)
                    int64_t* rax_36 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_36
                    int64_t i_1 = 0x1f
                    int64_t* rcx_25
                    int64_t i
                    
                    do
                        rcx_25 = &rax_36[0x20]
                        *rax_36 = rcx_25
                        rax_36 = rcx_25
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    *rcx_25 = i_1
                    rsi_3 = lpTlsValue[1]
                
                rcx_24 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rcx_24 = 0x20
                lpTlsValue[1] = rsi_3
                lpTlsValue[2].d = 0x20
                *lpTlsValue = 0
        
        lpTlsValue[1] = *rsi_3
        lpTlsValue[2].d = rcx_24 - 1
        rsi_3[1].d = 0xff
        *rsi_3 = &data_142d40498
        int64_t var_98_1 = 0
        int64_t var_90_1 = 0
        *(rsi_3 + 0xc) = 1
        *rsi_3 = &data_142fe5c28
        rsi_3[0xe].b = 0
        rsi_3[0xf] = 0
        rsi_3[2] = var_88
        rsi_3[4] = var_78
        int128_t zmm0_1 = var_68.o
        int64_t* var_c0 = nullptr
        var_138 = nullptr
        *(rsi_3 + 0x30) = zmm0_1
        int64_t var_c8_1 = 0
        *(rsi_3 + 0x40) = zmm0
        char* (* rax_41)(char* arg1, int64_t* arg2) = var_88
        
        if (rsi_3[2] != 0)
            rax_41 = nullptr
        
        var_88 = rax_41
        void*** rax_42 = var_130
        var_130 = nullptr
        rsi_3[0xa] = r14
        rsi_3[0xb] = rax_42
        sub_1405aeff0(&var_130, &var_c0)
        int64_t* rcx_27 = var_c0
        
        if (rcx_27 != 0)
            rcx_27[1].d -= 1
            
            if (rcx_27[1].d == 1)
                int64_t* rbx_6 = var_c0
                (**rbx_6)(rbx_6)
                int32_t rax_45 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_45 == 1)
                    int64_t* rcx_29 = var_c0
                    (*(*rcx_29 + 8))(rcx_29, 1)
        
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
        if (sub_140a54810() == 0)
            sub_14181d490(&var_138, &var_88, arg5, arg6)
        else
            CRITICAL_SECTION* var_110
            sub_1405eb890(&var_110)
            void*** rax_19 = j_sub_140a82f30(0x80)
            int64_t* var_108
            int64_t* rbx_3 = var_108
            void*** rsi_2 = rax_19
            CRITICAL_SECTION* r14_1
            
            if (rax_19 == 0)
                r14_1 = var_110
                rsi_2 = nullptr
            else
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    r14 = var_138
                    rbx_3 = var_108
                
                int64_t* var_d0 = nullptr
                *rsi_2 = &data_142fe5c38
                rsi_2[2] = var_88
                rsi_2[4] = var_78
                int128_t zmm0_3 = var_68.o
                var_138 = nullptr
                int64_t var_d8_1 = 0
                *(rsi_2 + 0x30) = zmm0_3
                *(rsi_2 + 0x40) = zmm0
                char* (* rax_22)(char* arg1, int64_t* arg2) = var_88
                
                if (rsi_2[2] != 0)
                    rax_22 = nullptr
                
                var_88 = rax_22
                void*** rax_23 = var_130
                rsi_2[0xa] = r14
                rsi_2[0xb] = rax_23
                var_130 = nullptr
                sub_1405aeff0(&var_130, &var_d0)
                int64_t* rcx_11 = var_d0
                
                if (rcx_11 != 0)
                    rcx_11[1].d -= 1
                    
                    if (rcx_11[1].d == 1)
                        int64_t* rbx_4 = var_d0
                        (**rbx_4)(rbx_4)
                        int32_t rax_26 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_26 == 1)
                            int64_t* rcx_13 = var_d0
                            (*(*rcx_13 + 8))(rcx_13, 1)
                    
                    rbx_3 = var_108
                
                r14_1 = var_110
                rsi_2[0xc].b = var_128
                rsi_2[0xd] = r14_1
                rsi_2[0xe] = rbx_3
            
            int16_t* var_a8
            sub_140a2e390(&var_a8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_4 = &data_142d40450
            int32_t var_a0
            
            if (var_a0 != 0)
                rdx_4 = var_a8
            
            void*** rax_30
            int128_t zmm1_3
            rax_30, zmm1_3 = sub_140a6e140(rsi_2, rdx_4, 0, 0, -1, 0)
            r14_1->__offset(0x80).q = rax_30
            sub_1405fc0f0(r14_1, zmm1_3, arg5, arg6)
            int16_t* rcx_17 = var_a8
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**var_108)(var_108)
                    int32_t rax_33 = *(var_108 + 0xc)
                    *(var_108 + 0xc) -= 1
                    
                    if (rax_33 == 1)
                        (*(*var_108 + 8))(var_108, 1)
    else if (arg2 == 3)
        void*** rax_7 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** rsi_1 = rax_7
        
        if (rax_7 == 0)
            rsi_1 = nullptr
        else
            int64_t* var_e0 = nullptr
            *rsi_1 = &data_142fe5c68
            rsi_1[2] = var_88
            rsi_1[4] = var_78
            int128_t zmm0_2 = var_68.o
            var_138 = nullptr
            int64_t var_e8_1 = 0
            *(rsi_1 + 0x30) = zmm0_2
            *(rsi_1 + 0x40) = zmm0
            char* (* rax_10)(char* arg1, int64_t* arg2) = var_88
            
            if (rsi_1[2] != 0)
                rax_10 = nullptr
            
            var_88 = rax_10
            void*** rax_11 = var_130
            rsi_1[0xa] = r14
            rsi_1[0xb] = rax_11
            var_130 = nullptr
            sub_1405aeff0(&var_130, &var_e0)
            int64_t* rcx_5 = var_e0
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    int64_t* rbx_2 = var_e0
                    (**rbx_2)(rbx_2)
                    int32_t rax_14 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        int64_t* rcx_7 = var_e0
                        (*(*rcx_7 + 8))(rcx_7, 1)
            
            rsi_1[0xc].b = var_128
        
        int64_t* rcx_8 = data_143db7ac8
        (*(*rcx_8 + 0x10))(rcx_8, rsi_1)

void** result = arg1
void*** rcx_32 = var_130
*result = var_b0
result[1] = rax_2

if (rcx_32 != 0)
    rcx_32[1].d -= 1
    
    if (rcx_32[1].d == 1)
        void*** rbx_7 = var_130
        (**rbx_7)(rbx_7)
        int32_t rdi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void*** rcx_34 = var_130
            (*rcx_34)[1](rcx_34, zx.q(rdi_1))
        
        result = arg1

if (var_88 != 0)
    void** const* rcx_35 = &var_68
    
    if (var_78 != 0)
        rcx_35 = var_78
    
    (*rcx_35)[2](rcx_35)

if (*r13 != 0)
    void* rdx_9 = r13[2]
    void* rcx_36 = &r13[4]
    
    if (rdx_9 != 0)
        rcx_36 = rdx_9
    
    int64_t rdx_10 = *rcx_36
    (*(rdx_10 + 0x10))(rcx_36, rdx_10)

__security_check_cookie(rax_1 ^ &var_168)
return result
