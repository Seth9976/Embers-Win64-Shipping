// 函数: sub_1426cea90
// 地址: 0x1426cea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rbx = arg1

if (arg1 != 0)
    goto label_1426ceacd

void* result

if (arg2 == 0)
    result = nullptr
else
    rbx = arg2
label_1426ceacd:
    
    if (arg2 != 0)
    label_1426ceb1d:
        int64_t* rdi_1 = arg2[0x4b]
        void* result_1 = nullptr
        
        if (rdi_1 != 0)
            void* rax_5 = sub_1427249f0()
            void* rdx_1 = rdi_1[2]
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                void* rax_8 = sub_1423de540(data_143f5b298, rbx, 2)
                sub_140d19010(rax_8, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t var_188_1 = 0
                result_1 = sub_140d2dfc0(sub_142725470(), rax_8, 0, 0, 0, 0, 0, 0, 0)
                void var_168
                sub_1426a6430(&var_168)
                int32_t var_144_1 = arg5
                void* rcx_8 = &var_168
                int32_t var_148
                int32_t var_148_1 = zx.d(arg6) << 5 | (var_148 & 0xffffffdf) | 4
                
                if (arg4 == 0)
                    sub_1426bf140(rcx_8, arg3)
                else
                    sub_1426bf120(rcx_8, arg4)
                
                int64_t var_150_1 = rdi_1[0x61]
                int32_t var_180
                (*(*rdi_1 + 0x770))(rdi_1, &var_180, &var_168, 0)
                char var_17c
                uint32_t rcx_10 = zx.d(var_17c)
                int32_t var_1c8_1
                int64_t var_1c0_1
                int64_t rax_20
                
                if (rcx_10 == 1)
                    void* rax_27 = *(rax_8 + 0x188)
                    void* rdi_4
                    
                    if (rax_27 == 0)
                        rdi_4 = *(rax_8 + 0x300)
                    else
                        rdi_4 = *(rax_27 + 0xc0)
                    
                    int64_t* rax_28 = sub_140a84c80(0, 0x30, 0)
                    int64_t* var_118_1 = rax_28
                    
                    if (rax_28 != 0)
                        *rax_28 = &data_142d57800
                        sub_140d3a3a0(&rax_28[1], result_1)
                        rax_28[2] = sub_1426e42e0
                        rax_28[4] = sub_140a387b0()
                        *rax_28 = &data_142d57858
                    
                    int64_t var_a8 = 0
                    int32_t var_a0_1 = 0
                    
                    if (rax_28 != 0)
                        (*(*rax_28 + 0x40))(rax_28, &var_a8)
                    
                    void var_98
                    sub_140d3a3a0(&var_98, nullptr)
                    var_1c0_1.d = 0xbf800000
                    var_1c8_1.b = 0
                    int64_t var_90_1 = 0
                    int64_t var_88_1 = 0
                    void* var_78_1 = nullptr
                    sub_1423e6200(rdi_4, result_1 + 0x60, &var_a8, 0x3dcccccd, var_1c8_1.b, 
                        var_1c0_1.d)
                    
                    if (var_88_1 != 0)
                        void var_68
                        void* rcx_37 = &var_68
                        
                        if (var_78_1 != 0)
                            rcx_37 = var_78_1
                        
                        (*(*rcx_37 + 0x10))(rcx_37)
                    
                    sub_140745b20(&var_a8)
                    
                    if (rax_28 != 0)
                        (*(*rax_28 + 0x38))(rax_28, 0)
                        rax_20 = sub_140a84c80(rax_28, 0, 0)
                        int64_t var_118_2 = rax_20
                    label_1426cef77:
                        
                        if (rax_20 != 0)
                            sub_140a74f90(rax_20)
                else if (rcx_10 == 2)
                    sub_140d3a3a0(result_1 + 0x48, rdi_1)
                    wchar16* i_1 = nullptr
                    
                    for (wchar16* i = wcsstr(&UAIAsyncTaskBlueprintProxy::OnMoveCompleted", ::"); 
                            i != 0; i = wcsstr(&i[1], ::"))
                        i_1 = i
                    
                    int64_t var_178
                    sub_140b58260(&var_178, &i_1[2], 1)
                    void* rax_21 = sub_140d3c6e0(result_1 + 0x48)
                    int64_t rbx_3 = var_178
                    int128_t var_198
                    sub_140d3a3a0(&var_198, nullptr)
                    int64_t var_190_1 = 0
                    sub_140d3a3a0(&var_198, result_1)
                    int32_t rcx_26
                    rcx_26.b = sub_140b5b8a0(rbx_3.d, 0) == 0
                    
                    if ((rbx_3:4.d != 0 | rcx_26.b) != 0)
                        void* rax_23 = sub_140d3c6e0(&var_198)
                        
                        if (rax_23 != 0)
                            sub_140d1fd20(rax_23, rbx_3)
                    
                    sub_1408f4c10(rax_21 + 0x310)
                    int64_t rbx_4 = sx.q(*(rax_21 + 0x318))
                    int32_t rax_24 = (rbx_4 + 1).d
                    *(rax_21 + 0x318) = rax_24
                    
                    if (rax_24 s> *(rax_21 + 0x31c))
                        sub_1405a4f90(rax_21 + 0x310)
                    
                    *(*(rax_21 + 0x310) + rbx_4 * 0x10) = var_198
                    *(result_1 + 0x50) = var_180
                else
                    void* rax_13 = *(rax_8 + 0x188)
                    void* rdi_2
                    
                    if (rax_13 == 0)
                        rdi_2 = *(rax_8 + 0x300)
                    else
                        rdi_2 = *(rax_13 + 0xc0)
                    
                    void*** rax_14 = sub_140a84c80(0, 0x30, 0)
                    void*** var_128_1 = rax_14
                    
                    if (rax_14 != 0)
                        *rax_14 = &data_142d57800
                        sub_140d3a3a0(&rax_14[1], result_1)
                        rax_14[2] = sub_1426e57b0
                        rax_14[4] = sub_140a387b0()
                        *rax_14 = &data_142d57858
                    
                    int64_t var_108 = 0
                    int32_t var_100_1 = 0
                    
                    if (rax_14 != 0)
                        (*rax_14)[8](rax_14, &var_108)
                    
                    void var_f8
                    sub_140d3a3a0(&var_f8, nullptr)
                    var_1c0_1.d = 0xbf800000
                    var_1c8_1.b = 0
                    int64_t var_f0_1 = 0
                    int64_t var_e8_1 = 0
                    void* var_d8_1 = nullptr
                    sub_1423e6200(rdi_2, result_1 + 0x60, &var_108, 0x3dcccccd, var_1c8_1.b, 
                        var_1c0_1.d)
                    
                    if (var_e8_1 != 0)
                        void var_c8
                        void* rcx_16 = &var_c8
                        
                        if (var_d8_1 != 0)
                            rcx_16 = var_d8_1
                        
                        (*(*rcx_16 + 0x10))(rcx_16)
                    
                    sub_140745b20(&var_108)
                    
                    if (rax_14 != 0)
                        (*rax_14)[7](rax_14, 0)
                        rax_20 = sub_140a84c80(rax_14, 0, 0)
                        int64_t var_128_2 = rax_20
                        goto label_1426cef77
                int64_t* var_138
                
                if (var_138 != 0)
                    var_138[1].d -= 1
                    
                    if (var_138[1].d == 1)
                        (**var_138)(var_138)
                        int32_t rdi_5 = *(var_138 + 0xc)
                        *(var_138 + 0xc) -= 1
                        
                        if (rdi_5 == 1)
                            (*(*var_138 + 8))(var_138, zx.q(rdi_5))
        
        result = result_1
    else if (rbx == 0)
        result = nullptr
    else
        void* rax_2 = sub_1427249f0()
        void* rdx = rbx[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            result = nullptr
        else
            arg2 = rbx[0x4a]
            
            if (arg2 != 0)
                goto label_1426ceb1d
            
            result = nullptr

__security_check_cookie(rax_1 ^ &var_1e8)
return result
