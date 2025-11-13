// 函数: sub_1419409a0
// 地址: 0x1419409a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
TEB* gsbase

if (data_143eff940 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff940)
    
    if (data_143eff940 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_29 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.RHICmdBufferWriteLocks", r8_3)
        int64_t rax_27
        
        if (rax_29 == 0)
            rax_27 = 0
        else
            int64_t rdx_12 = *rax_29
            rax_27 = (*(rdx_12 + 0x58))(rax_29, rdx_12)
        
        data_143eff938 = rax_27
        _Init_thread_footer(&data_143eff940)

int32_t arg_28
int32_t rbx = arg_28
char rcx = data_143f01c92
int32_t* var_d0
int32_t rsi_1
int32_t* result
int32_t r12
void* r13
int32_t* result_2

if (*(data_143eff938 + 4) s<= 0 || rbx != 1 || rcx == 0)
    int32_t* result_6 = result_2
    void** var_e0_1 = &arg_18
    var_d0 = &arg_28
    result_2 = nullptr
    
    if (rcx == 0)
        goto label_141940c1d
    
    if (sub_140a80f10() != 0)
        rbx = arg_28
        rcx = data_143f01c92
    label_141940c1d:
        int32_t rdi_5 = arg_20
        void* rsi_2 = arg_18
        
        if (rcx != 0)
            sub_140a80f40()
        
        int32_t* result_4 = sub_1419401a0(rsi_2, rdi_5, 0, rbx, result_6)
        result = result_4
        result_2 = result_4
    else
        void*** rdi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        void* rax_5 = &rdi_2[0xa]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x60)
            rdi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_5 = &rdi_2[0xa]
        
        *(arg2 + 0x30) = rax_5
        int64_t* rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rdi_2
        int128_t var_70_1 = arg1.o
        *(arg2 + 8) = &rdi_2[1]
        int32_t** var_78_1 = &result_2
        int128_t var_60_1 = (&arg_20).o
        int128_t var_50_1 = result_6.o
        void*** rax_7 = sub_140a82f30(0x40, 8)
        *rax_7 = &data_142ff8618
        *(rax_7 + 8) = var_78_1.o
        *(rax_7 + 0x18) = var_70_1
        *(rax_7 + 0x28) = var_60_1
        void arg_38
        rax_7[7] = zx.q(&arg_38)
        int64_t (* var_b8)(int64_t* arg1)
        int64_t (* rax_8)(int64_t* arg1) = var_b8
        
        if (rax_7 != -8)
            rax_8 = sub_141932050
        
        *rdi_2 = &data_142ff4958
        rdi_2[1] = 0
        rdi_2[2] = rax_8
        rdi_2[4] = 0
        void var_98
        
        if (rdi_2[2] != 0)
            void*** rcx_5 = &var_98
            
            if (rax_7 != 0)
                rcx_5 = rax_7
            
            (**rcx_5)(rcx_5)
        
        if (rax_8 != 0)
            void*** rcx_6 = &var_98
            
            if (rax_7 != 0)
                rcx_6 = rax_7
            
            (*rcx_6)[2](rcx_6)
        
        int32_t rbx_2 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_2)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_4
        rdx_4.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_2)
        result = result_2
    
    r13 = arg_18
    int64_t rcx_11 = sx.q(*(r13 + 0x3c)) * 5
    uint32_t r8_1 = *((rcx_11 << 3) + 0x1439c85e8)
    int32_t r11_1 = (&data_1439c85f4)[rcx_11 * 2]
    uint32_t r10_1 = *((rcx_11 << 3) + &data_1439c85ec)
    uint32_t rax_15 = r8_1
    char rcx_12 = arg_20.b
    uint32_t rdx_8 = *(r13 + 0x60) u>> rcx_12
    uint32_t r9_3 = *(r13 + 0x64) u>> rcx_12
    uint32_t rcx_13 = r10_1
    
    if (rdx_8 u>= r8_1)
        rax_15 = rdx_8
    
    uint32_t temp0_1 = divu.dp.d(0:(rax_15 - 1 + r8_1), r8_1)
    r12 = temp0_1 * r11_1
    
    if (r9_3 u>= r10_1)
        rcx_13 = r9_3
    
    *result_6 = r12
    rsi_1 = divu.dp.d(0:(r10_1 - 1 + rcx_13), r10_1) * temp0_1 * r11_1
else
    int32_t* result_5 = result_2
    int32_t rax_3 = sub_14193c7f0(arg_18, arg_20.b, nullptr)
    rsi_1 = rax_3
    int32_t* result_3 = sub_140a82f30(zx.q(rax_3), 0x10, arg5, 1, result_5)
    r12 = *result_5
    result = result_3
    r13 = arg_18
int64_t rdx_11 = sx.q(*(arg1 + 0x15f30))
void* rbx_3 = arg1 + 0x15d28
int32_t* var_d8
var_d8.d = arg_20
var_d0:4.d = arg_28
int32_t rax_24 = (rdx_11 + 1).d
*(arg1 + 0x15f30) = rax_24
int32_t* result_1 = result
var_d8:4.d = rsi_1
var_d0.d = r12

if (rax_24 s> *(arg1 + 0x15f34))
    sub_14194c140(rbx_3, rdx_11.d)

void* rax_25 = *(arg1 + 0x15f28)

if (rax_25 != 0)
    rbx_3 = rax_25

int64_t r15_2 = rdx_11 << 5
*(rbx_3 + r15_2) = r13.o
*(rbx_3 + r15_2 + 0x10) = var_d8.o
*(arg1 + 0x15f38) += rsi_1
return result
