// 函数: sub_140918760
// 地址: 0x140918760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d

if (i_3 != 0)
    int64_t* rsi_1 = *arg2 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 = &rsi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rbx_2 = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != r15_1)
    sub_1405a5410(arg2, r15_1)

int32_t r9 = *(arg1 + 0x28)
void* r8 = arg1 + 0x10
int32_t var_68 = 0
int32_t rcx_3 = 0
int32_t var_64 = 1
void* var_60 = r8
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r9 != 0)
    void* rax_3 = *(r8 + 0x10)
    
    if (rax_3 != 0)
        r8 = rax_3
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r8
    
    if (rdx_3 != 0)
    label_140918857:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_64_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_54.d = rcx_3 - rax_11 + 0x1f
        
        if (rcx_3 - rax_11 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx_2)
            rcx_3 += 0x20
            rbx_2 += 1
            var_54:4.d = rcx_3
            var_68 = rbx_2
            
            if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140918857
        
        var_54.d = r9

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = arg1.o
void* result = nullptr
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r9)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rbx_3 = sx.q(arg2[1].d)
        int32_t rax_13 = (rbx_3 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t r8_2 = rbx_3 << 4
        int64_t* r8_3 = r8_2 + *arg2
        
        if (r8_2 != neg.q(*arg2))
            int64_t rdx_7 = sx.q(i_1) * 5
            int64_t rcx_6 = *var_68.q
            *r8_3 = *(rcx_6 + (rdx_7 << 3) + 0x10)
            void* rax_17 = *(rcx_6 + (rdx_7 << 3) + 0x18)
            r8_3[1] = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
