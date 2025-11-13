// 函数: sub_140b37b10
// 地址: 0x140b37b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rbx = 0
int32_t var_158 = 0
void** rax_2 = j_sub_140a82f30(0x18)
void** r14 = rax_2
int64_t* var_150
void (* var_88)(int64_t* arg1)
void*** var_78
void** const var_68

if (rax_2 == 0)
    r14 = nullptr
else
    void* rax_3 = *arg3
    
    if (rax_3 != 0)
        *(rax_3 + 0x48) += 1
    
    void* var_60_1 = rax_3
    var_78 = nullptr
    var_68 = &data_142e78748
    var_88 = sub_140b34980
    var_150 = nullptr
    void*** rax_4 = sub_140b2d620(&var_88)
    *r14 = &rax_4[2]
    r14[1] = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t rax_9 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*rax_4)[1](rax_4, 1)
    
    r14[2].b = 0
    rbx = 3

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    
    if (var_88 != 0)
        void** const* rcx_3 = &var_68
        
        if (var_78 != 0)
            rcx_3 = var_78
        
        (*rcx_3)[2](rcx_3)

if ((rbx.b & 1) != 0 && var_150 != 0)
    var_150[9].d -= 1
    
    if (var_150[9].d == 1)
        sub_140a2f6e0(var_150)

int64_t var_d8
__builtin_memset(&var_d8, 0, 0x2c)
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
void* var_98 = nullptr
int32_t var_90 = 0
EnterCriticalSection(arg1 + 0xc0)
void var_a0

if (&var_d8 != arg1 + 0x58)
    int64_t rdi_1 = sx.q(*(arg1 + 0xa0))
    sub_1405a4aa0(&var_a0, 0, rdi_1.d, 4)
    void* rax_14 = *(arg1 + 0x98)
    void* rdx_1 = arg1 + 0x90
    void* rcx_8 = &var_a0
    
    if (rax_14 != 0)
        rdx_1 = rax_14
    
    if (var_98 != 0)
        rcx_8 = var_98
    
    memcpy(rcx_8, rdx_1, (rdi_1 << 2).d)
    var_90 = rdi_1.d
    sub_14094da60(&var_d8, arg1 + 0x58)

if (arg1 != -0xc0)
    LeaveCriticalSection(arg1 + 0xc0)

void* rax_16 = j_sub_140a82f30(0x58)

if (rax_16 != 0)
    void* rdx_3 = rax_16 + 0x18
    __builtin_memset(rax_16, 0, 0x18)
    *(rdx_3 + 0x10) = 0
    *(rdx_3 + 0x18) = 0
    *(rdx_3 + 0x1c) = 0x80
    void* rcx_11 = *(rdx_3 + 0x10)
    
    if (rcx_11 != 0)
        rdx_3 = rcx_11
    
    *rdx_3 = 0
    *(rdx_3 + 8) = 0
    *(rax_16 + 0x38) = 0xffffffff
    *(rax_16 + 0x3c) = 0
    *(rax_16 + 0x48) = 0
    *(rax_16 + 0x50) = 0
    sub_140a642d0(rax_16 + 8, &var_d8)
    
    if (var_98 == 0)
        memmove(rax_16 + 0x40, &var_a0, 4)
    
    int64_t rcx_14 = *(rax_16 + 0x48)
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    *(rax_16 + 0x48) = var_98
    var_98 = nullptr
    *(rax_16 + 0x50) = var_90
    void** rax_19 = *(arg1 + 0xb0)
    int32_t var_90_1 = 0
    *(arg1 + 0xb0) = rax_16
    *rax_19 = rax_16

r14[2].b = 1
int64_t* rbx_3 = r14[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

*arg2 = *r14
arg2[1] = rbx_3
void* rdx_6 = *arg2

if (rbx_3 != 0)
    rbx_3[1].d += 1

int32_t var_12c = data_143de8174
char var_130 = 1
int64_t var_120
__builtin_memset(&var_120, 0, 0x20)
void** var_f8 = r14
void* var_f0 = rdx_6

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_24 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140b388f0(arg1 + 0x30, &var_130)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_28 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t var_110

if (var_110 != 0)
    sub_140a74f90(var_110)

int64_t rcx_22 = var_120

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int32_t var_90_2 = 0

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_1405e1b50(&var_d8, 0)
int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t rcx_26 = var_d8

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t* rcx_28 = *arg3

if (rcx_28 != 0)
    rcx_28[9].d -= 1
    
    if (rcx_28[9].d == 1)
        sub_140a2f6e0(rcx_28)

__security_check_cookie(rax_1 ^ &var_178)
return arg2
