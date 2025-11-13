// 函数: sub_1418e44e0
// 地址: 0x1418e44e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_88 = 0xffffffff
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x78)
void* r8 = arg1 + 0x60
int64_t var_84 = 0
void* var_90 = r8
int32_t rcx = 0
int32_t var_94 = 1

if (r11 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_1418e4578:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            var_84:4.d = rcx
            var_98 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418e4578
        
        var_84.d = r11

double zmm4[0x2] = var_88.o
int64_t* var_30 = arg1 + 0x50
char var_60 = 0
double zmm3[0x2] = var_98.o
double result = zmm3[0]
var_88.o = zmm3
var_98.o = (arg1 + 0x50).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_2 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t** r14_1 = *(*var_98.q + sx.q(i) * 0x18 + 8)
        int32_t rax_13 = r14_1[1].d
        int32_t rdi_1 = rax_13 - 1
        
        if (rdi_1 s>= 0)
            int64_t r15_1 = sx.q(rdi_1) << 3
            int64_t r12_1 = r15_1
            int32_t temp2_1
            
            do
                int64_t* r9_1 = *r14_1
                int32_t rcx_5 = 0
                int64_t* rbx_1 = *(r9_1 + r15_1)
                int32_t rdx_6 = *(rbx_1 + 0x5c)
                
                if (rdx_6 != 0)
                    void* rax_15 = &rbx_1[0xc]
                    
                    do
                        if (*rax_15 == arg3)
                            goto label_1418e467c
                        
                        rcx_5 += 1
                        rax_15 += 8
                    while (rcx_5 u< rdx_6)
                
                if (rbx_1[0x1c] == arg3)
                label_1418e467c:
                    int32_t rcx_8 = r14_1[1].d
                    int32_t rax_18 = rcx_8 - rdi_1 - 1
                    
                    if (rax_18 s>= 1)
                        rax_18 = 1
                    
                    if (rax_18 != 0)
                        memcpy(r9_1 + r12_1, &r9_1[sx.q(rcx_8 - rax_18)], rax_18 << 3)
                        rcx_8 = r14_1[1].d
                    
                    r14_1[1].d = rcx_8 - 1
                    sub_1418f80e0(rbx_1, arg2)
                    
                    if (rbx_1 == *(arg1 + 0x1d0))
                        *(arg1 + 0x1d0) = 0
                    
                    sub_1418f48f0(rbx_1)
                    j_sub_140a74f90(rbx_1)
                
                r12_1 -= 8
                r15_1 -= 8
                temp2_1 = rdi_1
                rdi_1 -= 1
            while (temp2_1 - 1 s>= 0)
            rax_13 = r14_1[1].d
            i = i_1
        
        if (rax_13 == 0)
            int64_t* rcx_12 = *r14_1
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            j_sub_140a74f90(r14_1)
            sub_1405c2fb0(zmm4[1], i)
            var_60 = 1
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        result = var_88.q
        i = i_1
    while (i s< *(result i+ 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        return sub_140b9ddc0(arg1 + 0x50, *(arg1 + 0x58) - *(arg1 + 0x84), 1)

return result
