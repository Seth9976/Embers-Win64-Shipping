// 函数: sub_1419dda50
// 地址: 0x1419dda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* r14 = arg4
void*** rax_2 = sub_140a82f30(0x28, 8)
*rax_2 = &data_142ec17c8
*(rax_2 + 8) = *arg3
int128_t zmm1 = arg3[1]
*rax_2 = &data_142fe5e78
*(rax_2 + 0x18) = zmm1
void*** var_78 = rax_2
int64_t (* var_88)(int64_t* arg1)
int64_t (* rax_3)(int64_t* arg1) = var_88

if (rax_2 != -8)
    rax_3 = sub_1419e0d60

int64_t (* var_88_1)(int64_t* arg1) = rax_3
void*** rax_4 = sub_140bbedd0(r14)
void* r15 = &rax_4[2]
void* var_138 = r15
void*** var_130 = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rax_7 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*rax_4)[1](rax_4, 1)
    
    r15 = var_138

char var_128 = 1
void* var_b0 = r15

if (rax_4 != 0)
    rax_4[1].d += 1
    r15 = var_138

int128_t var_68

if (arg2 s>= 0)
    int128_t var_58
    
    if (arg2 s<= 1)
        int32_t rax_41 = 2
        
        if (arg2 == 0)
            rax_41 = 0xff
        
        int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
        int64_t* lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue_2, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        void*** r14_2 = lpTlsValue[1]
        int32_t rcx_27
        
        if (r14_2 != 0)
            rcx_27 = lpTlsValue[2].d
        else
            r14_2 = *lpTlsValue
            
            if (r14_2 == 0)
                void*** rax_42 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_42
                r14_2 = rax_42
                
                if (rax_42 == 0)
                    int64_t* rax_43 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_43
                    int64_t i_1 = 0x1f
                    int64_t* rcx_28
                    int64_t i
                    
                    do
                        rcx_28 = &rax_43[0x20]
                        *rax_43 = rcx_28
                        rax_43 = rcx_28
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    *rcx_28 = 0
                    r14_2 = lpTlsValue[1]
                
                rcx_27 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rcx_27 = 0x20
                lpTlsValue[1] = r14_2
                lpTlsValue[2].d = 0x20
                *lpTlsValue = 0
        
        lpTlsValue[1] = *r14_2
        lpTlsValue[2].d = rcx_27 - 1
        r14_2[1].d = 0xff
        *r14_2 = &data_142d40498
        int64_t var_98_1 = 0
        int64_t var_90_1 = 0
        *(r14_2 + 0xc) = 1
        *r14_2 = &data_143013f40
        r14_2[0xe].b = 0
        r14_2[0xf] = 0
        r14_2[2] = var_88_1
        r14_2[4] = var_78
        int128_t zmm0_1 = var_68
        var_78 = nullptr
        int64_t* var_b8 = nullptr
        *(r14_2 + 0x30) = zmm0_1
        int64_t var_138_3 = 0
        int64_t var_c0_1 = 0
        *(r14_2 + 0x40) = var_58
        int64_t (* rax_48)(int64_t* arg1) = var_88_1
        
        if (r14_2[2] != 0)
            rax_48 = nullptr
        
        var_88_1 = rax_48
        void*** rax_49 = var_130
        r14_2[0xa] = r15
        r14_2[0xb] = rax_49
        var_130 = nullptr
        sub_1405aeff0(&var_130, &var_b8)
        int64_t* rcx_30 = var_b8
        
        if (rcx_30 != 0)
            rcx_30[1].d -= 1
            
            if (rcx_30[1].d == 1)
                int64_t* rbx_6 = var_b8
                (**rbx_6)(rbx_6)
                int32_t rax_52 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_52 == 1)
                    int64_t* rcx_32 = var_b8
                    (*(*rcx_32 + 8))(rcx_32, 1)
        
        r14_2[0xc].b = var_128
        r14_2[0xd].d = rax_41
        int64_t* rdi_3 = r14_2[0xf]
        
        if (rdi_3 != 0)
            rdi_3[9].d += 1
        
        sub_140bd0840(r14_2, nullptr, 0xff, 1)
        
        if (rdi_3 != 0)
            rdi_3[9].d -= 1
            
            if (rdi_3[9].d == 1)
                sub_140a2f6e0(rdi_3)
        
        r14 = arg4
    else if (arg2 == 2)
        char rax_20
        int128_t zmm1_2
        rax_20, zmm1_2 = sub_140a54810()
        
        if (rax_20 == 0)
            void*** rcx_21 = &var_68
            
            if (var_78 != 0)
                rcx_21 = var_78
            
            *(r15 + 0x80) = var_88_1((*rcx_21)[1](rcx_21))
            sub_1405fc0f0(r15, zmm1_2, arg5, arg6)
        else
            CRITICAL_SECTION* var_108
            sub_1405eb890(&var_108)
            void*** rax_21 = j_sub_140a82f30(0x80)
            int64_t* var_100
            int64_t* rdi_2 = var_100
            void*** r14_1 = rax_21
            CRITICAL_SECTION* rbx_4
            
            if (rax_21 == 0)
                r14_1 = nullptr
                rbx_4 = var_108
            else
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                    r15 = var_138
                    rdi_2 = var_100
                
                *r14_1 = &data_143013f50
                r14_1[2] = var_88_1
                r14_1[4] = var_78
                int128_t zmm0_3 = var_68
                var_78 = nullptr
                int64_t* var_c8 = nullptr
                *(r14_1 + 0x30) = zmm0_3
                int64_t var_138_2 = 0
                int64_t var_d0_1 = 0
                *(r14_1 + 0x40) = var_58
                int64_t (* rax_24)(int64_t* arg1) = var_88_1
                
                if (r14_1[2] != 0)
                    rax_24 = nullptr
                
                var_88_1 = rax_24
                void*** rax_25 = var_130
                r14_1[0xa] = r15
                r14_1[0xb] = rax_25
                var_130 = nullptr
                sub_1405aeff0(&var_130, &var_c8)
                int64_t* rcx_12 = var_c8
                
                if (rcx_12 != 0)
                    rcx_12[1].d -= 1
                    
                    if (rcx_12[1].d == 1)
                        int64_t* rbx_3 = var_c8
                        (**rbx_3)(rbx_3)
                        int32_t rax_28 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_28 == 1)
                            int64_t* rcx_14 = var_c8
                            (*(*rcx_14 + 8))(rcx_14, 1)
                    
                    rdi_2 = var_100
                
                rbx_4 = var_108
                r14_1[0xc].b = var_128
                r14_1[0xd] = rbx_4
                r14_1[0xe] = rdi_2
            
            int16_t* var_a8
            sub_140a2e390(&var_a8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_4 = &data_142d40450
            int32_t var_a0
            
            if (var_a0 != 0)
                rdx_4 = var_a8
            
            void*** rax_32
            int128_t zmm1_4
            rax_32, zmm1_4 = sub_140a6e140(r14_1, rdx_4, 0, 0, -1, 0)
            rbx_4->__offset(0x80).q = rax_32
            sub_1405fc0f0(rbx_4, zmm1_4, arg5, arg6)
            int16_t* rcx_18 = var_a8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rax_35 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*var_100 + 8))(var_100, 1)
            
            r14 = arg4
    else if (arg2 == 3)
        void*** rax_9 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** rdi_1 = rax_9
        
        if (rax_9 == 0)
            rdi_1 = nullptr
        else
            int64_t* var_d8 = nullptr
            *rdi_1 = &data_143013f80
            rdi_1[2] = var_88_1
            rdi_1[4] = var_78
            var_78 = nullptr
            int64_t var_138_1 = 0
            *(rdi_1 + 0x30) = var_68
            int64_t var_e0_1 = 0
            *(rdi_1 + 0x40) = var_58
            int64_t (* rax_12)(int64_t* arg1) = var_88_1
            
            if (rdi_1[2] != 0)
                rax_12 = nullptr
            
            var_88_1 = rax_12
            void*** rax_13 = var_130
            rdi_1[0xa] = r15
            rdi_1[0xb] = rax_13
            var_130 = nullptr
            sub_1405aeff0(&var_130, &var_d8)
            int64_t* rcx_6 = var_d8
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    int64_t* rbx_2 = var_d8
                    (**rbx_2)(rbx_2)
                    int32_t rax_16 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        int64_t* rcx_8 = var_d8
                        (*(*rcx_8 + 8))(rcx_8, 1)
            
            rdi_1[0xc].b = var_128
        
        int64_t* rcx_9 = data_143db7ac8
        (*(*rcx_9 + 0x10))(rcx_9, rdi_1)

void** result = arg1
void*** rcx_35 = var_130
*result = var_b0
result[1] = rax_4

if (rcx_35 != 0)
    rcx_35[1].d -= 1
    
    if (rcx_35[1].d == 1)
        void*** rbx_7 = var_130
        (**rbx_7)(rbx_7)
        int32_t rsi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rsi_1 == 1)
            void*** rcx_37 = var_130
            (*rcx_37)[1](rcx_37, zx.q(rsi_1))
        
        result = arg1

if (var_88_1 != 0)
    void*** rcx_38 = &var_68
    
    if (var_78 != 0)
        rcx_38 = var_78
    
    (*rcx_38)[2](rcx_38)

if (*r14 != 0)
    void* rdx_8 = r14[2]
    void* rcx_39 = &r14[4]
    
    if (rdx_8 != 0)
        rcx_39 = rdx_8
    
    int64_t rdx_9 = *rcx_39
    (*(rdx_9 + 0x10))(rcx_39, rdx_9)

__security_check_cookie(rax_1 ^ &var_168)
return result
