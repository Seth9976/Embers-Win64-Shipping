// 函数: sub_140d004c0
// 地址: 0x140d004c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x78)

if (rbx == 0)
    *arg2 = rbx
    arg2[1] = rbx
    sub_1405947f0(arg2, 6)
    int32_t rax_10 = arg2[1].d + 6
    arg2[1].d = rax_10
    
    if (rax_10 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"uint8", 0xc)
    return arg2

int32_t rax = *(rbx + 0x50)
bool rdx = *(rbx + 0x10) != sub_140bdf730()
int64_t rax_2

if ((arg4.b & 2) != 0)
    rax_2 = *(arg1 + 0x40)

char arg_8

if ((arg4.b & 2) != 0 && (test_bit(rax_2, 0xa) || (not.b((rax_2 u>> 8).b) & 1) != 0 || rdx != 0))
    arg_8 = 1
else
    arg_8 = 0

int32_t r14_1 = arg4 & 0x80
int64_t r12

if (r14_1 == 0 || rdx == 0)
    r12.b = 0
else
    r12.b = 1

void* rax_4 = *(arg1 + 0x78)
int16_t* rbx_2 = nullptr
int16_t* rsi = nullptr
int16_t* var_58 = nullptr
int32_t rbp = 0
int32_t var_4c = 0
int32_t r15 = 0
int32_t var_50

if (*(rax_4 + 0x38) s<= 1)
    int64_t var_64
    
    if (r14_1 == 0 || rdx == 0)
        var_64 = *(rax_4 + 0x18)
        sub_140b63b70(&var_64, &var_58)
        rsi = var_58
    label_140d00653:
        r15 = var_4c
        rbx_2 = rsi
        rbp = var_50
    else
        var_64 = *(rax_4 + 0x18)
        int64_t var_48
        sub_140b63b70(&var_64, &var_48)
        void* var_38
        int16_t** rax_7 = sub_140d32080(&var_38, &var_48, 0, &data_142e9fe88)
        
        if (&var_58 != rax_7)
            rsi = *rax_7
            *rax_7 = nullptr
            rbp = rax_7[1].d
            r15 = *(rax_7 + 0xc)
            rax_7[1] = 0
            rbx_2 = rsi
        
        void* rcx_4 = var_38
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
else if (&var_58 != rax_4 + 0x30)
    rbp = *(rax_4 + 0x38)
    int64_t r14_2 = *(rax_4 + 0x30)
    var_50 = rbp
    
    if (rbp != 0)
        sub_1405a4c70(&var_58, rbp, 0)
        rsi = var_58
        memcpy(rsi, r14_2, rbp * 2)
        goto label_140d00653

if (rax == 2 || arg_8 != 0 || r12.b != 0)
    *arg2 = rbx_2
    arg2[1].d = rbp
    *(arg2 + 0xc) = r15
else
    int16_t* const r8_2 = &data_142d40450
    
    if (rbp != 0)
        r8_2 = rsi
    
    sub_140a2e390(arg2, u"TEnumAsByte<%s>", r8_2)
    
    if (rsi != 0)
        sub_140a74f90(rsi)

return arg2
