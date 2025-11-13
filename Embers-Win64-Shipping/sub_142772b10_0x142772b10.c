// 函数: sub_142772b10
// 地址: 0x142772b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* r15 = arg1

if (Ordinal_DSOUND_11(0, &arg1[3], 0) s>= 0)
    TEB* gsbase
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143cd5b60 s> *rdi_2)
        _Init_thread_header(&data_143cd5b60)
        
        if (data_143cd5b60 == 0xffffffff)
            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
            _Init_thread_footer(&data_143cd5b60)
    
    int64_t rbx_1 = data_143cd5b58
    sub_140a387e0()
    void* r8_1 = data_14399e720
    int32_t r13_1 = 0
    int64_t* var_68
    int32_t ppv
    void** pv
    
    if ((*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1) s> 0)
        if (data_143cd5b60 s> *rdi_2)
            _Init_thread_header(&data_143cd5b60)
            
            if (data_143cd5b60 == 0xffffffff)
                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                _Init_thread_footer(&data_143cd5b60)
        
        int64_t rbx_2 = data_143cd5b58
        sub_140a387e0()
        pv = &data_14399e720
        var_68 = nullptr
        void** pv_1 = &data_14399e720
        int64_t var_60
        var_60:4.d = 0
        void* r8_2 = data_14399e720
        int64_t* r12_1 = nullptr
        int32_t rsi_1 = 0
        int32_t ppv_1 = (*(r8_2 + 8))(&data_14399e720, rbx_2, r8_2)
        int32_t r14_1 = 0
        ppv = ppv_1
        
        if (ppv_1 s> 0)
            do
                void* r9_1 = *pv_1
                int64_t rax_5 = (*(r9_1 + 0x10))(pv_1, rbx_2, zx.q(r14_1), r9_1)
                int64_t r15_1
                
                if (rax_5 == 0)
                    r15_1 = 0
                else
                    r15_1 = rax_5 - 8
                
                int64_t rdi_3 = sx.q(rsi_1)
                rsi_1 = (rdi_3 + 1).d
                var_60.d = rsi_1
                
                if (rsi_1 s> r13_1)
                    sub_1405a4d70(&var_68)
                    r13_1 = var_60:4.d
                    rsi_1 = var_60.d
                    r12_1 = var_68
                
                r14_1 += 1
                r12_1[rdi_3] = r15_1
                pv_1 = pv
            while (r14_1 s< ppv)
            
            r15 = arg_8
        
        sub_1405ea950(r12_1, rsi_1, arg_8.b)
        int64_t* rbx_3 = *r12_1
        sub_140a74f90(r12_1)
        int64_t var_58
        int64_t* rax_7 = (*(*rbx_3 + 0x68))(rbx_3, &var_58)
        
        if (&r15[4] != rax_7)
            int64_t rcx_5 = r15[4]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            r15[4] = *rax_7
            *rax_7 = 0
            r15[5].d = rax_7[1].d
            *(r15 + 0x2c) = *(rax_7 + 0xc)
            rax_7[1] = 0
        
        int64_t rcx_7 = var_58
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    var_68 = nullptr
    int64_t var_60_1 = 0
    sub_1405947f0(&var_68, 0xf)
    int32_t r14_2 = var_60_1:4.d
    int32_t rdi_5 = var_60_1.d + 0xf
    var_60_1.d = rdi_5
    
    if (rdi_5 s> r14_2)
        sub_140594770(&var_68)
        r14_2 = var_60_1:4.d
        rdi_5 = var_60_1.d
    
    int64_t* rsi_2 = var_68
    UnDecorator::getReferenceType(rsi_2, u"Default Device", 0x1e)
    
    if (&r15[6] != &var_68)
        int64_t rcx_11 = r15[6]
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        r15[6] = rsi_2
        r15[7].d = rdi_5
        *(r15 + 0x3c) = r14_2
    else if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    *(r15 + 0x40) = data_1435fc2d0
    sub_142771e50(&r15[0xa], 0)
    var_68 = nullptr
    int32_t var_60_2 = 0
    sub_1405947f0(&var_68, 0xf)
    int32_t rax_10 = var_60_2 + 0xf
    var_60_2 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"Default Device", 0x1e)
    sub_142770780(&r15[0xa], &var_68, &r15[6])
    int64_t* rcx_18 = var_68
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (Ordinal_DSOUND_8(sub_142770dc0, r15) s>= 0)
        void* rcx_19 = data_143ddb400
        int64_t* rbx_5
        rbx_5.b = 0
        char arg_10 = 0
        
        if (rcx_19 != 0)
            char rax_11 = sub_140af2fd0(rcx_19, Voice", bDuckingOptOut", &arg_10, &data_143de5780)
            rbx_5 = zx.q(arg_10)
            
            if (rax_11 == 0)
                rbx_5 = nullptr
            
            arg_10 = rbx_5.b
        
        ppv.q = 0
        
        if (CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, &ppv) s>= 0)
            int64_t* rcx_20 = ppv.q
            arg_8 = nullptr
            
            if ((*(*rcx_20 + 0x20))(rcx_20, 0, 0, &arg_8) s>= 0)
                int64_t* rcx_21 = arg_8
                (*(*rcx_21 + 0x28))(rcx_21, &pv)
                CoTaskMemFree(pv)
                sub_1427720c0(arg_8, rbx_5.b)
                int64_t* rcx_24 = arg_8
                (*(*rcx_24 + 0x10))(rcx_24)
            
            int64_t* rcx_25 = ppv.q
            (*(*rcx_25 + 0x10))(rcx_25)
        
        r15[2].b = 1
        HRESULT rax_12
        rax_12.b = 1
        return rax_12

int32_t rax
rax.b = 0
return rax
