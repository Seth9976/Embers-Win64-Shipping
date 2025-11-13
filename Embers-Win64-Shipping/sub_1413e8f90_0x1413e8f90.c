// 函数: sub_1413e8f90
// 地址: 0x1413e8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_64 = 1
int32_t r10 = *(arg1 + 0x1ae0)
void* r9 = arg1 + 0x1ac8
int32_t rcx = 0
void* var_60 = r9
int64_t result = 0
int32_t var_68 = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1413e9029:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_64_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_54.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_54:4.d = r8
            var_68 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r9 + (rax_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1413e9029
        
        var_54.d = r10

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = (arg1 + 0x1ab8).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rbx_3 = *var_68.q + 0x240 + sx.q(i) * 0x290
        int64_t* rcx_2 = rbx_3[6]
        int32_t rax_12 = rbx_3[5].d
        
        if (rcx_2 != 0 || rax_12 s> 0)
            int64_t rdi_1 = 0
            int32_t j = 0
            
            if (rax_12 s> 0)
                int64_t rsi_1 = 0
                
                do
                    int64_t* rax_13 = rbx_3[4]
                    int64_t* rcx_3 = rbx_3
                    
                    if (rax_13 != 0)
                        rcx_3 = rax_13
                    
                    int64_t* rcx_4 = *(rcx_3 + rsi_1)
                    j += 1
                    rdi_1 += zx.q((*(*rcx_4 + 0x20))(rcx_4))
                    rsi_1 += 8
                while (j s< rbx_3[5].d)
                
                rcx_2 = rbx_3[6]
            
            if (rcx_2 != 0)
                rdi_1 += zx.q((*(*rcx_2 + 0x20))(rcx_2))
            
            result += rdi_1
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

return result
