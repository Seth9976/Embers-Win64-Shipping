// 函数: sub_141f74060
// 地址: 0x141f74060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = arg4
int64_t r13 = sx.q(arg3)
int32_t rdi = arg2

if (*(arg1 + 0x430) == 0)
    return 

sub_141f6b830(arg1)
int64_t r14_1 = sx.q(arg5)

if (r14_1.d s< 0 || r14_1.d s>= *(arg1 + 0x578))
    return 

void* rdx = *(arg1 + 0x430)
void* const r15_2

if (r14_1.d s>= *(rdx + 0xe0))
    r15_2 = nullptr
else
    r15_2 = r14_1 * 0xb8 + *(rdx + 0xd8)

int32_t rdx_1 = *(rdx + 0xc0)
int64_t rcx = r14_1 * 5
int64_t rax_2 = *(arg1 + 0x570)
int64_t* rbx_1 = rax_2 + (rcx << 3)

if (*(rax_2 + (rcx << 3) + 8) != rdx_1)
    int32_t rcx_1 = *(rbx_1 + 0xc)
    int32_t r12_1 = 0
    rbx_1[1].d = 0
    
    if (rcx_1 != rdx_1)
        sub_1405c5510(rbx_1, rdx_1)
        rcx_1 = *(rbx_1 + 0xc)
        r12_1 = rbx_1[1].d
    
    int32_t rax_4 = *(*(arg1 + 0x430) + 0xc0)
    int32_t rax_5 = rax_4 + r12_1
    rbx_1[1].d = rax_5
    
    if (rax_5 s> rcx_1)
        sub_140679a80(rbx_1)
    
    memset(sx.q(r12_1) + *rbx_1, 0, sx.q(rax_4))
    r12 = arg4

if (r13.d s< 0 || r13.d s>= *(r15_2 + 0x10))
label_141f7418d:
    
    if (rdi s>= 0)
        goto label_141f74191
else
    int32_t rdx_3 = *(*(r15_2 + 8) + (r13 << 2))
    
    if (rdx_3 == 0xffffffff)
        goto label_141f7418d
    
    if (rdx_3 s>= 0)
        rdi = rbx_1[1].d
        
        if (rdx_3 s< rdi)
            rdi = rdx_3
        
        goto label_141f7418d
    
    rdi = 0
label_141f74191:
    
    if (rdi s< rbx_1[1].d)
        *(sx.q(rdi) + *rbx_1) = r12 ^ 1

int64_t* rax = *(arg1 + 0x5b0)

if (rax == 0)
    return 

uint32_t count = rbx_1[1].d
int64_t rbx_2 = *rbx_1
int64_t var_70 = 0
int32_t var_64

if (count != 0)
    sub_1405da9e0(&var_70, count, 0)
    memcpy(var_70, rbx_2, count)
else
    var_64 = 0

int32_t var_60_1 = r14_1.d

if (sub_140a80f40() == 0)
    uint32_t rax_9
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_9.b = GetCurrentThreadId() == data_143de5470
    
    uint32_t var_68_1
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_9.b == 0))
        void var_90
        void** rax_15 = sub_141f5a7a0(&var_90, nullptr, 0xff)
        void* rdx_8 = *rax_15
        *(rdx_8 + 0x10) = rax
        *(rdx_8 + 0x18) = 0
        *(rdx_8 + 0x18) = var_70
        var_70 = 0
        *(rdx_8 + 0x20) = count
        *(rdx_8 + 0x24) = var_64
        var_68_1.q = 0
        *(rdx_8 + 0x28) = var_60_1
        void* rcx_17 = *rax_15
        int32_t rax_17 = rax_15[2].d
        int64_t* rdx_9 = rax_15[1]
        int64_t* rbx_3 = *(rcx_17 + 0x38)
        int64_t* var_98_1 = rbx_3
        int32_t* rdi_1 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rdi_1 += 1
            rbx_3 = var_98_1
        
        sub_1407c96b0(rcx_17, rdx_9, rax_17, 1)
        
        if (rbx_3 != 0)
            rax = zx.q(*rdi_1)
            *rdi_1 -= 1
            
            if (rax.d == 1)
                sub_140a2f6e0(var_98_1)
    else
        int64_t var_50 = var_70
        uint32_t count_1 = count
        int32_t var_44_1 = var_64
        var_70 = 0
        var_68_1.q = 0
        sub_142346770(rax, var_60_1, &var_50)
        int64_t rcx_11 = var_50
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
else
    sub_142346770(rax, var_60_1, &var_70)

int64_t rcx_19 = var_70

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)
