// 函数: sub_141947220
// 地址: 0x141947220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
void* rbx = arg3
TEB* gsbase

if (data_143eff960 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff960)
    
    if (data_143eff960 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        int64_t r8_7
        r8_7.b = 1
        int64_t* rax_38 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.RHICmdBufferWriteLocks", r8_7)
        int64_t rax_36
        
        if (rax_38 == 0)
            rax_36 = 0
        else
            int64_t rdx_11 = *rax_38
            rax_36 = (*(rdx_11 + 0x58))(rax_38, rdx_11)
        
        data_143eff958 = rax_36
        _Init_thread_footer(&data_143eff960)
    
    rbx = arg_18

int32_t arg_38
int32_t rdi = arg_38
char rcx = data_143f01c92
int32_t* var_f0
int32_t arg_30
int32_t* result
int32_t r12_1
void* r13_1
int32_t r15_2
int32_t* result_2

if (*(data_143eff958 + 4) s<= 0 || rdi != 1 || rcx == 0)
    int32_t* result_6 = result_2
    int64_t* var_100_1 = &arg_18
    int32_t arg_28
    var_f0 = &arg_28
    int32_t* var_e0_1 = &arg_38
    result_2 = nullptr
    
    if (rcx == 0)
        goto label_141947529
    
    if (sub_140a80f10() != 0)
        rdi = arg_38
        rbx = arg_18
        rcx = data_143f01c92
    label_141947529:
        int32_t r12_2 = arg_30
        uint64_t rsi_1 = zx.q(arg_28)
        int32_t r13_2 = arg_20
        
        if (rcx != 0)
            sub_140a80f40()
        
        int32_t* result_4 = sub_141940560(rbx, r12_2, ((rsi_1 * 3).d << 1) + r13_2, rdi, result_6)
        result = result_4
        result_2 = result_4
    else
        void*** rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        void* rax_13 = &rdi_3[0xa]
        
        if (rax_13 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x60)
            rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_13 = &rdi_3[0xa]
        
        *(arg2 + 0x30) = rax_13
        int64_t* rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rdi_3
        int128_t var_80_1 = arg1.o
        *(arg2 + 8) = &rdi_3[1]
        int128_t var_70_1 = (&arg_20).o
        int32_t** var_88_1 = &result_2
        int128_t var_50_1 = result_6.o
        void*** rax_15 = sub_140a82f30(0x50, 8)
        *rax_15 = &data_142ff87c8
        *(rax_15 + 8) = var_88_1.o
        *(rax_15 + 0x18) = var_80_1
        *(rax_15 + 0x28) = var_70_1
        *(rax_15 + 0x38) = (&arg_30).o
        void arg_48
        rax_15[9] = zx.q(&arg_48)
        int64_t (* var_c8)(int64_t* arg1)
        int64_t (* rax_16)(int64_t* arg1) = var_c8
        
        if (rax_15 != -8)
            rax_16 = sub_141932210
        
        *rdi_3 = &data_142ff4958
        rdi_3[1] = 0
        rdi_3[2] = rax_16
        rdi_3[4] = 0
        void var_a8
        
        if (rdi_3[2] != 0)
            void*** rcx_8 = &var_a8
            
            if (rax_15 != 0)
                rcx_8 = rax_15
            
            (**rcx_8)(rcx_8)
        
        if (rax_16 != 0)
            void*** rcx_9 = &var_a8
            
            if (rax_15 != 0)
                rcx_9 = rax_15
            
            (*rcx_9)[2](rcx_9)
        
        int32_t rbx_2 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_2)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_5
        rdx_5.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_2)
        result = result_2
    
    r13_1 = arg_18
    int64_t rcx_14 = sx.q(*(r13_1 + 0x3c)) * 5
    uint32_t r8_5 = *((rcx_14 << 3) + 0x1439c85e8)
    int32_t r11_1 = (&data_1439c85f4)[rcx_14 * 2]
    uint32_t r10_1 = *((rcx_14 << 3) + &data_1439c85ec)
    uint32_t rax_24 = r8_5
    uint32_t r9_5 = *(r13_1 + 0x60) u>> arg_30.b
    uint32_t rcx_16 = r10_1
    
    if (r9_5 u>= r8_5)
        rax_24 = r9_5
    
    uint32_t temp0_2 = divu.dp.d(0:(rax_24 - 1 + r8_5), r8_5)
    r12_1 = temp0_2 * r11_1
    
    if (r9_5 u>= r10_1)
        rcx_16 = r9_5
    
    *result_6 = r12_1
    r15_2 = divu.dp.d(0:(r10_1 - 1 + rcx_16), r10_1) * temp0_2 * r11_1
else
    int32_t* result_5 = result_2
    int64_t rcx_1 = sx.q(*(rbx + 0x3c)) * 5
    uint32_t r8_1 = *((rcx_1 << 3) + 0x1439c85e8)
    uint32_t r10 = *((rcx_1 << 3) + &data_1439c85ec)
    int32_t r11 = (&data_1439c85f4)[rcx_1 * 2]
    uint32_t rax_4 = r8_1
    uint32_t r9_2 = *(rbx + 0x60) u>> arg_30.b
    
    if (r9_2 u>= r8_1)
        rax_4 = r9_2
    
    uint32_t temp0 = divu.dp.d(0:(rax_4 - 1 + r8_1), r8_1)
    uint32_t rax_8 = r10
    
    if (r9_2 u>= r10)
        rax_8 = r9_2
    
    *result_5 = temp0 * r11
    r15_2 = divu.dp.d(0:(rax_8 - 1 + r10), r10) * temp0 * r11
    int32_t* result_3 = sub_140a82f30(zx.q(r15_2), zx.q(rdi + 0xf))
    r12_1 = *result_5
    result = result_3
    r13_1 = arg_18
int64_t rdx_10 = sx.q(*(arg1 + 0x15f30))
void* rbx_3 = arg1 + 0x15d28
int32_t* var_f8
var_f8.d = arg_30
var_f0:4.d = arg_38
int32_t rax_33 = (rdx_10 + 1).d
*(arg1 + 0x15f30) = rax_33
int32_t* result_1 = result
var_f8:4.d = r15_2
var_f0.d = r12_1

if (rax_33 s> *(arg1 + 0x15f34))
    sub_14194c140(rbx_3, rdx_10.d)

void* rax_34 = *(arg1 + 0x15f28)

if (rax_34 != 0)
    rbx_3 = rax_34

int64_t rsi_3 = rdx_10 << 5
*(rbx_3 + rsi_3) = r13_1.o
*(rbx_3 + rsi_3 + 0x10) = var_f8.o
*(arg1 + 0x15f38) += r15_2
return result
