// 函数: sub_1419482a0
// 地址: 0x1419482a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
void* rbx = arg3
TEB* gsbase

if (data_143eff970 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff970)
    
    if (data_143eff970 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_32 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.RHICmdBufferWriteLocks", r8_4)
        int64_t rax_30
        
        if (rax_32 == 0)
            rax_30 = 0
        else
            int64_t rdx_12 = *rax_32
            rax_30 = (*(rdx_12 + 0x58))(rax_32, rdx_12)
        
        data_143eff968 = rax_30
        _Init_thread_footer(&data_143eff970)
    
    rbx = arg_18

int32_t rdx = *(arg1 + 0x15f30)
int32_t rcx = 0
int32_t arg_30
int32_t rdi = arg_30
int32_t r12 = *(data_143eff968 + 4)
int32_t var_c0
int32_t rax_5
uint128_t zmm6
int128_t zmm7

if (rdx s<= 0)
label_141948361:
    rax_5 = 1
    int32_t var_bc_1 = 1
    zmm7 = zx.o(0)
    var_c0 = 0
    zmm6 = 0.o
else
    void* rax_3 = *(arg1 + 0x15f28)
    void* r9_1 = arg1 + 0x15d28
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int64_t* rax_4 = nullptr
    
    while (*(rax_4 + r9_1) != rbx || *(rax_4 + r9_1 + 0x10) != rdi)
        rcx += 1
        rax_4 = &rax_4[4]
        
        if (rcx s>= rdx)
            goto label_141948361
    
    void* r11_3 = (sx.q(rcx) << 5) + r9_1
    int32_t r10_3 = rdx - rcx - 1
    zmm7 = *r11_3
    
    if (r10_3 s>= 1)
        r10_3 = 1
    
    zmm6 = *(r11_3 + 0x10)
    
    if (r10_3 != 0)
        memcpy(r11_3, (sx.q(rdx - r10_3) << 5) + r9_1, r10_3 << 5)
        rdx = *(arg1 + 0x15f30)
        rdi = arg_30
        rbx = arg_18
    
    *(arg1 + 0x15f30) = rdx - 1
    int32_t rax_17 = _mm_bsrli_si128(zmm6, 4).d
    int64_t var_c8
    var_c8.o = zmm6
    *(arg1 + 0x15f38) -= rax_17
    int32_t var_bc
    rax_5 = var_bc

void** var_b8
int32_t arg_28
char arg_38

if (r12 s> 0 && rax_5 == 1 && data_143f01c92 != 0)
    int32_t rax_6 = arg_20
    int32_t var_80_1 = rdi
    void*** rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int32_t var_84_1 = arg_28
    char var_7c_1 = arg_38
    void* rax_9 = &rdi_3[0xa]
    void* var_90_1 = rbx
    
    if (rax_9 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(&arg2[0x30], 0x60)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_9 = &rdi_3[0xa]
    
    *(arg2 + 0x30) = rax_9
    int64_t* rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rdi_3
    *(arg2 + 8) = &rdi_3[1]
    void*** rax_11 = sub_140a82f30(0x48, 8)
    *(rax_11 + 8) = arg1.o
    *rax_11 = &data_142ff8768
    *(rax_11 + 0x18) = rax_6.o
    *(rax_11 + 0x28) = zmm7
    *(rax_11 + 0x38) = zmm6
    int64_t (* result_2)(void* arg1)
    int64_t (* result_1)(void* arg1) = result_2
    
    if (rax_11 != -8)
        result_1 = j_sub_14192ea80
    
    *rdi_3 = &data_142ff4958
    rdi_3[1] = 0
    int64_t (* result)(void* arg1) = result_1
    rdi_3[2] = result
    rdi_3[4] = 0
    
    if (rdi_3[2] != 0)
        void*** rcx_3 = &var_b8
        
        if (rax_11 != 0)
            rcx_3 = rax_11
        
        result = (**rcx_3)(rcx_3)
    
    if (result_1 == 0)
        return result
    
    void*** rcx_4 = &var_b8
    
    if (rax_11 != 0)
        rcx_4 = rax_11
    
    return (*rcx_4)[2](rcx_4)

*(arg1 + 0x15f38) = 0
int64_t* var_d0_1 = &arg_18
var_c0.q = &arg_28
var_b8 = &arg_30
char* var_b0_1 = &arg_38
char rax_18 = data_143f01c92

if (rax_18 != 0)
    if (sub_140a80f10() == 0)
        void*** rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        void* rax_20 = &rdi_8[0xa]
        
        if (rax_20 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x60)
            rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_20 = &rdi_8[0xa]
        
        *(arg2 + 0x30) = rax_20
        int64_t* rax_21 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_21 = rdi_8
        *(arg2 + 8) = &rdi_8[1]
        void*** rax_22 = sub_140a82f30(0x38, 8)
        *rax_22 = &data_142ec17a8
        *(rax_22 + 8) = arg1.o
        int128_t zmm0_2 = var_b8.o
        *(rax_22 + 0x18) = (&arg_20).o
        *(rax_22 + 0x28) = zmm0_2
        int32_t var_88
        var_88.q = rax_22
        int64_t (* var_98)(void* arg1)
        int64_t (* rax_23)(void* arg1) = var_98
        
        if (rax_22 != -8)
            rax_23 = j_sub_14192e630
        
        *rdi_8 = &data_142ff4958
        rdi_8[1] = 0
        rdi_8[2] = rax_23
        rdi_8[4] = 0
        void var_78
        
        if (rdi_8[2] != 0)
            void* rax_25 = var_88.q
            void* rcx_8 = &var_78
            
            if (rax_25 != 0)
                rcx_8 = rax_25
            
            (**rcx_8)(rcx_8)
        
        if (rax_23 != 0)
            void* rax_27 = var_88.q
            void* rcx_9 = &var_78
            
            if (rax_27 != 0)
                rcx_9 = rax_27
            
            (*(*rcx_9 + 0x10))(rcx_9)
        
        int32_t rbx_3 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_3)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_9
        rdx_9.b = 1
        sub_14198b7d0()
        return sub_140b38680("FlushRHIThreadTotal", rbx_3)
    
    rdi = arg_30
    rbx = arg_18
    rax_18 = data_143f01c92

uint64_t rsi_1 = zx.q(arg_28)
int32_t r14_1 = arg_20

if (rax_18 != 0)
    sub_140a80f40()

return sub_14194f480(rbx, rdi, r14_1 + ((rsi_1 * 3).d << 1))
