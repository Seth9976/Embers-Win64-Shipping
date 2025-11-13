// 函数: sub_140b9aae0
// 地址: 0x140b9aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* arg_10 = arg2
void* rdi_1 = arg2
int16_t* const rsi_1 = &data_142d40450

if (data_143de5480 != 0)
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0 && sub_140cc1700() == 0)
        int64_t var_58
        int64_t* rax_3 = sub_140d21830(rdi_1, &var_58, 0, 0)
        int16_t* const r9_1
        
        if (rax_3[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_3
        
        sub_140af98a0("Unknown", 0x1467, 
            Trying to add an object %s to FAsyncPackage referenced objects list out", r9_1)
        int64_t rcx_1 = var_58
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_140afbb40()

EnterCriticalSection(arg1 + 0x1b0)
void* r14_1 = nullptr
void arg_18

if (*sub_1408296b0(arg1 + 0x160, &arg_18, rdi_1) == 0xffffffff)
    void arg_20
    sub_140b91690(arg1 + 0x160, &arg_20, &arg_10, nullptr)
    int32_t rax_5 = *(rdi_1 + 0xc)
    void* const r8_3
    
    if (rax_5 s>= data_143e1d9b4)
        r8_3 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        uint32_t rdx_4 = zx.d(temp0_1)
        int32_t rax_7 = temp1_1 + rdx_4
        r8_3 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_4) * 0x18
    
    int32_t rax_12 = *(r8_3 + 8)
    
    if (test_bit(rax_12, 0x1a))
        do
            bool z_1
            
            if (rax_12 == *(r8_3 + 8))
                *(r8_3 + 8) = rax_12 & 0xfbffffff
                z_1 = true
            else
                *(r8_3 + 8)
                z_1 = false
            
            if (z_1)
                break
            
            rax_12 = *(r8_3 + 8)
        while (test_bit(rax_12, 0x1a))
        
        rdi_1 = arg_10

if (arg1 != -0x1b0)
    LeaveCriticalSection(arg1 + 0x1b0)

int32_t rax_14 = *(rdi_1 + 0xc)

if (rax_14 s< data_143e1d9b4)
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_14)
    uint32_t rdx_7 = zx.d(temp2_1)
    int32_t rax_16 = temp3_1 + rdx_7
    r14_1 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3)) + sx.q(zx.d(rax_16.w) - rdx_7) * 0x18

if (((*(r14_1 + 8) u>> 0x1c).b & 1) == 0)
    return 

int64_t var_38
int64_t* rax_22 = sub_140b63b70(arg1 + 0x14, &var_38)
int16_t* const rbx_2

if (rax_22[1].d == 0)
    rbx_2 = &data_142d40450
else
    rbx_2 = *rax_22

int64_t var_48
int64_t* rax_23 = sub_140d21830(rdi_1, &var_48, 0, 0)

if (rax_23[1].d != 0)
    rsi_1 = *rax_23

int16_t* const var_68_1 = rbx_2
sub_140af98a0("Unknown", 0x1470, 
    Trying to add an unreachable object %s to FAsyncPackage %s referenced objects list.", rsi_1)
int64_t rcx_18 = var_48

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_38

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140afbb40()
