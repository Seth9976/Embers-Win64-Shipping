// 函数: sub_140e6b8f0
// 地址: 0x140e6b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int64_t* var_d8 = nullptr
int32_t var_d0 = 0
sub_1405947f0(&var_d8, 8)
int32_t rax = var_d0 + 8
var_d0 = rax

if (rax s> 0)
    sub_140594770(&var_d8)

int64_t* rbx = var_d8
UnDecorator::getReferenceType(rbx, u"Control", 0x10)
int64_t* rdi = *arg2
int32_t arg_10
sub_14062d6e0(rdi, &arg_10, &var_d8)
int64_t rax_1 = sx.q(arg_10)
void* r13_1

if (rax_1.d != 0xffffffff)
    r13_1 = *rdi + rax_1 * 0x28

int64_t* var_78
int64_t* r13_2

if (rax_1.d == 0xffffffff || r13_1 == 0)
    var_78 = nullptr
    r13_2 = nullptr
else
    r13_2 = *(r13_1 + 0x18)
    var_78 = *(r13_1 + 0x10)
    
    if (r13_2 != 0)
        r13_2[1].d += 1

if (rbx != 0)
    sub_140a74f90(rbx)

var_d8 = nullptr
int32_t var_d0_1 = 0
sub_1405947f0(&var_d8, 4)
int32_t rax_4 = var_d0_1 + 4
var_d0_1 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_d8)

int64_t* rbx_1 = var_d8
UnDecorator::getReferenceType(rbx_1, &data_142ed9968, 8)
int64_t* rdi_1 = *arg2
sub_14062d6e0(rdi_1, &arg_10, &var_d8)
int64_t rax_5 = sx.q(arg_10)
void* rax_7

if (rax_5.d != 0xffffffff)
    rax_7 = *rdi_1 + rax_5 * 0x28

int64_t* var_80

if (rax_5.d == 0xffffffff || rax_7 == 0)
    var_80 = nullptr
    var_d8 = nullptr
else
    int64_t* rax_8 = *(rax_7 + 0x18)
    var_80 = *(rax_7 + 0x10)
    var_d8 = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d += 1

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t* var_b0 = nullptr
int32_t var_a8 = 0
sub_1405947f0(&var_b0, 6)
int32_t rax_9 = var_a8 + 6
var_a8 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_b0)

int64_t* rbx_2 = var_b0
UnDecorator::getReferenceType(rbx_2, u"Shift", 0xc)
int64_t* rdi_2 = *arg2
sub_14062d6e0(rdi_2, &arg_10, &var_b0)
int64_t rax_10 = sx.q(arg_10)
void* rax_12

if (rax_10.d != 0xffffffff)
    rax_12 = *rdi_2 + rax_10 * 0x28

int64_t* var_88

if (rax_10.d == 0xffffffff || rax_12 == 0)
    var_88 = nullptr
    var_b0 = nullptr
else
    int64_t* rax_13 = *(rax_12 + 0x18)
    var_88 = *(rax_12 + 0x10)
    var_b0 = rax_13
    
    if (rax_13 != 0)
        rax_13[1].d += 1

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t* var_a0 = nullptr
int32_t var_98 = 0
sub_1405947f0(&var_a0, 8)
int32_t rax_14 = var_98 + 8
var_98 = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_a0)

int64_t* rbx_3 = var_a0
UnDecorator::getReferenceType(rbx_3, u"Command", 0x10)
int64_t* rdi_3 = *arg2
sub_14062d6e0(rdi_3, &arg_10, &var_a0)
int64_t rax_15 = sx.q(arg_10)
void* r12_1

if (rax_15.d != 0xffffffff)
    r12_1 = *rdi_3 + rax_15 * 0x28

int64_t* r12_2

if (rax_15.d == 0xffffffff || r12_1 == 0)
    var_a0 = nullptr
    r12_2 = nullptr
else
    r12_2 = *(r12_1 + 0x18)
    var_a0 = *(r12_1 + 0x10)
    
    if (r12_2 != 0)
        r12_2[1].d += 1

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t var_c8 = 0
int32_t var_c0 = 0
sub_1405947f0(&var_c8, 4)
int32_t rax_18 = var_c0 + 4
var_c0 = rax_18

if (rax_18 s> 0)
    sub_140594770(&var_c8)

int64_t rbx_4 = var_c8
UnDecorator::getReferenceType(rbx_4, &data_142e62f50, 8)
int64_t* rdi_4 = *arg2
sub_14062d6e0(rdi_4, &arg_10, &var_c8)
int64_t rax_19 = sx.q(arg_10)
void* r15_1

if (rax_19.d != 0xffffffff)
    r15_1 = *rdi_4 + rax_19 * 0x28

int64_t* r15_2

if (rax_19.d == 0xffffffff || r15_1 == 0)
    r15_2 = nullptr
else
    r14 = *(r15_1 + 0x10)
    r15_2 = *(r15_1 + 0x18)
    
    if (r15_2 != 0)
        r15_2[1].d += 1

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

char var_b8 = arg4
int64_t rbx_6 = *arg3
uint64_t rdi_6 = *arg5
var_c8 = rbx_6
int64_t* rax_23 = *arg1
int32_t rsi_2 = sub_140b5ead0(rbx_6.d) + var_c8:4.d
int32_t r10_2 = (sub_140b5ead0(rdi_6.d) + rdi_6:4.d) ^ rsi_2
void* rsi_3

if (rax_23[1].d == *(rax_23 + 0x34))
label_140e6bcf2:
    rsi_3 = sub_140e48010(rax_23, r10_2, &var_c8)
else
    void* rcx_29 = rax_23[8]
    void* r8_5 = &rax_23[7]
    
    if (rcx_29 != 0)
        r8_5 = rcx_29
    
    int32_t rax_28 = *(r8_5 + (((sx.q(rax_23[9].d) - 1) & sx.q(r10_2)) << 2))
    
    if (rax_28 == 0xffffffff)
    label_140e6bcf2_1:
        rsi_3 = sub_140e48010(rax_23, r10_2, &var_c8)
    else
        int64_t* rdx_20
        
        while (true)
            rdx_20 = (sx.q(rax_28) << 6) + *rax_23
            
            if (*rdx_20 == rbx_6 && rdx_20[1] == rdi_6 && rdx_20[2].b == arg4)
                break
            
            rax_28 = rdx_20[7].d
            
            if (rax_28 == 0xffffffff)
                goto label_140e6bcf2_2
        
        if (rax_28 == 0xffffffff || rdx_20 == 0)
        label_140e6bcf2_2:
            rsi_3 = sub_140e48010(rax_23, r10_2, &var_c8)
        else
            rsi_3 = &rdx_20[3]

int64_t* rax_30 = var_a0

if (rax_30 == 0)
    rdi_6.b = 0
else
    rdi_6 = zx.q(sub_140b74b60(rax_30))

char rax_32 = sub_140b74b60(var_88)
char rax_33 = sub_140b74b60(var_80)
char rcx_35 = 0

if (sub_140b74b60(var_78) != 0)
    rcx_35 = 1

if (rax_33 != 0)
    rcx_35 |= 2

if (rax_32 != 0)
    rcx_35 |= 4

char rbx_8 = rcx_35 | 8

if (rdi_6.b == 0)
    rbx_8 = rcx_35

int64_t* rax_37 = sub_140b74df0(r14, &var_c8)
int16_t* rdx_23

if (rax_37[1].d == 0)
    rdx_23 = &data_142d40450
else
    rdx_23 = *rax_37

sub_140b58260(&var_a0, rdx_23, 1)
int64_t* var_70 = var_a0
uint32_t rcx_38 = zx.d(rbx_8)
var_98 = (zx.o(0)).d
int128_t var_68 = zx.o(0)
sub_140627710(rsi_3, &var_70)
*(rsi_3 + 0x18) &= 0xfffffff0
int64_t* rbx_9 = var_68:8.q
int32_t var_58
int32_t result =
    ((rcx_38 u>> 2 & 1) | ((rcx_38 & 3) * 2) | (var_58 & 0xfffffff0) | (rcx_38 & 8)) & 0xf
*(rsi_3 + 0x18) |= result

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        result = (**rbx_9)(rbx_9)
        int32_t temp1_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_9 + 8))(rbx_9, 1)

int64_t rcx_43 = var_c8

if (rcx_43 != 0)
    result = sub_140a74f90(rcx_43)

if (r15_2 != 0)
    r15_2[1].d -= 1
    
    if (r15_2[1].d == 1)
        result = (**r15_2)(r15_2)
        int32_t temp4_1 = *(r15_2 + 0xc)
        *(r15_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*r15_2 + 8))(r15_2, 1)

if (r12_2 != 0)
    r12_2[1].d -= 1
    
    if (r12_2[1].d == 1)
        result = (**r12_2)(r12_2)
        int32_t temp6_1 = *(r12_2 + 0xc)
        *(r12_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*r12_2 + 8))(r12_2, 1)

int64_t* rbx_10 = var_b0

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        result = (**rbx_10)(rbx_10)
        int32_t temp8_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_10 + 8))(rbx_10, 1)

int64_t* rbx_11 = var_d8

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        result = (**rbx_11)(rbx_11)
        int32_t temp10_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp10_1 == 1)
            result = (*(*rbx_11 + 8))(rbx_11, 1)

if (r13_2 != 0)
    r13_2[1].d -= 1
    
    if (r13_2[1].d == 1)
        result = (**r13_2)(r13_2)
        int32_t temp11_1 = *(r13_2 + 0xc)
        *(r13_2 + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*r13_2 + 8))(r13_2, 1)

return result
