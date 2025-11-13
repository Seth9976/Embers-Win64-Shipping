// 函数: sub_141b10200
// 地址: 0x141b10200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg3
uint64_t var_78 = arg1 + 0x40
uint64_t var_88 = arg1 + 8
void* var_50
__FrameHandler3::TryBlockMap::TryBlockMap(&var_50, arg1 + 8, arg1 + 0x40)
int16_t* rsi = nullptr
int16_t* var_a8
int16_t* var_98
void var_68
int32_t arg_c
char arg_20

if (*(var_50 + 8) s> 0)
    char arg_8
    arg_8.d = arg2
    arg_c = 0
    void* rax_3 = sub_141b17c70(arg1, arg_8.d)
    
    if (rax_3 != 0)
        int32_t rdi_1 = *(rax_3 + 8)
        int64_t r14_1 = *rax_3
        var_98 = nullptr
        int16_t* rax_4
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_98, rdi_1, 0)
            memcpy(var_98, r14_1, rdi_1 * 2)
            rax_4 = var_98
        else
            rax_4 = nullptr
        
        var_a8 = nullptr
        int16_t* const r15_1 = &data_142d40450
        int32_t var_a0_1 = 0
        
        if (rdi_1 != 0)
            r15_1 = rax_4
        
        int16_t* r12_1 = nullptr
        int32_t rax_5 = 0
        int32_t r14_2 = 0
        int32_t var_9c_1 = 0
        
        if (r15_1 != 0 && *r15_1 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (r15_1[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_a8, rdi_2.d + 1)
                rax_5 = var_9c_1
                r14_2 = var_a0_1
                r12_1 = var_a8
            
            r14_2 += rdi_2.d + 1
            
            if (r14_2 s> rax_5)
                sub_140594770(&var_a8)
                r12_1 = var_a8
            
            UnDecorator::getReferenceType(r12_1, r15_1, (rdi_2.d + 1) * 2)
        
        __FrameHandler3::TryBlockMap::TryBlockMap(&var_68, var_88, var_78)
        int64_t r13_1 = sx.q(sub_141a4b2f0(&var_68, arg2, 0))
        int64_t* rdi_6
        
        if (r13_1.d == 0xffffffff)
            r13_1 = sx.q(sub_141a376d0(&var_68, arg2))
            int32_t rcx_12 = *(arg1 + 0x20)
            arg_8.d = rcx_12
            *(arg1 + 0x20) = rcx_12 + 1
            
            if (rcx_12 + 1 s> *(arg1 + 0x24))
                sub_1405a4f90(arg1 + 0x18)
                rcx_12 = arg_8.d
            
            int64_t rdi_8 = r13_1 << 4
            int64_t rdx_12 = *(arg1 + 0x18) + rdi_8
            memmove(rdx_12 + 0x10, rdx_12, (rcx_12 - r13_1.d) << 4)
            rdi_6 = rdi_8 + *(arg1 + 0x18)
            *rdi_6 = 0
            rdi_6[1].d = r14_2
            
            if (r14_2 != 0)
                sub_1405a4c70(rdi_6, r14_2, 0)
                memcpy(*rdi_6, r12_1, r14_2 * 2)
            else
                *(rdi_6 + 0xc) = 0
        else
            rdi_6 = (r13_1 << 4) + *(arg1 + 0x18)
            
            if (rdi_6 != &var_a8)
                int32_t r8_6 = *(rdi_6 + 0xc)
                rdi_6[1].d = r14_2
                
                if (r14_2 != 0 || r8_6 != 0)
                    sub_1405a4c70(rdi_6, r14_2, r8_6)
                    memcpy(*rdi_6, r12_1, r14_2 * 2)
                else
                    *(rdi_6 + 0xc) = 0
        sub_141a50d30(&var_68, &arg_20, r13_1.d)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int16_t* rax_10 = var_98
        
        if (rax_10 != 0)
            sub_140a74f90(rax_10)
        
        r14 = arg3

__FrameHandler3::TryBlockMap::TryBlockMap(&var_68, var_88, var_78)
void* var_58_2 = arg1 + 0x18
arg_c = 0
var_98 = 2.q
int32_t arg_24 = 0
arg_20 = 2
int64_t var_90_1 = arg_20.q
var_88 = 0
int32_t var_80 = 0
var_78 = 0
int64_t var_70 = 0
sub_141a51280(&var_68, &var_98, &var_88, &var_78)
int32_t rdx_18 = 0
var_a8 = nullptr
int32_t r8_14 = 0
int32_t var_9c_2 = 0
int32_t r15_3 = 0

if (var_80 s> 0)
    int64_t rdi_9 = 0
    
    do
        uint64_t rax_14 = var_88
        
        if (r14 == 0)
            if (*(rax_14 + rdi_9) s> arg2)
            label_141b10508:
                uint64_t r12_2 = var_78
                int64_t r14_3 = sx.q(rdx_18)
                rdx_18 = (r14_3 + 1).d
                
                if (rdx_18 s> r8_14)
                    sub_1405a4cf0(&var_a8)
                    r8_14 = var_9c_2
                    rsi = var_a8
                
                *(rsi + (r14_3 << 2)) = *(r12_2 + rdi_9)
                r14 = arg3
        else if (*(rax_14 + rdi_9) s< arg2)
            goto label_141b10508
        
        r15_3 += 1
        rdi_9 += 4
    while (r15_3 s< var_80)

var_90_1.d = rdx_18
var_98 = rsi
var_98.o = var_98.o
int64_t result = sub_141b0f9a0(&var_68, &var_98)

if (rsi != 0)
    result = sub_140a74f90(rsi)

uint64_t rcx_26 = var_78

if (rcx_26 != 0)
    result = sub_140a74f90(rcx_26)

uint64_t rcx_27 = var_88

if (rcx_27 == 0)
    return result

return sub_140a74f90(rcx_27)
