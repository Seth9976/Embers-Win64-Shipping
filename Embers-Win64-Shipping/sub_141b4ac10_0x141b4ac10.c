// 函数: sub_141b4ac10
// 地址: 0x141b4ac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t var_88 = 0
int32_t* r9 = &arg1[4]
int32_t var_78 = 0xffffffff
int32_t* var_80 = r9
*arg1 = &data_14306c748
int32_t r11 = r9[6]
int32_t rcx = 0
int32_t var_74 = 0
int32_t r8 = 0
int32_t var_70 = 0

if (r11 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_141b4acb8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_74_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_70 = rcx
            var_88 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b4acb8
        
        var_74_2 = r11

double zmm4[0x2] = var_78.o
int64_t* var_20 = &arg1[2]
int16_t var_50 = 0
double zmm3[0x2] = var_88.o
double rax_11 = zmm3[0]
var_78.o = zmm3
var_88.o = (&arg1[2]).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_68[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rdi_1 = *(*var_88.q + sx.q(i) * 0x18 + 8)
        
        if (rdi_1 != 0)
            int64_t* rax_14 = *(rdi_1 + 0x20)
            
            if (rax_14 != 0)
                *rax_14 = 0
            
            int64_t* rbx_1 = *(rdi_1 + 0x28)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            j_sub_140a74f90(rdi_1)
        
        var_70 &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_140bd9620(&arg1[2], arg1[3].d - *(arg1 + 0x44), 1)

sub_1405ae080(&arg1[2])
*arg1 = &data_142d5ee90
return &data_142d5ee90
