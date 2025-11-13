// 函数: sub_140b47090
// 地址: 0x140b47090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b3cdd0()
int32_t r12 = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int32_t rcx = 0
int32_t var_4c = 0
int64_t rsi = -1

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        rcx = var_4c
        rdx = var_50
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_50 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg1, (rbx_1.d + 1) * 2)

int16_t* var_48
sub_140a35790(&var_58, &var_48)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

EnterCriticalSection(rax + 0xc0)
int32_t var_40
int32_t rbp = var_40
int16_t* r15 = var_48
int32_t rcx_7
int16_t* rdx_4

if (rbp == 0)
    rdx_4 = &data_142d40450
    rcx_7 = 0
else
    rdx_4 = r15
    rcx_7 = rbp - 1

int32_t rax_2 = sub_1405969c0(rcx_7, rdx_4)
int32_t rcx_8 = *(rax + 0x60)
int32_t arg_8 = rax_2
uint64_t result
void* rbx_5

if (rcx_8 == *(rax + 0x8c))
label_140b4724a:
    sub_1405d1820(rax + 0x58, &var_58)
    int64_t* rbx_6 = var_50.q
    sub_140596d10(rbx_6, &var_48)
    int32_t rax_5 = var_58.d
    int32_t r8_6 = arg_8
    rbx_6[2] = 0
    rbx_6[3] = 0
    rbx_6[4].d = 0xffffffff
    sub_1405d2a60(rax + 0x58, &arg_8, r8_6, rbx_6, rax_5, nullptr)
    result = *(rax + 0x58)
    rbx_5 = result + sx.q(arg_8) * 0x28
else
    void* r9_1 = rax + 0x90
    void* rdx_5 = *(r9_1 + 8)
    
    if (rdx_5 != 0)
        r9_1 = rdx_5
    
    int32_t rbx_3 = *(r9_1 + (((sx.q(*(rax + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rbx_3 == 0xffffffff)
        goto label_140b4724a
    
    int64_t* rdx_6 = *(rax + 0x58)
    int64_t r13_1
    
    while (true)
        int16_t* rax_4 = &data_142d40450
        r13_1 = sx.q(rbx_3) * 0x28
        
        if (rbp != 0)
            rax_4 = r15
        
        int16_t* const rcx_11
        
        if (rdx_6[sx.q(rbx_3) * 5 + 1].d == 0)
            rcx_11 = &data_142d40450
        else
            rcx_11 = rdx_6[sx.q(rbx_3) * 5]
        
        result = sub_140a54510(rcx_11, rax_4)
        
        if (result.d == 0)
            break
        
        rdx_6 = *(rax + 0x58)
        rbx_3 = rdx_6[sx.q(rbx_3) * 5 + 4].d
        
        if (rbx_3 == 0xffffffff)
            goto label_140b4724a
        
        rbp = var_40
        r15 = var_48
    
    if (rbx_3 == 0xffffffff)
        goto label_140b4724a
    
    void* rbx_4 = *(rax + 0x58)
    rbx_5 = rbx_4 + r13_1
    
    if (rbx_4 == neg.q(r13_1))
        goto label_140b4724a

if (*(rbx_5 + 0x10) != arg2)
    int32_t rsi_1
    
    if (arg2 == 0 || *arg2 == 0)
        rsi_1 = 0
    else
        do
            rsi += 1
        while (arg2[rsi] != 0)
        
        rsi_1 = rsi.d + 1
    
    *(rbx_5 + 0x18) = 0
    
    if (*(rbx_5 + 0x1c) != rsi_1)
        sub_1405947f0(rbx_5 + 0x10, rsi_1)
        r12 = *(rbx_5 + 0x18)
    
    result = zx.q(r12 + rsi_1)
    *(rbx_5 + 0x18) = result.d
    
    if (result.d s> *(rbx_5 + 0x1c))
        result = sub_140594770(rbx_5 + 0x10)
    
    if (rsi_1 != 0)
        result = memcpy(*(rbx_5 + 0x10), arg2, rsi_1 * 2)

if (rax != -0xc0)
    result = LeaveCriticalSection(rax + 0xc0)

int16_t* rcx_20 = var_48

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
