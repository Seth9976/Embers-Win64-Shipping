// 函数: sub_1405a9b30
// 地址: 0x1405a9b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
void* r10 = arg1 + 0x10
int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
void* var_50 = r10
int32_t var_48 = 0xffffffff
int32_t r9 = 0
int64_t var_44 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_1405a9bca:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_44:4.d = r9
            var_58 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rcx != 0)
                goto label_1405a9bca
        
        var_44.d = r11

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = arg1.o
void* result = nullptr
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rbx_3 = (sx.q(i) << 6) + *var_58.q
        int64_t r14_1 = *(rbx_3 + 0x30)
        char rax_12 = sub_1405a71a0(arg2, rbx_3 + 8)
        char rax_14
        
        if (rax_12 == 0)
            rax_14 = sub_1405a71a0(arg2, sub_140ac6680(rbx_3 + 0x18))
        
        if (rax_12 != 0 || rax_14 != 0)
            void* rbx_4 = arg2[2]
            int64_t rdi_1 = sx.q(*(rbx_4 + 0x6a8))
            int32_t rax_15 = (rdi_1 + 1).d
            *(rbx_4 + 0x6a8) = rax_15
            
            if (rax_15 s> *(rbx_4 + 0x6ac))
                sub_1405a4d70(rbx_4 + 0x6a0)
            
            *(*(rbx_4 + 0x6a0) + (rdi_1 << 3)) = r14_1
        
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

return result
