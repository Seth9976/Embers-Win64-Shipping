// 函数: sub_1423b1030
// 地址: 0x1423b1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t arg_8
int32_t* rdx_1 = &arg_8

if (*sub_1423af6b0(arg1 + 0x60, &arg_8, &arg_10) != 0xffffffff)
    sub_1423af6b0(arg1 + 0x60, rdx_1, &arg_10)
    int64_t rax_21 = sx.q(arg_8)
    
    if (rax_21.d == 0xffffffff)
        return 8
    
    return (rax_21 << 5) + *(arg1 + 0x60) + 8

int64_t* arg_18 = &arg_10
sub_14239da60(arg1 + 0x60, rdx_1, &arg_18, nullptr)
void* rdi_2 = (sx.q(arg_8) << 5) + *(arg1 + 0x60)
int32_t r11 = *(arg1 + 0x38)
void* r9 = arg1 + 0x20
int32_t var_74 = 1
void* var_70 = r9
int32_t rcx_2 = 0
int32_t var_78 = 0
int32_t r8_2 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_1423b1108:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8_2 - rax_9 + 0x1f
        
        if (r8_2 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_64:4.d = r8_2
            var_78 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1423b1108
        
        var_64.d = r11

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78.o
var_78.o = (arg1 + 0x10).o
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r14_1 = var_78.q
        int64_t* rbx_2 = *r14_1
        void* const rbx_3
        
        if (rbx_2[sx.q(i) * 3] == 0)
            rbx_3 = nullptr
        else
            void* rax_12 = sub_1425b3a40()
            
            if (rax_12 == 0)
                rbx_3 = nullptr
            else
                rbx_3 = rbx_2[sx.q(i) * 3]
                int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                
                if (rax_13.d s> *(rbx_3 + 0x38)
                        || *(*(rbx_3 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                    rbx_3 = nullptr
        
        if (arg_10 != 0)
            void* rax_15 = sub_1425b3a40()
            
            if (rax_15 != 0)
                int64_t rcx_6 = sx.q(*(rax_15 + 0x38))
                void* rax_16 = arg_10
                int64_t r8_4 = sx.q(*(rax_16 + 0x38))
                
                if (rcx_6.d s<= r8_4.d && *(*(rax_16 + 0x30) + (rcx_6 << 3)) == rax_15 + 0x30
                        && rax_16 != 0 && r8_4.d s<= *(rbx_3 + 0x38)
                        && *(*(rbx_3 + 0x30) + (r8_4 << 3)) == rax_16 + 0x30)
                    int64_t rbx_4 = sx.q(*(rdi_2 + 0x10))
                    int64_t r14_2 = *r14_1
                    int32_t rax_18 = (rbx_4 + 1).d
                    *(rdi_2 + 0x10) = rax_18
                    
                    if (rax_18 s> *(rdi_2 + 0x14))
                        sub_1405a4d70(rdi_2 + 8)
                    
                    *(*(rdi_2 + 8) + (rbx_4 << 3)) = *(sx.q(i) * 0x18 + r14_2 + 8)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))

return rdi_2 + 8
