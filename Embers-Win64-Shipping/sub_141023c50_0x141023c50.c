// 函数: sub_141023c50
// 地址: 0x141023c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg3
int64_t* rdi_1 = *(arg2 + 8) + 0xb8
void* r15 = arg1
int64_t* var_90 = rdi_1
int32_t rbx = rdi_1[1].d

if (rbx == 0)
    return 0

int32_t rsi = 0
int64_t var_78 = 0
int64_t var_70 = 0

if (rbx s> 0)
    sub_1405a51b0(&var_78, rbx)

int64_t var_68
__builtin_memset(&var_68, 0, 0x20)
int32_t r12 = 0
void** var_88

if (rbx != 0)
    do
        int64_t* rbx_3 = (sx.q(r12) << 4) + *rdi_1
        int32_t r14_1 = *(rbx_3 + 0xc)
        void* r15_1 = *rbx_3
        int64_t var_58_1
        var_58_1.d = r14_1
        int32_t rax_1 = sub_1410626f0(r15_1 + 0xc8, r14_1)
        int32_t rdi_2 = rbx_3[1].d
        int32_t r13_1 = rax_1
        int32_t var_98 = rax_1
        
        if (rax_1 != rdi_2)
            int64_t r13_2 = sx.q(var_70.d)
            var_58_1:4.d = rax_1
            int64_t var_50_1
            var_50_1.d = rdi_2
            int32_t rcx_3 = (r13_2 + 1).d
            int64_t var_60_1 = *(*rbx_3 + 0x20)
            var_70.d = rcx_3
            
            if (rcx_3 s> var_70:4.d)
                sub_1405c4e40(&var_78)
            
            int64_t rax_2 = var_78
            r13_1 = var_98
            int64_t rcx_6 = r13_2 << 5
            *(rcx_6 + rax_2) = var_68.o
            *(rcx_6 + rax_2 + 0x10) = var_58_1.o
        
        int64_t r9_1 = *rbx_3
        var_98.q = r9_1
        uint32_t r9_2 = (r9_1 u>> 4).d
        int32_t r8_1 = (0x9e3779b9 - r9_2) ^ r9_2 << 8
        int32_t rdx_6 = neg.d(r8_1 + r9_2) ^ r8_1 u>> 0xd
        int32_t r9_5 = (r9_2 - r8_1 - rdx_6) ^ rdx_6 u>> 0xc
        int32_t r8_4 = (r8_1 - r9_5 - rdx_6) ^ r9_5 << 0x10
        int32_t rdx_9 = (rdx_6 - r8_4 - r9_5) ^ r8_4 u>> 5
        int32_t r9_8 = (r9_5 - r8_4 - rdx_9) ^ rdx_9 u>> 3
        int32_t r8_7 = (r8_4 - r9_8 - rdx_9) ^ r9_8 << 0xa
        void* rax_18 =
            sub_141001720(*(arg2 + 8) + 0xc8, (rdx_9 - r8_7 - r9_8) ^ r8_7 u>> 0xf, &var_98)
        var_88 = var_98.q
        
        if (sub_14105eaa0(rax_18) == 0)
            sub_141064100(rax_18, zx.d(*(var_88 + 0xc2)))
        
        int32_t rax_22 = sub_1410626f0(rax_18, r14_1)
        
        if (rax_22 != 0xffffffff)
            rdi_2 = rax_22
        
        if (r13_1 != rdi_2)
            sub_141069360(r15_1 + 0xc8, r14_1, rdi_2)
        
        rdi_1 = var_90
        r12 += 1
    while (r12 u< rbx)
    
    rsi = 0
    r14 = arg3
    r15 = arg1

if (var_70.d s> 0)
    int64_t* rax_23 = *(r15 + 0xe0)
    
    if (rax_23 == 0)
        rax_23 = sub_141027590(r15 + 0x80)
        *(r15 + 0xe0) = rax_23
    
    void*** rax_24 = sub_141027760(r15, &var_88, rax_23)
    void* rdx_17 = *(r14 + 8)
    
    if (rdx_17 != rax_24[1])
        if (rdx_17 != 0)
            int32_t rcx_15 = *(rdx_17 + 0x14)
            *(rdx_17 + 0x14) -= 1
            
            if (rcx_15 == 1)
                int64_t* rcx_16 = *(r14 + 8)
                
                if (rcx_16 != 0)
                    sub_141011360(rcx_16, 1)
        
        *(r14 + 8) = rax_24[1]
        rax_24[1] = 0
    
    var_88 = &data_142efcd90
    int64_t* var_80
    
    if (var_80 != 0)
        int32_t r15_2 = *(var_80 + 0x14)
        *(var_80 + 0x14) -= 1
        
        if (r15_2 == 1 && var_80 != 0)
            sub_141011360(var_80, r15_2.b)
    
    if (rbx != 0)
        do
            sub_14105c1a0(*(*rdi_1 + sx.q(rsi) * 0x10), r14)
            rsi += 1
        while (rsi u< rbx)
    
    int64_t* rcx_20 = *(*(r14 + 8) + 0x30)
    (*(*rcx_20 + 0xd0))(rcx_20, zx.q(var_70.d), var_78)

int64_t rcx_21 = var_78

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return zx.q(var_70.d)
