// 函数: sub_1407b7d90
// 地址: 0x1407b7d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2

if (**(arg2 + 0x18) == 0)
    int64_t* rax
    rax.b = 0
    return rax

uint64_t rax_1 = sub_140d3c6e0(arg2)

if (rax_1 != 0)
    void* rax_2 = sub_1408727e0()
    
    if (sub_140be1130(*(rax_1 + 0x10), rax_2).b != 0)
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        uint128_t var_68
        
        while (true)
            void* rdx_1 = *rsi[3]
            
            if (rdx_1 == 0)
                break
            
            int32_t rdi_1 = *(rdx_1 + 0x20)
            int64_t rcx_3 = rsi[3]
            var_68 = *(rdx_1 + 8)
            int64_t var_48_1 = 0
            uint128_t zmm0_1 = zx.o(*(rdx_1 + 0x18))
            rsi[3] = rdx_1
            int64_t var_40_1 = 0
            *(rdx_1 + 8) = var_48_1.o
            int32_t var_30_1 = 0
            *(rdx_1 + 0x18) = 0
            *(rdx_1 + 0x20) = 0
            j_sub_140a74f90(rcx_3)
            int64_t rbx_1 = sx.q(var_50_1.d)
            int32_t rax_4 = (rbx_1 + 1).d
            var_50_1.d = rax_4
            
            if (rax_4 s> var_50_1:4.d)
                sub_1405c50f0(&var_58)
            
            int64_t rax_5 = var_58
            uint128_t* rcx_5 = rbx_1 * 0x1c
            *(rcx_5 + rax_5) = var_68
            *(rcx_5 + rax_5 + 0x10) = zmm0_1.q
            *(rcx_5 + rax_5 + 0x18) = rdi_1
        
        void* rax_6 = sub_140852300(arg3)
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
        
        int64_t* rdi_2 = lpTlsValue[1]
        int32_t rcx_10
        
        if (rdi_2 != 0)
            rcx_10 = lpTlsValue[2].d
        else
            rdi_2 = *lpTlsValue
            
            if (rdi_2 == 0)
                int64_t* rax_7 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_7
                rdi_2 = rax_7
                
                if (rax_7 == 0)
                    int64_t* rax_8 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_8
                    int64_t i_1 = 0x1f
                    int64_t* rcx_11
                    int64_t i
                    
                    do
                        rcx_11 = &rax_8[0x20]
                        *rax_8 = rcx_11
                        rax_8 = rcx_11
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    *rcx_11 = 0
                    rdi_2 = lpTlsValue[1]
                
                rcx_10 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rcx_10 = 0x20
                lpTlsValue[1] = rdi_2
                lpTlsValue[2].d = 0x20
                *lpTlsValue = 0
        
        lpTlsValue[1] = *rdi_2
        lpTlsValue[2].d = rcx_10 - 1
        rdi_2[1].d = 0xff
        *rdi_2 = &data_142d40498
        uint64_t arg_10 = 0
        var_68.q = 0
        *(rdi_2 + 0xc) = 1
        *rdi_2 = &data_142db0ad8
        rdi_2[6].b = 0
        rdi_2[7] = 0
        int64_t var_70
        sub_140d3a3a0(&var_70, rax_6)
        int64_t rbx_2 = var_70
        int64_t r14_1 = sx.q(var_50_1.d)
        rdi_2[2] = *rsi
        rdi_2[3] = 0
        rdi_2[4].d = r14_1.d
        
        if (r14_1.d != 0)
            sub_1405c4b20(&rdi_2[3], r14_1.d, 0)
            memcpy(rdi_2[3], var_58, r14_1.d * 0x1c)
        else
            *(rdi_2 + 0x24) = 0
        
        rdi_2[5] = rbx_2
        int64_t* rbx_3 = rdi_2[7]
        int64_t* var_78_1 = rbx_3
        void* rsi_1 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rsi_1 += 1
            rbx_3 = var_78_1
        
        sub_1407c9dd0(rdi_2, nullptr, 0xff, 1)
        
        if (rbx_3 != 0)
            int32_t rax_13 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_13 == 1)
                sub_140a2f6e0(var_78_1)
        
        int64_t rcx_17 = var_58
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)

rax_1.b = 0
return rax_1
