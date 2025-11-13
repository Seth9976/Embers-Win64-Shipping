// 函数: sub_140e7b570
// 地址: 0x140e7b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
char* rdi = nullptr
int32_t var_494 = 0
int32_t r14 = 0

if (arg4 s>= 0)
    r14 = arg4

void* rdi_1

if (arg5 != 0xa)
    MRECmpImpl::FPushFile(arg1, arg2, arg3, nullptr, nullptr, r14)
    rdi_1 = arg3
else
    void* var_478
    sub_140e683e0(arg1, &var_478, r14)
    int64_t rbx
    rbx.b = r14 == 0
    int16_t* r13_1
    
    if (r14 != 0)
        int16_t var_498
        r13_1 = &var_498
        var_498 &= 0xfe00
    else
        int64_t* rcx = data_143e20d18
        r13_1 = (*(*rcx + 0x58))(rcx, &var_494)
    
    uint64_t var_3b8
    void* var_378
    uint64_t var_368
    int64_t var_328
    int32_t rsi_2
    uint64_t* r12_1
    
    if (rbx.b == 0)
        var_368 = 0
        r12_1 = &var_368
        int64_t var_360
        __builtin_memset(&var_360, 0, 0x24)
        rsi_2 = 2
        int32_t var_33c_1 = 0x80
        int32_t var_338_1 = 0xffffffff
        int32_t var_334_1 = 0
        var_328 = 0
        int32_t var_320_1 = 0
    else
        var_3b8 = 0
        int64_t var_3b0
        __builtin_memset(&var_3b0, 0, 0x24)
        int32_t var_38c_1 = 0x80
        int32_t var_388_1 = 0xffffffff
        int32_t var_384_1 = 0
        var_378 = nullptr
        int32_t var_370_1 = 0
        
        if (&var_3b8 != &arg1[0x24])
            int64_t rbx_1 = sx.q(arg1[0x2d].d)
            void var_380
            sub_1405a4aa0(&var_380, 0, rbx_1.d, 4)
            void* rax_5 = arg1[0x2c]
            void* rdx_2 = &arg1[0x2b]
            void* rcx_2 = &var_380
            
            if (rax_5 != 0)
                rdx_2 = rax_5
            
            if (var_378 != 0)
                rcx_2 = var_378
            
            memcpy(rcx_2, rdx_2, (rbx_1 << 2).d)
            int32_t var_370_2 = rbx_1.d
            sub_140e29380(&var_3b8, &arg1[0x24])
        
        r12_1 = &var_3b8
        rsi_2 = 1
    
    int64_t rax_7 = data_143e202b8
    int64_t* rbx_2 = data_143e202c8
    int64_t rax_8 = data_143e202c0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t var_488
    sub_140e68dd0(var_478, &var_488, 0xa)
    int64_t var_490
    sub_140e68880(var_478, &var_490, 0xa)
    int16_t var_440_1 = *r13_1
    int64_t var_430_1 = var_490
    int64_t zmm0_1 = var_490.d
    int64_t var_428_1 = var_488
    int64_t zmm1_1 = var_490:4.d
    void** const var_448 = &data_142ecfd88
    int64_t var_410_1 = rax_7
    uint64_t* var_418_1 = r12_1
    int64_t var_408_1 = rax_8
    char var_43e_1 = 0
    int32_t var_43c_1 = r14
    int64_t var_438_1 = 0
    zmm0_1.d = zmm0_1.d f- var_488.d
    zmm1_1.d = zmm1_1.d f- var_488:4.d
    int32_t var_420_1 = zmm0_1.d
    int32_t var_41c_1 = zmm1_1.d
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t var_3f0_1 = 0x3f800000
    int32_t var_3f8_1 = arg5
    int32_t var_3f4_1 = 0
    int16_t var_3ec_1 = 0
    int64_t var_3e8_1 = 0
    int16_t var_3e0_1 = 0
    char var_3de_1 = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if ((rsi_2.b & 2) != 0)
        rsi_2 &= 0xfffffffd
        int32_t var_320_2 = 0
        
        if (var_328 != 0)
            sub_140a74f90(var_328)
        
        sub_1407ece30(&var_368, 0)
        int64_t var_348
        
        if (var_348 != 0)
            sub_140a74f90(var_348)
        
        uint64_t rcx_11 = var_368
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    if ((rsi_2.b & 1) != 0)
        int32_t var_370_3 = 0
        
        if (var_378 != 0)
            sub_140a74f90(var_378)
        
        sub_1407ece30(&var_3b8, 0)
        int64_t var_398
        
        if (var_398 != 0)
            sub_140a74f90(var_398)
        
        uint64_t rcx_15 = var_3b8
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    void var_318
    sub_140d947e0(&var_318)
    void var_3d8
    float zmm0_2[0x4] = sub_140e67580(var_478, &var_3d8, 0xa)
    int32_t var_3d0
    
    if (var_3d0 s> 0)
        void var_1b8
        sub_140d963a0(&var_318, sub_140dbf000(&var_3d8, &var_1b8, 0, 0, zmm0_2, data_1439ae51c))
        void var_68
        sub_140596d80(&var_68)
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp6_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        void var_1b0
        sub_140d94d20(&var_1b0)
        rdi = &var_318
    
    rdi_1 = arg3
    MRECmpImpl::FPushFile(arg1, arg2, rdi_1, rdi, &var_448, r14)
    int64_t* var_3c0
    
    if (var_3c0 != 0)
        int32_t temp3_1 = *(var_3c0 + 0xc)
        *(var_3c0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_3c0 + 8))(var_3c0, 1)
    
    sub_140d94cb0(&var_3d8)
    void var_1c8
    sub_140596d80(&var_1c8)
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t temp8_1 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    void var_310
    sub_140d94d20(&var_310)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    var_448 = &data_142d7f690
    int64_t* var_470
    
    if (var_470 != 0)
        var_470[1].d -= 1
        
        if (var_470[1].d == 1)
            (**var_470)(var_470)
            int32_t temp11_1 = *(var_470 + 0xc)
            *(var_470 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_470 + 8))(var_470, 1)

int64_t result = sub_140597700(rdi_1)
__security_check_cookie(rax_1 ^ &var_4c8)
return result
