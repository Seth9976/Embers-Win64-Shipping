// 函数: sub_1422f0bc0
// 地址: 0x1422f0bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rbx = sx.q(arg3)
EnterCriticalSection(arg1)
char rax_2

if (rbx.d s< 0 || rbx.d s>= arg1->__offset(0x50).d)
    rax_2 = 0
else
    rax_2 = 1

void* __offset(_RTL_CRITICAL_SECTION, 0x38) r8
int32_t temp0_1
int32_t temp1_1

if (rax_2 != 0)
    void* rax_3 = arg1->__offset(0x48).q
    r8 = arg1 + 0x38
    
    if (rax_3 != 0)
        r8 = rax_3
    
    temp0_1:temp1_1 = sx.q(rbx.d)

if (rax_2 == 0
        || (*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & 1 << (rbx.b & 0x1f)) == 0)
    rax_2 = 0
else
    rax_2 = 1

void var_a8

if (rax_2 == 0)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int64_t* rcx_3 = *(sub_1422eb2b0(&arg1[1], &var_a8, rbx.d) + 8)
    
    if (rcx_3 != 0)
        *rcx_3 = 0
        void* rdx_4 = &rcx_3[2]
        rcx_3[1] = 0
        *(rdx_4 + 0x10) = 0
        *(rdx_4 + 0x18) = 0
        *(rdx_4 + 0x1c) = 0x80
        void* rax_10 = *(rdx_4 + 0x10)
        
        if (rax_10 != 0)
            rdx_4 = rax_10
        
        *rdx_4 = 0
        *(rdx_4 + 8) = 0
        rcx_3[6].d = 0xffffffff
        *(rcx_3 + 0x34) = 0
        rcx_3[8] = 0
        rcx_3[9].d = 0
        sub_1422dbff0(rcx_3, &var_98)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_14059abb0(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_7 = var_98
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int32_t rax_11 = arg4[1].d
int16_t* rdx_6

if (rax_11 == 0)
    rdx_6 = &data_142d40450
else
    rdx_6 = *arg4

int32_t rcx_8 = rax_11 - 1

if (rax_11 == 0)
    rcx_8 = 0

int32_t rax_12 = sub_1405969c0(rcx_8, rdx_6)
int64_t* rax_13 = sub_1422d53b0(rbx * 0x50 + arg1->__offset(0x28).q, rax_12, arg4)
void* __offset(_RTL_CRITICAL_SECTION, 0x28) rdi
rdi.b = 0
int64_t* rbx_1 = *rax_13
void* r15_2 = &rbx_1[sx.q(rax_13[1].d) * 4]

if (rbx_1 == r15_2)
label_1422f0dd8:
    rax_13[2].d += arg2
    int64_t rbx_2 = sx.q(rax_13[1].d)
    int32_t rax_15 = (rbx_2 + 1).d
    rax_13[1].d = rax_15
    
    if (rax_15 s> *(rax_13 + 0xc))
        sub_1405c4e40(rax_13)
    
    int64_t* rdi_3 = (rbx_2 << 5) + *rax_13
    int64_t* rax_16 = sub_140596d10(&var_a8, arg5)
    sub_140596d10(rdi_3, rax_16)
    rdi_3[2].d = arg2
    *(rdi_3 + 0x14) = 0
    *(rdi_3 + 0x1c) = 0
    int64_t rcx_16 = *rax_16
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
else
    do
        int16_t* rdx_8
        
        if (rbx_1[1].d == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *rbx_1
        
        int16_t* const rcx_12
        
        if (arg5[1].d == 0)
            rcx_12 = &data_142d40450
        else
            rcx_12 = *arg5
        
        int32_t rax_14 = sub_140a54510(rcx_12, rdx_8)
        
        if (rax_14 == 0)
            rdi.b = 1
            
            if (rbx_1[2].d == rax_14)
                rbx_1[2].d = arg2
                rax_13[2].d += arg2
            else
                rbx_1[3].d += arg2
                rax_13[3].d += arg2
        
        rbx_1 = &rbx_1[4]
    while (rbx_1 != r15_2)
    
    if (rdi.b == 0)
        goto label_1422f0dd8

int64_t result = LeaveCriticalSection(arg1)
int64_t rcx_18 = *arg4

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = *arg5

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_c8)
return result
