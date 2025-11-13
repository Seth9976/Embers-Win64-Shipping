// 函数: sub_141f83590
// 地址: 0x141f83590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_88 = 0
int32_t r11 = *(arg1 + 0xd0)
void* r9 = arg1 + 0xb8
int32_t rcx = 0
int32_t var_84 = 1
void* var_80 = r9
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141f83638:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_74:4.d = rcx
            var_88 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f83638
        
        var_74.d = r11

double zmm4[0x2] = var_78.o
uint64_t* var_20 = arg1 + 0xa8
double zmm3[0x2] = var_88.o
int16_t var_50 = 0
double rax_11 = zmm3[0]
var_78.o = zmm3
var_88.o = (arg1 + 0xa8).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_68[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rdi_1 = var_88.q
        int64_t rcx_4
        int64_t rbx_2
        int64_t* r8_3
        
        if (arg2 != 0)
            rbx_2 = sx.q(i) << 5
            r8_3 = *rdi_1 + 8 + rbx_2
            rcx_4 = *(*r8_3 + 0x48)
        
        if (arg2 == 0 || rcx_4 == 0)
            sub_141faa400(*((sx.q(i) << 5) + *rdi_1 + 8))
        else
            int64_t arg_8 = rcx_4
            sub_141f77860(*(arg1 + 0x28) + 0x1468, &arg_8, r8_3)
            sub_141fca460(*(rbx_2 + *rdi_1 + 8))
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_1405b6520(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), 1)

sub_140d9e780(arg1 + 0xa8, 0)
void* result = arg1 + 0x98

if (result != &var_88)
    *result = 0
    int64_t* rbx_3 = *(result + 8)
    
    if (rbx_3 != 0)
        *(result + 8) = 0
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*(*rbx_3 + 8))(rbx_3, 1)

return result
