// 函数: sub_140a22e70
// 地址: 0x140a22e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t result
int128_t zmm6

if (arg1[8].d == 0)
label_140a22fa7:
    int128_t var_48_1 = zmm6
    zmm6 = 0x3a83126f
    int32_t i
    bool z_1
    
    do
        int64_t rax_6 = 0
        
        if (0 == arg1[1])
            arg1[1] = 0
        else
            rax_6 = arg1[1]
        
        uint64_t r12_2 = rax_6 u>> 0x1a
        i = rax_6.d & 0x3ffffff
        
        if (((rax_6 & 0xfffffffffc000000) + 0x8000000) u>> 0x1a u< r12_2)
            zmm6 = sub_140b73230(zmm6)
        
        uint64_t var_d8 = zx.q(r12_2.d) & 1
        void var_e8
        int64_t rcx_6 = sub_140a220b0(&var_e8, &var_d8) << 0x1a
            | (((rax_6 & 0xfffffffffc000000) + 0x8000000) & 0xfffffffff8000000)
        
        if (rax_6 == arg1[1])
            arg1[1] = rcx_6
            z_1 = true
        else
            arg1[1]
            z_1 = false
    while (not(z_1))
    
    while (i != 0)
        int64_t rbx_3 = sx.q(arg2[1].d)
        uint64_t rcx_9 = (zx.q(i) & 0x3fff) * 3
        int64_t rax_14 = *(&data_143cf0bf8 + (zx.q(i) u>> 0xe << 3))
        int64_t r15_5 = *(rax_14 + (rcx_9 << 3) + 8)
        int32_t rax_15 = (rbx_3 + 1).d
        arg2[1].d = rax_15
        
        if (rax_15 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        int32_t i_4 = i
        *(*arg2 + (rbx_3 << 3)) = r15_5
        i = *(rax_14 + (rcx_9 << 3) + 0x10)
        sub_140a24050(i_4)
    
    int32_t rax_17 = arg2[1].d
    int64_t rbx_4 = sx.q(rax_17 - 1)
    
    if (rax_17 - 1 s>= 0)
        int64_t temp4_1
        
        do
            void* rdx_3 = *(*arg2 + (rbx_4 << 3))
            int32_t rax_20 = *(rdx_3 + 0xc)
            *(rdx_3 + 0xc) -= 1
            
            if (rax_20 == 1)
                int64_t* rcx_11 = data_143cf8c40
                (**rcx_11)(rcx_11, rdx_3, zx.q(*(rdx_3 + 8)), zx.q(arg3))
            
            temp4_1 = rbx_4
            rbx_4 -= 1
        while (temp4_1 - 1 s>= 0)
    
    result = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (result s< 0 && result != 0)
        result = sub_1405c5570(arg2, 0)
else
    int32_t i_8 = 0
    int32_t var_8c_1 = 4
    int128_t* rcx = nullptr
    int32_t i_6 = 0
    int128_t* var_98_1 = nullptr
    int128_t var_b8
    
    if (&arg1[3] != &var_b8)
        int128_t zmm4 = *(arg1 + 0x18)
        int128_t zmm3 = *(arg1 + 0x28)
        int128_t zmm2 = *(arg1 + 0x38)
        *(arg1 + 0x18) = var_b8
        int128_t zmm0 = var_98_1.o
        var_98_1.o = zmm2
        i_6 = i_8
        rcx = var_98_1
        int128_t var_a8
        *(arg1 + 0x28) = var_a8
        *(arg1 + 0x38) = zmm0
        int128_t var_88_1 = zmm4
        int128_t var_78_1 = zmm3
        int128_t var_68_1 = zmm2
        var_b8 = zmm4
        int128_t var_a8_1 = zmm3
    
    if (data_14399e5d0 != 0)
        int128_t* rdx = &var_b8
        
        if (rcx != 0)
            rdx = rcx
        
        void* r8 = rdx + (sx.q(i_6) << 3)
        
        if (rdx != r8)
            do
                void* rcx_1 = *rdx
                int64_t rax_4 = 0
                
                if (0 == *(rcx_1 + 8))
                    *(rcx_1 + 8) = 0
                else
                    rax_4 = *(rcx_1 + 8)
                
                if (((rax_4 u>> 0x1a).b & 1) == 0)
                    goto label_140a23121
                
                rdx += 8
            while (rdx != r8)
            
            i_6 = i_8
            rcx = var_98_1
        
        int128_t* rbx_1 = &var_b8
        
        if (rcx != 0)
            rbx_1 = rcx
        
        if (i_6 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_2 = *rbx_1
                
                if (rcx_2 != 0)
                    zmm6 = sub_140a2f7d0(rcx_2)
                
                rbx_1 += 8
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            rcx = var_98_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        goto label_140a22fa7
    
label_140a23121:
    int32_t rsi_2 = 0x6ff
    
    if (data_143cf0850 == 0)
        rsi_2 = *(arg1 + 0x4c)
    
    int64_t* var_d0_1 = arg1
    arg1[9].d += 1
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
    
    void*** rdi_1 = lpTlsValue[1]
    int32_t rcx_18
    
    if (rdi_1 != 0)
        rcx_18 = lpTlsValue[2].d
    else
        void*** rax_22 = *lpTlsValue
        
        if (rax_22 == 0)
            int64_t rax_23 = sub_14059e7c0(&data_143cf0958)
            lpTlsValue[1] = rax_23
            
            if (rax_23 == 0)
                int64_t* rax_24 = sub_140a82f70(0x2000, 0)
                lpTlsValue[1] = rax_24
                int64_t i_5 = 0x1f
                int64_t* rcx_19
                int64_t i_2
                
                do
                    rcx_19 = &rax_24[0x20]
                    *rax_24 = rcx_19
                    rax_24 = rcx_19
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                *rcx_19 = 0
            
            rdi_1 = lpTlsValue[1]
            rcx_18 = 0x20
            lpTlsValue[2].d = 0x20
        else
            rcx_18 = 0x20
            lpTlsValue[1] = rax_22
            lpTlsValue[2].d = 0x20
            rdi_1 = rax_22
            *lpTlsValue = 0
    
    lpTlsValue[1] = *rdi_1
    lpTlsValue[2].d = rcx_18 - 1
    int64_t* var_c8_1 = arg1
    arg1[9].d += 1
    rdi_1[1].d = 0xff
    *rdi_1 = &data_142d40498
    *(rdi_1 + 0xc) = i_8 + 1
    *rdi_1 = &data_142e04a50
    *(rdi_1 + 0x14) = 0
    rdi_1[3] = arg1
    sub_140a2f7d0(arg1)
    rdi_1[2].d = rsi_2
    int64_t* rbx_5 = rdi_1[3]
    
    if (rbx_5 != 0)
        rbx_5[9].d += 1
    
    result = sub_1408c3b70(rdi_1, &var_b8, arg3, 1)
    
    if (rbx_5 != 0)
        result = sub_140a2f7d0(rbx_5)
    
    int128_t* rcx_24 = var_98_1
    int128_t* rbx_6 = &var_b8
    int32_t i_7 = i_8
    
    if (rcx_24 != 0)
        rbx_6 = rcx_24
    
    if (i_7 != 0)
        int32_t i_3
        
        do
            int64_t* rcx_23 = *rbx_6
            
            if (rcx_23 != 0)
                result = sub_140a2f7d0(rcx_23)
            
            rbx_6 += 8
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        rcx_24 = var_98_1
    
    if (rcx_24 != 0)
        result = sub_140a74f90(rcx_24)
__security_check_cookie(rax_1 ^ &var_108)
return result
