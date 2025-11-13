// 函数: sub_1406e9a30
// 地址: 0x1406e9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx == 0)
    return 

int64_t rbp_1 = arg1[1]

if (rbx != rbp_1)
    int64_t* rdi_1 = rbx + 0x40
    
    do
        int64_t* rcx = *rdi_1
        
        if (rcx != 0)
            int64_t r8_1 = *rcx
            int64_t rdx
            rdx.b = rcx != &rdi_1[-7]
            (*(r8_1 + 0x20))(rcx, rdx, r8_1)
            *rdi_1 = 0
        
        rbx += 0x48
        rdi_1 = &rdi_1[9]
    while (rbx != rbp_1)
    
    rbx = *arg1

int64_t rax_2
int64_t rdx_1
rdx_1:rax_2 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - rbx)
int64_t rdx_2 = rdx_1 s>> 2

if ((rdx_2 + (rdx_2 u>> 0x3f)) * 0x48 u>= 0x1000)
    void* rax_5 = *(rbx - 8)
    
    if (rbx - rax_5 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx = rax_5

j_sub_140a74f90(rbx)
__builtin_memset(arg1, 0, 0x18)
