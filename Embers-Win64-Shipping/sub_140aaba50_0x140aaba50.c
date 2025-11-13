// 函数: sub_140aaba50
// 地址: 0x140aaba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int16_t* arg_28
int16_t* r14 = arg_28
int16_t* const rdi = &data_142d40450
int16_t* var_a0
int32_t var_98

if (*r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    sub_140aab680(sub_140ab2000(), r14, rbx_1.d, &var_a0, &var_98)
else
    var_a0 = &data_142d40450
    var_98 = 0
int16_t* var_b0
int32_t var_a8

if (*arg4 != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (arg4[rbx_2] != 0)
    
    sub_140aab680(sub_140ab2000(), arg4, rbx_2.d, &var_b0, &var_a8)
else
    var_b0 = &data_142d40450
    var_a8 = 0
int64_t* r15_1 = arg_8
int128_t zmm1 = var_a0.o
int128_t var_80 = var_b0.o
int128_t var_70 = zmm1
EnterCriticalSection(&r15_1[0xa])
sub_140aaaf00(r15_1, &arg_8, &var_80)
int64_t rax_3 = sx.q(arg_8.d)
void* const rcx_6

if (rax_3.d == 0xffffffff)
    rcx_6 = nullptr
else
    rcx_6 = (rax_3 << 6) + *r15_1

int64_t* r14_1 = rcx_6 + 0x20

if (rcx_6 == 0)
    r14_1 = nullptr

if (r14_1 == 0)
label_140aabbff:
    
    if (r15_1 != -0x50)
        LeaveCriticalSection(&r15_1[0xa])
    
    int64_t var_d8 = 0
    int64_t r14_2 = 0
    int64_t var_d0_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg3[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_d8, rdi_1.d + 1)
            r14_2 = var_d8
        
        int32_t rax_11 = var_d0_1.d + rdi_1.d + 1
        var_d0_1.d = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_d8)
            r14_2 = var_d8
        
        UnDecorator::getReferenceType(r14_2, arg3, (rdi_1.d + 1) * 2)
    
    void*** rax_12 = j_sub_140a82f30(0x38)
    void*** rdi_4
    
    if (rax_12 == 0)
        rdi_4 = nullptr
    else
        void var_40
        void*** rax_15 = sub_140a95410(rax_12, 
            sub_140aaef90(sub_140aae970(), &var_40, &var_80, &var_70, &var_d8))
        r14_2 = var_d8
        rdi_4 = rax_15
    
    void*** var_c8 = rdi_4
    void*** rax_16 = j_sub_140a82f30(0x18)
    
    if (rax_16 == 0)
        rax_16 = nullptr
    else
        rax_16[1].d = 1
        *rax_16 = &data_142d42ea8
        *(rax_16 + 0xc) = 1
        rax_16[2] = rdi_4
    
    int32_t var_b8_1 = 8
    void* rax_17 = sub_140aae970()
    void*** rcx_19 = var_c8
    int16_t rdi_5 = *(rax_17 + 0x120)
    void* rax_19 = (*rcx_19)[6](rcx_19)
    void var_60
    
    if (rax_19 != &var_60)
        *(rax_19 + 8) = rdi_5
    
    void var_50
    
    if (rax_19 != &var_60 && rax_19 + 0x10 != &var_50)
        int64_t rcx_20 = *(rax_19 + 0x10)
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        *(rax_19 + 0x10) = r14_2
        *(rax_19 + 0x18) = var_d0_1.d
        *(rax_19 + 0x1c) = var_d0_1:4.d
    else if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    EnterCriticalSection(&r15_1[0xa])
    int128_t* var_90 = &var_80
    void**** var_88_1 = &var_c8
    sub_140a926e0(r15_1, &arg_28, &var_90, nullptr)
    
    if (r15_1 != -0x50)
        LeaveCriticalSection(&r15_1[0xa])
    
    int64_t* rbx_4 = rax_16
    *arg2 = var_c8
    arg2[1] = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
        rbx_4 = rax_16
    
    arg2[2].d = var_b8_1
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t r13_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (r13_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, zx.q(r13_1))
else
    int64_t* rcx_7 = *r14_1
    int64_t* rax_5 = (*(*rcx_7 + 0x28))(rcx_7)
    int64_t rdx_3 = *rax_5
    int16_t** rax_6 = (*(rdx_3 + 0x50))(rax_5, rdx_3)
    
    if (rax_6 == 0)
        int64_t* rcx_9 = *r14_1
        rax_6 = (*(*rcx_9 + 0x10))(rcx_9)
        
        if (rax_6 == 0)
            goto label_140aabbff
    
    if (rax_6[1].d != 0)
        rdi = *rax_6
    
    void* rdx_5 = arg3 - rdi
    uint32_t i
    uint32_t rcx_10
    
    do
        rcx_10 = zx.d(*rdi)
        i = zx.d(*(rdi + rdx_5))
        
        if (rcx_10 != i)
            break
        
        rdi = &rdi[1]
    while (i != 0)
    
    if (rcx_10 - i != 0)
        goto label_140aabbff
    
    *arg2 = *r14_1
    void* rax_9 = r14_1[1]
    arg2[1] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    arg2[2].d = r14_1[2].d
    
    if (r15_1 != -0x50)
        LeaveCriticalSection(&r15_1[0xa])

return arg2
