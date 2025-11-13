// 函数: sub_1423bc680
// 地址: 0x1423bc680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t* r11 = arg1 + 0x18
int32_t var_a8 = 0xffffffff
int32_t* var_b0 = r11
int64_t var_a4 = 0
int32_t r9 = r11[6]
int32_t r8 = 0

if (r9 != 0)
    int32_t* rax_1 = *(r11 + 0x10)
    
    if (rax_1 != 0)
        r11 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rcx = *r11
    
    if (rcx != 0)
    label_1423bc72a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r9)
            var_a4.d = r9
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_a4:4.d = r8
            var_b8 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r11[rcx_1 + 1]
            var_a8 = 0xffffffff
            
            if (rcx != 0)
                goto label_1423bc72a
        
        var_a4.d = r9

double zmm2[0x2] = var_a8.o
double var_70[0x2] = zmm2
void* var_90 = arg1 + 8
double var_80[0x2] = var_b8.o
var_b8.o = (arg1 + 8).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_98 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_a8.o = var_80
int64_t arg_8

if (rax_12 s< r9)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rcx_4 = *(*var_b8.q + sx.q(i) * 0x10)
        (*(*rcx_4 + 0x18))(rcx_4, &arg_8, zx.q(arg4))
        int32_t j_5 = arg2[1].d
        int32_t r9_1 = 0
        int64_t r10_1 = *arg2
        int32_t j = j_5
        int32_t rcx_5 = arg_8.d
        int32_t r11_1 = arg_8:4.d
        
        if (j_5 s> 0)
            do
                int32_t r8_4 = j & 0x80000001
                
                if (r8_4 s< 0)
                    r8_4 = ((r8_4 - 1) | 0xfffffffe) + 1
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(j)
                int32_t j_2 = (temp5_1 - temp4_1) s>> 1
                j = j_2
                int32_t rax_18 = j_2 + r9_1
                int64_t r8_7 = sx.q(rax_18) * 3
                int32_t rax_20 = *(r10_1 + (r8_7 << 2))
                int32_t rax_21 = rax_20 - rcx_5
                
                if (rax_20 == rcx_5)
                    rax_21 = *(r10_1 + (r8_7 << 2) + 4) - r11_1
                
                if (rax_21 s< 0)
                    r9_1 = rax_18 + r8_4
            while (j s> 0)
        
        void* rax_25
        
        if (r9_1 s>= j_5)
            rax_25 = sub_1423b86a0(arg2, &arg_8)
        else
            int64_t rdx_6 = sx.q(r9_1) * 3
            int32_t rcx_6 = rcx_5 - *(r10_1 + (rdx_6 << 2))
            
            if (rcx_5 == *(r10_1 + (rdx_6 << 2)))
                rcx_6 = r11_1 - *(r10_1 + (rdx_6 << 2) + 4)
            
            if (rcx_6 s< 0 || r9_1 == 0xffffffff)
                rax_25 = sub_1423b86a0(arg2, &arg_8)
            else
                rax_25 = r10_1 + 8 + (rdx_6 << 2)
                
                if (rax_25 == 0)
                    rax_25 = sub_1423b86a0(arg2, &arg_8)
        
        *rax_25 += 1
        var_a4:4.d &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        i = i_2
    while (i s< *(var_a8.q + 0x18))

uint64_t result = zx.q(*(arg1 + 0x10) - *(arg1 + 0x3c))
*arg3 += result.d
int64_t* i_1 = *(arg1 + 0x58)

while (i_1 != 0)
    double zmm0[0x2]
    double zmm1[0x2]
    
    if (arg5 != 0)
        if ((*(i_1 + 0xa) & 1) == 0)
            zmm1 = arg6
        else
            zmm1 = arg7
        
        result = i_1[4]
        
        if (result == 0)
            zmm0 = 0xbf800000
        else
            zmm0 = *(result + 0x24)
    
    if (arg5 == 0 || zmm0[0].d f== zmm1[0].d)
        (*(*i_1 + 0x18))(i_1, &arg_8, zx.q(arg4))
        int32_t j_4 = arg2[1].d
        int32_t r9_2 = 0
        int64_t r10_2 = *arg2
        int32_t j_1 = j_4
        int32_t rcx_10 = arg_8.d
        int32_t r11_3 = arg_8:4.d
        
        if (j_4 s> 0)
            do
                int32_t r8_10 = j_1 & 0x80000001
                
                if (r8_10 s< 0)
                    r8_10 = ((r8_10 - 1) | 0xfffffffe) + 1
                
                int32_t temp9_1
                int32_t temp10_1
                temp9_1:temp10_1 = sx.q(j_1)
                int32_t j_3 = (temp10_1 - temp9_1) s>> 1
                j_1 = j_3
                int32_t rax_34 = j_3 + r9_2
                int64_t r8_13 = sx.q(rax_34) * 3
                int32_t rax_36 = *(r10_2 + (r8_13 << 2))
                int32_t rax_37 = rax_36 - rcx_10
                
                if (rax_36 == rcx_10)
                    rax_37 = *(r10_2 + (r8_13 << 2) + 4) - r11_3
                
                if (rax_37 s< 0)
                    r9_2 = rax_34 + r8_10
            while (j_1 s> 0)
        
        void* rax_41
        
        if (r9_2 s>= j_4)
            rax_41 = sub_1423b86a0(arg2, &arg_8)
        else
            int64_t rdx_10 = sx.q(r9_2) * 3
            int32_t rcx_11 = rcx_10 - *(r10_2 + (rdx_10 << 2))
            
            if (rcx_10 == *(r10_2 + (rdx_10 << 2)))
                rcx_11 = r11_3 - *(r10_2 + (rdx_10 << 2) + 4)
            
            if (rcx_11 s< 0 || r9_2 == 0xffffffff)
                rax_41 = sub_1423b86a0(arg2, &arg_8)
            else
                rax_41 = r10_2 + 8 + (rdx_10 << 2)
                
                if (rax_41 == 0)
                    rax_41 = sub_1423b86a0(arg2, &arg_8)
        
        *rax_41 += 1
        result = i_1[4]
        i_1 = *(result + 0x18)
        *arg3 += 1
    else
        i_1 = *(result + 0x18)

return result
