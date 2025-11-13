// 函数: sub_14194fad0
// 地址: 0x14194fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
void* rdi = arg3
int32_t rbx = arg4
TEB* gsbase

if (data_143eff950 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff950)
    
    if (data_143eff950 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_29 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.RHICmdBufferWriteLocks", r8_3)
        int64_t rax_27
        
        if (rax_29 == 0)
            rax_27 = 0
        else
            int64_t rdx_12 = *rax_29
            rax_27 = (*(rdx_12 + 0x58))(rax_29, rdx_12)
        
        data_143eff948 = rax_27
        _Init_thread_footer(&data_143eff950)
    
    rdi = arg_18
    rbx = arg_20

int32_t rdx = *(arg1 + 0x15f30)
int32_t rcx = 0
int32_t r12 = *(data_143eff948 + 4)
int64_t var_c8
int32_t var_c0
int32_t rax_5
uint128_t zmm6
int128_t zmm7

if (rdx s<= 0)
label_14194fb9b:
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
    
    while (*(rax_4 + r9_1) != rdi || *(rax_4 + r9_1 + 0x10) != rbx)
        rcx += 1
        rax_4 = &rax_4[4]
        
        if (rcx s>= rdx)
            goto label_14194fb9b
    
    void* r11_3 = (sx.q(rcx) << 5) + r9_1
    int32_t r10_3 = rdx - rcx - 1
    zmm7 = *r11_3
    
    if (r10_3 s>= 1)
        r10_3 = 1
    
    zmm6 = *(r11_3 + 0x10)
    
    if (r10_3 != 0)
        memcpy(r11_3, (sx.q(rdx - r10_3) << 5) + r9_1, r10_3 << 5)
        rdx = *(arg1 + 0x15f30)
        rbx = arg_20
        rdi = arg_18
    
    *(arg1 + 0x15f30) = rdx - 1
    int32_t rax_15 = _mm_bsrli_si128(zmm6, 4).d
    var_c8.o = zmm6
    *(arg1 + 0x15f38) -= rax_15
    int32_t var_bc
    rax_5 = var_bc

int64_t (* result_2)(void* arg1)
void var_78
char arg_28

if (r12 s> 0 && rax_5 == 1 && data_143f01c92 != 0)
    void* var_d0 = rdi
    char var_a0_1 = arg_28
    void*** rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    var_c8.d = rbx
    var_c0.o = zmm7
    void* rax_7 = &rdi_3[0xa]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x60)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_7 = &rdi_3[0xa]
    
    *(arg2 + 0x30) = rax_7
    int64_t* rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rdi_3
    *(arg2 + 8) = &rdi_3[1]
    void*** rax_9 = sub_140a82f30(0x48, 8)
    *(rax_9 + 8) = arg1.o
    *rax_9 = &data_142ff8768
    *(rax_9 + 0x18) = var_c8.o
    int128_t var_b8
    *(rax_9 + 0x28) = var_b8
    *(rax_9 + 0x38) = zmm6
    int64_t (* result_1)(void* arg1) = result_2
    
    if (rax_9 != -8)
        result_1 = j_sub_14192e7f0
    
    *rdi_3 = &data_142ff4958
    rdi_3[1] = 0
    int64_t (* result)(void* arg1) = result_1
    rdi_3[2] = result
    rdi_3[4] = 0
    
    if (rdi_3[2] != 0)
        void*** rcx_3 = &var_78
        
        if (rax_9 != 0)
            rcx_3 = rax_9
        
        result = (**rcx_3)(rcx_3)
    
    if (result_1 == 0)
        return result
    
    void*** rcx_4 = &var_78
    
    if (rax_9 != 0)
        rcx_4 = rax_9
    
    return (*rcx_4)[2](rcx_4)

*(arg1 + 0x15f38) = 0
int64_t* var_d0_1 = &arg_18
var_c0.q = &arg_28

if (data_143f01c92 != 0)
    if (sub_140a80f10() == 0)
        void*** rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        void* rax_18 = &rdi_8[0xa]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x60)
            rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_18 = &rdi_8[0xa]
        
        *(arg2 + 0x30) = rax_18
        int64_t* rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rdi_8
        *(arg2 + 8) = &rdi_8[1]
        void*** rax_20 = sub_140a82f30(0x28, 8)
        *rax_20 = &data_142ec17e8
        *(rax_20 + 8) = arg1.o
        *(rax_20 + 0x18) = (&arg_20).o
        int64_t (* result_3)(void* arg1) = result_2
        
        if (rax_20 != -8)
            result_3 = sub_1419321d0
        
        *rdi_8 = &data_142ff4958
        rdi_8[1] = 0
        rdi_8[2] = result_3
        rdi_8[4] = 0
        
        if (rdi_8[2] != 0)
            void*** rcx_8 = &var_78
            
            if (rax_20 != 0)
                rcx_8 = rax_20
            
            (**rcx_8)(rcx_8)
        
        if (result_3 != 0)
            void*** rcx_9 = &var_78
            
            if (rax_20 != 0)
                rcx_9 = rax_20
            
            (*rcx_9)[2](rcx_9)
        
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
    
    rbx = arg_20
    rdi = arg_18
    
    if (data_143f01c92 != 0)
        sub_140a80f40()

return sub_14194ecf0(rdi, rbx, 0)
