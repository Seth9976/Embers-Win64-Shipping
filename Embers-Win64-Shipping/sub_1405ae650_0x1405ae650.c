// 函数: sub_1405ae650
// 地址: 0x1405ae650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[1]
int32_t r8 = 0
*arg1 = &data_142d4c300
int32_t* r14 = rbx + 0x10
int32_t r10 = r14[6]
int32_t rcx = 0
void* arg_10 = rbx
int32_t var_c8 = 0
int32_t var_c4 = 1
int32_t* var_c0 = r14
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r14 + 0x10)
    int32_t* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1405ae709:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_b4.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_b4:4.d = rcx
            var_c8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1405ae709
        
        var_b4.d = r10

int32_t rdx_6 = *(rbx + 0x28)
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int128_t var_90 = 0xffffffff
int64_t var_60 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_a0
var_a0:8.d = rsi
var_a0:0xc.d = rdx_6
int128_t var_80 = rbx.o
int128_t var_70 = var_c8.o

if (rdx_6 != r10)
    int32_t* rax_11 = *(r14 + 0x10)
    int32_t* r11_1 = r14
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_10 = r11_1[sx.q(r8_2)] & rsi
    
    if (rdx_10 != 0)
    label_1405ae7d3:
        int32_t rax_18 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_a0:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_a0:0xc.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = r11_1[rcx_5 + 1]
            var_a0:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1405ae7d3
        
        var_a0:0xc.d = r10

uint64_t rax_21 = var_a0:8.q u>> 0x20
uint64_t arg_20 = rax_21

while (true)
    int64_t rdx_11 = sx.q(var_70:0xc.d)
    
    if (rdx_11.d != rax_21.d || var_70.q != r14)
        rax_21.b = 0
    else
        rax_21.b = 1
    
    int64_t rcx_7 = var_80.q
    
    if (rax_21.b == 0 || rcx_7 != rbx)
        rax_21.b = 1
    else
        rax_21.b = 0
    
    if (rax_21.b == 0)
        break
    
    int32_t* r12_3 = (rdx_11 << 6) + *rcx_7
    int32_t arg_18 = *r12_3
    int32_t arg_1c = r12_3[1]
    void* rax_24 = sub_140d3c6e0(&arg_18)
    
    if (rax_24 != 0)
        void* rax_25 = sub_1405c72e0()
        void* rcx_9 = *(rax_24 + 0x10)
        int64_t rdx_12 = sx.q(*(rax_25 + 0x38))
        
        if (rdx_12.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_12 << 3)) == rax_25 + 0x30)
            int64_t rbx_1 = *(r12_3 + 8)
            
            if (rbx_1 != 0)
                int32_t i = 0
                
                if (*(rax_24 + 0x2d0) s> 0)
                    int64_t rsi_1 = 0
                    
                    do
                        int64_t* rdi_3 = *(rax_24 + 0x2c8) + rsi_1
                        
                        if (rdi_3[1].d != 0)
                            int64_t* rcx_11 = *rdi_3
                            void var_58
                            
                            if (rcx_11 != 0 && *(*(*rcx_11 + 0x30))(rcx_11, &var_58) == rbx_1)
                                if (rdi_3[1].d != 0)
                                    int64_t* rcx_12 = *rdi_3
                                    
                                    if (rcx_12 != 0)
                                        (*(*rcx_12 + 0x38))(rcx_12, 0)
                                        int64_t rcx_13 = *rdi_3
                                        
                                        if (rcx_13 != 0)
                                            *rdi_3 = sub_140a84c80(rcx_13, 0, 0)
                                        
                                        rdi_3[1].d = 0
                                
                                sub_140599630(rax_24 + 0x2c8, 0)
                                break
                        
                        i += 1
                        rsi_1 += 0x10
                    while (i s< *(rax_24 + 0x2d0))
            
            int64_t rbx_2 = *(r12_3 + 0x10)
            
            if (rbx_2 != 0)
                int32_t i_1 = 0
                
                if (*(rax_24 + 0x2b8) s> 0)
                    int64_t* rsi_2 = nullptr
                    
                    do
                        int64_t rdi_4 = *(rax_24 + 0x2b0)
                        
                        if (*(rsi_2 + rdi_4 + 8) != 0)
                            int64_t* rcx_15 = *(rsi_2 + rdi_4)
                            void var_50
                            
                            if (rcx_15 != 0 && *(*(*rcx_15 + 0x30))(rcx_15, &var_50) == rbx_2)
                                if (*(rsi_2 + rdi_4 + 8) != 0)
                                    int64_t* rcx_16 = *(rsi_2 + rdi_4)
                                    
                                    if (rcx_16 != 0)
                                        (*(*rcx_16 + 0x38))(rcx_16, 0)
                                        int64_t rcx_17 = *(rsi_2 + rdi_4)
                                        
                                        if (rcx_17 != 0)
                                            *(rsi_2 + rdi_4) = sub_140a84c80(rcx_17, 0, 0)
                                        
                                        *(rsi_2 + rdi_4 + 8) = 0
                                
                                sub_140599630(rax_24 + 0x2b0, 0)
                                break
                        
                        i_1 += 1
                        rsi_2 = &rsi_2[2]
                    while (i_1 s< *(rax_24 + 0x2b8))
    
    var_70:8.d &= not.d(var_80:0xc.d)
    sub_14059bdd0(&var_80:8)
    rax_21 = arg_20
    rbx = arg_10
    r14 = var_c0

int64_t* rcx_20 = arg1[0xb]

if (rcx_20 != 0)
    (**rcx_20)(rcx_20, 1)

*(rbx + 0x48) = 0
int64_t rcx_21 = *(rbx + 0x40)

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

sub_1405ae280(rbx)
*arg1 = &data_142d40478
return &data_142d40478
