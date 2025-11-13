// 函数: sub_141f34630
// 地址: 0x141f34630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x47].b != 0)
    EnterCriticalSection(&data_143f3b480)
    int64_t* arg_8 = arg1
    sub_1409d7d20(&data_143f3b460, &arg_8)
    arg_8 = arg1
    sub_1409d7d20(&data_143f3b470, &arg_8)
    LeaveCriticalSection(&data_143f3b480)

int64_t* rax = sub_142006940()
int64_t rdx_3 = *rax
void* rax_1 = (*(rdx_3 + 0xa8))(rax, rdx_3)
int32_t r11 = *(rax_1 + 0x28)
int32_t rcx_1 = 0
int32_t var_58 = 0
int32_t var_54 = 1
int32_t r8 = 0
int32_t var_48 = 0xffffffff
void* r9 = rax_1 + 0x10
void* var_50 = r9
int64_t var_44 = 0

if (r11 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *r9
    
    if (rdx_6 != 0)
    label_141f34718:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_54_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_44.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_44:4.d = r8
            var_58 = rcx_1
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9 + (rdx_7 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141f34718
        
        var_44.d = r11

double zmm2[0x2] = var_48.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_58.o
var_58.o = rax_1.o
uint32_t rax_13 = (zmm2[0] u>> 0x20).d
int64_t var_38 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_48.o = var_28

if (rax_13 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_4 = *(*var_58.q + sx.q(i) * 0x10)
        (*(*rcx_4 + 0xd8))(rcx_4, arg1)
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

int64_t* rcx_6 = arg1[0x48]

if (rcx_6 != 0)
    zmm2 = sub_141997f50(rcx_6)

int128_t entry_zmm3
sub_141997ac0(&arg1[0x4b], 0, zmm2, entry_zmm3)
return sub_141f34810(arg1) __tailcall
