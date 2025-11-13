// 函数: sub_141885df0
// 地址: 0x141885df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_e4 = 1
void* r14 = arg1 + 0x88
*arg2 = 0
int32_t* rbx = r14 + 0x10
arg2[1] = 0
int32_t r10 = rbx[6]
int64_t r15 = arg4 + arg3
int128_t* var_c8 = nullptr
int32_t var_bc = 0
int32_t r12 = 0
int64_t arg_20 = r15
int32_t rcx = 0
void* var_80 = r14
int32_t r8 = 0
int32_t var_e8 = 0
int32_t* var_e0 = rbx
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r10 != 0)
    int32_t* rax_1 = *(rbx + 0x10)
    int32_t* r9 = rbx
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141885ebb:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_d4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d4:4.d = r8
            var_e8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141885ebb
        
        var_d4.d = r10

int32_t rdx_4 = *(r14 + 0x28)
void* var_b0 = r14
int128_t var_a8 = var_e8.o
int128_t zmm0 = var_b0.o
int32_t rsi = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r9_2 = rdx_4 & 0xffffffe0
int128_t var_98 = 0xffffffff
int32_t r8_3 = rdx_4 s>> 5
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int96_t zmm1 = var_a8:8.12
var_a8:8.d = rsi
var_a8:0xc.d = rdx_4
int128_t var_70 = zmm0
int96_t var_60 = zmm1

if (rdx_4 != r10)
    int32_t* rax_13 = *(rbx + 0x10)
    int32_t* r11_1 = rbx
    
    if (rax_13 != 0)
        r11_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = r11_1[sx.q(r8_3)] & rsi
    
    if (rdx_8 != 0)
    label_141885f96:
        int32_t rax_19 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_a8:0xc.d = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> r10)
            var_a8:0xc.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r11_1[rcx_4 + 1]
            var_a8:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141885f96
        
        var_a8:0xc.d = r10
    
    rbx = var_e0

uint64_t rdx_10 = var_a8:8.q u>> 0x20
uint64_t var_78 = rdx_10

while (true)
    int32_t var_54
    int64_t rcx_6 = sx.q(var_54)
    int32_t rax_12
    
    if (rcx_6.d != rdx_10.d || var_60.q != rbx)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    int64_t* rdx_11 = var_70.q
    
    if (rax_12.b == 0 || rdx_11 != r14)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    int64_t rdx_12 = *rdx_11
    int64_t rcx_7 = rcx_6 * 5
    int64_t* rax_20 = *(rdx_12 + (rcx_7 << 3) + 0x10)
    int128_t* rcx_8 = rdx_12 + (rcx_7 << 3)
    void* rcx_11 = &rax_20[sx.q(*(rcx_8 + 0x18)) * 2]
    int64_t* var_b8_1 = rax_20
    
    if (rax_20 != rcx_11)
        do
            int64_t* i_2 = sub_14183e350(rax_20)
            int64_t rsi_1 = 0
            int64_t* i_1 = i_2
            
            if (i_2 != 0)
                int64_t* i
                
                do
                    int64_t rdi_3 = sub_14183e350(i_1) + sub_1405948a0(i_1)
                    
                    if (sub_14183e350(i_1) u>= r15 || rdi_3 u<= arg3)
                        rsi_1 += sub_1405948a0(i_1)
                    else
                        int64_t rax_24 = sub_14183e350(i_1)
                        int64_t r14_1 = arg3
                        
                        if (rax_24 u>= arg3)
                            r14_1 = rax_24
                        
                        if (rdi_3 u<= arg_20)
                            r15 = rdi_3
                        
                        int64_t rdi_4 = sx.q(r12)
                        int64_t rsi_2 = rsi_1 + r14_1 - sub_14183e350(i_1)
                        r12 = (rdi_4 + 1).d
                        
                        if (r12 s> var_bc)
                            sub_1405c4ec0(&var_c8)
                        
                        int64_t rcx_21 = rdi_4 * 5
                        int128_t* rax_27 = var_c8
                        *(rax_27 + (rcx_21 << 3)) = *rcx_8
                        *(rax_27 + (rcx_21 << 3) + 0x10) = r14_1
                        *(rax_27 + (rcx_21 << 3) + 0x18) = rsi_2
                        *(rax_27 + (rcx_21 << 3) + 0x20) = r15 - r14_1
                        sub_140598750(arg5, &var_b0)
                        int32_t* rdi_5 = var_a8.q
                        *rdi_5 = *rcx_8
                        rdi_5[4] = 0xffffffff
                        void arg_8
                        sub_14093ebb0(arg5, &arg_8, sub_140a6b260(rdi_5, 0x10), rdi_5, var_b0.d, 
                            nullptr)
                        int64_t rdi_7 = sub_1405948a0(i_1) - r14_1
                        r15 = arg_20
                        rsi_1 = rsi_2 + sub_14183e350(i_1) + rdi_7
                    
                    i = sub_14082fb80(i_1)
                    i_1 = i
                while (i != 0)
            
            rax_20 = &var_b8_1[2]
            var_b8_1 = rax_20
        while (rax_20 != rcx_11)
        
        r14 = var_80
    
    var_60:8.d &= not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    rdx_10 = var_78
    rbx = var_e0

int128_t* rbx_2 = var_c8
sub_14185d4c0(rbx_2, r12, arg2.b)
int128_t* rdi_8 = rbx_2
void* r14_2 = rbx_2 + sx.q(r12) * 0x28

if (rbx_2 != r14_2)
    do
        int64_t rsi_4 = sx.q(arg2[1].d)
        int32_t rax_37 = (rsi_4 + 1).d
        arg2[1].d = rax_37
        
        if (rax_37 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        sub_140a98020(*arg2 + rsi_4 * 0x18)
        int64_t rcx_36 = sx.q(arg2[1].d) * 3
        int64_t rax_40 = *arg2
        *(rax_40 + (rcx_36 << 3) - 0x18) = *rdi_8
        void* rdx_18 = rax_40 + (rcx_36 << 3)
        *(rdx_18 - 8) = *(rdi_8 + 0x18)
        int32_t rax_42 = rdi_8[2].d
        rdi_8 += 0x28
        *(rdx_18 - 4) = rax_42
    while (rdi_8 != r14_2)

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return arg2
