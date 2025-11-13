// 函数: sub_141d791b0
// 地址: 0x141d791b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t var_150
int64_t rbx = *sub_140b58260(&var_150, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx)
int32_t var_bc = 0x80
void* var_148 = nullptr
int32_t i_7 = 0
int64_t var_128
__builtin_memset(&var_128, 0, 0x3c)
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
uint64_t var_98 = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x24)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t var_48 = 0
char var_46 = 0
int32_t var_b8 = 0xffffffff
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_f0
int64_t rsi = sx.q(var_f0)
int64_t rbx_1 = *(sub_141d82280() + 0x18)
int32_t rax_5 = (rsi + 1).d
var_f0 = rax_5
int64_t var_f8

if (rax_5 s> 0)
    sub_1405a4d70(&var_f8)

*(var_f8 + (rsi << 3)) = rbx_1
var_48:1.b = 1
int64_t* rax_8 = (*(*rax_3 + 0x48))(rax_3)
int64_t r9 = *rax_8
(*(r9 + 0x40))(rax_8, &var_128, &var_148, r9)
void* rbx_2 = var_148
*arg1 = 0
arg1[1] = 0
void* i = sx.q(i_7) * 0x50 + rbx_2
int64_t var_168

if (rbx_2 != i)
    int64_t* rbx_3 = rbx_2 + 0x20
    
    do
        int32_t rcx_4
        rcx_4.b = sub_140b5b8a0(rbx_3[-4].d, 0) == 0
        
        if ((*(rbx_3 - 0x1c) != 0 | rcx_4.b) != 0)
            int64_t var_138
            int64_t* rax_11 = sub_140b63b70(rbx_3, &var_138)
            int16_t* rsi_1
            
            if (rax_11[1].d == 0)
                rsi_1 = &data_142d40450
            else
                rsi_1 = *rax_11
            
            int64_t rax_13 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rsi_1, 0)
            int64_t rcx_7 = var_138
            int64_t rsi_2 = rax_13
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            if (rsi_2 != 0)
            label_141d79406:
                int64_t r14_1 = sx.q(arg1[1].d)
                int32_t rax_18 = (r14_1 + 1).d
                arg1[1].d = rax_18
                
                if (rax_18 s> *(arg1 + 0xc))
                    sub_1405a4d70(arg1)
                
                *(*arg1 + (r14_1 << 3)) = rsi_2
            else
                sub_140cba1c0(&var_150, *rbx_3, 0)
                int32_t rcx_9
                rcx_9.b = sub_140b5b8a0(var_150, 0) == 0
                int32_t var_14c
                
                if ((var_14c != 0 | rcx_9.b) != 0)
                    int64_t* rax_15 = sub_140b63b70(&var_150, &var_168)
                    int16_t* rsi_3
                    
                    if (rax_15[1].d == 0)
                        rsi_3 = &data_142d40450
                    else
                        rsi_3 = *rax_15
                    
                    int64_t rax_17 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rsi_3, 0)
                    int64_t rcx_12 = var_168
                    rsi_2 = rax_17
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                
                if (rsi_2 != 0)
                    goto label_141d79406
        
        rbx_3 = &rbx_3[0xa]
    while (&rbx_3[-4] != i)

var_168 = 0
int32_t var_160 = 0
int32_t var_158 = 0xffffffff
sub_140d3cc80(sub_140bdf2e0(), &var_168, 1, 0x10, 0)
int32_t r8_4 = var_160
int32_t i_1 = var_158 + 1
int64_t rdx_8 = var_168
int32_t i_3 = i_1

if (i_1 s< r8_4)
    while (*(rdx_8 + (sx.q(i_1) << 3)) == 0)
        int32_t i_4 = i_1 + 1
        i_3 = i_4
        i_1 = i_4
        
        if (i_4 s>= r8_4)
            break

while (i_1 s>= 0)
    if (i_1 s>= r8_4)
        break
    
    void* rax_23 = sub_141d82280()
    rdx_8 = var_168
    
    if (rax_23 != 0)
        void* rbx_4 = *(rdx_8 + (sx.q(i_3) << 3))
        int64_t rax_25 = sx.q(*(rax_23 + 0x38))
        
        if (rax_25.d s<= *(rbx_4 + 0x38) && *(*(rbx_4 + 0x30) + (rax_25 << 3)) == rax_23 + 0x30
                && (*(rbx_4 + 0xcc) & 0x82000001) == 0)
            int64_t rsi_4 = sx.q(arg1[1].d)
            int32_t rax_27 = (rsi_4 + 1).d
            arg1[1].d = rax_27
            
            if (rax_27 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rsi_4 << 3)) = rbx_4
            rdx_8 = var_168
    
    r8_4 = var_160
    i_1 = i_3 + 1
    i_3 = i_1
    
    if (i_1 s< r8_4)
        while (*(rdx_8 + (sx.q(i_1) << 3)) == 0)
            int32_t i_5 = i_1 + 1
            i_3 = i_5
            i_1 = i_5
            
            if (i_5 s>= r8_4)
                break

if (rdx_8 != 0)
    sub_140a74f90(rdx_8)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

var_90.d = 0
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

uint64_t rcx_24 = var_98

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14098e2c0(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_28 = var_e8

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = var_f8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t var_108

if (var_108 != 0)
    sub_140a74f90(var_108)

int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_32 = var_128

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int32_t i_6 = i_7

if (i_6 != 0)
    void* rsi_6 = var_148 + 0x30
    int32_t i_2
    
    do
        int64_t rcx_33 = *(rsi_6 + 8)
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        int64_t* rbx_5 = *rsi_6
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp2_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        rsi_6 += 0x50
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

void* rcx_36 = var_148

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
