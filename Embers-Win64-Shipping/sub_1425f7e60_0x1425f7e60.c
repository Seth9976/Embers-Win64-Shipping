// 函数: sub_1425f7e60
// 地址: 0x1425f7e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int64_t rax_1 = __security_cookie ^ &var_888
int32_t var_848 = 0

if (arg2 s> 0x80070057)
    if (arg2 == 0x88960001)
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x17)
        int32_t rax_18 = arg1[1].d + 0x17
        arg1[1].d = rax_18
        
        if (rax_18 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"XAUDIO2_E_INVALID_CALL", 0x2e)
    else if (arg2 == 0x88960002)
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x1c)
        int32_t rax_17 = arg1[1].d + 0x1c
        arg1[1].d = rax_17
        
        if (rax_17 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"XAUDIO2_E_XMA_DECODER_ERROR", 0x38)
    else if (arg2 == 0x88960003)
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x1f)
        int32_t rax_16 = arg1[1].d + 0x1f
        arg1[1].d = rax_16
        
        if (rax_16 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"XAUDIO2_E_XAPO_CREATION_FAILED", 0x3e)
    else if (arg2 == 0x88960004)
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x1d)
        int32_t rax_15 = arg1[1].d + 0x1d
        arg1[1].d = rax_15
        
        if (rax_15 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"XAUDIO2_E_DEVICE_INVALIDATED", 0x3a)
    else if (arg2 == ERROR_NO_SUCH_DEVINST)
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x16)
        int32_t rax_14 = arg1[1].d + 0x16
        arg1[1].d = rax_14
        
        if (rax_14 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ERROR_NO_SUCH_DEVINST", 0x2c)
    else
    label_1425f8094:
        void var_838
        memset(&var_838, 0, 0x800)
        int16_t* rax_8 = sub_140b6cae0(&var_838, 0x400, arg2)
        uint64_t var_868 = 0
        int32_t rax_9 = 0
        int32_t rdx_7 = 0
        int32_t var_85c_1 = 0
        uint64_t r15_1 = 0
        int32_t var_860_1 = 0
        int32_t rsi_1
        
        if (rax_8 != 0 && *rax_8 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rax_8[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_868, rdi_1.d + 1)
                rax_9 = var_85c_1
                rdx_7 = var_860_1
                r15_1 = var_868
            
            rsi_1 = rdx_7 + rdi_1.d + 1
            
            if (rsi_1 s> rax_9)
                sub_140594770(&var_868)
                r15_1 = var_868
            
            UnDecorator::getReferenceType(r15_1, rax_8, (rdi_1.d + 1) * 2)
        
        uint64_t var_858
        uint64_t* rcx_11
        int32_t rdi_3
        
        if (rax_8 == 0 || *rax_8 == 0 || rsi_1 s<= 1)
            var_868 = 0
            var_860_1.q = 0
            sub_1405947f0(&var_868, 8)
            int32_t var_860_2 = var_860_1 + 8
            
            if (var_860_1 + 8 s> var_85c_1)
                sub_140594770(&var_868)
            
            UnDecorator::getReferenceType(var_868, u"UNKNOWN", 0x10)
            rcx_11 = &var_868
            rdi_3 = 2
        else
            var_858 = 0
            int32_t var_850_1 = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(&var_858, rsi_1, 0)
                memcpy(var_858, r15_1, rsi_1 * 2)
                rcx_11 = &var_858
                rdi_3 = 1
            else
                int32_t var_84c_1 = 0
                rcx_11 = &var_858
                rdi_3 = rsi_1 + 1
        
        *arg1 = *rcx_11
        *rcx_11 = 0
        arg1[1].d = rcx_11[1].d
        *(arg1 + 0xc) = *(rcx_11 + 0xc)
        rcx_11[1] = 0
        
        if ((rdi_3.b & 2) != 0)
            uint64_t rcx_17 = var_868
            rdi_3 &= 0xfffffffd
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
        
        if ((rdi_3.b & 1) != 0)
            uint64_t rcx_18 = var_858
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
else if (arg2 == 0x80070057)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0xd)
    int32_t rax_7 = arg1[1].d + 0xd
    arg1[1].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"E_INVALIDARG", 0x1a)
else if (arg2 == 0x80004002)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0xe)
    int32_t rax_6 = arg1[1].d + 0xe
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"E_NOINTERFACE", 0x1c)
else if (arg2 == 0x80004003)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0xa)
    int32_t rax_5 = arg1[1].d + 0xa
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"E_POINTER", 0x14)
else if (arg2 == 0x80040110)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0x16)
    int32_t rax_4 = arg1[1].d + 0x16
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"CLASS_E_NOAGGREGATION", 0x2c)
else if (arg2 == 0x80040154)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0x14)
    int32_t rax_3 = arg1[1].d + 0x14
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"REGDB_E_CLASSNOTREG", 0x28)
else
    if (arg2 != 0x8007000e)
        goto label_1425f8094
    
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0xe)
    int32_t rax_2 = arg1[1].d + 0xe
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"E_OUTOFMEMORY", 0x1c)

__security_check_cookie(rax_1 ^ &var_888)
return arg1
