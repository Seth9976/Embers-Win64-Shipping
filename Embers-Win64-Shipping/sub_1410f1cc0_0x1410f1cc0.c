// 函数: sub_1410f1cc0
// 地址: 0x1410f1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* rcx = *(arg4 + 8)
void* var_340 = nullptr
int32_t i_6 = 0
int64_t* var_328 = rcx
(*(*rcx + 0x28))(rcx, zx.q(arg5), &var_340)
uint64_t r14 = 0
int32_t var_348 = 0
int32_t rsi = 0
int32_t var_32c = 0

if (i_6 s> 0)
    int64_t rdi_1 = 0
    int64_t var_350 = 0
    
    do
        void* rbx_1 = var_340
        
        if ((*(rdi_1 + rbx_1 + 0x9c) & 0x1f80) == 0)
            int64_t* rcx_1 = *(rdi_1 + rbx_1 + 0x78)
            wchar16* rax_8 = wcsstr(*((*(*rcx_1 + 0x40))(rcx_1) + 8), u"LocalVertexFactory")
            wchar16* rax_11
            
            if (rax_8 == 0)
                int64_t* rcx_3 = *(rdi_1 + rbx_1 + 0x78)
                rax_11 = wcsstr(*((*(*rcx_3 + 0x40))(rcx_3) + 8), InstancedStaticMeshVertexFactory")
            
            if (rax_8 != 0 || rax_11 != 0)
                int32_t r8_1 = 0
                void* rbx_3 = var_340 + rdi_1
                int32_t var_330_1 = 0
                int64_t i_5 = sx.q(*(rbx_3 + 0x70))
                int64_t i_7 = i_5
                
                if (i_5 s> 0)
                    void* rax_12 = *(rbx_3 + 0x68)
                    int64_t r11_1 = 0
                    
                    if (rax_12 != 0)
                        rbx_3 = rax_12
                    
                    int64_t i
                    
                    do
                        int64_t r9
                        
                        if ((*(r11_1 + rbx_3 + 0x64) & 0x400) != 0)
                            r9 = *(r11_1 + rbx_3 + 0x18)
                        
                        int32_t rax_21
                        
                        if ((*(r11_1 + rbx_3 + 0x64) & 0x400) == 0 || r9 == 0)
                            rax_21 = *(r11_1 + rbx_3 + 0x48) * *(r11_1 + rbx_3 + 0x44)
                        else
                            int32_t rsi_1 = 0
                            int32_t r14_1 = 0
                            int32_t rdi_2 = 0
                            int32_t j = 0
                            int32_t r13_1 = *(r11_1 + rbx_3 + 0x48)
                            
                            if (r13_1 u>= 2)
                                int32_t r15_1 = *(r11_1 + rbx_3 + 0x44)
                                
                                do
                                    uint64_t r8_2 = zx.q(j * 2)
                                    j += 2
                                    rsi_1 += (*(r9 + (zx.q((r8_2 + 1).d) << 2))
                                        - *(r9 + (r8_2 << 2)) + 1) * r15_1
                                    r14_1 += (*(r9 + (zx.q((r8_2 + 3).d) << 2))
                                        - *(r9 + (zx.q((r8_2 + 2).d) << 2)) + 1) * r15_1
                                while (j u< r13_1 - 1)
                                
                                r8_1 = var_330_1
                                i_5 = i_7
                            
                            if (j u< r13_1)
                                uint64_t rcx_6 = zx.q(j * 2)
                                rdi_2 = (*(r9 + (zx.q((rcx_6 + 1).d) << 2)) - *(r9 + (rcx_6 << 2))
                                    + 1) * *(r11_1 + rbx_3 + 0x44)
                            
                            rax_21 = rsi_1 + r14_1 + rdi_2
                        
                        r8_1 += rax_21
                        r11_1 += 0x68
                        i = i_5
                        i_5 -= 1
                        var_330_1 = r8_1
                        i_7 = i_5
                    while (i != 1)
                    rdi_1 = var_350
                    rsi = var_32c
                    r14 = zx.q(var_348)
                
                r14 = zx.q(r14.d + r8_1)
                var_348 = r14.d
        
        rsi += 1
        rdi_1 += 0xa0
        var_32c = rsi
        var_350 = rdi_1
    while (rsi s< i_6)
    
    if (r14.d s> 0)
        uint32_t rax_23 = (r14 * 3).d
        int128_t var_208
        int32_t var_1f8
        int128_t var_1f4
        
        if (data_143e51ad0 s< rax_23)
            data_143e51ad0 = rax_23
            sub_1405d16e0(&data_143e51ad8, nullptr)
            sub_1405d16e0(&data_143e51ae0, nullptr)
            sub_1408081b0(&data_143e51ae8)
            sub_1408081b0(&data_143e51b08)
            
            if (data_143e51ad0 s> 0)
                int32_t i_8 = 0
                int32_t var_44_1 = 0x10
                int32_t rbx_4 = 0
                void var_1c8
                sub_1410f8660(&var_1c8)
                
                if (i_8 s> 0)
                    void var_1b3
                    void* rcx_8 = &var_1b3
                    uint64_t i_3 = zx.q(i_8)
                    uint64_t i_1
                    
                    do
                        uint32_t rax_25 = zx.d(*rcx_8)
                        rcx_8 += 0x18
                        rbx_4 += rax_25
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                char var_1e0_1 = 0
                var_1f8 = 1
                int64_t* rcx_10 = data_143f0f180
                int32_t var_1e4_1 = (1 << (data_1439c7a34).b) - 1
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rbx_4 + 3)
                var_208 = zx.o(0)
                int64_t var_1d8_1 = 0
                int32_t var_1d0_1 = 0
                var_1f4 = data_143dbb1e0
                (*(*rcx_10 + 0x498))(rcx_10, &var_350, &data_143f02b98, 
                    zx.q(((((temp1_1 & 3) + temp2_1) s>> 2) * data_1439c87fc * data_143e51ad0)
                        << 2), 
                    0x280, &var_208)
                sub_1405d1600(&data_143e51ad8, &var_350)
                sub_1405d1550(&var_350)
                int64_t* rcx_12 = data_143f0f180
                int128_t* var_370_1
                var_370_1.b = 0xd
                (*(*rcx_12 + 0x4b8))(rcx_12, &var_350, &data_143f02b98, data_143e51ad8, 
                    data_1439c87fc, var_370_1)
                sub_1405d1600(&data_143e51ae0, &var_350)
                sub_1405ec8a0(&var_350)
                sub_1407b4d10(&data_143e51ae8, 4, data_143e51ad0, 0xd, 0, 0, 0)
                sub_1407b4d10(&data_143e51b08, 4, data_143e51ad0, 0xd, 0, 0, 0)
        
        sub_1410e0370(arg1)
        int32_t rsi_2 = 0
        
        if (i_6 s> 0)
            int64_t* r12_2 = var_328
            int64_t r14_2 = 0
            
            do
                void* rdi_7 = var_340 + r14_2
                
                if ((*(rdi_7 + 0x9c) & 0x1f80) == 0)
                    int64_t* rcx_15 = *(rdi_7 + 0x78)
                    wchar16* rax_33 =
                        wcsstr(*((*(*rcx_15 + 0x40))(rcx_15) + 8), LocalVertexFactory")
                    wchar16* rax_36
                    
                    if (rax_33 == 0)
                        int64_t* rcx_17 = *(rdi_7 + 0x78)
                        rax_36 = wcsstr(*((*(*rcx_17 + 0x40))(rcx_17) + 8), 
                            InstancedStaticMeshVertexFactory")
                    
                    if (rax_33 != 0 || rax_36 != 0)
                        *arg7 = *(rdi_7 + 0x80)
                        int64_t rax_39
                        
                        if (*(rdi_7 + 0x70) s<= 0)
                            rax_39 = 0
                        else
                            void* rax_38 = *(rdi_7 + 0x68)
                            void* rcx_19 = rdi_7
                            
                            if (rax_38 != 0)
                                rcx_19 = rax_38
                            
                            rax_39 = *rcx_19
                        
                        int64_t var_308
                        __builtin_memset(&var_308, 0, 0x14)
                        *arg8 = rax_39
                        sub_141095f70(&var_308, 0)
                        var_328 = nullptr
                        int64_t var_320_1 = 0
                        void var_258
                        sub_14108b090(&var_258)
                        var_208:8.q = &var_308
                        var_1f8.q = &var_328
                        var_1f4:4.q = &var_258
                        char var_358
                        var_1f4:0xc.q = &var_358
                        var_208.q = &data_142f11938
                        int64_t* rcx_23 = *(*arg3 + 0x20)
                        void* rax_42 = (*(*rcx_23 + 0x248))(rcx_23)
                        int32_t var_378
                        var_378.q = &var_208
                        void** var_2c8
                        sub_14125c360(&var_2c8, rax_42, *(rax_42 + 8), arg3, var_378)
                        int64_t rcx_25 = data_14395da00
                        var_2c8 = &data_142f19078
                        int512_t zmm0_2
                        zmm0_2.o = zx.o(0)
                        int64_t rax_43 = data_14395d9e8
                        int128_t var_288_1
                        __builtin_memset(&var_288_1, 0, 0x24)
                        int64_t var_2a0_1 = rcx_25
                        int64_t var_298_1 = rax_43
                        var_288_1.q = *(rax_42 + 0x20)
                        var_288_1:8.q = *(rax_42 + 0x28)
                        int128_t var_278_1
                        var_278_1:8.q = *(rax_42 + 0xa0)
                        var_378 = 0xffffffff
                        sub_1410ec6e0(&var_2c8, rdi_7, -1, r12_2, zmm0_2)
                        int32_t rcx_28
                        rcx_28.b = sub_1422eb5d0(arg3) != 0
                        int64_t var_368
                        var_368.d = rcx_28 + 1
                        var_378.q = &var_258
                        sub_1412680e0(arg3, arg1, &var_328, &var_308, var_378, &var_358, var_368.d)
                        var_208.q = &data_142d56fa0
                        int64_t var_228
                        
                        if (var_228 != 0)
                            sub_140a74f90(var_228)
                        
                        int64_t var_238
                        
                        if (var_238 != 0)
                            sub_140a74f90(var_238)
                        
                        sub_14108ca30(&var_258)
                        sub_141095f70(&var_308, 0)
                        int64_t rcx_35 = var_308
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
                
                rsi_2 += 1
                r14_2 += 0xa0
            while (rsi_2 s< i_6)
            
            r14 = zx.q(var_348)

int32_t i_4 = i_6
*arg6 = &data_143e51ad0

if (i_4 != 0)
    void* rbx_7 = var_340 + 0x68
    int32_t i_2
    
    do
        int64_t rcx_36 = *rbx_7
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        rbx_7 += 0xa0
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void* rcx_37 = var_340

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_398)
return zx.q(r14.d)
