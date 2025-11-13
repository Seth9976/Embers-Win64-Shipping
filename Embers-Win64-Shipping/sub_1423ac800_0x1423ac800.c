// 函数: sub_1423ac800
// 地址: 0x1423ac800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(data_143f5a3f0)
int32_t r15_1

if (rax.d != 0)
    int64_t* r9_1 = data_143f5a3e8
    r15_1 = 0
    int32_t rdi_1 = 0
    int64_t r12
    r12.b = *r9_1 != arg1
    int64_t i = 0
    
    do
        int64_t rdx_1 = sx.q(rdi_1)
        i += 1
        rdi_1 += 1
        
        for (; i s< rax; i += 1)
            int32_t rax_1
            rax_1.b = r9_1[i] != arg1
            
            if (zx.d(r12.b) != rax_1)
                break
            
            rdi_1 += 1
        
        int32_t r14_2 = rdi_1 - rdx_1.d
        
        if (r12.b != 0)
            if (r15_1 != rdx_1.d)
                memmove(&r9_1[sx.q(r15_1)], &r9_1[rdx_1], r14_2 << 3)
                r9_1 = data_143f5a3e8
            
            r15_1 += r14_2
        
        r12.b ^= 1
    while (i s< rax)
    
    data_143f5a3f0 = r15_1

if ((rax.d == 0 || r15_1 == 0) && data_143f5a3e0 != 0)
    j_sub_140b3db50()
    int64_t rbx_1 = data_143f5a3e0
    
    if (rbx_1 != 0)
        int32_t i_1 = 0
        
        if (data_143de8090 s> 0)
            int64_t r14_3 = 0
            
            do
                int64_t* rdi_3 = data_143de8088 + r14_3
                
                if (rdi_3[1].d != 0)
                    int64_t* rcx_2 = *rdi_3
                    void arg_8
                    
                    if (rcx_2 != 0 && *(*(*rcx_2 + 0x30))(rcx_2, &arg_8) == rbx_1)
                        if (rdi_3[1].d != 0)
                            int64_t* rcx_3 = *rdi_3
                            
                            if (rcx_3 != 0)
                                (*(*rcx_3 + 0x38))(rcx_3, 0)
                                int64_t rcx_4 = *rdi_3
                                
                                if (rcx_4 != 0)
                                    *rdi_3 = sub_140a84c80(rcx_4, 0, 0)
                                
                                rdi_3[1].d = 0
                        
                        sub_140599630(&data_143de8088, 0)
                        break
                
                i_1 += 1
                r14_3 += 0x10
            while (i_1 s< data_143de8090)
    
    data_143f5a3e0 = 0

sub_141837120(arg1 + 0x60, 0)
int32_t r11 = *(arg1 + 0x38)
void* r9_2 = arg1 + 0x20
int32_t rcx_6 = 0
int32_t var_94 = 1
int32_t r8_3 = 0
int32_t var_98 = 0
void* var_90 = r9_2
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_7 = *(r9_2 + 0x10)
    
    if (rax_7 != 0)
        r9_2 = rax_7
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *r9_2
    
    if (rdx_6 != 0)
    label_1423aca08:
        int32_t rax_14 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
        int32_t var_94_1 = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_2
        
        var_84.d = r8_3 - rax_15 + 0x1f
        
        if (r8_3 - rax_15 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_6)
            r8_3 += 0x20
            rcx_6 += 1
            var_84:4.d = r8_3
            var_98 = rcx_6
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1423aca08
        
        var_84.d = r11

int64_t* var_30 = arg1 + 0x10
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* rax_17 = zmm0.q
var_88.o = zmm0
var_98.o = (arg1 + 0x10).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0

if (0 s< *(rax_17 + 0x18))
    int32_t i_3
    int32_t i_2 = i_3
    
    do
        int64_t* rsi_2 = var_98.q
        int64_t* rbx_2 = *rsi_2
        void* const rdx_8
        
        if (rbx_2[sx.q(i_2) * 3] == 0)
            rdx_8 = nullptr
        else
            void* rax_19 = sub_1425b3a40()
            
            if (rax_19 == 0)
                rdx_8 = nullptr
            else
                rdx_8 = rbx_2[sx.q(i_2) * 3]
                int64_t rax_20 = sx.q(*(rax_19 + 0x38))
                
                if (rax_20.d s> *(rdx_8 + 0x38)
                        || *(*(rdx_8 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
                    rdx_8 = nullptr
        
        int64_t* rbx_3 = *(*rsi_2 + sx.q(i_2) * 0x18 + 8)
        
        if (rbx_3[2] == rdx_8)
            (*(*rbx_3 + 0x270))(rbx_3, rdx_8)
            rbx_3[5] = 0
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i_2 = i_3
    while (i_2 s< *(var_88.q + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_1405b6470(arg1 + 0x10, *(arg1 + 0x18) - *(arg1 + 0x44), 1)

void* result = sub_140865470(arg1 + 0x10, 0)
*(arg1 + 0xb8) = 0
return result
