// 函数: sub_140aa4810
// 地址: 0x140aa4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    return 

sub_1405d9400()
int64_t* rcx = *(arg1 + 0x18)

if (rcx == data_143cd6fd8)
    return 

int64_t r8_1 = *rcx
int64_t var_48
(*(r8_1 + 0x18))(rcx, &var_48, r8_1)
int64_t* rcx_1 = data_143cd6fd8
uint64_t var_58
(*(*rcx_1 + 0x18))(rcx_1, &var_58)
int64_t rcx_2 = var_48
uint64_t rax

if (rcx_2 != 0)
    rax = var_58

int64_t rbp

if (rcx_2 == 0 || rax == 0 || rcx_2 != rax)
    rbp.b = 0
else
    rbp.b = 1

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        rax = zx.q(*(var_50 + 0xc))
        *(var_50 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        rax = zx.q(*(var_40 + 0xc))
        *(var_40 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*var_40 + 8))(var_40, 1)

if (rbp.b != 0)
    return 

sub_140abd990(&arg1[0x18])
int64_t rax_6 = *(arg1 + 0x78)
uint64_t rbp_1 = 0

if (rax_6 != 0)
    int64_t* rcx_8 = *(arg1 + 0x18)
    
    if (rax_6 != rcx_8)
        goto label_140aa499d
    
    int16_t rax_12
    
    if (*((*(*rcx_8 + 0x10))(rcx_8) + 8) s<= 1 || ((*(arg1 + 0x28) u>> 1).b & 1) != 0)
        rax_12 = 0
    else
        int64_t* rcx_9 = *(arg1 + 0x18)
        rax_12 = (*(*rcx_9 + 0x40))(rcx_9)
    
    if (*(arg1 + 0x88) != rax_12)
        goto label_140aa499d
    
    int64_t* rcx_10 = *(arg1 + 0x18)
    int16_t rax_18
    
    if (*((*(*rcx_10 + 0x10))(rcx_10) + 8) s<= 1 || ((*(arg1 + 0x28) u>> 1).b & 1) != 0)
        rax_18 = 0
    else
        int64_t* rcx_11 = *(arg1 + 0x18)
        rax_18 = (*(*rcx_11 + 0x48))(rcx_11)
    
    if (*(arg1 + 0x8a) != rax_18 || *(arg1 + 0x8c) != *(arg1 + 0x28))
        goto label_140aa499d
    
    return 

label_140aa499d:
uint128_t zmm1_1 = sub_140abd990(&arg1[0x18])
int64_t* rcx_13 = *(arg1 + 0x18)
int16_t rax_24

if (*((*(*rcx_13 + 0x10))(rcx_13) + 8) s<= 1 || ((*(arg1 + 0x28) u>> 1).b & 1) != 0)
    rax_24 = 0
else
    int64_t* rcx_14 = *(arg1 + 0x18)
    rax_24 = (*(*rcx_14 + 0x40))(rcx_14)

if (*(arg1 + 0x88) != rax_24)
    rbp_1.b = 1
else
    int64_t* rcx_15 = *(arg1 + 0x18)
    
    if (*((*(*rcx_15 + 0x10))(rcx_15) + 8) s> 1 && ((*(arg1 + 0x28) u>> 1).b & 1) == 0)
        int64_t* rcx_16 = *(arg1 + 0x18)
        rbp_1 = zx.q((*(*rcx_16 + 0x48))(rcx_16))
    
    if (*(arg1 + 0x8a) != rbp_1.w)
        rbp_1.b = 1
    else
        int64_t* r14_1 = *(arg1 + 0x78)
        
        if (r14_1 == 0)
            rbp_1.b = 1
        else
            zmm1_1 = sub_140abd990(&arg1[0x18])
            int64_t* rcx_18 = *(arg1 + 0x18)
            uint64_t rax_32 = (*(*rcx_18 + 0x10))(rcx_18)
            int64_t rdx_3 = *r14_1
            int16_t** rax_33 = (*(rdx_3 + 0x10))(r14_1, rdx_3)
            int16_t* const rcx_20 = &data_142d40450
            int16_t* const r8_2
            
            if (*(rax_32 + 8) == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *rax_32
            
            if (rax_33[1].d != 0)
                rcx_20 = *rax_33
            
            void* r8_3 = r8_2 - rcx_20
            uint32_t i
            uint32_t rdx_4
            
            do
                rdx_4 = zx.d(*rcx_20)
                i = zx.d(*(rcx_20 + r8_3))
                
                if (rdx_4 != i)
                    break
                
                rcx_20 = &rcx_20[1]
            while (i != 0)
            
            if (rdx_4 - i != 0)
                rbp_1.b = 1
            else
                rbp_1.b = 0

void var_38
sub_140a99ea0(&arg1[0x78], sub_140a97f80(&var_38, &arg1[0x18]))
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_1))

if (rbp_1.b != 0)
    sub_140aa3cd0(arg1, zmm1_1)
