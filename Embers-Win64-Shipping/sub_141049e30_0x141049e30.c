// 函数: sub_141049e30
// 地址: 0x141049e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x30)
uint64_t result = 0
int64_t r13 = arg1
uint64_t var_78 = 0
int32_t r14 = 1 << (data_1439c7a34).b
uint64_t r15 = 0
int64_t var_70 = 0
int32_t rbx = 0
int32_t r14_1 = r14 - 1

if (r14 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(r14_1)
    int32_t rsi_1 = temp0_1
    int32_t arg_10 = rsi_1
    
    do
        void* rdi_1 = *(r12 + (zx.q(rsi_1) << 3) + 0x9d8)
        void** var_58
        sub_141022330(**(rdi_1 + 0x6d8), &var_58, 0)
        var_58 = &data_142efcd90
        int64_t* var_50
        
        if (var_50 != 0)
            int32_t rax_1 = *(var_50 + 0x14)
            *(var_50 + 0x14) -= 1
            
            if (rax_1 == 1 && var_50 != 0)
                sub_14100eba0(var_50)
                j_sub_140a74f90(var_50)
            
            r15 = var_78
            rbx = var_70.d
        
        int64_t var_68_1 = 0
        *(rdi_1 + 0x38)
        int64_t rdi_2 = sx.q(0)
        
        if (rdi_2.d != 0)
            int32_t rdx_3 = rdi_2.d + rbx
            
            if (rdx_3 s> var_70:4.d)
                sub_1405a5410(&var_78, rdx_3)
                rbx = var_70.d
                r15 = var_78
            
            memmove((sx.q(rbx) << 4) + r15, var_68_1, (rdi_2 << 4).d)
            rbx += rdi_2.d
            int32_t var_60_1 = 0
            var_70.d = rbx
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        result = zx.q(not.d(1 << rsi_1.b)) & zx.q(r14_1)
        r14_1 = result.d
        
        if (result.d != 0)
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_forward(result.d)
            rsi_1 = temp0_3
            int32_t arg_20 = rsi_1
        else
            rsi_1 = 0x20
    while (result.d != 0)
    
    r13 = arg1

*(r13 + 0xd8) = 0

if (*(r13 + 0xdc) != rbx)
    result = sub_1405c5570(r13 + 0xd0, rbx)

*(r13 + 0xe8) = 0

if (*(r13 + 0xec) != rbx)
    result = sub_1405c5570(r13 + 0xe0, rbx)

*(r13 + 0xf8) = 0

if (*(r13 + 0xfc) != rbx)
    result = sub_1405c5570(r13 + 0xf0, rbx)

if (rbx s> 0)
    sub_14103ba60(r15, rbx, arg1.b, 0)
    int64_t r13_1 = sx.q(*(r13 + 0xd8))
    int32_t rax_4 = (r13_1 + 1).d
    *(r13 + 0xd8) = rax_4
    
    if (rax_4 s> *(r13 + 0xdc))
        sub_1405a4d70(r13 + 0xd0)
    
    *(*(r13 + 0xd0) + (r13_1 << 3)) = *r15
    int64_t r13_2 = sx.q(*(r13 + 0xe8))
    int32_t rax_6 = (r13_2 + 1).d
    *(r13 + 0xe8) = rax_6
    
    if (rax_6 s> *(r13 + 0xec))
        sub_1405a4d70(r13 + 0xe0)
    
    *(*(r13 + 0xe0) + (r13_2 << 3)) = *(r15 + 8)
    int64_t r13_3 = sx.q(*(r13 + 0xf8))
    int32_t rax_8 = (r13_3 + 1).d
    *(r13 + 0xf8) = rax_8
    
    if (rax_8 s> *(r13 + 0xfc))
        sub_1405a4d70(r13 + 0xf0)
    
    result = *(r13 + 0xf0)
    *(result + (r13_3 << 3)) = 0
    int64_t r13_4 = sx.q(rbx)
    
    if (r13_4 s> 1)
        int64_t i_1 = r13_4 - 1
        int64_t* r12_1 = r15 + 0x10
        int64_t i
        
        do
            int64_t rbx_2 = sx.q(*(r13 + 0xd8))
            int32_t rax_9 = (rbx_2 + 1).d
            *(r13 + 0xd8) = rax_9
            
            if (rax_9 s> *(r13 + 0xdc))
                sub_1405a4d70(r13 + 0xd0)
            
            *(*(r13 + 0xd0) + (rbx_2 << 3)) = *r12_1
            int64_t rbx_3 = sx.q(*(r13 + 0xe8))
            int32_t rax_11 = (rbx_3 + 1).d
            *(r13 + 0xe8) = rax_11
            
            if (rax_11 s> *(r13 + 0xec))
                sub_1405a4d70(r13 + 0xe0)
            
            *(*(r13 + 0xe0) + (rbx_3 << 3)) = r12_1[1]
            int64_t rdx_14 = sx.q(*(r13 + 0xf8))
            int64_t rcx_26 = *r12_1
            int64_t r8_4 = rdx_14
            int64_t rbx_5 = rcx_26 - r12_1[-1]
            
            if (rcx_26 u< r12_1[-1])
                rbx_5 = 0
            
            int64_t rbx_6 = rbx_5 + *(*(r13 + 0xf0) + (rdx_14 << 3) - 8)
            int32_t rax_14 = (rdx_14 + 1).d
            *(r13 + 0xf8) = rax_14
            
            if (rax_14 s> *(r13 + 0xfc))
                sub_1405a4d70(r13 + 0xf0)
                r8_4 = rdx_14
            
            result = *(r13 + 0xf0)
            r12_1 = &r12_1[2]
            *(result + (r8_4 << 3)) = rbx_6
            i = i_1
            i_1 -= 1
        while (i != 1)
        r15 = var_78

if (r15 == 0)
    return result

return sub_140a74f90(r15)
