// 函数: sub_14197be60
// 地址: 0x14197be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rsi = arg7
int64_t r14 = 0
int64_t i_16 = sx.q(arg8)
uint64_t result = 0
int64_t* r12 = arg2
void* r13 = arg1
int64_t var_e0 = rsi
int32_t i_17 = i_16.d
int32_t var_138 = 0
int32_t var_154 = 0

if (data_143f01c92 != 0)
    if (data_143f02bac u> 0)
        result, arg5, arg6 = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
    
    void* rcx = data_143f02f40
    
    if (rcx != 0)
        int64_t rax_2 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_2 = *(rcx + 8)
        
        result = rax_2 u>> 0x1a
        
        if ((result.b & 1) != 0)
            int64_t* rcx_1 = data_143f02f40
            data_143f02f40 = 0
            
            if (rcx_1 != 0)
                result = zx.q(rcx_1[9].d)
                rcx_1[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_1)

int64_t i_9 = i_16
int64_t i_13 = i_16

if (i_16.d == 0 || data_143f01c92 == 0)
label_14197cad6:
    
    if (i_9 s> 0)
        result = arg4 - r12
        uint64_t result_1 = result
        int64_t i
        
        do
            int64_t rsi_11 = *(r12 + result)
            
            if (*r12 != 0)
                if (data_143f01c92 != 0)
                    int64_t rdi_11 = sx.q(data_1439c82c8)
                    int32_t rax_62 = (rdi_11 + 1).d
                    bool cond:2_1 = rax_62 s<= data_1439c82cc
                    data_1439c82c8 = rax_62
                    
                    if (not(cond:2_1))
                        sub_14083a490(&data_1439c82a0, rdi_11.d)
                    
                    void* rax_63 = data_1439c82c0
                    void* rcx_72 = &data_1439c82a0
                    void* rdx_39 = *r12
                    
                    if (rax_63 != 0)
                        rcx_72 = rax_63
                    
                    *(rcx_72 + (rdi_11 << 3)) = rdx_39
                    
                    if (rdx_39 != 0)
                        *(rdx_39 + 0x48) += 1
                
                int64_t rdi_12 = sx.q(data_1439c82f8)
                int32_t rax_64 = (rdi_12 + 1).d
                bool cond:1_1 = rax_64 s<= data_1439c82fc
                data_1439c82f8 = rax_64
                
                if (not(cond:1_1))
                    sub_14083a490(&data_1439c82d0, rdi_12.d)
                
                void* rax_65 = data_1439c82f0
                void* rcx_73 = &data_1439c82d0
                void* rdx_41 = *r12
                
                if (rax_65 != 0)
                    rcx_73 = rax_65
                
                *(rcx_73 + (rdi_12 << 3)) = rdx_41
                i_9 = i_13
                
                if (rdx_41 != 0)
                    *(rdx_41 + 0x48) += 1
            
            void*** rcx_76 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_66 = &rcx_76[4]
            
            if (rax_66 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x28)
                rcx_76 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rax_66 = &rcx_76[4]
            
            *(r13 + 0x30) = rax_66
            int64_t* rax_67 = *(r13 + 8)
            *(r13 + 0x14) += 1
            *rax_67 = rcx_76
            *(r13 + 8) = &rcx_76[1]
            rcx_76[1] = 0
            *rcx_76 = &data_143002ae8
            void* rax_69 = *r12
            rcx_76[2] = rax_69
            
            if (rax_69 != 0)
                *(rax_69 + 0x48) += 1
            
            result = result_1
            r12 = &r12[1]
            i = i_9
            i_9 -= 1
            rcx_76[3] = rsi_11
            i_13 = i_9
        while (i != 1)
    
    if (data_143f01c92 != 0 && data_143f02bac u> 0)
        result = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
else
    TEB* gsbase
    
    if (data_143f0fcc8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f0fcc8)
        
        if (data_143f0fcc8 == 0xffffffff)
            int64_t* rcx_82 = data_143db18d0
            
            if (rcx_82 == 0)
                sub_140a53c40()
                rcx_82 = data_143db18d0
            
            int64_t r8_7
            r8_7.b = 1
            int64_t* rax_72 = (*(*rcx_82 + 0xb0))(rcx_82, u"r.RHICmdBalanceParallelLists", r8_7)
            int64_t rax_70
            
            if (rax_72 == 0)
                rax_70 = 0
            else
                int64_t rdx_42 = *rax_72
                rax_70 = (*(rdx_42 + 0x58))(rax_72, rdx_42)
            
            data_143f0fcc0 = rax_70
            _Init_thread_footer(&data_143f0fcc8)
    
    int64_t rcx_4
    int64_t rbx_1
    
    if (*(data_143f0fcc0 + 4) == 0 && *(data_143f02b40 + 4) s> 0 && data_143f0f224 != 0)
        rbx_1 = data_143f02a50
        
        if (data_143de5480 == 0)
            rcx_4 = 0
        else
            rcx_4.b = GetCurrentThreadId() != data_143de5470
    
    if (*(data_143f0fcc0 + 4) != 0 || *(data_143f02b40 + 4) s<= 0 || data_143f0f224 == 0
            || *(rbx_1 + (rcx_4 << 2)) s<= 0)
        result = data_143f02ab0
        int32_t rbx_6 = 0
        int32_t r11_1 = 0
        int32_t var_148_1 = 0
        int32_t var_134_1 = 0
        int32_t r9_1 = *(result + 4)
        int32_t var_14c_1 = r9_1
        
        if (data_143f0f224 == 0)
            goto label_14197cad6
        
        int64_t rdi_2 = data_143f02a50
        int64_t rcx_28
        
        if (data_143de5480 == 0)
            rcx_28 = 0
        else
            result = GetCurrentThreadId()
            r9_1 = var_14c_1
            r11_1 = 0
            rcx_28.b = result.d != data_143de5470
        
        i_9 = i_16
        
        if (*(rdi_2 + (rcx_28 << 2)) s<= 0)
            goto label_14197cad6
        
        if (i_16 s> 0)
            int64_t i_1 = 0
            
            do
                int32_t r8_3 = *(rsi + (i_1 << 2))
                void* rdx_20 = rsi + (i_1 << 2)
                
                if (r9_1 != 0 && r8_3 s>= 0)
                    while (i_1 s< sx.q((i_16 - 1).d))
                        int32_t rcx_30 = *(rdx_20 + 4)
                        
                        if (rcx_30 s< 0)
                            break
                        
                        if (rcx_30 + r8_3 s> arg9)
                            break
                        
                        i_1 += 1
                        rbx_6 += 1
                        r8_3 += *(rsi + (i_1 << 2))
                        rdx_20 = rsi + (i_1 << 2)
                    
                    r9_1 = var_14c_1
                
                rbx_6 += 1
                r11_1 += 1
                i_1 += 1
            while (i_1 s< i_9)
            
            var_148_1 = r11_1
        
        int64_t* rcx_32 = data_143f0f180
        result = (*(*rcx_32 + 0x478))(rcx_32, 0, zx.q(r11_1), zx.q(*(r13 + 0x8c)), arg3)
        uint64_t result_2 = result
        
        if (result == 0)
            goto label_14197cad6
        
        if (i_9 s> 0)
            char rdx_21 = arg10
            int32_t r15 = 0
            int32_t var_154_1 = 0
            
            do
                int32_t rdi_3 = *(rsi + (r14 << 2))
                int32_t rcx_33 = r15
                int32_t var_150_1 = rcx_33
                void* rbx_7 = rsi + (r14 << 2)
                int64_t var_f8_1 = r14
                int64_t r13_4 = r14
                
                if (rdx_21 != 0)
                    sub_140b187a0(*(arg4 + (r14 << 3)) + 0x30)
                    rdx_21 = arg10
                    rcx_33 = r15
                
                if (var_14c_1 != 0 && rdi_3 s>= 0)
                    int64_t rsi_6 = sx.q(i_17 - 1)
                    
                    if (r14 s< rsi_6)
                        do
                            int32_t rax_28 = *(rbx_7 + 4)
                            
                            if (rax_28 s< 0)
                                break
                            
                            if (rax_28 + rdi_3 s> arg9)
                                break
                            
                            r13_4 += 1
                            rcx_33 += 1
                            rdi_3 += *(var_e0 + (r13_4 << 2))
                            rbx_7 = var_e0 + (r13_4 << 2)
                            var_150_1 = rcx_33
                            
                            if (rdx_21 != 0)
                                sub_140b187a0(*(arg4 + (r14 << 3)) + 0x30)
                                rcx_33 = var_150_1
                                rdx_21 = arg10
                        while (r13_4 s< rsi_6)
                        
                        r15 = var_154_1
                        r12 = arg2
                        var_f8_1 = r13_4
                
                if (result_2 == 0)
                    int64_t* rcx_38 = data_143f0f180
                    result_2 = (*(*rcx_38 + 0x478))(rcx_38, zx.q(var_134_1), zx.q(var_148_1), 
                        zx.q(*(arg1 + 0x8c)))
                
                uint64_t rdi_5 = zx.q(var_150_1 - r15)
                int64_t** var_88_1 = nullptr
                int32_t i_14 = 0
                int32_t var_7c_1 = 4
                int64_t rcx_41 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                int32_t var_154_2 = rdi_5.d
                int32_t rdx_24 = ((rdi_5 << 3) + 8).d
                int64_t var_f0_1 = rcx_41
                int64_t rbx_8 = sx.q(rdx_24)
                int64_t rax_33 = rcx_41 + rbx_8
                
                if (rax_33 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, rdx_24 + 8)
                    rcx_41 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    var_f0_1 = rcx_41
                    rax_33 = rcx_41 + rbx_8
                
                *(r13 + 0x30) = rax_33
                void var_a8
                
                if (r14 s<= r13_4)
                    void* rbx_9 = &r12[r14]
                    int64_t i_8 = r13_4 - r14 + 1
                    int64_t i_2
                    
                    do
                        *(rcx_41 - (r14 << 3) - r12 + rbx_9) = *(rbx_9 + arg4 - arg2)
                        void* rdx_26 = *rbx_9
                        
                        if (rdx_26 != 0)
                            int64_t i_25 = sx.q(i_14)
                            int32_t i_19 = (i_25 + 1).d
                            i_14 = i_19
                            
                            if (i_19 s> var_7c_1)
                                sub_14083a490(&var_a8, i_25.d)
                                rdx_26 = *rbx_9
                            
                            int64_t** rcx_46 = &var_a8
                            
                            if (var_88_1 != 0)
                                rcx_46 = var_88_1
                            
                            rcx_46[i_25] = rdx_26
                            
                            if (rdx_26 != 0)
                                *(rdx_26 + 0x48) += 1
                            
                            int64_t rdi_6 = sx.q(data_1439c82c8)
                            int32_t rax_37 = (rdi_6 + 1).d
                            bool cond:13_1 = rax_37 s<= data_1439c82cc
                            data_1439c82c8 = rax_37
                            
                            if (not(cond:13_1))
                                sub_14083a490(&data_1439c82a0, rdi_6.d)
                            
                            void* rax_38 = data_1439c82c0
                            void* rcx_47 = &data_1439c82a0
                            void* rdx_29 = *rbx_9
                            
                            if (rax_38 != 0)
                                rcx_47 = rax_38
                            
                            *(rcx_47 + (rdi_6 << 3)) = rdx_29
                            
                            if (rdx_29 != 0)
                                *(rdx_29 + 0x48) += 1
                            
                            int64_t rdi_7 = sx.q(data_1439c82f8)
                            int32_t rax_39 = (rdi_7 + 1).d
                            bool cond:14_1 = rax_39 s<= data_1439c82fc
                            data_1439c82f8 = rax_39
                            
                            if (not(cond:14_1))
                                sub_14083a490(&data_1439c82d0, rdi_7.d)
                            
                            void* rax_40 = data_1439c82f0
                            void* rcx_48 = &data_1439c82d0
                            void* rdx_31 = *rbx_9
                            
                            if (rax_40 != 0)
                                rcx_48 = rax_40
                            
                            *(rcx_48 + (rdi_7 << 3)) = rdx_31
                            
                            if (rdx_31 != 0)
                                *(rdx_31 + 0x48) += 1
                        
                        rbx_9 += 8
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
                    r13_4 = var_f8_1
                    rdi_5 = zx.q(var_154_2)
                
                int64_t rax_41 = data_143f02f40
                
                if (rax_41 != 0)
                    int64_t i_24 = sx.q(i_14)
                    int32_t i_21 = (i_24 + 1).d
                    i_14 = i_21
                    
                    if (i_21 s> var_7c_1)
                        sub_14083a490(&var_a8, i_24.d)
                        rax_41 = data_143f02f40
                    
                    int64_t** rdx_33 = &var_a8
                    
                    if (var_88_1 != 0)
                        rdx_33 = var_88_1
                    
                    rdx_33[i_24] = rax_41
                    void* rax_42 = data_143f02f40
                    
                    if (rax_42 != 0)
                        *(rax_42 + 0x48) += 1
                
                int32_t r12_4 = data_14399e5dc
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
                
                void*** rdi_8 = lpTlsValue[1]
                int32_t rcx_55
                
                if (rdi_8 != 0)
                    rcx_55 = lpTlsValue[2].d
                else
                    void* rax_43 = *lpTlsValue
                    
                    if (rax_43 == 0)
                        int64_t rax_44 = sub_14059e7c0(&data_143cf0958)
                        lpTlsValue[1] = rax_44
                        
                        if (rax_44 == 0)
                            int64_t* rax_45 = sub_140a82f70(0x2000, 0)
                            lpTlsValue[1] = rax_45
                            int64_t i_7 = 0x1f
                            int64_t* rcx_54
                            int64_t i_3
                            
                            do
                                rcx_54 = &rax_45[0x20]
                                *rax_45 = rcx_54
                                rax_45 = rcx_54
                                i_3 = i_7
                                i_7 -= 1
                            while (i_3 != 1)
                            *rcx_54 = i_7
                    else
                        lpTlsValue[1] = rax_43
                        *lpTlsValue = rdi_8
                    
                    rdi_8 = lpTlsValue[1]
                    rcx_55 = 0x20
                    lpTlsValue[2].d = 0x20
                
                lpTlsValue[1] = *rdi_8
                lpTlsValue[2].d = rcx_55 - 1
                int64_t* var_d8
                int64_t** rax_48 = sub_140a228d0(&var_d8)
                int32_t rbx_12 = (var_138 | 2) & 0xfffffffd
                var_138 = rbx_12
                int64_t* rcx_57 = *rax_48
                *rax_48 = nullptr
                *rdi_8 = &data_142d40498
                int64_t* var_c8_1 = rcx_57
                rdi_8[1].d = 0xff
                *(rdi_8 + 0xc) = i_14 + 1
                *rdi_8 = &data_143002af8
                rdi_8[6].b = 0
                rdi_8[7] = rcx_57
                int64_t* rcx_58 = var_d8
                
                if (rcx_58 != 0)
                    rcx_58[9].d -= 1
                    
                    if (rcx_58[9].d == 1)
                        sub_140a2f6e0(rcx_58)
                
                if ((rbx_12.b & 1) != 0)
                    var_138 = rbx_12 & 0xfffffffe
                    int64_t* var_d0
                    
                    if (var_d0 != 0)
                        var_d0[9].d -= 1
                        
                        if (var_d0[9].d == 1)
                            sub_140a2f6e0(var_d0)
                
                rdi_8[2] = var_f0_1
                rdi_8[3].d = (rdi_5 + 1).d
                rdi_8[5].b = arg3
                rdi_8[4] = result_2
                int64_t* rbx_14 = rdi_8[7]
                int64_t* var_118_1 = rbx_14
                int64_t* r14_5 = rbx_14
                void* rsi_10 = &rbx_14[9]
                
                if (rbx_14 != 0)
                    *rsi_10 += 1
                    rbx_14 = var_118_1
                
                sub_1419879e0(rdi_8, &var_a8, r12_4, 1)
                int64_t rdi_9 = sx.q(data_1439c82c8)
                int32_t rax_54 = (rdi_9 + 1).d
                bool cond:15_1 = rax_54 s<= data_1439c82cc
                data_1439c82c8 = rax_54
                
                if (not(cond:15_1))
                    sub_14083a490(&data_1439c82a0, rdi_9.d)
                
                void* rax_55 = data_1439c82c0
                void* rcx_62 = &data_1439c82a0
                
                if (rax_55 != 0)
                    rcx_62 = rax_55
                
                *(rcx_62 + (rdi_9 << 3)) = rbx_14
                
                if (rbx_14 != 0)
                    rbx_14[9].d += 1
                    rbx_14 = var_118_1
                
                void*** rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_56 = &rcx_65[5]
                
                if (rax_56 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, 0x30)
                    rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_56 = &rcx_65[5]
                
                *(r13 + 0x30) = rax_56
                void**** rax_57 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_57 = rcx_65
                *(arg1 + 8) = &rcx_65[1]
                rcx_65[1] = 0
                *rcx_65 = &data_143002ad8
                rcx_65[2] = rbx_14
                
                if (r14_5 != 0)
                    *rsi_10 += 1
                    rbx_14 = var_118_1
                
                rcx_65[4].d = var_148_1
                *(rcx_65 + 0x24) = var_134_1
                result = zx.q(var_134_1 + 1)
                rcx_65[3] = result_2
                var_134_1 = result.d
                
                if (data_143f01c92 != 0 && data_143f02bac u> 0)
                    result, arg5, arg6 = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
                
                r14 = r13_4 + 1
                r15 = var_150_1 + 1
                result_2 = 0
                var_154_1 = r15
                
                if (rbx_14 != 0)
                    result = zx.q(*rsi_10)
                    *rsi_10 -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(var_118_1)
                
                int64_t** rcx_71 = var_88_1
                int64_t** rbx_15 = &var_a8
                int32_t i_12 = i_14
                
                if (rcx_71 != 0)
                    rbx_15 = rcx_71
                
                if (i_12 != 0)
                    int32_t i_4
                    
                    do
                        int64_t* rcx_70 = *rbx_15
                        
                        if (rcx_70 != 0)
                            result = zx.q(rcx_70[9].d)
                            rcx_70[9].d -= 1
                            
                            if (result.d == 1)
                                result = sub_140a2f6e0(rcx_70)
                        
                        rbx_15 = &rbx_15[1]
                        i_4 = i_12
                        i_12 -= 1
                    while (i_4 != 1)
                    rcx_71 = var_88_1
                
                if (rcx_71 != 0)
                    result = sub_140a74f90(rcx_71)
                
                r12 = arg2
                rsi = var_e0
                rdx_21 = arg10
            while (r14 s< i_13)
    else
        void* rdi = r13 + 0x30
        void* var_58_1 = nullptr
        int64_t rsi_3 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t i_15 = 0
        int32_t rdx = (i_16 << 3).d
        int32_t var_4c_1 = 4
        int64_t rbx_2 = sx.q(rdx)
        int64_t rax_8 = rsi_3 + rbx_2
        
        if (rax_8 u> *(rdi + 8))
            sub_140b0e3d0(rdi, rdx + 8)
            rsi_3 = (*rdi + 7) & 0xfffffffffffffff8
            rax_8 = rsi_3 + rbx_2
        
        *rdi = rax_8
        void var_78
        
        if (i_16 s> 0)
            int64_t i_10 = i_13
            void* r13_2 = arg4 - r12
            int64_t* r14_2 = rsi_3 - r12
            int64_t i_5
            
            do
                *(r14_2 + r12) = *(r12 + r13_2)
                void* rdx_2 = *r12
                
                if (rdx_2 != 0)
                    int64_t i_22 = sx.q(i_15)
                    int32_t i_18 = (i_22 + 1).d
                    i_15 = i_18
                    
                    if (i_18 s> var_4c_1)
                        sub_14083a490(&var_78, i_22.d)
                        rdx_2 = *r12
                    
                    void* rcx_7 = &var_78
                    
                    if (var_58_1 != 0)
                        rcx_7 = var_58_1
                    
                    *(rcx_7 + (i_22 << 3)) = rdx_2
                    
                    if (rdx_2 != 0)
                        *(rdx_2 + 0x48) += 1
                    
                    int64_t rbx_3 = sx.q(data_1439c82f8)
                    int32_t rax_11 = (rbx_3 + 1).d
                    bool cond:11_1 = rax_11 s<= data_1439c82fc
                    data_1439c82f8 = rax_11
                    
                    if (not(cond:11_1))
                        sub_14083a490(&data_1439c82d0, rbx_3.d)
                    
                    void* rax_12 = data_1439c82f0
                    void* rcx_8 = &data_1439c82d0
                    void* rdx_5 = *r12
                    
                    if (rax_12 != 0)
                        rcx_8 = rax_12
                    
                    *(rcx_8 + (rbx_3 << 3)) = rdx_5
                    
                    if (rdx_5 != 0)
                        *(rdx_5 + 0x48) += 1
                
                r12 = &r12[1]
                i_5 = i_10
                i_10 -= 1
            while (i_5 != 1)
            r13 = arg1
            i_16 = zx.q(i_17)
            rdi = r13 + 0x30
        
        void* rax_13 = data_143f02f40
        
        if (rax_13 != 0)
            int64_t i_23 = sx.q(i_15)
            int32_t i_20 = (i_23 + 1).d
            i_15 = i_20
            
            if (i_20 s> var_4c_1)
                sub_14083a490(&var_78, i_23.d)
                rax_13 = data_143f02f40
            
            void* rdx_7 = &var_78
            
            if (var_58_1 != 0)
                rdx_7 = var_58_1
            
            *(rdx_7 + (i_23 << 3)) = rax_13
            
            if (rax_13 != 0)
                *(rax_13 + 0x48) += 1
        
        int64_t* rax_14 = sub_140a82f30(0x1c8, 0)
        int64_t* r14_3 = rax_14
        
        if (rax_14 == 0)
            r14_3 = nullptr
        else
            sub_141961860(rax_14, *(r13 + 0x8c))
        
        r14_3[0x13] = *(r13 + 0x98)
        void var_c0
        void** rax_16 = sub_1419697f0(&var_c0, &var_78, data_14399e5dc)
        void* r8_1 = *rax_16
        *(r8_1 + 0x10) = r14_3
        *(r8_1 + 0x18) = rsi_3
        *(r8_1 + 0x20) = i_16.d
        *(r8_1 + 0x24) = arg3
        *(r8_1 + 0x28) = *(data_143f02b70 + 4) << 0xa
        *(r8_1 + 0x2c) = *(data_143f02b58 + 4)
        void* rcx_16 = *rax_16
        int64_t* rbx_4 = *(rcx_16 + 0x38)
        int64_t* var_110_1 = rbx_4
        
        if (rbx_4 != 0)
            rbx_4[9].d += 1
            rbx_4 = var_110_1
        
        sub_141987d00(rcx_16, rax_16[1], rax_16[2].d, 1)
        void*** rcx_19 = (*rdi + 7) & 0xfffffffffffffff8
        void* rax_17 = &rcx_19[3]
        
        if (rax_17 u> *(rdi + 8))
            sub_140b0e3d0(rdi, 0x20)
            rcx_19 = (*rdi + 7) & 0xfffffffffffffff8
            rax_17 = &rcx_19[3]
        
        *rdi = rax_17
        void**** rax_18 = *(r13 + 8)
        *(r13 + 0x14) += 1
        *rax_18 = rcx_19
        *(r13 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_143002b18
        rcx_19[2] = r14_3
        void*** rdx_16 = (*rdi + 7) & 0xfffffffffffffff8
        void* rax_20 = &rdx_16[3]
        
        if (rax_20 u> *(rdi + 8))
            sub_140b0e3d0(rdi, 0x20)
            rdx_16 = (*rdi + 7) & 0xfffffffffffffff8
            rax_20 = &rdx_16[3]
        
        *rdi = rax_20
        int64_t* rax_21 = *(r13 + 8)
        void* result_3 = &data_1439c82a0
        *(r13 + 0x14) += 1
        *rax_21 = rdx_16
        int32_t rax_22 = *(r13 + 0x8c)
        *(r13 + 8) = &rdx_16[1]
        rdx_16[1] = 0
        rdx_16[2].d = rax_22
        *rdx_16 = &data_142f11588
        int64_t rdi_1 = sx.q(data_1439c82c8)
        int32_t rax_23 = (rdi_1 + 1).d
        bool cond:12_1 = rax_23 s<= data_1439c82cc
        data_1439c82c8 = rax_23
        
        if (not(cond:12_1))
            sub_14083a490(&data_1439c82a0, rdi_1.d)
        
        result = data_1439c82c0
        
        if (result != 0)
            result_3 = result
        
        *(result_3 + (rdi_1 << 3)) = rbx_4
        
        if (rbx_4 != 0)
            rbx_4[9].d += 1
            rbx_4 = var_110_1
        
        if (data_143f01c92 != 0 && data_143f02bac u> 0)
            result = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
        
        if (rbx_4 != 0)
            result = zx.q(rbx_4[9].d)
            rbx_4[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(var_110_1)
        
        void* rcx_27 = var_58_1
        void* rbx_5 = &var_78
        int32_t i_11 = i_15
        
        if (rcx_27 != 0)
            rbx_5 = rcx_27
        
        if (i_11 != 0)
            int32_t i_6
            
            do
                int64_t* rcx_26 = *rbx_5
                
                if (rcx_26 != 0)
                    result = zx.q(rcx_26[9].d)
                    rcx_26[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_26)
                
                rbx_5 += 8
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)
            rcx_27 = var_58_1
        
        if (rcx_27 != 0)
            result = sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_178)
return result
