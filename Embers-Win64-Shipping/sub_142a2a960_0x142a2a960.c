// 函数: sub_142a2a960
// 地址: 0x142a2a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
uint64_t rsi = zx.q(*arg3)
void* r14 = arg1 + 0x270
int64_t* rdi = arg6
int64_t rbx = sx.q(*(r14 + 0x34c))
void* var_d8 = r14
char var_e8 = rsi.b
void* rcx_2 = (zx.q(rsi.d) << 6) + &data_143603ad0
sub_142a2c3b0(r14, arg2, rdi, sx.d(arg3[4]), &arg3[8])
int32_t rax_1
rax_1.b = arg3[9] s> 0
char* var_128
var_128.d = arg5
char rax_3
int64_t r9_2
rax_3, r9_2 = sub_142a2a7d0(r14, arg2, rcx_2, arg4, var_128.d)
int32_t var_108
int32_t var_d0
int64_t var_b8
int64_t var_90

if (*(r14 + 0x10e8) == 0 || (*(r14 + (sx.q(arg3[4]) << 2) + 0x1138) & 8) == 0)
    var_b8 = rbx
    
    if (rsi.b u< 3)
        arg3[1] = 0xa
    else
        arg3[1] = sub_142a2b4d0(r14, arg2, rdi, zx.d(rax_3))
    
    if (arg3[1] != 0xc)
        int64_t* r14_1 = &var_90
        uint64_t r15_2 = zx.q(rax_1 + 1)
        uint64_t var_c8_1 = r15_2
        void* rdi_1 = arg1 + 0x270
        rsi = 0
        
        do
            int64_t i = 0
            var_108 = 0xffffffff
            int32_t rax_10 = sub_142a29fa0(rdi_1, arg2, arg_18[1], arg3[8 + rsi], rcx_2.w, &var_d0, 
                arg4, arg5, 0xffffffff, 0, 0x42a2a7b0, arg1, var_e8)
            
            if (rax_10 s> 0)
                void* rcx_9
                
                do
                    if (var_b8 == 0)
                    label_142a2ab44:
                        int16_t rdx_6 = (&var_d0)[i].w
                        rcx_9 = &(&var_d0)[i]
                        
                        if ((rdx_6.b & 1) != 0)
                            int16_t rax_19 = 1
                            
                            if (rdx_6 s> 0)
                                rax_19 = 0xffff
                            
                            *rcx_9 = rax_19 + rdx_6
                        
                        int16_t rdx_7 = *(&var_d0:2 + (i << 2))
                        
                        if ((rdx_7.b & 1) != 0)
                            int16_t rax_20 = 1
                            
                            if (rdx_7 s> 0)
                                rax_20 = 0xffff
                            
                            *(&var_d0:2 + (i << 2)) = rax_20 + rdx_7
                    else
                        rcx_9 = &(&var_d0)[i]
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q((&var_d0)[i].w)
                        
                        if ((temp1_1 ^ temp0_1) - temp0_1 s>= 0x40)
                            goto label_142a2ab44
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(*(&var_d0:2 + (i << 2)))
                        
                        if ((temp3_1 ^ temp2_1) - temp2_1 s>= 0x40)
                            goto label_142a2ab44
                    
                    i += 1
                while (i s< sx.q(rax_10))
                
                r15_2 = var_c8_1
                rdi_1 = arg1 + 0x270
                *r14_1 = *rcx_9
            
            rsi += 1
            r14_1 += 4
        while (rsi s< r15_2)
        
        rdi = arg6
        r14 = var_d8
else
    var_b8 = rbx
    arg3[1] = 0xc
    
    if (rsi.b u< 3)
        return sub_1429da010(*(arg2 + 0x260), 5, 
            "Invalid usage of segement feature on small blocks", r9_2)

char rax_22 = *(r14 + 0x454)
char rax_36
void* rbx_6

if (rax_22 != 4)
    rbx_6 = arg2
    rax_36 = rax_22
else
    uint32_t rcx_10 = 3
    void* rax_23 = *(arg2 + 0x1b0)
    uint32_t rax_24
    
    if (rax_23 == 0)
        rax_24 = 3
    else
        rax_24 = zx.d(*(rax_23 + 7))
    
    void* rdx_9 = *(arg2 + 0x1b8)
    uint32_t rdx_10
    
    if (rdx_9 == 0)
        rdx_10 = 3
    else
        rdx_10 = zx.d(*(rdx_9 + 7))
    
    if (rax_24 != rdx_10)
        if (rax_24 != 3)
            if (rdx_10 == 3)
                rcx_10 = rax_24
            
            rax_24 = rcx_10
        else
            rax_24 = rdx_10
    
    uint64_t r12_1 = zx.q(rax_24)
    rsi.b = 0
    int64_t r15_4 = *(r14 + 0x1168) + ((r12_1 + 0x3b7) << 1)
    
    do
        int32_t r14_2 = 0
        uint32_t rbx_4 = (zx.d(*((sx.q(rsi.b) s>> 1) + r15_4)) * (rdi[1].d - 1) + 0x100) u>> 8
        
        if (*(rdi + 0xc) s< 0)
            sub_142a23140(rdi)
        
        int64_t r8_5 = *rdi
        uint64_t rcx_13 = zx.q(rbx_4) << 0x38
        
        if (r8_5 u>= rcx_13)
            r14_2 = 1
            rbx_4 = rdi[1].d - rbx_4
            r8_5 -= rcx_13
        
        uint32_t rdx_11 = zx.d(*(zx.q(rbx_4) + &data_143603f00))
        *(rdi + 0xc) -= rdx_11
        *rdi = r8_5 << rdx_11.b
        rdi[1].d = rbx_4 << rdx_11.b
        rsi = zx.q(*(sx.q(sx.d(rsi.b) + r14_2) + &data_143602e1c))
    while (rsi.b s> 0)
    
    rbx_6 = arg2
    rsi.b = neg.b(rsi.b)
    int64_t rdx_12 = *(rbx_6 + 0x188)
    
    if (rdx_12 != 0)
        int64_t rcx_19 = (r12_1 + 0x404) * 3 + zx.q(rsi.b)
        *(rdx_12 + (rcx_19 << 2)) += 1
    
    r14 = var_d8
    rax_36 = rsi.b

char* rdx_13 = arg_18
rdx_13[7] = rax_36
void* result

if (var_e8 u>= 3)
    char rax_71 = rdx_13[1]
    int32_t r12_5 = 1
    
    if (rax_71 u< 0xa)
        r12_5 = 0
    else if (rax_71 u<= 0xb)
        *(rdx_13 + 0xc) = var_90
    else if (rax_71 == 0xc)
        *(rdx_13 + 0xc) = 0
    else if (rax_71 != 0xd)
        r12_5 = 0
    else
        int64_t rax_72 = *(rbx_6 + 0x188)
        void* r15_8 = &rdx_13[0xe]
        int64_t rdx_26 = rax_72 + 0x3200
        
        if (rax_72 == 0)
            rdx_26 = 0
        
        void* r14_6 = &var_90 - &rdx_13[0xc]
        char arg_8
        arg_8.q = r14_6
        uint64_t i_4 = zx.q(rax_1 + 1)
        uint64_t i_1
        
        do
            rsi.b = 0
            void* r13_4 = *(var_d8 + 0x1168)
            
            do
                int32_t r14_7 = 0
                uint32_t rbx_17 =
                    (zx.d(*((sx.q(rsi.b) s>> 1) + r13_4 + 0x7b2)) * (rdi[1].d - 1) + 0x100) u>> 8
                
                if (*(rdi + 0xc) s< 0)
                    sub_142a23140(rdi)
                
                int64_t r8_15 = *rdi
                uint64_t rcx_49 = zx.q(rbx_17) << 0x38
                
                if (r8_15 u>= rcx_49)
                    r14_7 = 1
                    rbx_17 = rdi[1].d - rbx_17
                    r8_15 -= rcx_49
                
                uint32_t rdx_27 = zx.d(*(zx.q(rbx_17) + &data_143603f00))
                *(rdi + 0xc) -= rdx_27
                *rdi = r8_15 << rdx_27.b
                rdi[1].d = rbx_17 << rdx_27.b
                rsi = zx.q(*(sx.q(sx.d(rsi.b) + r14_7) + &data_143602840))
            while (rsi.b s> 0)
            
            int16_t* r14_8 = arg_8.q
            int32_t rbx_20 = neg.d(sx.d(rsi.b))
            
            if (var_b8 == 0)
                rsi = 0
            else
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(*(r14_6 - 2 + r15_8))
                
                if ((temp5_1 ^ temp4_1) - temp4_1 s>= 0x40)
                    rsi = 0
                else
                    rsi = 1
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(*(r14_8 + r15_8))
                    
                    if ((temp7_1 ^ temp6_1) - temp6_1 s>= 0x40)
                        rsi = 0
            
            arg_18.d = 0
            
            if (rbx_20 - 2 u<= 1)
                arg_18.w = sub_142a2bff0(rdi, r13_4 + 0x7b5, rsi.d)
            
            if (((rbx_20 - 1) & 0xfffffffd) == 0)
                arg_18:2.w = sub_142a2bff0(rdi, r13_4 + 0x7d6, rsi.d)
            
            sub_142a23c90(&arg_18, rdx_26)
            int16_t rcx_56 = *(r14_8 + r15_8 - 2) + arg_18.w
            int16_t rax_98 = *(r14_8 + r15_8) + arg_18:2.w
            *(r15_8 - 2) = rcx_56
            *r15_8 = rax_98
            
            if (r12_5 == 0 || rcx_56 + 0x3fff u> 0x7ffd || rax_98 + 0x3fff u> 0x7ffd)
                r12_5 = 0
            else
                r12_5 = 1
            
            r15_8 += 4
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    result = arg2
    *(result + 0x25c) |= r12_5 ^ 1
else
    int32_t var_6c_1 = 0x80008000
    int32_t r9_5 = 1 << *(rbx_6 + 0x180)
    int64_t r10_1 = 0
    int32_t rax_37 = 1 << *(rbx_6 + 0x181)
    int32_t r8_7 = 0
    int64_t rdx_14 = sx.q(rax_37)
    uint32_t r9_6 = zx.d(rax_3)
    int64_t var_c8_2 = 0
    int32_t var_bc_1 = 0
    var_d0 = rax_37 * 2
    char* rdx_25
    char r15_5
    
    while (true)
        int64_t var_68_1 = 0
        int32_t r13_1 = r8_7
        int32_t var_c0_1 = r8_7
        int64_t r12_2 = r10_1
        int64_t var_98_1 = r10_1
        
        while (true)
            char rax_39 = sub_142a2b4d0(r14, rbx_6, rdi, r9_6)
            r15_5 = rax_39
            int64_t var_70
            
            if (r15_5 - 0xa u<= 1)
                int32_t i_2 = 0
                int64_t* rsi_1 = &var_70
                
                do
                    var_108.q = rsi_1
                    int32_t* var_120
                    var_120.d = i_2
                    var_128.d = r13_1
                    sub_142a29db0(var_d8, arg2, rcx_2.w, r15_5, var_128.d, var_120.d, arg4, arg5, 
                        var_108)
                    i_2 += 1
                    rsi_1 += 4
                while (i_2 s< rax_1 + 1)
                
                rdi = arg6
                r12_2 = var_98_1
                r14 = var_d8
                rbx_6 = arg2
            
            rdx_25 = arg_18
            int32_t r13_2 = 1
            void* rcx_31 = &rdx_25[0x18 + r12_2]
            
            if (r15_5 u>= 0xa)
                int64_t rax_68
                
                if (r15_5 u<= 0xb)
                    rax_68 = var_70
                label_142a2b056:
                    *rcx_31 = rax_68
                label_142a2b059:
                    
                    if (r13_2 == 0)
                        rbx_6 = arg2
                    else
                        if (rdx_14 == 2)
                            int32_t rax_69 = *(r12_2 + rdx_25 + 0x1c)
                            *(r12_2 + rdx_25 + 0x2c) = *(r12_2 + rdx_25 + 0x14)
                            *(r12_2 + rdx_25 + 0x34) = rax_69
                        
                        int64_t r9_8 = sx.q(r9_5)
                        
                        if (r9_8 == 2)
                            int32_t rax_70 = *(r12_2 + rdx_25 + 0x1c)
                            *(r12_2 + rdx_25 + 0x20) = *(r12_2 + rdx_25 + 0x14)
                            *(r12_2 + rdx_25 + 0x28) = rax_70
                        
                        r13_1 = var_c0_1 + r9_8.d
                        r12_2 += sx.q(r9_5) * 0xc
                        int64_t rsi_5 = var_68_1 + r9_8
                        rbx_6 = arg2
                        var_c0_1 = r13_1
                        var_68_1 = rsi_5
                        var_98_1 = r12_2
                        
                        if (rsi_5 s>= 2)
                            break
                        
                        r14 = var_d8
                        r9_6 = zx.d(rax_3)
                        continue
                else
                    if (r15_5 == 0xc)
                        rax_68 = 0
                        goto label_142a2b056
                    
                    if (r15_5 == 0xd)
                        int64_t rax_42 = *(rbx_6 + 0x188)
                        void* r12_4 = rcx_31 + 2
                        int64_t rdx_17 = rax_42 + 0x3200
                        
                        if (rax_42 == 0)
                            rdx_17 = 0
                        
                        int16_t* rdx_18 = &var_90 - rcx_31
                        uint64_t i_5 = zx.q(rax_1 + 1)
                        uint64_t i_3
                        
                        do
                            void* r15_7 = *(r14 + 0x1168) + 0x7b2
                            r14.b = 0
                            
                            do
                                int32_t rsi_2 = 0
                                uint32_t rbx_10 = (
                                    zx.d(*((sx.q(r14.b) s>> 1) + r15_7)) * (rdi[1].d - 1) + 0x100) u>> 8
                                
                                if (*(rdi + 0xc) s< 0)
                                    sub_142a23140(rdi)
                                
                                int64_t r8_10 = *rdi
                                uint64_t rcx_36 = zx.q(rbx_10) << 0x38
                                
                                if (r8_10 u>= rcx_36)
                                    rsi_2 = 1
                                    rbx_10 = rdi[1].d - rbx_10
                                    r8_10 -= rcx_36
                                
                                uint32_t rdx_19 = zx.d(*(zx.q(rbx_10) + &data_143603f00))
                                *(rdi + 0xc) -= rdx_19
                                *rdi = r8_10 << rdx_19.b
                                rdi[1].d = rbx_10 << rdx_19.b
                                r14 = zx.q(*(sx.q(sx.d(r14.b) + rsi_2) + &data_143602840))
                            while (r14.b s> 0)
                            
                            int32_t rbx_13 = neg.d(sx.d(r14.b))
                            int32_t rsi_3
                            
                            if (var_b8 == 0)
                                rsi_3 = 0
                            else
                                int32_t temp8_1
                                int32_t temp9_1
                                temp8_1:temp9_1 = sx.q(*(&rdx_18[-1] + r12_4))
                                
                                if ((temp9_1 ^ temp8_1) - temp8_1 s>= 0x40)
                                    rsi_3 = 0
                                else
                                    rsi_3 = 1
                                    int32_t temp10_1
                                    int32_t temp11_1
                                    temp10_1:temp11_1 = sx.q(*(rdx_18 + r12_4))
                                    
                                    if ((temp11_1 ^ temp10_1) - temp10_1 s>= 0x40)
                                        rsi_3 = 0
                            
                            int32_t var_e4 = 0
                            
                            if (rbx_13 - 2 u<= 1)
                                var_e4.w = sub_142a2bff0(rdi, r15_7 + 3, rsi_3)
                            
                            if (((rbx_13 - 1) & 0xfffffffd) == 0)
                                var_e4:2.w = sub_142a2bff0(rdi, r15_7 + 0x24, rsi_3)
                            
                            sub_142a23c90(&var_e4, rdx_17)
                            int16_t rcx_43 = *(rdx_18 + r12_4 - 2) + var_e4.w
                            int16_t rax_67 = *(rdx_18 + r12_4) + var_e4:2.w
                            *(r12_4 - 2) = rcx_43
                            *r12_4 = rax_67
                            
                            if (r13_2 == 0 || rcx_43 + 0x3fff u> 0x7ffd
                                    || rax_67 + 0x3fff u> 0x7ffd)
                                r13_2 = 0
                            else
                                r13_2 = 1
                            
                            r14 = var_d8
                            r12_4 += 4
                            i_3 = i_5
                            i_5 -= 1
                        while (i_3 != 1)
                        r15_5 = rax_39
                        r12_2 = var_98_1
                        rdx_25 = arg_18
                        goto label_142a2b059
            
            *(rbx_6 + 0x25c) |= 1
            break
        
        r8_7 = var_bc_1 + var_d0
        r10_1 = var_c8_2 + rdx_14 * 0x18
        r14 = var_d8
        r9_6 = zx.d(rax_3)
        var_bc_1 = r8_7
        var_c8_2 = r10_1
        
        if (r8_7 s>= 4)
            break
    
    rdx_25[1] = r15_5
    result = *(rdx_25 + 0x3c)
    *(rdx_25 + 0xc) = result

return result
