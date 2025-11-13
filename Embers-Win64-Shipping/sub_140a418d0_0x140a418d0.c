// 函数: sub_140a418d0
// 地址: 0x140a418d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg3
arg3.b = 1

if (sub_140b3d910(arg2, nullptr, arg3.b) != 0 && (*(*arg1 + 0x108))(arg1, arg2) != -1)
    void*** rax_3 = j_sub_140a82f30(0x98)
    
    if (rax_3 == 0)
        return 0
    
    sub_140b4c2a0(rax_3)
    *rax_3 = &data_142e5fd08
    rax_3[0x12] = 0
    sub_140b552b0(rax_3, 1)
    void** r8 = *rax_3
    int64_t rdx_2
    rdx_2.b = 1
    r8[0x1b](rax_3, rdx_2, r8)
    return rax_3

if ((r12.b & 4) != 0)
    int64_t* rax_6 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t r9 = *rax_6
    (*(r9 + 0x98))(rax_6, arg2, 0, r9)

int64_t* rax_7 = __crt_deferred_errno_cache::get(&data_143db7b00)
uint32_t rbx_2
rbx_2.b = (r12 u>> 3).b & 1
uint8_t r13_1 = (r12 u>> 4).b & 1
int64_t* rax_8 = (*(*rax_7 + 0xd0))(rax_7, arg2, zx.q(rbx_2.b), zx.q(r13_1), rbx_2)
int64_t* r15 = rax_8
int64_t rbp = -1

if (rax_8 == 0)
    int64_t var_50 = 0
    int32_t rdx_5 = 0
    int32_t var_48_1 = 0
    int32_t rcx_7 = 0
    int32_t var_44_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg2[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_50, rbx_3.d + 1)
            rcx_7 = var_44_1
            rdx_5 = var_48_1
        
        int32_t rax_9 = rbx_3.d + 1 + rdx_5
        int32_t var_48_2 = rax_9
        
        if (rax_9 s> rcx_7)
            sub_140594770(&var_50)
        
        memcpy(var_50, arg2, (rbx_3.d + 1) * 2)
    
    int64_t var_40
    int64_t* rax_10
    int64_t r8_4
    rax_10, r8_4 = sub_140b1a660(&var_40, &var_50)
    int16_t* const rdx_9
    
    if (rax_10[1].d == 0)
        rdx_9 = &data_142d40450
    else
        rdx_9 = *rax_10
    
    r8_4.b = 1
    (*(*arg1 + 0x58))(arg1, rdx_9, r8_4)
    int64_t rcx_13 = var_40
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_50
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t* rax_12 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t* rax_13 = (*(*rax_12 + 0xd0))(rax_12, arg2, zx.q(rbx_2.b), zx.q(r13_1))
    r15 = rax_13
    
    if (rax_13 == 0)
        if ((r12.b & 1) != 0)
            sub_140af98a0("Unknown", (rax_13 + 0x79).d, u"Failed to create file: %s", arg2)
            sub_140afbb40()
        
        return nullptr

void*** rax_14 = j_sub_140a82f30(0xe0)

if (rax_14 == 0)
    return nullptr

int64_t rdx_12 = *r15
int64_t rax_15 = (*(rdx_12 + 8))(r15, rdx_12)
sub_140b4c2a0(rax_14)
*rax_14 = &data_142e5e0a8
rax_14[0x12] = 0
rax_14[0x13] = 0
bool cond:0_1 = arg2 == 0

if (arg2 != 0)
    int16_t temp1_1 = *arg2
    cond:0_1 = temp1_1 == 0
    
    if (temp1_1 != 0)
        do
            rbp += 1
        while (arg2[rbp] != 0)
        
        int32_t rdx_13 = 0
        
        if (rbp.d + 1 s> 0)
            sub_1405947f0(&rax_14[0x12], rbp.d + 1)
            rdx_13 = rax_14[0x13].d
        
        int32_t rax_16 = rdx_13 + rbp.d + 1
        rax_14[0x13].d = rax_16
        
        if (rax_16 s> *(rax_14 + 0x9c))
            sub_140594770(&rax_14[0x12])
        
        int64_t r8_6 = sx.q(rbp.d + 1)
        cond:0_1 = r8_6 == neg.q(r8_6)
        memcpy(rax_14[0x12], arg2, r8_6.d * 2)

uint64_t r10_2 = zx.q(arg4)
uint64_t rflags_1
int32_t rcx_21
rcx_21, rflags_1 = _bit_scan_reverse(r10_2)
rax_14[0x14].d = r12
rax_14[0x15] = rax_15
rax_14[0x16] = r15
__builtin_memset(&rax_14[0x17], 0, 0x18)
rax_14[0x1b].b = 0
uint64_t rcx_22

if (cond:0_1)
    rcx_22 = 0x40
else
    rcx_22 = zx.q(0x3f - rcx_21)

int64_t rcx_24 = rcx_22 << 0x39 s>> 0x3f
uint64_t rflags_2
char r10_3
r10_3, rflags_2 = _bit_scan_reverse(r10_2 - 1)
char rax_19

if (rcx_24 == 0)
    rax_19 = 0x40
else
    rax_19 = 0x3f - r10_3

rcx_24.b = not.b(rcx_24.b)
rcx_24.b &= 0x40 - rax_19
int64_t rdx_17 = 1 << rcx_24.b
rax_14[0x1a] = rdx_17

if (rdx_17 s> 0)
    sub_140a4fbe0(&rax_14[0x17], rdx_17)

rdx_17.b = 1
(*rax_14)[0x15](rax_14, rdx_17)
int64_t rdx_18
rdx_18.b = 1
(*rax_14)[0x1b](rax_14, rdx_18)
return rax_14
