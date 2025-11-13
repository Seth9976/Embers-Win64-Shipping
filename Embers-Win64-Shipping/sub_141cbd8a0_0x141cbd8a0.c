// 函数: sub_141cbd8a0
// 地址: 0x141cbd8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[5] == 0)
    return 

uint64_t rax = sub_141cc98d0()

if (rax == 0)
    return 

int64_t rcx = sx.q(*(rax + 0x38))
void* rdx = rax + 0x30
rax = arg1[5]

if (rcx.d s> *(rax + 0x38) || *(*(rax + 0x30) + (rcx << 3)) != rdx)
    return 

int32_t rbx_1 = arg3[1].d
void* rax_2 = (*(*arg1 + 0x278))(arg1)
int32_t rdx_3 = *(rax_2 + 8) - *(rax_2 + 0x34) + rbx_1

if (rdx_3 s> *(arg3 + 0xc))
    sub_1405c5570(arg3, rdx_3)

void* rax_4 = (*(*arg1 + 0x278))(arg1)
int32_t r11_1 = *(rax_4 + 0x28)
int32_t rcx_4 = 0
int32_t var_58_1 = 0
int32_t var_54_1 = 1
int32_t r8 = 0
int32_t var_48_1 = 0xffffffff
void* r9_1 = rax_4 + 0x10
void* var_50 = r9_1
int64_t var_44_1 = 0

if (r11_1 != 0)
    void* rax_5 = *(r9_1 + 0x10)
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_141cbd9a8:
        int32_t rax_12 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_54_2 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_44_1.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> r11_1)
            var_44_1.d = r11_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_44_1:4.d = r8
            var_58_1 = rcx_4
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            var_48_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141cbd9a8
        
        var_44_1.d = r11_1

double zmm2_1[0x2] = var_48_1.o
double var_18_1[0x2] = zmm2_1
double var_28_1[0x2] = var_58_1.o
var_58_1.o = rax_4.o
rax = zmm2_1[0] u>> 0x20
int64_t var_38_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
var_48_1.o = var_28_1

if (rax.d s>= r11_1)
    return 

int32_t i_1
int32_t i = i_1

do
    int64_t rbx_3 = sx.q(arg3[1].d)
    int32_t rax_18 = (rbx_3 + 1).d
    int64_t rsi_1 = *(*var_58_1.q + sx.q(i) * 0x18 + 8)
    arg3[1].d = rax_18
    
    if (rax_18 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    *(*arg3 + (rbx_3 << 3)) = rsi_1
    var_44_1:4.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    i = i_1
while (i s< *(var_48_1.q + 0x18))
