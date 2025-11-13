// 函数: sub_141fb0ab0
// 地址: 0x141fb0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
sub_141fa4f40(&arg_8, arg1)
int64_t* rdi = *(arg1 + 0x28)

if (rdi == 0)
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        sub_140d21d80(arg1)
        sub_140cde0b0()
    
    rdi = sub_142499390()

void* rsi = nullptr
int32_t var_84 = 1
int32_t var_78 = 0xffffffff
int32_t r11 = *(arg1 + 0x58)
void* r9 = arg1 + 0x40
void* var_80 = r9
int32_t rcx_2 = 0
int32_t var_88 = 0
int32_t r8 = 0
int64_t var_74 = 0

if (r11 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141fb0b88:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_84_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_74:4.d = r8
            var_88 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141fb0b88
        
        var_74.d = r11

double zmm4[0x2] = var_78.o
void* var_20 = arg1 + 0x30
int16_t var_50 = 0
double zmm3[0x2] = var_88.o
double rax_14 = zmm3[0]
var_78.o = zmm3
var_88.o = (arg1 + 0x30).o
double rcx_4 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_68[0x2] = zmm4

if ((rcx_4 u>> 0x20).d s< *(rax_14 i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rbx_1 = *(*var_88.q + sx.q(i) * 0x18 + 8)
        (*(*rdi + 0x2a8))(rdi, rbx_1, 1)
        sub_140a74f90(rbx_1)
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_1405b6730(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 1)

sub_1405b8890(arg1 + 0x30, 0)
EnterCriticalSection(&data_143f3d1e8)
void* rbx_2 = arg_8
sub_140865c40(&data_143a2dbd0, &arg_8, rbx_2)
int64_t rax_21 = sx.q(arg_8.d)

if (rax_21.d != 0xffffffff)
    rsi = data_143a2dbd0 + rax_21 * 0x18

int32_t temp2 = *(rsi + 8)
*(rsi + 8) -= 1

if (temp2 == 1)
    sub_140599090(rbx_2 + 0x98)
    sub_140868c90(&data_143a2dbd0, rbx_2)

return LeaveCriticalSection(&data_143f3d1e8) __tailcall
