// 函数: sub_140af5330
// 地址: 0x140af5330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140aefb30(arg1, arg2, 0)

if (rax == 0)
    return rax

sub_14062c990(arg3, *(arg1 + 0x10) - *(arg1 + 0x3c))
int32_t r11 = rax[5].d
void* r9 = &rax[2]
int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t r8 = 0
int32_t var_98 = 0
void* var_90 = r9
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_140af53e9:
        int32_t rax_7 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_94_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rax_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_84:4.d = r8
            var_98 = rcx_1
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_4 = *(r9 + (rax_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140af53e9
        
        var_84.d = r11

int64_t* var_30 = rax
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* rax_10 = zmm0.q
var_88.o = zmm0
var_98.o = rax.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0

if (0 s< *(rax_10 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdi_1 = sx.q(arg3[1].d)
        int64_t* rsi_1 = var_98.q
        int32_t rax_11 = (rdi_1 + 1).d
        int64_t r14_1 = *rsi_1
        arg3[1].d = rax_11
        
        if (rax_11 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        int64_t* rbx_1 = sx.q(i) * 0xb8
        sub_140596d10((rdi_1 << 4) + *arg3, rbx_1 + r14_1)
        int64_t rax_13 = *rsi_1
        int16_t* const r15_1
        
        if (*(rbx_1 + rax_13 + 8) == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *(rbx_1 + rax_13)
        
        int16_t* const r14_2
        
        if (arg2[1].d == 0)
            r14_2 = &data_142d40450
        else
            r14_2 = *arg2
        
        rsi_1.b = 0
        int32_t rdx_7 = data_14399fee8
        int32_t rcx_8 = data_14399fef4 + 1
        data_14399fef4 = rcx_8
        int64_t rdi_2 = sx.q(rdx_7 - 1)
        
        if (rdx_7 - 1 s>= 0)
            int64_t rbx_3 = rdi_2 << 4
            int64_t temp2_1
            
            do
                int64_t rax_15 = data_14399fee0
                
                if (*(rbx_3 + rax_15 + 8) == 0)
                    rsi_1.b = 1
                else
                    int64_t* rcx_9 = *(rbx_3 + rax_15)
                    
                    if (rcx_9 == 0)
                        rsi_1.b = 1
                    else if ((*(*rcx_9 + 0x50))(rcx_9, r14_2, r15_1) == 0)
                        rsi_1.b = 1
                
                rbx_3 -= 0x10
                temp2_1 = rdi_2
                rdi_2 -= 1
            while (temp2_1 - 1 s>= 0)
            rcx_8 = data_14399fef4
            rdx_7 = data_14399fee8
        
        data_14399fef4 = rcx_8 - 1
        
        if (rsi_1.b != 0 && rcx_8 - 1 s<= 0)
            int32_t rbx_4 = 0
            int32_t rsi_2 = rdx_7
            
            if (rdx_7 s> 0)
                int64_t* rdi_3 = nullptr
                
                do
                    int64_t rax_18 = data_14399fee0
                    
                    if (*(rdi_3 + rax_18 + 8) == 0)
                        sub_1405a4880(&data_14399fee0, rbx_4, 1, 1)
                    else
                        int64_t* rcx_11 = *(rdi_3 + rax_18)
                        
                        if (rcx_11 == 0)
                            sub_1405a4880(&data_14399fee0, rbx_4, 1, 1)
                        else if ((*(*rcx_11 + 0x20))(rcx_11) != 0)
                            sub_1405a4880(&data_14399fee0, rbx_4, 1, 1)
                        else
                            rbx_4 += 1
                            rdi_3 = &rdi_3[2]
                    
                    rdx_7 = data_14399fee8
                while (rbx_4 s< rdx_7)
            
            int32_t rax_21 = rdx_7 * 2
            
            if (rax_21 s<= 2)
                rax_21 = 2
            
            data_14399fef0 = rax_21
            
            if (rsi_2 s> rax_21 && data_14399feec != rdx_7)
                sub_1405a5410(&data_14399fee0, rdx_7)
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = i_1
    while (i s< *(var_88.q + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_140aed200(rax, rax[1].d - *(rax + 0x34), 1)

rax_10.b = 1
return rax_10
