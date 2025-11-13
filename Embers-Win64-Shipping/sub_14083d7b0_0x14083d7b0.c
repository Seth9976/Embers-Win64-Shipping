// 函数: sub_14083d7b0
// 地址: 0x14083d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t rcx = *(arg6 + 0x20)
void* rbx = *(arg6 + 0x18)
void* rdi = rbx
char rcx_1 = *(arg6 + 0x10)

if (rcx_1 != 0)
    rdi = *(rbx + 0x140)

void* r11 = *(arg5 + 0xe0)

if (rcx_1 != 0)
    rbx = *(rbx + 0x140)

void* rcx_2 = arg1 + 0xb0
uint32_t r8_1 = (sx.q(*(rbx + 0x20)) u>> 2).d
void* rax_3 = *(rcx_2 + 0x100)
arg2.b = *(arg1 + 0x1e8) - 1 u<= 1

if (rax_3 != 0)
    rcx_2 = rax_3

*(rcx_2 + 0x5c) = arg2.b
int64_t* var_b8

if (*(arg1 + 0xa4) == 0)
    if (data_14396fef8 == 0)
        void var_50
        int64_t* rax_5 = sub_141996f30(r11, &var_50, r8_1)
        int128_t zmm1_2 = *rax_5
        var_b8 = rax_5[2]
        int128_t var_c8_2 = zmm1_2
        memcpy(zmm1_2.q, *(rbx + 0x18), *(rbx + 0x20))
    else
        void var_68
        int64_t* rax_4 = sub_14083fae0(arg1, &var_68, r11, rbx)
        int128_t var_c8_1 = *rax_4
        var_b8 = rax_4[2]

uint32_t rdi_1

if (data_14396fef8 == 0)
    rdi_1 = *(rdi + 0xb8) u>> 2
else
    rdi_1 = *(rdi + 0xb0)

int64_t* rbx_1 = var_b8

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = var_b8

sub_1405d16e0(arg9 + 0x188, rbx_1)
*(arg9 + 0x190) = rdi_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        if (var_b8[2].b != 0)
            (**var_b8)(var_b8, 1)
        else
            char rax_7
            
            if (data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_7 != 0)
                (**var_b8)(var_b8, 1)
            else
                bool z_1
                
                if (0 == *(var_b8 + 0xc))
                    *(var_b8 + 0xc) = 1
                    z_1 = true
                else
                    *(var_b8 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, var_b8)

int128_t var_f8
__builtin_memset(&var_f8, 0, 0x14)
sub_14076dc30(&var_f8, 4, *(arg6 + 0x40), 0x1d, 4, 0)
int64_t* rcx_9 = data_143f0f180
void* rbx_3 = var_f8.q
memcpy((*(*rcx_9 + 0x130))(rcx_9, &data_143f02b98, rbx_3, 0, *(arg6 + 0x40) << 2, 1), 
    *(arg6 + 0x38), *(arg6 + 0x40) << 2)
int64_t* rcx_11 = data_143f0f180
(*(*rcx_11 + 0x138))(rcx_11, &data_143f02b98, rbx_3)
sub_1405d16e0(arg9 + 0x198, rbx_3)
void* r14 = var_f8:8.q
sub_1405d16e0(arg9 + 0x1b8, r14)
*(arg9 + 0x1d8) = 0
int32_t r8_9 = *(arg6 + 0x50)
int128_t var_110
__builtin_memset(&var_110, 0, 0x14)
sub_14076dc30(&var_110, 0x10, r8_9, 1, 4, 0)
int64_t* rcx_15 = data_143f0f180
void* rbx_4 = var_110.q
memcpy((*(*rcx_15 + 0x130))(rcx_15, &data_143f02b98, rbx_4, 0, *(arg6 + 0x50) << 4, 1), 
    *(arg6 + 0x48), *(arg6 + 0x50) << 4)
int64_t* rcx_17 = data_143f0f180
(*(*rcx_17 + 0x138))(rcx_17, &data_143f02b98, rbx_4)
sub_1405d16e0(arg9 + 0x1a0, rbx_4)
void* rsi = var_110:8.q
sub_1405d16e0(arg9 + 0x1c0, rsi)
int32_t r8_14 = *(arg6 + 0x60)
int128_t var_128
__builtin_memset(&var_128, 0, 0x14)
sub_14076dc30(&var_128, 4, r8_14, 0x1c, 4, 0)
int64_t* rcx_21 = data_143f0f180
void* rbx_5 = var_128.q
memcpy((*(*rcx_21 + 0x130))(rcx_21, &data_143f02b98, rbx_5, 0, *(arg6 + 0x60) << 2, 1), 
    *(arg6 + 0x58), *(arg6 + 0x60) << 2)
int64_t* rcx_23 = data_143f0f180
(*(*rcx_23 + 0x138))(rcx_23, &data_143f02b98, rbx_5)
sub_1405d16e0(arg9 + 0x1a8, rbx_5)
void* rdi_4 = var_128:8.q
sub_1405d16e0(arg9 + 0x1c8, rdi_4)
int128_t var_140
__builtin_memset(&var_140, 0, 0x14)
sub_14076dc30(&var_140, 4, *(arg6 + 0x70), 0xd, 4, 0)
int64_t* rcx_27 = data_143f0f180
void* rbx_7 = var_140.q
memcpy((*(*rcx_27 + 0x130))(rcx_27, &data_143f02b98, rbx_7, 0, *(arg6 + 0x70) << 2, 1), 
    *(arg6 + 0x68), *(arg6 + 0x70) << 2)
int64_t* rcx_30 = data_143f0f180
(*(*rcx_30 + 0x138))(rcx_30, &data_143f02b98, rbx_7)
sub_1405d16e0(arg9 + 0x1b0, rbx_7)
void* rbx_8 = var_140:8.q
sub_1405d16e0(arg9 + 0x1d0, rbx_8)
void* var_98 = r14
void* var_90 = rsi
void* var_88 = rdi_4
int64_t var_78 = *(arg9 + 0x188)
int32_t var_a8 = *(arg9 + 0x190)
int32_t var_a4 = *(arg9 + 0x1d8)
uint32_t rax_29 = zx.d(*(arg1 + 0x1e8))
*(arg9 + 0x154) = 1
int64_t* rcx_33 = data_143f0f180
void* var_80 = rbx_8
uint32_t var_a0 = rax_29
int64_t* var_148
(*(*rcx_33 + 0xf8))(rcx_33, &var_148, &var_a8, &data_143ce8e30, 1, 1)
int64_t* rax_31 = var_148
int64_t* arg_20 = rax_31

if (rax_31 != 0)
    rax_31[1].d += 1
    int64_t* rbx_9 = var_148
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            char rax_33
            
            if (rbx_9[2].b == 0 && data_143f0f1d0 == 0)
                rax_33 = sub_1405949a0()
            
            if (rbx_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_33 != 0))
                (**rbx_9)(rbx_9, 1)
            else
                bool z_2
                
                if (0 == *(rbx_9 + 0xc))
                    *(rbx_9 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_9 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_9)
    
    rax_31 = arg_20

int64_t* rbx_10

if (arg9 + 0x160 != &arg_20)
    rbx_10 = *(arg9 + 0x160)
    *(arg9 + 0x160) = rax_31
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            if (rbx_10[2].b != 0)
                (**rbx_10)(rbx_10, 1)
            else
                char rax_36
                
                if (data_143f0f1d0 == 0)
                    rax_36 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_36 != 0)
                    (**rbx_10)(rbx_10, 1)
                else
                    bool z_3
                    
                    if (0 == *(rbx_10 + 0xc))
                        *(rbx_10 + 0xc) = 1
                        z_3 = true
                    else
                        *(rbx_10 + 0xc)
                        z_3 = false
                    
                    if (z_3)
                        sub_1405dcc10(&data_143f02390, rbx_10)
else if (rax_31 != 0)
    rax_31[1].d -= 1
    
    if (rax_31[1].d == 1)
        rbx_10 = arg_20
        
        if (rbx_10[2].b != 0)
            (**rbx_10)(rbx_10, 1)
        else
            char rax_38
            
            if (data_143f0f1d0 == 0)
                rax_38 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_38 != 0)
                (**rbx_10)(rbx_10, 1)
            else
                bool z_4
                
                if (0 == *(rbx_10 + 0xc))
                    *(rbx_10 + 0xc) = 1
                    z_4 = true
                else
                    *(rbx_10 + 0xc)
                    z_4 = false
                
                if (z_4)
                    sub_1405dcc10(&data_143f02390, arg_20)
(*(*(arg9 + 8) + 0x28))(arg9 + 8)
void* rdx_21 = *(arg9 + 0x1e0)
void* var_e0 = rdx_21

if (rdx_21 != 0)
    *(rdx_21 + 8) += 1

sub_1405d16e0(arg9 + 0x168, rdx_21)
sub_1405d1550(&var_e0)
int64_t* rbx_11 = arg8
*(arg9 + 0x1dc) = zx.d(*(arg1 + 0x1e8))
rbx_11[0xf] = arg9 + 8
int32_t rax_47 = (((zx.d(*(arg4 + 0x39)) * 2) ^ *(rbx_11 + 0x9c)) & 4) ^ *(rbx_11 + 0x9c)
*(rbx_11 + 0x9c) = rax_47
int32_t rax_49 = (rax_47 ^ ((zx.d(*(arg4 + 0x39)) << 0x19 ^ rax_47) & 0x4000000)) & 0xffffffdf
*(rbx_11 + 0x9c) = rax_49
int32_t rax_52 = ((rax_49 ^ ((zx.d(*(arg4 + 0x35)) ^ rax_49) & 1)) | 2) & 0xffffe07f
*(rbx_11 + 0x9c) = rax_52
uint8_t r9_1 = *(arg4 + 0x36)

if ((r9_1 & 4) == 0)
label_14083deee:
    r9_1 u>>= 4
else
    int64_t* r11_1 = *(arg4 + 0x70)
    int64_t* rdx_22 = r11_1
    void* r8_25 = &r11_1[sx.q(*(arg4 + 0x78))]
    
    if (r11_1 == r8_25)
    label_14083deee_1:
        r9_1 u>>= 4
    else
        while (*rdx_22 != *(arg_10 + 0x240))
            rdx_22 = &rdx_22[1]
            
            if (rdx_22 == r8_25)
                goto label_14083deee_2
        
        if (((rdx_22 - r11_1) s>> 3).d == 0xffffffff)
        label_14083deee_2:
            r9_1 u>>= 4
        else
            r9_1 = *(arg4 + 0x37)

int32_t rcx_53 = (((zx.d(r9_1) << 0xd ^ rax_52) & 0xe000) ^ rax_52) | 0x10000
*(rbx_11 + 0x9c) = rcx_53
int32_t rax_53

if (*(arg4 + 0x35) s< 0 || (*(arg4 + 0x36) & 1) != 0)
    rax_53 = 0x20000
else
    rax_53 = 0

*(rbx_11 + 0x9b) = 0
rbx_11[0x10] = rcx
*(rbx_11 + 0x9c) = (rcx_53 & 0xfffdffff) | rax_53
int64_t* rax_55 = rbx_11[0xd]

if (rax_55 != 0)
    rbx_11 = rax_55

rbx_11[2] = *(arg7 + 8)
rbx_11[8].d = *(arg7 + 0x10)
int32_t temp1
int32_t temp2
temp1:temp2 = mulu.dp.d(0xaaaaaaab, *(arg7 + 0x18))
rbx_11[9].d = 1
*(rbx_11 + 0x44) = temp1 u>> 1
rbx_11[0xa] = 0
*rbx_11 = sub_140765120(arg4)
sub_1405ec8a0(&var_140:8)
sub_1405d1550(&var_140)
sub_1405ec8a0(&var_128:8)
sub_1405d1550(&var_128)
sub_1405ec8a0(&var_110:8)
sub_1405d1550(&var_110)
sub_1405ec8a0(&var_f8:8)
return sub_1405d1550(&var_f8)
