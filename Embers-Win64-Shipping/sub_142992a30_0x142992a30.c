// 函数: sub_142992a30
// 地址: 0x142992a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* arg_8 = arg1
int64_t var_40 = -2
int64_t* rax = arg1[1]
int64_t rcx = *arg1
int64_t rbx_2 = (rax - rcx) s>> 4
int64_t rdx_2 = (arg1[2] - rcx) s>> 4

if (arg2 u<= rdx_2)
    if (arg2 u> rbx_2)
        int64_t* rax_13 = sub_142997160(&arg_18, rax, arg2 - rbx_2)
        arg1[1] = rax_13
        return rax_13
    
    if (arg2 != rbx_2)
        void* rdi_5 = (arg2 << 4) + rcx
        rax = sub_142997700(arg1, rdi_5, rax)
        arg1[1] = rdi_5
    
    return rax

if (arg2 u> 0xfffffffffffffff)
    sub_1427c7670()
    noreturn

uint64_t rcx_2 = rdx_2 u>> 1
int64_t rax_2

if (rdx_2 u<= 0xfffffffffffffff - rcx_2)
    rax_2 = rcx_2 + rdx_2
    
    if (rax_2 u< arg2)
        rax_2 = arg2
else
    rax_2 = arg2

int64_t arg_20 = rax_2
int64_t rcx_4 = rax_2 << 4
int64_t rdx_3 = rcx_4
void* const r13_1

if (rax_2 u<= 0xfffffffffffffff)
    if (rcx_4 u>= 0x1000)
        goto label_142992ae9
    
    if (rcx_4 == 0)
        r13_1 = nullptr
    else
        r13_1 = j_sub_140a82f30(rcx_4)
else
    rdx_3 = -1
label_142992ae9:
    int64_t rcx_5 = rdx_3 + 0x27
    
    if (rcx_5 u<= rdx_3)
        rcx_5 = -1
    
    int64_t rax_3 = j_sub_140a82f30(rcx_5)
    
    if (rax_3 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    r13_1 = (rax_3 + 0x27) & 0xffffffffffffffe0
    *(r13_1 - 8) = rax_3

void* const arg_10 = r13_1
void* rdx_6 = (rbx_2 << 4) + r13_1
void* var_48 = rdx_6
int64_t* var_50 = sub_142997160(&arg_18, rdx_6, arg2 - rbx_2)
int64_t i = arg1[1]
int64_t rax_6 = *arg1

if (rax_6 != i)
    void* rbx_3 = r13_1 + 8
    
    do
        *rbx_3 = 0
        int128_t* rax_8 = _aligned_malloc(0x100, 0x20)
        *rbx_3 = rax_8
        
        if ((rax_8.b & 0x1f) != 0)
            _aligned_free(rax_8)
            rax_8 = _aligned_malloc(0x120, 0x20)
            *rbx_3 = rax_8
            
            while ((rax_8.b & 0x1f) != 0)
                rax_8 += 1
        
        *(rbx_3 - 8) = rax_8
        int128_t* rcx_8 = *(rax_6 - r13_1 - 8 + rbx_3)
        int64_t j_1 = 2
        int64_t j
        
        do
            *rax_8 = *rcx_8
            rax_8[1] = rcx_8[1]
            rax_8[2] = rcx_8[2]
            rax_8[3] = rcx_8[3]
            rax_8[4] = rcx_8[4]
            rax_8[5] = rcx_8[5]
            rax_8[6] = rcx_8[6]
            rax_8 = &rax_8[8]
            rax_8[-1] = rcx_8[7]
            rcx_8 = &rcx_8[8]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_3 += 0x10
    while (rax_6 - r13_1 - 8 + rbx_3 != i)

void* rbx_4 = *arg1

if (rbx_4 != 0)
    int64_t rsi_2 = arg1[1]
    
    if (rbx_4 != rsi_2)
        do
            int64_t rcx_9 = *(rbx_4 + 8)
            
            if (rcx_9 != 0)
                _aligned_free(rcx_9)
            
            *(rbx_4 + 8) = 0
            *rbx_4 = 0
            rbx_4 += 0x10
        while (rbx_4 != rsi_2)
        
        rbx_4 = *arg1
    
    if (((arg1[2] - rbx_4) & 0xfffffffffffffff0) u>= 0x1000)
        void* rcx_10 = *(rbx_4 - 8)
        
        if (rbx_4 - rcx_10 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx_4 = rcx_10
    
    j_sub_140a74f90(rbx_4)

*arg1 = r13_1
arg1[1] = (arg2 << 4) + r13_1
void* rax_12 = rcx_4 + r13_1
arg1[2] = rax_12
return rax_12
