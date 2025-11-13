// 函数: sub_141392a00
// 地址: 0x141392a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
sub_141391390(arg1, arg2)
sub_141391ba0(arg1, arg2)
sub_141392700(arg1, arg2)
TEB* gsbase

if (data_143ec6f68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec6f68)
    
    if (data_143ec6f68 == 0xffffffff)
        int64_t* rcx_26 = data_143db18d0
        
        if (rcx_26 == 0)
            sub_140a53c40()
            rcx_26 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_45 = (*(*rcx_26 + 0xb0))(rcx_26, u"vr.MobileMultiView", r8_4)
        
        if (rax_45 != 0)
            int64_t rdx_15 = *rax_45
            rax_45 = (*(rdx_15 + 0x58))(rax_45, rdx_15)
        
        data_143ec6f60 = rax_45
        _Init_thread_footer(&data_143ec6f68)

int32_t rsi = 1

if (data_143f0f1c1 != 0 || data_143f0f228 != 0)
    int64_t rbx_1 = data_143ec6f60
    
    if (rbx_1 != 0)
        int64_t rcx_4
        
        if (data_143de5480 == 0)
            rcx_4 = 0
        else
            rcx_4.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rbx_1 + (rcx_4 << 2)) != 0)
            int64_t* rcx_5 = *(data_143f5b298 + 0xaf8)
            int32_t r13_1
            
            if (rcx_5 == 0)
                r13_1 = 2
            else
                int64_t* rax_7 = (*(*rcx_5 + 0xb8))(rcx_5)
                
                if (rax_7 == 0)
                    r13_1 = 2
                else
                    int64_t rdx_2 = *rax_7
                    r13_1 = 1
                    
                    if ((*rdx_2)(rax_7, rdx_2) == 0)
                        r13_1 = 2
            
            int64_t* rcx_7 = *(arg1 + 0x198)
            
            if (rcx_7 != 0)
                void* rax_9 = rcx_7[1]
                int128_t zmm0_1 = *(rax_9 + 0x20)
                int32_t rax_11 = zmm0_1.d
                int128_t var_b8_1 = zmm0_1
                
                if (rax_11 != *(arg1 + 0x3e0))
                label_141392b9b:
                    *(arg1 + 0x198) = 0
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x38))(zmm0_1)
                else if (rax_11 == 1)
                    zmm0_1 = var_b8_1:4.d
                    
                    if (zmm0_1.d f!= *(arg1 + 0x3e4))
                        goto label_141392b9b
                    
                    zmm0_1 = var_b8_1:8.d
                    
                    if (zmm0_1.d f!= *(arg1 + 0x3e8))
                        goto label_141392b9b
                    
                    zmm0_1 = var_b8_1:0xc.d
                    
                    if (zmm0_1.d f!= *(arg1 + 0x3ec))
                        goto label_141392b9b
                    
                    zmm0_1 = *(rax_9 + 0x30)
                    
                    if (zmm0_1.d f!= *(arg1 + 0x3f0))
                        goto label_141392b9b
                else if (rax_11 == 2)
                    zmm0_1 = var_b8_1:4.d
                    
                    if (zmm0_1.d f!= *(arg1 + 0x3e4) || var_b8_1:8.d != *(arg1 + 0x3e8))
                        goto label_141392b9b
            
            char rax_14 = sub_1422eb610()
            int128_t var_98
            
            if (*(arg1 + 0x198) == 0)
                int32_t rbx_2 = *(arg1 + 0x3d0)
                int32_t var_88_1 = *(arg1 + 0x3f0)
                int32_t var_80_1 = *(arg1 + 0x380)
                int32_t var_84_1 = divs.dp.d(sx.q(*(arg1 + 0x37c)), r13_1)
                int16_t var_60_1 = 0
                var_98 = *(arg1 + 0x3e0)
                int32_t var_7c_1 = 0
                int32_t var_78_1 = 1
                int32_t var_74_1 = 0x10000
                int16_t var_70_1 = 1
                int32_t var_6c_1 = sub_14139d5b0(arg1, rbx_2)
                int32_t var_68_1 = 0
                wchar16 const* const var_58_1 = u"UnknownTexture2D"
                int32_t var_64_1 = 9
                int16_t var_50_1 = 1
                char var_4e_1 = 0
                int32_t rax_19 = sub_14139cf50(rbx_2)
                int16_t var_70_2 = rax_19.w
                int32_t var_78_2 = 2
                var_74_1.b = 1
                int32_t var_68_2 = var_68_1 | (sbb.d(rax_19, rax_19, rax_14 != 0) & 0x10)
                sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x198, 
                    MobileMultiViewSceneColor", 1, 1, 0)
            
            int64_t* rcx_11 = *(arg1 + 0x1a0)
            
            if (rcx_11 == 0)
            label_141392d6b:
                int32_t var_88_2 = *(arg1 + 0x404)
                int32_t rcx_14 = *(arg1 + 0x3d0)
                int32_t rdx_9 = *(arg1 + 0x380)
                int32_t var_84_2 = divs.dp.d(sx.q(*(arg1 + 0x37c)), r13_1)
                wchar16 const* const var_58_2 = u"UnknownTexture2D"
                int16_t var_60_2 = 0
                var_98 = *(arg1 + 0x3f4)
                int32_t var_80_2 = rdx_9
                int32_t var_7c_2 = 0
                int32_t var_78_3 = 1
                int32_t var_74_2 = 0x10000
                int16_t var_70_3 = 1
                int32_t var_6c_2 = 0x14
                int32_t var_64_2 = 0x20c
                int16_t var_50_2 = 1
                char var_4e_2 = 0
                int32_t var_68_3 = 0x100000
                char var_c0_2 = 0
                int16_t var_70_4 = sub_14139cf50(rcx_14)
                int32_t var_78_4 = 2
                var_74_2.b = 1
                sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x1a0, 
                    MobileMultiViewSceneDepthZ", 1, 1, var_c0_2)
            else
                void* rax_22 = rcx_11[1]
                int128_t zmm0_2 = *(rax_22 + 0x20)
                int32_t rax_24 = zmm0_2.d
                
                if (rax_24 != *(arg1 + 0x3f4))
                label_141392d31:
                    int64_t* rdx_7 = rcx_11
                    *(arg1 + 0x1a0) = 0
                    rcx_11 = nullptr
                    
                    if (rdx_7 != 0)
                        (*(*rdx_7 + 0x38))(rdx_7)
                        rcx_11 = *(arg1 + 0x1a0)
                else if (rax_24 != 1)
                    if (rax_24 == 2
                            && (zmm0_2:4.d.d f!= *(arg1 + 0x3f8) || zmm0_2:8.d != *(arg1 + 0x3fc)))
                        goto label_141392d31
                else if (zmm0_2:4.d.d f!= *(arg1 + 0x3f8) || zmm0_2:8.d.d f!= *(arg1 + 0x3fc)
                        || zmm0_2:0xc.d.d f!= *(arg1 + 0x400)
                        || (*(rax_22 + 0x30)).d f!= *(arg1 + 0x404))
                    goto label_141392d31
                
                if (rcx_11 == 0)
                    goto label_141392d6b

void* rax_32

if (*sub_14139d540(arg1) != 0)
    rax_32 = sub_14139d540(arg1)
else
    data_1439b6a99 = 0
    rax_32 = &data_1439b70c8

int64_t* rcx_17 = *rax_32
(*(*rcx_17 + 0x10))(rcx_17)
int64_t* rcx_18 = data_1439b7130
int64_t* rbx_3 = *(arg1 + 0x60)
*(arg1 + 0x60) = rcx_18

if (rcx_18 != 0)
    (*(*rcx_18 + 0x30))()

if (rbx_3 != 0)
    (*(*rbx_3 + 0x38))(rbx_3)

char result = sub_1419ba670(*(arg1 + 0x3d0))

if (result != 0)
    int64_t rcx_21 = *(arg1 + 0x37c)
    
    if (data_1439b6a04 s>= 1)
        rsi = data_1439b6a04
    
    int32_t var_9c_1 = divs.dp.d(sx.q(rsi - 1 + (rcx_21 u>> 0x20).d), rsi)
    result = sub_1415046b0(arg1 + 0x1e0, arg2, divs.dp.d(sx.q(rsi - 1 + rcx_21.d), rsi).q)

__security_check_cookie(rax_1 ^ &var_f8)
return result
