// 函数: sub_141c9f3d0
// 地址: 0x141c9f3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_2 = arg2[7].d
int64_t r12 = 0
int64_t r15 = sx.q(arg2[3].d)
int64_t* rbx = arg2
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
sub_140780c40(arg3, arg2)
void* rax_3 = &rbx[2]
sub_140780c40(&arg3[2], rax_3)
sub_140780c40(&arg3[4], &rbx[4])
void* rax_4 = &rbx[6]
void* var_138 = rax_4
sub_140780c40(&arg3[6], rax_4)
sub_141c94f00(&arg3[8], &rbx[8])
void* rax_5 = &rbx[0x12]
void* r14 = &arg3[0x12]
void* var_108 = r14
sub_1417d6d70(r14, rax_5)
int32_t r13 = 1
arg3[0x1c].b = rbx[0x1c].b
*(arg3 + 0xe1) = *(rbx + 0xe1)
*(arg3 + 0xe2) = *(rbx + 0xe2)
int64_t var_90

if (r15.d s> var_90.d - var_64)
    sub_14090a510(&var_98, r15.d)
    int32_t rdx_8
    
    if (r15.d u< 4)
        rdx_8 = 1
    else
        uint32_t rax_12 = r15.d u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_7
        
        if (rax_12 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        
        if (rax_12 == 0xfffffff9)
            rdx_8 = 1
        else
            rdx_8 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
    
    if (var_50 == 0 || var_50 s< rdx_8)
        int32_t var_50_1 = rdx_8
        sub_140807d80(&var_98)

int32_t var_148
int64_t* var_140
int64_t* var_120

if (r15 s> 0)
    do
        int64_t rbx_1 = *rax_3
        sub_14090a150(&var_98, &var_148)
        int64_t rax_17 = *(rbx_1 + (r12 << 3))
        *var_140 = rax_17
        var_140[1].d = 0xffffffff
        sub_1407ec830(&var_98, &var_120, (rax_17 u>> 0x20).d + sub_140b5ead0(rax_17.d), var_140, 
            var_148, nullptr)
        r12 += 1
    while (r12 s< r15)
    
    r14 = var_108
    rbx = arg2

if (rbx[0x1c].b != 0)
    int64_t rbx_4 = 0
    
    if (r15 s> 0)
        var_140 = &var_120
        var_148.q = sub_141c99c60
        
        do
            int64_t rdx_11 = *rax_3
            var_120 = &var_98
            sub_141c9ef70(arg1 + 0x420, *(rdx_11 + (rbx_4 << 3)), &var_148, 1)
            rbx_4 += 1
        while (rbx_4 s< r15)
        
        r14 = var_108

arg3[0x1c].b = 0
int64_t* rax_20 = sub_141c989e0(&var_98, &var_148)

if (&arg3[2] != rax_20)
    int64_t rcx_18 = arg3[2]
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    arg3[2] = *rax_20
    *rax_20 = 0
    arg3[3].d = rax_20[1].d
    *(arg3 + 0x1c) = *(rax_20 + 0xc)
    rax_20[1] = 0

int64_t rcx_20 = var_148.q

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t var_e0

if (*(arg2 + 0xe1) == 0)
    int64_t rbx_7 = sx.q(rax_2)
    
    if (rbx_7.d s> var_e0.d - var_b4)
        sub_14090a510(&var_e8, rbx_7.d)
        
        if (rbx_7.d u>= 4)
            uint32_t rax_30 = rbx_7.d u>> 1
            uint64_t rflags_3
            int32_t temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_30 + 8)
            int32_t rcx_29
            
            if (rax_30 == 0xfffffff8)
                rcx_29 = 0x20
            else
                rcx_29 = 0x1f - temp0_4
            
            uint64_t rflags_4
            char temp0_5
            temp0_5, rflags_4 = _bit_scan_reverse(rax_30 + 7)
            char rdi_2
            
            if (rax_30 == 0xfffffff9)
                rdi_2 = 0x20
            else
                rdi_2 = 0x1f - temp0_5
            
            r13 = 1 << ((not.d(rcx_29 << 0x1a s>> 0x1f)).b & (0x20 - rdi_2))
        
        if (var_a0 == 0 || var_a0 s< r13)
            int32_t var_a0_1 = r13
            sub_140807d80(&var_e8)
    
    int64_t rsi_2 = 0
    
    if (rbx_7.d s> 0)
        void* r12_3 = var_138
        
        do
            int64_t rbx_8 = *r12_3
            sub_14090a150(&var_e8, &var_148)
            int64_t rax_34 = *(rbx_8 + (rsi_2 << 3))
            *var_140 = rax_34
            var_140[1].d = 0xffffffff
            sub_1407ec830(&var_e8, &var_120, (rax_34 u>> 0x20).d + sub_140b5ead0(rax_34.d), 
                var_140, var_148, nullptr)
            rsi_2 += 1
        while (rsi_2 s< rbx_7)
else if (arg2[0x13].d - *(arg2 + 0xc4) s<= 0 || arg2[7].d != 0)
    sub_141ca3e30(arg1 - 0x28, var_138, rax_5, &var_e8)
else
    var_138 = nullptr
    int64_t var_130_1 = 1
    int64_t rbx_6 = *(sub_140d41340() + 0x18)
    sub_1405a4d70(&var_138)
    *var_138 = rbx_6
    sub_141ca3e30(arg1 - 0x28, &var_138, rax_5, &var_e8)
    void* rcx_25 = var_138
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int64_t* rax_37 = sub_141c989e0(&var_e8, &var_148)

if (&arg3[6] != rax_37)
    int64_t rcx_39 = arg3[6]
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    arg3[6] = *rax_37
    *rax_37 = 0
    arg3[7].d = rax_37[1].d
    *(arg3 + 0x3c) = *(rax_37 + 0xc)
    rax_37[1] = 0

int64_t rcx_41 = var_148.q

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

*(arg3 + 0xe1) = 0
bool cond:3 = *(r14 + 0xc) == 0
*(r14 + 8) = 0

if (not(cond:3))
    sub_1405a5410(r14, 0)

*(r14 + 0x30) = 0xffffffff
*(r14 + 0x34) = 0
sub_14059a8e0(r14 + 0x10, 0)
int32_t i_2 = *(r14 + 0x48)

if (i_2 s> 0)
    int64_t r8_6 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_44 = *(r14 + 0x40)
        void* rax_40 = r14 + 0x38
        int64_t rdx_25 = (sx.q(*(r14 + 0x48)) - 1) & r8_6
        
        if (rcx_44 != 0)
            rax_40 = rcx_44
        
        r8_6 += 1
        *(rax_40 + (rdx_25 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_a0_2 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

bool cond:5 = var_e0:4.d == 0
var_e0.d = 0

if (not(cond:5))
    sub_1405a5410(&var_e8, 0)

int32_t var_b8_1 = 0xffffffff
int32_t var_b4_1 = 0
int64_t var_d8
sub_14059a8e0(&var_d8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_49 = var_e8

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

int32_t var_50_2 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

bool cond:6 = var_90:4.d == 0
var_90.d = 0

if (not(cond:6))
    sub_1405a5410(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_54 = var_98

if (rcx_54 != 0)
    result = sub_140a74f90(rcx_54)

__security_check_cookie(rax_1 ^ &var_178)
return result
