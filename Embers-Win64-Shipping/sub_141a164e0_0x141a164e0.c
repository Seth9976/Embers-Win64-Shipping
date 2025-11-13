// 函数: sub_141a164e0
// 地址: 0x141a164e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
void* var_48 = __security_cookie ^ &var_b8
int64_t r15 = sx.q(arg2)
void* result

if (arg4 == 0)
labelid_5:
    result.b = 0
else
    uint64_t rcx = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    if (*(arg1 + 0x38) == 0)
        int32_t* r14_2 = *(ThreadLocalStoragePointer + (rcx << 3)) + 0x14
        
        if (data_143f28ec8 s> *r14_2)
            _Init_thread_header(&data_143f28ec8)
            
            if (data_143f28ec8 == 0xffffffff)
                int128_t var_98
                sub_140b58260(&var_98, u"FLandscapeGrassWeightVS", 1)
                sub_140b58260(&var_98:8, u"FLandscapeGrassWeightPS", 1)
                data_143f28eb8 = 0
                data_143f28ec0 = 2
                sub_1405c4a00(&data_143f28eb8, 2, 0)
                *data_143f28eb8 = var_98
                atexit(sub_142cf46e0)
                _Init_thread_footer(&data_143f28ec8)
        
        int64_t* rdi_1 = data_143f28eb8
        void* rcx_7 = &rdi_1[sx.q(data_143f28ec0)]
        
        if (rdi_1 == rcx_7)
        label_141a166fe:
            rdi_1 = nullptr
        else
            while (*rdi_1 != *(arg3 + 0x20))
                rdi_1 = &rdi_1[1]
                
                if (rdi_1 == rcx_7)
                    goto label_141a166fe
        
        if (data_143f28ee0 s> *r14_2)
            _Init_thread_header(&data_143f28ee0)
            
            if (data_143f28ee0 == 0xffffffff)
                int128_t var_88
                sub_140b58260(&var_88, u"TVirtualTextureVSBaseColor", 1)
                sub_140b58260(&var_88:8, u"TVirtualTextureVSBaseColorNormal", 1)
                int128_t var_78
                sub_140b58260(&var_78, u"TVirtualTextureVSBaseColorNormalSpecular", 1)
                sub_140b58260(&var_78:8, u"TVirtualTextureVSWorldHeight", 1)
                int128_t var_68
                sub_140b58260(&var_68, u"TVirtualTexturePSBaseColor", 1)
                sub_140b58260(&var_68:8, u"TVirtualTexturePSBaseColorNormal", 1)
                int128_t var_58
                sub_140b58260(&var_58, u"TVirtualTexturePSBaseColorNormalSpecular", 1)
                sub_140b58260(&var_58:8, u"TVirtualTexturePSWorldHeight", 1)
                data_143f28ed0 = 0
                data_143f28ed8 = 8
                sub_1405c4a00(&data_143f28ed0, 8, 0)
                int128_t* rax_10 = data_143f28ed0
                *rax_10 = var_88
                rax_10[1] = var_78
                rax_10[2] = var_68
                rax_10[3] = var_58
                atexit(sub_142cf4700)
                _Init_thread_footer(&data_143f28ee0)
        
        int64_t* rbx_1 = data_143f28ed0
        void* rcx_16 = &rbx_1[sx.q(data_143f28ed8)]
        
        if (rbx_1 == rcx_16)
        label_141a16873:
            rbx_1 = nullptr
        else
            while (*rbx_1 != *(arg3 + 0x20))
                rbx_1 = &rbx_1[1]
                
                if (rbx_1 == rcx_16)
                    goto label_141a16873
        
        if (data_143f28e40 s> *r14_2)
            _Init_thread_header(&data_143f28e40)
            
            if (data_143f28e40 == 0xffffffff)
                sub_140b58260(&data_143f28e38, u"FLandscapeVertexFactory", 1)
                _Init_thread_footer(&data_143f28e40)
        
        if (data_143f28e50 s> *r14_2)
            _Init_thread_header(&data_143f28e50)
            
            if (data_143f28e50 == 0xffffffff)
                sub_140b58260(&data_143f28e48, u"FLandscapeXYOffsetVertexFactory", 1)
                _Init_thread_footer(&data_143f28e50)
        
        if (data_143f28e60 s> *r14_2)
            _Init_thread_header(&data_143f28e60)
            
            if (data_143f28e60 == 0xffffffff)
                sub_140b58260(&data_143f28e58, u"FLandscapeVertexFactoryMobile", 1)
                _Init_thread_footer(&data_143f28e60)
        
        result = *(arg4 + 0x18)
        
        if (result != data_143f28e38 && result != data_143f28e48 && result != data_143f28e58)
            if (data_143f28e70 s> *r14_2)
                _Init_thread_header(&data_143f28e70)
                
                if (data_143f28e70 == 0xffffffff)
                    sub_140b58260(&data_143f28e68, u"FLandscapeFixedGridVertexFactory", 1)
                    _Init_thread_footer(&data_143f28e70)
            
            if (data_143f28e80 s> *r14_2)
                _Init_thread_header(&data_143f28e80)
                
                if (data_143f28e80 == 0xffffffff)
                    sub_140b58260(&data_143f28e78, u"FLandscapeFixedGridVertexFactoryMobile", 1)
                    _Init_thread_footer(&data_143f28e80)
            
            result = *(arg4 + 0x18)
            
            if ((result == data_143f28e68 || result == data_143f28e78)
                    && (rdi_1 != 0 || rbx_1 != 0))
                goto label_141a16a25
            
        labelid_5:
            result.b = 0
        else if (rbx_1 == 0)
        label_141a16a25:
            
            if (sub_1405948d0().b == 0)
            label_141a16a37:
                result.b = 0
            else
                result.b = 1
        else
        label_141a16a37_1:
            result.b = 0
    else
        if (data_143f28e30 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
            _Init_thread_header(&data_143f28e30)
            
            if (data_143f28e30 == 0xffffffff)
                sub_140b58260(&data_143f28e28, u"FLocalVertexFactory", 1)
                _Init_thread_footer(&data_143f28e30)
        
        if (r15.d u> 0x1e)
            if ((*(&data_143f025fc + r15 * 0x14) & 1) == 0 && *(arg4 + 0x18) == data_143f28e28)
                goto label_141a165b8
            
        label_141a16a37_2:
            result.b = 0
        else if (test_bit(0x6562c800, r15.d) || (*(&data_143f025fc + r15 * 0x14) & 1) != 0
            || *(arg4 + 0x18) != data_143f28e28)
        label_141a16a37_3:
            result.b = 0
        else
        label_141a165b8:
            sub_141a0af80()
            int64_t* rcx_3 = data_143f28e88
            void* rdx = &rcx_3[sx.q(data_143f28e90)]
            
            if (rcx_3 == rdx)
            label_141a165df:
                sub_141a0cef0()
                
                for (int64_t* i = data_143f28ea0; i != &i[sx.q(data_143f28ea8)]; i = &i[1])
                    if (*i == *(arg3 + 0x20))
                        goto label_141a16a37_3
            else
                while (*rcx_3 != *(arg3 + 0x20))
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == rdx)
                        goto label_141a165df
            
            result = sub_1405948d0()

__security_check_cookie(var_48 ^ &var_b8)
return result
