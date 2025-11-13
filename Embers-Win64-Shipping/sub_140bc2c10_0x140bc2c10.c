// 函数: sub_140bc2c10
// 地址: 0x140bc2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t arg_18 = arg3
int64_t var_78 = arg3
int64_t rdx = data_143de5770
int16_t* var_58
int64_t result

if ((-0x8000000000000000 & rdx) == 0 || arg3 != 0)
    result = *sub_140b63580(&data_143de5770, &var_58)
    result.b = var_78 == result
else
    int64_t* rcx = &var_78
    char* rdx_1 = rdx & 0x7fffffffffffffff
    
    if (data_143de577c != arg3.b)
        result = sub_140b5b9d0(rcx, rdx_1)
    else
        result = sub_140b5b8c0(rcx, rdx_1)

if (result.b != 0)
    result.b = 0
    return result

EnterCriticalSection(arg1 + 0xd8)
int16_t* var_48
sub_140b63b70(&arg_20, &var_48)
int64_t* rax_1 = sub_140b63b70(&arg_18, &var_78)
int32_t var_40
int32_t rbx_1

if (var_40 == 0)
    rbx_1 = 0
else
    rbx_1 = var_40 - 1

int32_t rdx_5

if (rax_1[1].d == 0)
    rdx_5 = 2

if (rax_1[1].d != 0 || rbx_1 == 0xffffffff)
    rdx_5 = 1

var_58 = *rax_1
*rax_1 = 0
int32_t rax_4 = rax_1[1].d
int32_t rax_5 = *(rax_1 + 0xc)
rax_1[1] = 0
int32_t rdx_7 = rdx_5 + rax_4 + rbx_1

if (rdx_7 s> rax_5)
    sub_1405947f0(&var_58, rdx_7)

sub_140a2cf70(&var_58, var_48, rbx_1)
int16_t* const r14 = &data_142d40450
int16_t* const rdx_9 = &data_142d40450

if (rax_4 != 0)
    rdx_9 = var_58

int64_t var_68
sub_140b58260(&var_68, rdx_9, 1)
int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_78

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rbx_2 = var_68
int32_t rax_6 = *(arg1 + 0x10)
int64_t var_60 = rbx_2
void* const rcx_13

if (rax_6 == *(arg1 + 0x3c))
label_140bc2df1:
    rcx_13 = nullptr
else
    var_78 = rbx_2
    int32_t rax_8 = sub_140b5ead0(rbx_2.d) + var_78:4.d
    void* r8_1 = arg1 + 0x40
    void* rcx_11 = *(r8_1 + 8)
    
    if (rcx_11 != 0)
        r8_1 = rcx_11
    
    int32_t rax_10 = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_8)) << 2))
    
    if (rax_10 == 0xffffffff)
    label_140bc2df1_1:
        rcx_13 = nullptr
    else
        int64_t r8_2 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_13 = sx.q(rax_10) * 5
            rcx_13 = r8_2 + (rdx_13 << 3)
            
            if (*(r8_2 + (rdx_13 << 3)) == rbx_2)
                break
            
            rax_10 = *(rcx_13 + 0x20)
            
            if (rax_10 == 0xffffffff)
                goto label_140bc2df1_2
        
        if (rax_10 == 0xffffffff)
        label_140bc2df1_2:
            rcx_13 = nullptr

void* rax_11 = rcx_13 + 8

if (rcx_13 == 0)
    rax_11 = nullptr

if (rax_11 != 0)
label_140bc2ed7:
    
    if (*(rax_11 + 4) != 2)
        int32_t var_30_1 = arg5
        int64_t var_38 = arg2
        var_58 = &var_60
        int32_t var_50
        var_50.q = &var_38
        sub_140bbec20(arg1 + 0x58, &var_78, &var_58, nullptr)
        rbx_2.b = 1
    else
        rbx_2.b = 0
else
    rbx_2 = arg_18
    void* const rcx_17
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
        rcx_17 = nullptr
    else
        var_78 = rbx_2
        int32_t rax_14 = sub_140b5ead0(rbx_2.d) + var_78:4.d
        void* r8_3 = arg1 + 0x40
        void* rcx_15 = *(r8_3 + 8)
        
        if (rcx_15 != 0)
            r8_3 = rcx_15
        
        int32_t rax_16 = *(r8_3 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_14)) << 2))
        
        if (rax_16 == 0xffffffff)
        label_140bc2e69:
            rbx_2 = arg_18
            rcx_17 = nullptr
        else
            int64_t r8_4 = *(arg1 + 8)
            
            while (true)
                int64_t rdx_17 = sx.q(rax_16) * 5
                rcx_17 = r8_4 + (rdx_17 << 3)
                
                if (*(r8_4 + (rdx_17 << 3)) == rbx_2)
                    break
                
                rax_16 = *(rcx_17 + 0x20)
                
                if (rax_16 == 0xffffffff)
                    goto label_140bc2e69
            
            if (rax_16 == 0xffffffff)
                goto label_140bc2e69
            
            rbx_2 = arg_18
    
    var_60 = rbx_2
    rax_11 = rcx_17 + 8
    
    if (rcx_17 == 0)
        rax_11 = nullptr
    
    if (rax_11 != 0)
        goto label_140bc2ed7
    
    int64_t* rax_17 = sub_140b63b70(&var_68, &var_58)
    
    if (rax_17[1].d != 0)
        r14 = *rax_17
    
    sub_140af98a0("Unknown", 0x41, Compiled in export %s not found; it was never registered.", r14)
    int16_t* rcx_19 = var_58
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    sub_140afbb40()
    rbx_2.b = 0

int16_t* rcx_21 = var_48

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

if (arg1 != -0xd8)
    LeaveCriticalSection(arg1 + 0xd8)

return zx.q(rbx_2.b)
