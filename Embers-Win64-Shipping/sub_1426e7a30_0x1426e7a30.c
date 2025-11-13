// 函数: sub_1426e7a30
// 地址: 0x1426e7a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
void* const rbx_1

if (arg2 == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdi + 0x38))
            rbx_1 = nullptr
        else
            rbx_1 = rdi
            
            if (*(*(rdi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rbx_1 = nullptr

void* rbx_2 = *(rbx_1 + 0x18)
int32_t rax_4 = *(arg1 + 0xe0)
void* arg_8 = rbx_2
void* rax_9

if (rax_4 == *(arg1 + 0x10c))
labelid_16:
    rax_9 = nullptr
else
    int32_t rax_6 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
    void* r8_1 = arg1 + 0x110
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_8 = *(r8_1 + (((sx.q(*(arg1 + 0x120)) - 1) & sx.q(rax_6)) << 2))
    
    if (rax_8 == 0xffffffff)
    labelid_16:
        rax_9 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0xd8)
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_8)
            int64_t rcx_3 = rdx_4 * 3
            
            if (*(r8_2 + (rcx_3 << 3)) == rbx_2)
                break
            
            rax_8 = *(r8_2 + (rcx_3 << 3) + 0x10)
            
            if (rax_8 == 0xffffffff)
                goto label_1426e7adb_1
        
        if (rax_8 == 0xffffffff)
        label_1426e7adb:
            rax_9 = nullptr
        else
            void* rax_18 = r8_2 + rdx_4 * 0x18
            
            if (rax_18 == 0)
            label_1426e7adb_1:
                rax_9 = nullptr
            else
                rax_9 = *(rax_18 + 8)

if (rax_9 != 0)
    return rax_9

void* rcx_4 = nullptr
arg_8 = nullptr

if (rdi != 0)
    rcx_4 = *(rdi + 0x118)
    
    if (rcx_4 == 0)
        (*(*rdi + 0x390))(rdi)
        rcx_4 = *(rdi + 0x118)

int32_t var_38_1 = 0x7f800000
void* rax_11 = sub_140d2e1f0(rcx_4, arg1, arg_8, 0xfffffff, 0, 0)
arg_8 = rax_11
int64_t rbp_1 = sx.q(*(arg1 + 0xc0))
int32_t rcx_6 = (rbp_1 + 1).d
*(arg1 + 0xc0) = rcx_6

if (rcx_6 s> *(arg1 + 0xc4))
    sub_1405a4d70(arg1 + 0xb8)

*(*(arg1 + 0xb8) + (rbp_1 << 3)) = rax_11

if (rdi == 0)
    rdi = nullptr
else
    void* rax_13 = sub_142736ba0()
    
    if (rax_13 == 0)
        rdi = nullptr
    else
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s> *(rdi + 0x38) || *(*(rdi + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
            rdi = nullptr

int64_t arg_10 = *(rdi + 0x18)
sub_1405a7750(arg1 + 0xd8, &arg_10, &arg_8)
return arg_8
