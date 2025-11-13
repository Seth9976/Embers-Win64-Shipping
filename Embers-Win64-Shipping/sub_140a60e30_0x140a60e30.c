// 函数: sub_140a60e30
// 地址: 0x140a60e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_84 = 1
__builtin_memset(arg1, 0, 0x1c)
int64_t* r8 = &arg1[2]
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]
int32_t var_88 = 0
int32_t var_78 = 0xffffffff

if (rax != 0)
    r8 = rax

int32_t var_74 = 0
*r8 = 0
r8[1] = 0
int32_t* r8_1 = arg2 + 0x10
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
int32_t rcx = 0
int32_t r11 = r8_1[6]
int32_t var_70 = 0
int32_t* var_80 = r8_1

if (r11 != 0)
    int32_t* rax_1 = *(r8_1 + 0x10)
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8_1
    int32_t var_74_2
    
    if (rdx_2 != 0)
    label_140a60f08:
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
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_74_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            int32_t var_70_1 = rcx
            var_88 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r8_1[rdx_3 + 1]
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a60f08
        
        var_74_2 = r11

double zmm2[0x2] = var_78.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_88.o
double var_68[0x2] = arg2.o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (rax_12 s< r11)
    int32_t i = var_28[1]:4.d
    
    do
        int64_t rdx_5 = sx.q(i) * 5
        int64_t rcx_2 = *var_68[0]
        int64_t* rbx_1 = *(rcx_2 + (rdx_5 << 3) + 0x18)
        int64_t* rcx_3 = *(rcx_2 + (rdx_5 << 3) + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (rcx_3 != 0)
            int64_t* rax_16 = (*(*rcx_3 + 0x30))(rcx_3, &var_88)
            int64_t var_40 = *rax_16
            int64_t* rcx_5 = rax_16[1]
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
            
            sub_140a5c0e0(arg1, rcx_2 + (rdx_5 << 3), &var_40)
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rcx_5)(rcx_5)
                    int32_t temp6_1 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
            
            int64_t* rdi_3 = var_80
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp7_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int32_t var_5c
        var_28[1].d &= not.d(var_5c)
        sub_14059bdd0(&var_68[1])
        i = var_28[1]:4.d
    while (i s< *(var_28[0] i+ 0x18))

return arg1
