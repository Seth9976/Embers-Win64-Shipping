// 函数: sub_140f8cfc0
// 地址: 0x140f8cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d9400()
int64_t* rcx = &data_143cd6fd8

if (arg1[0xa9].b != 0)
    rcx = sub_140d44910(&arg1[0xa6])

int64_t var_80 = *rcx
int64_t* rax_3 = rcx[1]

if (rax_3 != 0)
    rax_3[1].d += 1

int32_t var_70 = rcx[2].d
sub_14065da90(&arg1[0xa6], arg2)
arg1[0xa9].b = arg2[3].b
sub_140692f90(&arg1[0xaa], &arg2[4])
sub_1405d9400()
int64_t* rcx_4 = &data_143cd6fd8

if (arg1[0xa9].b != 0)
    rcx_4 = sub_140d44910(&arg1[0xa6])

int64_t var_98 = *rcx_4
int64_t* rax_8 = rcx_4[1]

if (rax_8 != 0)
    rax_8[1].d += 1

int64_t* rcx_6 = arg1[3]
int64_t r8 = arg1[9]
int32_t var_88 = rcx_4[2].d
int64_t var_a8 = 0
int64_t var_a0 = 0
(*(*rcx_6 + 0x10))(rcx_6, &var_a8, r8)
void var_68
sub_140aae2f0(&var_68, &var_a8)
int64_t rcx_8 = var_a8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_11 = sub_140ac6680(&var_98)
int64_t* rax_12 = sub_140ac6680(&var_68)
int16_t* const rbx_1 = &data_142d40450
int16_t* const r8_1

if (rax_11[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_11

int16_t* rax_13

if (rax_12[1].d == 0)
    rax_13 = &data_142d40450
else
    rax_13 = *rax_12

void* r8_2 = r8_1 - rax_13
uint32_t i
uint32_t rdx_4

do
    rdx_4 = zx.d(*rax_13)
    i = zx.d(*(rax_13 + r8_2))
    
    if (rdx_4 != i)
        break
    
    rax_13 = &rax_13[1]
while (i != 0)

int64_t* rcx_11 = *arg1
int64_t r14
r14.b = rdx_4 - i != 0
void var_50
void arg_8
uint32_t rcx_16

if (*(sub_140e195e0(*(*(*rcx_11 + 0x80))(rcx_11, &var_50), &arg_8) + 1) == 0)
    int64_t* rax_19 = sub_140ac6680(&var_80)
    int16_t** rax_20 = sub_140ac6680(&var_98)
    int16_t* const rdx_10
    
    if (rax_19[1].d == 0)
        rdx_10 = &data_142d40450
    else
        rdx_10 = *rax_19
    
    if (rax_20[1].d != 0)
        rbx_1 = *rax_20
    
    void* rdx_11 = rdx_10 - rbx_1
    uint32_t i_1
    
    do
        uint32_t rcx_19 = zx.d(*rbx_1)
        i_1 = zx.d(*(rbx_1 + rdx_11))
        rcx_16 = rcx_19 - i_1
        
        if (rcx_19 != i_1)
            break
        
        rbx_1 = &rbx_1[1]
    while (i_1 != 0)
else
    int64_t* rax_17 = sub_140ac6680(&var_68)
    int16_t** rax_18 = sub_140ac6680(&var_98)
    int16_t* const rdx_8
    
    if (rax_17[1].d == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = *rax_17
    
    if (rax_18[1].d != 0)
        rbx_1 = *rax_18
    
    void* rdx_9 = rdx_8 - rbx_1
    uint32_t i_2
    
    do
        uint32_t rcx_15 = zx.d(*rbx_1)
        i_2 = zx.d(*(rbx_1 + rdx_9))
        rcx_16 = rcx_15 - i_2
        
        if (rcx_15 != i_2)
            break
        
        rbx_1 = &rbx_1[1]
    while (i_2 != 0)

char arg_9 = 0
int64_t* rsi_2
rsi_2.b = rcx_16 != 0
int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t temp5_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_48 + 8))(var_48, 1)

uint64_t result
int64_t zmm0
result, zmm0 = sub_140f87bb0(arg1, &var_98, r14.b)

if (result.b == 0)
    goto label_140f8d28f

int64_t* rcx_23 = *arg1
void var_40
void arg_10
result = sub_140e195e0(*(*(*rcx_23 + 0x80))(rcx_23, &var_40), &arg_10)

if (*(result + 1) == 0 || *(arg1 + 0x849) != 0)
    r14.b = 0
else
    r14.b = 1

char arg_11 = 0
int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp9_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*var_38 + 8))(var_38, 1)

if (r14.b != 0)
    result = sub_140f7ba40(arg1, 1, 0, zmm0)

if (rsi_2.b == 0)
    goto label_140f8d294

int64_t* rcx_28 = *arg1
result = (*(*rcx_28 + 0x98))(rcx_28, &var_98)
label_140f8d28f:

if (rsi_2.b != 0)
label_140f8d2b3:
    int64_t* rcx_30 = *arg1
    void var_30
    result = sub_140e19ef0(*(*(*rcx_30 + 0x80))(rcx_30, &var_30), 5)
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            result = (**var_28)(var_28)
            int32_t temp7_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_28 + 8))(var_28, 1)
else
label_140f8d294:
    
    if (arg1[0xab].d != 0)
        int64_t* rcx_29 = arg1[0xaa]
        
        if (rcx_29 != 0)
            result = (*(*rcx_29 + 0x28))(rcx_29)
            
            if (result.b != 0)
                goto label_140f8d2b3

int64_t* var_60

if (var_60 != 0)
    result = zx.q(var_60[1].d)
    var_60[1].d -= 1
    
    if (result.d == 1)
        (**var_60)(var_60)
        result = zx.q(*(var_60 + 0xc))
        *(var_60 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*var_60 + 8))(var_60, 1)

if (rax_8 != 0)
    result = zx.q(rax_8[1].d)
    rax_8[1].d -= 1
    
    if (result.d == 1)
        (**rax_8)(rax_8)
        result = zx.q(*(rax_8 + 0xc))
        *(rax_8 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rax_8 + 8))(rax_8, 1)

if (rax_3 != 0)
    result = zx.q(rax_3[1].d)
    rax_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rax_3)(rax_3)
        int32_t rdi_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rax_3 + 8))(rax_3, zx.q(rdi_1))

return result
