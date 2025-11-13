// 函数: sub_141caa410
// 地址: 0x141caa410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2

if (arg2 == 0)
    void* const* rax_33
    rax_33.b = 0
    return rax_33

int64_t rbx = arg2[1]
int64_t* rdx_5

if (arg1[0xb].d == *(arg1 + 0x84))
label_141caa4be:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &arg1[0x11]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141caa4be_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + arg1[0xa]
            
            if (*rdx_5 == rbx)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141caa4be_2
        
        if (rax_4 == 0xffffffff)
        label_141caa4be_2:
            rdx_5 = nullptr

int64_t rbx_1 = arg2[2]
void* r12 = &rdx_5[1]

if (rdx_5 == 0)
    r12 = nullptr

int64_t* rdx_11

if (arg1[0x15].d == *(arg1 + 0xd4))
label_141caa53f:
    rdx_11 = nullptr
else
    int32_t rax_7 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_2 = &arg1[0x1b]
    void* rcx_3 = *(r8_2 + 8)
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    int32_t rax_9 = *(r8_2 + (((sx.q(arg1[0x1d].d) - 1) & sx.q(rax_7)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_141caa53f_1:
        rdx_11 = nullptr
    else
        while (true)
            rdx_11 = (sx.q(rax_9) << 5) + arg1[0x14]
            
            if (*rdx_11 == rbx_1)
                break
            
            rax_9 = rdx_11[3].d
            
            if (rax_9 == 0xffffffff)
                goto label_141caa53f_2
        
        if (rax_9 == 0xffffffff)
        label_141caa53f_2:
            rdx_11 = nullptr

int64_t rbx_2 = arg2[4]
void* r15 = &rdx_11[1]

if (rdx_11 == 0)
    r15 = nullptr

int64_t* rsi_3

if (arg1[0x1f].d == *(arg1 + 0x124))
label_141caa5bd:
    rsi_3 = nullptr
else
    int32_t rax_12 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
    void* r8_4 = &arg1[0x25]
    void* rcx_5 = *(r8_4 + 8)
    
    if (rcx_5 != 0)
        r8_4 = rcx_5
    
    int32_t rax_14 = *(r8_4 + (((sx.q(arg1[0x27].d) - 1) & sx.q(rax_12)) << 2))
    
    if (rax_14 == 0xffffffff)
    label_141caa5bd_1:
        rsi_3 = nullptr
    else
        while (true)
            rsi_3 = (sx.q(rax_14) << 5) + arg1[0x1e]
            
            if (*rsi_3 == rbx_2)
                break
            
            rax_14 = rsi_3[3].d
            
            if (rax_14 == 0xffffffff)
                goto label_141caa5bd_2
        
        if (rax_14 == 0xffffffff)
        label_141caa5bd_2:
            rsi_3 = nullptr

sub_140943590(arg1, *arg2)
sub_140838b90(r12, &arg_10, 1)
sub_140838b90(r15, &arg_10, 1)
void* rcx_9 = &rsi_3[1]

if (rsi_3 == 0)
    rcx_9 = nullptr

sub_140838b90(rcx_9, &arg_10, 1)
int64_t* var_58 = sub_14098ef70(&arg2[5])
int32_t var_50 = 0
var_58.o = var_58.o
int64_t* r15_1 = var_58
int32_t rsi_4 = var_50
label_141caa626:
int64_t* rax_15

if (rsi_4 s>= 0 && rsi_4 s< r15_1[1].d)
    int32_t rax_17 = arg1[0x29].d
    int64_t* rbx_4 = *(*r15_1 + sx.q(rsi_4) * 0x18)
    arg_10 = rbx_4
    int64_t* rdx_25
    
    if (rax_17 == *(arg1 + 0x174))
    label_141caa6ce:
        rdx_25 = nullptr
    else
        int32_t rax_19 = sub_140b5ead0(rbx_4.d) + arg_10:4.d
        void* r8_8 = &arg1[0x2f]
        void* rcx_13 = *(r8_8 + 8)
        
        if (rcx_13 != 0)
            r8_8 = rcx_13
        
        int32_t rax_21 = *(r8_8 + (((sx.q(arg1[0x31].d) - 1) & sx.q(rax_19)) << 2))
        
        if (rax_21 == 0xffffffff)
        label_141caa6ce_1:
            rdx_25 = nullptr
        else
            while (true)
                rdx_25 = (sx.q(rax_21) << 5) + arg1[0x28]
                
                if (*rdx_25 == rbx_4)
                    break
                
                rax_21 = rdx_25[3].d
                
                if (rax_21 == 0xffffffff)
                    goto label_141caa6ce_2
            
            if (rax_21 == 0xffffffff)
            label_141caa6ce_2:
                rdx_25 = nullptr
    
    void* rbx_5 = &rdx_25[1]
    
    if (rdx_25 == 0)
        rbx_5 = nullptr
    
    int64_t* r10_1 = *rbx_5
    uint64_t r9_1 = sx.q(*(rbx_5 + 8))
    rax_15 = r10_1
    void* rdx_26 = &r10_1[r9_1]
    
    if (r10_1 != rdx_26)
        while (*rax_15 != arg2)
            rax_15 = &rax_15[1]
            
            if (rax_15 == rdx_26)
                rsi_4 += 1
                goto label_141caa626
        
        rax_15 = (rax_15 - r10_1) s>> 3
        
        if (rax_15.d != 0xffffffff)
            int32_t rdx_29 = r9_1.d - rax_15.d - 1
            
            if (rdx_29 s>= 1)
                rdx_29 = 1
            
            if (rdx_29 != 0)
                memcpy(&r10_1[sx.q(rax_15.d)], &r10_1[sx.q(r9_1.d - rdx_29)], rdx_29 << 3)
                r9_1 = zx.q(*(rbx_5 + 8))
            
            *(rbx_5 + 8) = (r9_1 - 1).d
            sub_1405c53d0(rbx_5)

if (*(r12 + 8) == 0)
    if (arg3 != 0)
        var_58 = arg2[1]
        int64_t arg_20 = 0
        arg_10 = nullptr
        __builtin_memset(&var_50, 0, 0x18)
        sub_141caac30(arg1, &var_58)
    
    int64_t* rbx_6 = arg2[1]
    int32_t rax_26 = arg1[0x3d].d
    arg_10 = rbx_6
    void* const rcx_20
    
    if (rax_26 == *(arg1 + 0x214))
    label_141caa812:
        rcx_20 = nullptr
    else
        int32_t rax_28 = sub_140b5ead0(rbx_6.d) + arg_10:4.d
        void* r8_12 = &arg1[0x43]
        void* rcx_18 = *(r8_12 + 8)
        
        if (rcx_18 != 0)
            r8_12 = rcx_18
        
        int32_t rax_30 = *(r8_12 + (((sx.q(arg1[0x45].d) - 1) & sx.q(rax_28)) << 2))
        
        if (rax_30 == 0xffffffff)
        label_141caa812_1:
            rcx_20 = nullptr
        else
            int64_t r8_13 = arg1[0x3c]
            
            while (true)
                int64_t rdx_36 = sx.q(rax_30) * 3
                rcx_20 = r8_13 + (rdx_36 << 3)
                
                if (*(r8_13 + (rdx_36 << 3)) == rbx_6)
                    break
                
                rax_30 = *(rcx_20 + 0x10)
                
                if (rax_30 == 0xffffffff)
                    goto label_141caa812_2
            
            if (rax_30 == 0xffffffff)
            label_141caa812_2:
                rcx_20 = nullptr
    
    rax_15 = rcx_20 + 8
    
    if (rcx_20 == 0)
        rax_15 = nullptr
    
    if (rax_15 != 0)
        int64_t r15_2 = *rax_15
        
        if (r15_2 != 0)
            sub_140943590(&arg1[0x3c], rbx_6)
            arg1[0x4d].d -= 1
            
            if (arg1[0x4b].d == 0)
                j_sub_140a74f90(r15_2)

if (arg1[0x47].d == 0)
    int64_t rcx_23 = arg2[7]
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t* rbx_7 = arg2[6]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp1_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    j_sub_140a74f90(arg2)

arg1[0x4c].d -= 1
rax_15.b = 1
return rax_15
