// 函数: sub_140b8cf50
// 地址: 0x140b8cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
int32_t rdx = arg2[4].d
int16_t arg_10

if (((rdx - 2) & 0xfffffff5) != 0 || rdx == 0xa)
    arg_10 = 0x2c
    int64_t* rcx = arg2[1]
    (*(*rcx + 0x150))(rcx, &arg_10, 2)

sub_14067f880(arg2[1])
int32_t i_8 = *(arg2 + 0x24)
int64_t* rdi = arg2[1]

if (i_8 s> 0)
    uint64_t i_4 = zx.q(i_8)
    uint64_t i
    
    do
        int64_t rax_2 = *rdi
        arg_10 = 9
        (*(rax_2 + 0x150))(rdi, &arg_10, 2)
        i = i_4
        i_4 -= 1
    while (i != 1)

(*(*arg2 + 0x10))(arg2, arg3)
int64_t* rcx_4 = arg2[1]
arg_10 = 0x3a
(*(*rcx_4 + 0x150))(rcx_4, &arg_10, 2)
sub_14067f880(arg2[1])
int32_t i_9 = *(arg2 + 0x24)
int64_t* rbx_1 = arg2[1]

if (i_9 s> 0)
    uint64_t i_7 = zx.q(i_9)
    uint64_t i_1
    
    do
        int64_t rax_5 = *rbx_1
        arg_10 = 9
        (*(rax_5 + 0x150))(rbx_1, &arg_10, 2)
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
    rbx_1 = arg2[1]

arg_10 = 0x7b
(*(*rbx_1 + 0x150))(rbx_1, &arg_10, 2)
*(arg2 + 0x24) += 1
void* r12 = &arg2[2]
int64_t rbx_2 = sx.q(*(r12 + 8))
int32_t rax_7 = (rbx_2 + 1).d
*(r12 + 8) = rax_7

if (rax_7 s> *(r12 + 0xc))
    sub_1406105e0(r12)

int64_t rax_8 = *r12
int32_t* r13 = r15 + 0x10
int32_t rcx_9 = 0
int32_t var_a4 = 1
int32_t r8 = 0
int32_t var_a8 = 0
int32_t* var_a0 = r13
*(rax_8 + (rbx_2 << 2)) = 6
arg2[4].d = 2
int32_t r11 = r13[6]
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    int32_t* rax_9 = *(r13 + 0x10)
    int32_t* r9_1 = r13
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *r9_1
    
    if (rdx_10 != 0)
    label_140b8d138:
        int32_t rax_16 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_a4_1 = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_1
        
        var_94.d = r8 - rax_17 + 0x1f
        
        if (r8 - rax_17 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_9)
            r8 += 0x20
            rcx_9 += 1
            var_94:4.d = r8
            var_a8 = rcx_9
            
            if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = r9_1[rdx_11 + 1]
            var_98 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140b8d138
        
        var_94.d = r11

int32_t rdx_12 = *(r15 + 0x28)
double zmm2[0x2] = var_98.o
double var_48[0x2] = zmm2
int32_t rsi_1 = 0xffffffff << (rdx_12.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_3 = rdx_12 s>> 5
int32_t r9_3 = rdx_12 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = rsi_1
var_94.d = rdx_12
int128_t var_88 = r15.o
int128_t var_78 = var_58

if (rdx_12 != r11)
    int32_t* rax_19 = *(r13 + 0x10)
    int32_t* r10_1 = r13
    
    if (rax_19 != 0)
        r10_1 = rax_19
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_16 = r10_1[sx.q(r8_3)] & rsi_1
    
    if (rdx_16 != 0)
    label_140b8d202:
        int32_t rax_26 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_26)
        int32_t rbx_3
        
        if (rax_26 == 0)
            rbx_3 = 0x20
        else
            rbx_3 = 0x1f - temp0_3
        
        var_94.d = r9_3 - rbx_3 + 0x1f
        
        if (r9_3 - rbx_3 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_14 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_16 = r10_1[rcx_14 + 1]
            var_98_1 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_140b8d202
        
        var_94.d = r11

uint64_t rcx_17 = var_98_1.q u>> 0x20
uint64_t arg_20 = rcx_17

while (true)
    int64_t rax_28 = sx.q(var_78:0xc.d)
    int64_t* rdx_17 = var_88.q
    
    if (rax_28.d == rcx_17.d && var_78.q == r13 && rdx_17 == r15)
        return sub_1409399d0(arg2) __tailcall
    
    void* r15_1 = *rdx_17 + rax_28 * 0x28
    int32_t rcx_19 = arg2[4].d
    
    if (((rcx_19 - 2) & 0xfffffff5) != 0 || rcx_19 == 0xa)
        int64_t* rcx_20 = arg2[1]
        arg_10 = 0x2c
        (*(*rcx_20 + 0x150))(rcx_20, &arg_10, 2)
    
    sub_14067f880(arg2[1])
    int32_t i_10 = *(arg2 + 0x24)
    int64_t* rdi_1 = arg2[1]
    
    if (i_10 s> 0)
        uint64_t i_5 = zx.q(i_10)
        uint64_t i_2
        
        do
            int64_t rax_32 = *rdi_1
            arg_10 = 9
            (*(rax_32 + 0x150))(rdi_1, &arg_10, 2)
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        r12 = &arg2[2]
    
    (*(*arg2 + 0x10))(arg2, r15_1)
    int64_t* rcx_24 = arg2[1]
    arg_10 = 0x3a
    (*(*rcx_24 + 0x150))(rcx_24, &arg_10, 2)
    int64_t* rcx_25 = arg2[1]
    arg_10 = 0x20
    (*(*rcx_25 + 0x150))(rcx_25, &arg_10, 2)
    int64_t* rcx_26 = arg2[1]
    arg_10 = 0x5b
    (*(*rcx_26 + 0x150))(rcx_26, &arg_10, 2)
    *(arg2 + 0x24) += 1
    int64_t rbx_4 = sx.q(*(r12 + 8))
    int32_t rax_37 = (rbx_4 + 1).d
    *(r12 + 8) = rax_37
    
    if (rax_37 s> *(r12 + 0xc))
        sub_1406105e0(r12)
    
    int32_t rcx_28 = 4
    *(*r12 + (rbx_4 << 2)) = 5
    arg2[4].d = 4
    int64_t* rsi_2 = *(r15_1 + 0x10)
    void* r15_4 = &rsi_2[sx.q(*(r15_1 + 0x18)) * 2]
    
    if (rsi_2 != r15_4)
        do
            int16_t* rdi_2
            
            if (rsi_2[1].d == 0)
                rdi_2 = &data_142d40450
            else
                rdi_2 = *rsi_2
            
            int32_t rdx_25 = 0
            var_a8.q = 0
            int32_t rcx_29 = 0
            int64_t var_a0_1 = 0
            
            if (rdi_2 != 0 && *rdi_2 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (rdi_2[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_a8, rbx_5.d + 1)
                    rcx_29 = var_a0_1:4.d
                    rdx_25 = var_a0_1.d
                
                int32_t rax_39 = rbx_5.d + 1 + rdx_25
                var_a0_1.d = rax_39
                
                if (rax_39 s> rcx_29)
                    sub_140594770(&var_a8)
                
                UnDecorator::getReferenceType(var_a8.q, rdi_2, (rbx_5.d + 1) * 2)
            
            sub_140944f80(arg2, &var_a8)
            int64_t rcx_34 = var_a8.q
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            rsi_2 = &rsi_2[2]
        while (rsi_2 != r15_4)
        
        rcx_28 = arg2[4].d
    
    *(arg2 + 0x24) -= 1
    
    if (((rcx_28 - 3) & 0xfffffff9) == 0 && rcx_28 != 9)
        sub_14067f880(arg2[1])
        int32_t i_11 = *(arg2 + 0x24)
        int64_t* rdi_3 = arg2[1]
        
        if (i_11 s> 0)
            uint64_t i_6 = zx.q(i_11)
            uint64_t i_3
            
            do
                int64_t rax_41 = *rdi_3
                arg_10 = 9
                (*(rax_41 + 0x150))(rdi_3, &arg_10, 2)
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            r12 = &arg2[2]
    else if (rcx_28 != 4)
        int64_t* rcx_37 = arg2[1]
        arg_10 = 0x20
        (*(*rcx_37 + 0x150))(rcx_37, &arg_10, 2)
    
    int64_t* rcx_38 = arg2[1]
    arg_10 = 0x5d
    (*(*rcx_38 + 0x150))(rcx_38, &arg_10, 2)
    *(r12 + 8) -= 1
    sub_140679af0(r12)
    arg2[4].d = 5
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    rcx_17 = arg_20
    r15 = arg1
