// 函数: sub_1423cadb0
// 地址: 0x1423cadb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Tickables")
sub_1423c0530()
void* lpCriticalSection_1 = &data_143f5a790
void* lpCriticalSection = &data_143f5a790
EnterCriticalSection(&data_143f5a790)
EnterCriticalSection(&data_143f5a7c8)
int32_t rcx = 0
int32_t var_bc = 1
int32_t var_c0 = 0
int32_t r11 = data_143f5a818
int32_t r8 = 0
int64_t* var_b8 = &data_143f5a800
int32_t var_b0 = 0xffffffff
int64_t var_ac = 0

if (r11 != 0)
    int64_t* rax_1 = data_143f5a810
    int64_t* r9_1 = &data_143f5a800
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1423cae98:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_bc_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_ac.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_ac.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_ac:4.d = r8
            var_c0 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_b0_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1423cae98
        
        var_ac.d = r11

int32_t rdx_4 = data_143f5a818
int64_t* var_70 = &data_143f5a7f0
int128_t var_58 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_68 = var_c0.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_b0_2 = r15
var_ac.d = rdx_4
int128_t var_98 = var_70.o
int128_t var_88 = var_68

if (rdx_4 != r11)
    int64_t* rax_11 = data_143f5a810
    int64_t* r10_1 = &data_143f5a800
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_8 != 0)
    label_1423caf64:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_ac.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_ac.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b0_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1423caf64
        
        var_ac.d = r11

while (true)
    int64_t rcx_7 = sx.q(var_88:0xc.d)
    int64_t* rax_20 = var_98.q
    uint64_t rsi
    
    if (rcx_7.d == (var_b0_2.q u>> 0x20).d && var_88.q == &data_143f5a800
            && rax_20 == &data_143f5a7f0)
        data_143f5a7f8.d = 0
        
        if (data_143f5a7f8:4.d != 0)
            sub_1405a5410(&data_143f5a7f0, 0)
        
        data_143f5a820 = 0xffffffff
        data_143f5a824 = 0
        sub_14059a8e0(&data_143f5a800, 0)
        int32_t i_2 = data_143f5a838
        
        if (i_2 s> 0)
            int64_t r8_4 = 0
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                void* rcx_13 = data_143f5a830
                void* rax_28 = &data_143f5a828
                int64_t rdx_12 = (sx.q(data_143f5a838) - 1) & r8_4
                
                if (rcx_13 != 0)
                    rax_28 = rcx_13
                
                r8_4 += 1
                *(rax_28 + (rdx_12 << 2)) = 0xffffffff
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        LeaveCriticalSection(&data_143f5a7c8)
        
        if (data_143f5a7c0.d s> 0)
            data_143f5a840 = 1
            rsi.b = 0
            int64_t* rdi_2 = data_143f5a7b8
            void* r14_3 = &rdi_2[sx.q(data_143f5a7c0.d) * 2]
            
            if (rdi_2 != r14_3)
                do
                    int64_t* rbx_1 = *rdi_2
                    
                    if (rbx_1 == 0)
                        rsi.b = 1
                    else
                        char rax_30
                        
                        if (rdi_2[1].b != 1)
                            rax_30 = (*(*rbx_1 + 0x10))(rbx_1)
                        
                        if ((rdi_2[1].b == 1 || rax_30 != 0) && (*(*rbx_1 + 0x38))(rbx_1) == arg1)
                            int32_t rax_33 = arg2
                            
                            if (rax_33 == 2)
                                goto label_1423cb0f5
                            
                            if (arg1 != 0 && sub_14243ade0(arg1) != 0)
                                rax_33 = arg2
                            label_1423cb0f5:
                                
                                if (arg3 != 0)
                                    if ((*(*rbx_1 + 0x28))(rbx_1) != 0)
                                    label_1423cb117:
                                        void var_c8
                                        (*(*rbx_1 + 0x18))(rbx_1, &var_c8)
                                        (**rbx_1)(rbx_1, arg4)
                                        
                                        if (*rdi_2 == 0)
                                            rsi.b = 1
                                else if (rax_33 != 0)
                                    goto label_1423cb117
                    
                    rdi_2 = &rdi_2[2]
                while (rdi_2 != r14_3)
                
                lpCriticalSection = lpCriticalSection_1
                
                if (rsi.b != 0)
                    int64_t rcx_20 = sx.q(*(lpCriticalSection + 0x30))
                    
                    if (rcx_20.d != 0)
                        int32_t r15_4 = 0
                        int32_t rdi_3 = 0
                        bool r12_1 = **(lpCriticalSection + 0x28) != 0
                        int64_t rbx_2 = 0
                        
                        do
                            int64_t r9_5 = sx.q(rdi_3)
                            rbx_2 += 1
                            rdi_3 += 1
                            
                            if (rbx_2 s< rcx_20)
                                int64_t* rcx_23 = (rbx_2 << 4) + *(lpCriticalSection + 0x28)
                                
                                do
                                    int32_t rax_40
                                    rax_40.b = *rcx_23 != 0
                                    
                                    if (zx.d(r12_1) != rax_40)
                                        break
                                    
                                    rdi_3 += 1
                                    rbx_2 += 1
                                    rcx_23 = &rcx_23[2]
                                while (rbx_2 s< rcx_20)
                            
                            int32_t r14_5 = rdi_3 - r9_5.d
                            
                            if (r12_1 != 0)
                                if (r15_4 != r9_5.d)
                                    memmove((sx.q(r15_4) << 4) + *(lpCriticalSection + 0x28), 
                                        (r9_5 << 4) + *(lpCriticalSection + 0x28), r14_5 << 4)
                                
                                r15_4 += r14_5
                            
                            r12_1 ^= 1
                        while (rbx_2 s< rcx_20)
                        
                        *(lpCriticalSection + 0x30) = r15_4
            
            *(lpCriticalSection + 0xb0) = 0
        
        LeaveCriticalSection(lpCriticalSection)
        return sub_140b37f60("Tickables") __tailcall
    
    rsi = *(*rax_20 + rcx_7 * 0x10)
    char rax_23 = (*(*rsi + 8))(rsi)
    
    if (rax_23 != 2)
        var_c0.q = rsi
        rsi = sx.q(data_143f5a7c0.d)
        var_b8.b = rax_23
        int32_t rax_24 = (rsi + 1).d
        data_143f5a7c0.d = rax_24
        
        if (rax_24 s> data_143f5a7c0:4.d)
            sub_1405a4f90(&data_143f5a7b8)
        
        *(data_143f5a7b8 + rsi * 0x10) = var_c0.o
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
