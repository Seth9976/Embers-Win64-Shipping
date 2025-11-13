// 函数: sub_141023690
// 地址: 0x141023690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r14 = arg7
EnterCriticalSection(arg1)
int128_t zmm0 = *(arg3 + 0x18)
int32_t var_50 = *(arg3 + 0x28)
int128_t var_60 = zmm0
int64_t var_b0 = zmm0.q
int64_t rcx

if (arg6 != 0)
    rcx = *(*(arg3 + 0x110) + 8)
else
    rcx = arg1->__offset(0x80).q

int64_t var_80 = rcx
int64_t var_98 = var_b0
int32_t var_90 = arg5
void* rax_5 = sub_1410017c0(&arg1[1], var_b0.d, &var_98)

if (*rax_5 == 0)
    void** rbx_1 = nullptr
    
    if (arg8 != 0)
        *arg8 = 0
        rbx_1 = *rax_5
    
    if (rbx_1 == 0)
        void** rax_6 = j_sub_140a82f30(0xc8)
        rbx_1 = rax_6
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(rax_6, 0, 0x18)
            rax_6[0xb].d = 0
            *(rax_6 + 0x5c) = 4
            rax_6[0x18].d = 0
            *(rax_6 + 0xc4) = 4
        
        *rax_5 = rbx_1
    
    int64_t* rsi_1 = *rbx_1
    *rbx_1 = arg3
    *(arg3 + 8) += 1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            char rax_8
            
            if (rsi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rsi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                (**rsi_1)(rsi_1, 1)
            else
                bool z_1
                
                if (0 == *(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rsi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_10 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_10)
                    void* const rax_11
                    
                    if (rax_10 != 0)
                        rax_11 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_11 = nullptr
                    
                    *(rax_11 + 8) = rsi_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)
    
    int16_t* const r8_1
    
    if (arg6 == 0)
        r8_1 = u"RayGen"
    else if (arg6 == 1)
        r8_1 = u"Miss"
    else if (arg6 == 2)
        r8_1 = u"HitGroup"
    else if (arg6 == 3)
        r8_1 = u"Callable"
    else
        r8_1 = &data_142d40450
    
    int64_t var_c0
    sub_140a2e390(&var_c0, u"%s_%016llx", r8_1)
    int64_t r15_1 = sx.q(rbx_1[0xb].d)
    int32_t rax_16 = (r15_1 + 1).d
    rbx_1[0xb].d = rax_16
    
    if (rax_16 s> *(rbx_1 + 0x5c))
        sub_1410348f0(&rbx_1[3])
    
    void* rcx_13 = &rbx_1[3 + r15_1 * 2]
    *rcx_13 = 0
    *rcx_13 = var_c0
    var_c0 = 0
    int32_t var_b8
    *(rcx_13 + 8) = var_b8
    int32_t var_b4
    *(rcx_13 + 0xc) = var_b4
    int64_t rcx_14 = var_c0
    var_b8.q = 0
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    void var_78
    void** rax_20 = sub_14101bb80(&var_78, nullptr, 0xff)
    int128_t zmm0_1 = var_98.o
    void* rcx_16 = *rax_20
    *(rcx_16 + 0x38) = arg2
    *(rcx_16 + 0x18) = zmm0_1
    *(rcx_16 + 0x40) = arg6
    *(rcx_16 + 0x10) = rbx_1
    *(rcx_16 + 0x28) = arg4.o
    void* rcx_17 = *rax_20
    int32_t r8_2 = rax_20[2].d
    int64_t* rdx_5 = rax_20[1]
    int64_t* rsi_3 = *(rcx_17 + 0x50)
    int64_t* var_a8 = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[9].d += 1
    
    sub_141036020(rcx_17, rdx_5, r8_2, 1)
    
    if (&rbx_1[2] != &var_a8)
        int64_t* rcx_18 = rbx_1[2]
        rbx_1[2] = rsi_3
        
        if (rcx_18 != 0)
            rcx_18[9].d -= 1
            
            if (rcx_18[9].d == 1)
                sub_140a2f6e0(rcx_18)
    else if (rsi_3 != 0)
        rsi_3[9].d -= 1
        
        if (rsi_3[9].d == 1)
            sub_140a2f6e0(var_a8)
else if (arg8 != 0)
    *arg8 = 1

void* rcx_19 = *(*rax_5 + 0x10)

if (rcx_19 != 0)
    int64_t rax_22 = 0
    
    if (0 == *(rcx_19 + 8))
        *(rcx_19 + 8) = 0
    else
        rax_22 = *(rcx_19 + 8)
    
    if (((rax_22 u>> 0x1a).b & 1) == 0)
        int64_t rbx_3 = sx.q(*(r14 + 0x28))
        void* rdi_3 = *rax_5
        int32_t rax_24 = (rbx_3 + 1).d
        *(r14 + 0x28) = rax_24
        
        if (rax_24 s> *(r14 + 0x2c))
            sub_14083a490(r14, rbx_3.d)
        
        void* rax_25 = *(r14 + 0x20)
        void* rdx_7 = *(rdi_3 + 0x10)
        
        if (rax_25 != 0)
            r14 = rax_25
        
        *(r14 + (rbx_3 << 3)) = rdx_7
        
        if (rdx_7 != 0)
            *(rdx_7 + 0x48) += 1

int64_t result = *rax_5

if (arg1 != 0)
    LeaveCriticalSection(arg1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
