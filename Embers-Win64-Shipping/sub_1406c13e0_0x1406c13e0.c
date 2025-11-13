// 函数: sub_1406c13e0
// 地址: 0x1406c13e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t r15 = sx.q(arg2)
int32_t var_1a0 = r15.d
int32_t i = 0
int64_t* rax_2 = sub_1406c8bf0()
void* r13 = rax_2[0x23]

if (r13 == 0)
    int64_t rdx = *rax_2
    (*(rdx + 0x390))(rax_2, rdx)
    r13 = rax_2[0x23]

int64_t var_1b8 = 0
uint64_t result

if (r15.d s< 0 || r15.d s>= *(*(arg1 + 0xe8) + 0x2c))
    result = 0xffffffff
else
    void* rax_4 = avcodec_alloc_context3(0)
    void* var_1c8 = rax_4
    int64_t rsi_1 = r15 << 3
    int64_t var_198_1 = rsi_1
    int32_t result_1 =
        avcodec_parameters_to_context(rax_4, *(*(*(*(arg1 + 0xe8) + 0x30) + rsi_1) + 0xd0))
    
    if (result_1 s< 0)
        avcodec_free_context(&var_1c8)
        result = zx.q(result_1)
    else
        *(var_1c8 + 0x374) = *(*(*(*(arg1 + 0xe8) + 0x30) + rsi_1) + 0x18)
        void* rax_8 = var_1c8
        int32_t var_1d8
        int16_t* var_1b0
        void** var_168
        void* r14_1
        
        if (*(r13 + 0x2a) == 0 || *(rax_8 + 0xc) != 0)
            r14_1 = avcodec_find_decoder(zx.q(*(rax_8 + 0x18)))
        else
            int64_t* var_180
            sub_1406bba90(&var_180, *(rax_8 + 0x18), 1)
            r14_1 = nullptr
            int64_t* r15_1 = var_180
            int32_t var_178
            void* rbx_1 = &r15_1[sx.q(var_178)]
            void* var_188_1 = rbx_1
            
            if (r15_1 == rbx_1)
            label_1406c176e:
                r14_1 = avcodec_find_decoder(zx.q(*(var_1c8 + 0x18)))
            else
                while (true)
                    void* r12_1 = *r15_1
                    int16_t* rax_10 = avcodec_alloc_context3(0)
                    var_1b0 = rax_10
                    avcodec_parameters_to_context(rax_10, 
                        *(*(*(*(arg1 + 0xe8) + 0x30) + rsi_1) + 0xd0))
                    
                    if (avcodec_open2(var_1b0, r12_1, 0) s>= 0)
                        int64_t var_190 = 0
                        
                        for (i = 0; i s>= 0; )
                            int32_t rax_12 = sub_1406bb910(r12_1, &i)
                            var_1d8 = 0
                            int32_t rax_13
                            int64_t rdx_11
                            rax_13, rdx_11 =
                                av_hwdevice_ctx_create(&var_190, zx.q(rax_12), 0, 0, var_1d8)
                            
                            if (rax_13 s>= 0)
                                int64_t rcx_12 = var_190
                                *(arg1 + 0x240) = rcx_12
                                *(var_1c8 + 0x408) = av_buffer_ref(rcx_12)
                                av_hwdevice_get_type_name(zx.q(rax_12))
                                *(arg1 + 0x7fc) = rax_12
                                void** const var_128 = &data_142d8e240
                                uint64_t (* var_120_1)(int64_t arg1, int64_t arg2) = sub_1406bced0
                                void** const* var_f0_1 = &var_128
                                int64_t var_130_1 = 0
                                void*** rax_16 = std::_Func_impl_no_alloc<class <lambda_1b86bb99c5f0accb58b69827f0131d11>,void,class Concurrency::message<uint64_t>* __ptr64>::_Move(
                                    &var_128, &var_168)
                                void*** r8_1 = rax_16
                                void** const* rcx_16 = var_f0_1
                                
                                if (rcx_16 != 0)
                                    void** const* rdx_13
                                    rdx_13.b = rcx_16 != &var_128
                                    (*rcx_16)[4](rcx_16, rdx_13, r8_1)
                                    rcx_16 = nullptr
                                    var_f0_1 = nullptr
                                    r8_1 = rax_16
                                
                                void*** r9_1 = *(arg1 + 0x7f0)
                                
                                if (r9_1 != 0)
                                    rcx_16 = r9_1
                                    
                                    if (r9_1 != arg1 + 0x7b8)
                                        var_f0_1 = rcx_16
                                        *(arg1 + 0x7f0) = 0
                                    else
                                        void*** rax_19
                                        int64_t rdx_15
                                        rax_19, rdx_15 = (*r9_1)[1](rcx_16, &var_128)
                                        rcx_16 = rax_19
                                        var_f0_1 = rax_19
                                        int64_t* r8_2 = *(arg1 + 0x7f0)
                                        
                                        if (r8_2 == 0)
                                            r8_1 = rax_16
                                        else
                                            rdx_15.b = r8_2 != arg1 + 0x7b8
                                            (*(*r8_2 + 0x20))(r8_2, rdx_15)
                                            rcx_16 = var_f0_1
                                            r8_1 = rax_16
                                            *(arg1 + 0x7f0) = 0
                                
                                if (r8_1 != 0)
                                    if (r8_1 != &var_168)
                                        *(arg1 + 0x7f0) = r8_1
                                    else
                                        *(arg1 + 0x7f0) = (*r8_1)[1](r8_1, arg1 + 0x7b8)
                                        
                                        if (rax_16 != 0)
                                            void*** rdx_17
                                            rdx_17.b = rax_16 != &var_168
                                            (*rax_16)[4](rax_16, rdx_17)
                                        
                                        rcx_16 = var_f0_1
                                
                                if (rcx_16 != 0)
                                    void** const* rdx_18
                                    rdx_18.b = rcx_16 != &var_128
                                    (*rcx_16)[4](rcx_16, rdx_18)
                                
                                r14_1 = r12_1
                                *(var_1c8 + 0x30) = arg1
                                *(var_1c8 + 0x98) = sub_1406bc1d0
                                *(var_1c8 + 0x31c) = 1
                                break
                            
                            *(arg1 + 0x240) = 0
                            *(arg1 + 0x7fc) = 0
                            int64_t* rcx_11 = *(arg1 + 0x7f0)
                            
                            if (rcx_11 != 0)
                                rdx_11.b = rcx_11 != arg1 + 0x7b8
                                (*(*rcx_11 + 0x20))(rcx_11, rdx_11)
                                *(arg1 + 0x7f0) = 0
                        
                        rsi_1 = var_198_1
                        rbx_1 = var_188_1
                    
                    avcodec_free_context(&var_1b0)
                    
                    if (r14_1 != 0)
                        break
                    
                    r15_1 = &r15_1[1]
                    
                    if (r15_1 == rbx_1)
                        goto label_1406c176e
            
            int64_t* rcx_22 = var_180
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            r15 = zx.q(var_1a0)
        
        void* rax_31 = var_1c8
        
        if (r14_1 != 0)
            *(rax_31 + 0x18) = *(r14_1 + 0x14)
            *(var_1c8 + 0x300) = 0
            
            if (*(r13 + 0x2e) != 0)
                void* rax_33 = var_1c8
                *(rax_33 + 0x50) |= 1
            
            void* rcx_28 = var_1c8
            int32_t rax_34 = *(rcx_28 + 0xc)
            int32_t rsi_3
            
            if (rax_34 != 0)
                if (rax_34 == 1)
                    rsi_3 = *(r13 + 0x30)
                    goto label_1406c181a
                
                rsi_3 = av_cpu_count()
                rcx_28 = var_1c8
            else
                rsi_3 = *(r13 + 0x34)
            label_1406c181a:
                
                if (rsi_3 == 0)
                    rsi_3 = av_cpu_count()
                    rcx_28 = var_1c8
            
            if (rsi_3 s> 0x10)
                rsi_3 = 0x10
            
            if (rsi_3 s< 1)
                rsi_3 = 1
            
            *(rcx_28 + 0x310) = rsi_3
            var_1b0 = nullptr
            int32_t var_1a8_1 = 0
            i = 1
            sub_140a20c40(&var_1b0, rsi_3)
            int16_t* const rdx_20 = &data_142d40450
            
            if (var_1a8_1 != 0)
                rdx_20 = var_1b0
            
            void var_e8
            av_dict_set(&var_1b8, "threads", *(sub_140685ed0(&var_e8, rdx_20) + 0x88), 0, var_1d8)
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            int16_t* rcx_33 = var_1b0
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            void* rcx_35 = var_1c8
            
            if (*(rcx_35 + 0xc) u<= 1)
                av_dict_set(&var_1b8, "refcounted_frames", &data_143702518, 0)
                rcx_35 = var_1c8
            
            if (*(r13 + 0x2c) != 0 && *(rcx_35 + 0xc) == 0)
                av_dict_set(&var_1b8, "tune", "zerolatency", 0)
                rcx_35 = var_1c8
            
            int32_t result_4 = avcodec_open2(rcx_35, r14_1, &var_1b8)
            int32_t result_3 = result_4
            
            if (result_4 s>= 0)
            label_1406c198b:
                *(arg1 + 0x69c) = 0
                *(*(*(*(arg1 + 0xe8) + 0x30) + var_198_1) + 0x3c) = 0
                void* rdx_24 = var_1c8
                int32_t rcx_44 = *(rdx_24 + 0xc)
                
                if (rcx_44 == 0)
                    *(arg1 + 0x228) = *(var_198_1 + *(*(arg1 + 0xe8) + 0x30))
                    *(arg1 + 0x6c4) = r15.d
                    void* rcx_56 = *(arg1 + 0x678)
                    *(rcx_56 + 0x10) = rdx_24
                    *(rcx_56 + 8) = arg1 + 0x518
                    *(rcx_56 + 0x28) = arg1 + 0x660
                    *(rcx_56 + 0x30) = -0x8000000000000000
                    *(rcx_56 + 0x18) = 0xffffffff
                    var_168 = &data_142d8e150
                    void* var_160_2 = arg1
                    void*** var_130_4 = &var_168
                    int32_t result_2 = sub_1406c0cd0(*(arg1 + 0x678), &var_168, 0)
                    
                    if (result_2 s< 0)
                        av_dict_free(&var_1b8)
                        result = zx.q(result_2)
                    else
                        *(arg1 + 0x6bc) = 1
                        *(arg1 + 0x238) = var_1c8
                        av_dict_free(&var_1b8)
                        result = zx.q(result_2)
                else
                    void** const rax_45
                    void* rcx_48
                    
                    if (rcx_44 == 1)
                        *(arg1 + 0x220) = *(var_198_1 + *(*(arg1 + 0xe8) + 0x30))
                        *(arg1 + 0x6c8) = r15.d
                        void* rcx_50 = *(arg1 + 0x668)
                        *(rcx_50 + 0x10) = rdx_24
                        *(rcx_50 + 8) = arg1 + 0x4c0
                        *(rcx_50 + 0x28) = arg1 + 0x660
                        *(rcx_50 + 0x30) = -0x8000000000000000
                        *(rcx_50 + 0x18) = 0xffffffff
                        void* rcx_51 = *(*(arg1 + 0xe8) + 8)
                        
                        if ((*(rcx_51 + 0x10) & 0xe000) != 0 && *(rcx_51 + 0x68) == 0)
                            void* rdx_25 = *(arg1 + 0x668)
                            void* rcx_52 = *(arg1 + 0x220)
                            int64_t rax_51 = *(rcx_52 + 0x18)
                            *(rdx_25 + 0x30) = *(rcx_52 + 0x20)
                            *(rdx_25 + 0x38) = rax_51
                        
                        rax_45 = &data_142d8e120
                        rcx_48 = *(arg1 + 0x668)
                        goto label_1406c1ac8
                    
                    if (rcx_44 == 3)
                        *(arg1 + 0x230) = *(var_198_1 + *(*(arg1 + 0xe8) + 0x30))
                        *(arg1 + 0x6cc) = r15.d
                        void* rcx_47 = *(arg1 + 0x688)
                        *(rcx_47 + 0x10) = rdx_24
                        *(rcx_47 + 8) = arg1 + 0x570
                        *(rcx_47 + 0x28) = arg1 + 0x660
                        *(rcx_47 + 0x30) = -0x8000000000000000
                        *(rcx_47 + 0x18) = 0xffffffff
                        rax_45 = &data_142d8e180
                        rcx_48 = *(arg1 + 0x688)
                    label_1406c1ac8:
                        var_168 = rax_45
                        void*** var_130_3 = &var_168
                        void* var_160_1 = arg1
                        result_3 = sub_1406c0cd0(rcx_48, &var_168, 0)
                    
                    av_dict_free(&var_1b8)
                    result = zx.q(result_3)
            else if (*(r13 + 0x2a) == 0)
                avcodec_free_context(&var_1c8)
                result = zx.q(result_3)
            else
                void* rax_37 = var_1c8
                
                if (*(rax_37 + 0xc) != 0)
                    avcodec_free_context(&var_1c8)
                    result = zx.q(result_3)
                else
                    void* rax_38 = avcodec_find_decoder(zx.q(*(rax_37 + 0x18)))
                    *(var_1c8 + 0x18) = *(rax_38 + 0x14)
                    *(var_1c8 + 0x300) = 0
                    
                    if (rsi_3 != 0)
                        *(var_1c8 + 0x310) = rsi_3
                    
                    int32_t result_5 = avcodec_open2(var_1c8, rax_38, &var_1b8)
                    result_3 = result_5
                    
                    if (result_5 s>= 0)
                        goto label_1406c198b
                    
                    avcodec_free_context(&var_1c8)
                    result = zx.q(result_3)
        else
            avcodec_descriptor_get(zx.q(*(rax_31 + 0x18)))
            result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_1f8)
return result
