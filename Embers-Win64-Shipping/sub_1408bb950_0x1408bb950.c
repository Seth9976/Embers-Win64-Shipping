// 函数: sub_1408bb950
// 地址: 0x1408bb950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rdi_1 = *(arg2 + 0x268)

if (rdi_1 != 0)
    void* rax_1 = sub_142542e20()
    void* rdx = *(rdi_1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        (*(*arg3 + 0x38))(arg3, arg2 + 0x268, 0, 0)

int64_t* r14_1 = *(arg2 + 0xc0)
int64_t rax = &r14_1[sx.q(*(arg2 + 0xc8)) * 0xa]

if (r14_1 == rax)
    return 

void* rsi_1 = &r14_1[5]

do
    uint64_t rdi_2 = 0
    int64_t rbx_2 = sx.q(*(rsi_1 - 0x10))
    int64_t rbp_1 = *(rsi_1 - 0x18)
    int64_t var_78_1 = *r14_1
    int64_t var_70_1 = *(rsi_1 - 0x20)
    uint64_t var_68 = 0
    int32_t var_60_1 = rbx_2.d
    
    if (rbx_2.d != 0)
        sub_1406387e0(&var_68, rbx_2.d, 0)
        rdi_2 = var_68
        memcpy(rdi_2, rbp_1, (rbx_2 << 3).d)
    else
        int32_t var_5c_1 = 0
    
    int64_t rbx_3 = sx.q(*rsi_1)
    uint64_t r15_1 = 0
    int64_t rbp_2 = *(rsi_1 - 8)
    uint64_t var_58 = 0
    int32_t var_50_1 = rbx_3.d
    
    if (rbx_3.d != 0)
        sub_140638750(&var_58, rbx_3.d, 0)
        r15_1 = var_58
        memcpy(r15_1, rbp_2, (rbx_3 << 2).d)
        rdi_2 = var_68
    
    uint64_t rbx_4 = rdi_2
    int64_t rbp_3 = rdi_2 + (sx.q(var_60_1) << 3)
    
    if (rdi_2 != rbp_3)
        do
            sub_1408bb950(arg1, *rbx_4, arg3)
            rbx_4 += 8
        while (rbx_4 != rbp_3)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    r14_1 = &r14_1[0xa]
    rsi_1 += 0x50
while (r14_1 != rax)
