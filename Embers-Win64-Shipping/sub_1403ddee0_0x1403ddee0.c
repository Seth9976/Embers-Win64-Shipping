// 函数: sub_1403ddee0
// 地址: 0x1403ddee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t result_2
int64_t rax_1 = __security_cookie ^ &result_2
int32_t r14 = 0
int32_t var_5c = arg4
void* var_58 = arg3
int32_t* r12 = arg2
int32_t var_50 = 0
int32_t var_48 = 0

if (arg2[0x10] != 0)
    arg1[0x24b].d = 1
    arg1[0x848].d = 1

*(arg1 + 0x468c) = 0
*(arg1 + 0x16a4) = 0
int32_t result_1
result_1.b = sub_1403e1060(arg2) != 0
int32_t result

if (result_1 != 0)
    result = result_1
else
    r12[0x15] = 0
    int128_t zmm0
    int128_t zmm1
    
    if (r12[1] s> arg1[0xc02].d)
        sub_1403e1dd0(&arg1[0x5fd], *(arg1 + 0x1414))
        result_1 = 0
        arg1[0xbfa].d = 0
        arg1[0xbfb] = 0
        bool cond:0_1 = *(arg1 + 0x600c) != 2
        arg1[0xbfc] = 1
        arg1[0xbfd].d = 1
        *(arg1 + 0x5fec) = 0x4000
        
        if (not(cond:0_1))
            void* rdx_1 = &arg1[0x2d8]
            void* rcx_2 = &arg1[0x8d5]
            
            if (((rdx_1.d | rcx_2.d) & 0xf) != 0)
                memcpy(rcx_2, rdx_1, 0x130)
            else
                int64_t i_12 = 2
                int64_t i
                
                do
                    zmm0 = *rdx_1
                    zmm1 = *(rdx_1 + 0x10)
                    rcx_2 += 0x80
                    rdx_1 += 0x80
                    *(rcx_2 - 0x80) = zmm0
                    zmm0 = *(rdx_1 - 0x60)
                    *(rcx_2 - 0x70) = zmm1
                    zmm1 = *(rdx_1 - 0x50)
                    *(rcx_2 - 0x60) = zmm0
                    zmm0 = *(rdx_1 - 0x40)
                    *(rcx_2 - 0x50) = zmm1
                    zmm1 = *(rdx_1 - 0x30)
                    *(rcx_2 - 0x40) = zmm0
                    zmm0 = *(rdx_1 - 0x20)
                    *(rcx_2 - 0x30) = zmm1
                    zmm1 = *(rdx_1 - 0x10)
                    *(rcx_2 - 0x20) = zmm0
                    *(rcx_2 - 0x10) = zmm1
                    i = i_12
                    i_12 -= 1
                while (i != 1)
                zmm1 = *(rdx_1 + 0x10)
                *rcx_2 = *rdx_1
                zmm0 = *(rdx_1 + 0x20)
                *(rcx_2 + 0x10) = zmm1
                *(rcx_2 + 0x20) = zmm0
            
            arg1[0x5fd] = *arg1
    
    if (r12[6] != *(arg1 + 0x121c) || arg1[0xc02].d != r12[1])
        r14 = 1
    
    *(arg1 + 0x600c) = *r12
    int32_t r8_1 = arg4 * 0x64
    arg1[0xc02].d = r12[1]
    int32_t rcx_3 = r12[2]
    int32_t temp0_1 = divs.dp.d(sx.q(r8_1), rcx_3)
    int32_t var_60_1
    
    if (temp0_1 s<= 1)
        var_60_1 = 1
    else
        var_60_1 = temp0_1 s>> 1
    
    int32_t var_78_1 = 0
    
    if (arg7 != 0)
        if (temp0_1 == 1)
            int32_t i_1 = 0
            
            if (r12[1] s> 0)
                void* rsi = arg1 + 0x1414
                
                do
                    sub_1403e1dd0(sx.q(i_1) * 0x2fe8 + arg1, *rsi)
                    i_1 += 1
                    rsi += 0x2fe8
                    result_1 = 0
                while (i_1 s< r12[1])
            
            bool cond:1_1 = r12[1] s<= 0
            int32_t i_2 = 0
            var_50 = r12[6]
            int32_t rax_16 = r12[9]
            r12[6] = 0xa
            var_48 = rax_16
            r12[9] = 0
            
            if (not(cond:1_1))
                void* rax_17 = &arg1[0x24d]
                
                do
                    *(rax_17 - 0xc) = 0
                    *rax_17 = 1
                    i_2 += 1
                    rax_17 += 0x2fe8
                while (i_2 s< r12[1])
            
            goto label_1403de1ba
        
        result = -0x65
    else if (rcx_3 * temp0_1 != r8_1 || arg4 s< 0 || arg4 * 0x3e8 s> rcx_3 * r12[6])
        result = -0x65
    else
    label_1403de1ba:
        int32_t rax_22 = r12[1]
        int32_t i_3 = 0
        int32_t r15_2 = r12[7] s>> (rax_22.b - 1)
        
        if (rax_22 s> 0)
            void* rbx = arg1 + 0x12a4
            
            do
                int32_t rax_23
                
                if (i_3 != 1)
                    rax_23 = 0
                else
                    rax_23 = arg1[0x23f].d
                
                result = sub_1403e1e30(sx.q(i_3) * 0x2fe8 + arg1, r12, r15_2, *(arg1 + 0x601c), 
                    i_3, rax_23)
                result_1 = result
                
                if (result != 0)
                    goto label_1403deee6
                
                if (*(rbx - 0x4c) != result || sx.q(r14) != 0)
                    int32_t j = 0
                    
                    if (arg1[0x2d4].d s> 0)
                        void* rax_24 = rbx
                        
                        do
                            *rax_24 = 0
                            j += 1
                            rax_24 += 4
                        while (j s< arg1[0x2d4].d)
                
                int32_t rax_25 = *(rbx + 0x54c)
                i_3 += 1
                rbx += 0x2fe8
                *(rbx - 0x2a98) = rax_25
            while (i_3 s< r12[1])
        
        int32_t rcx_12 = arg1[0x23f].d
        uint32_t r8_4 = rcx_12 * temp0_1 * 0xa
        uint32_t var_44_1 = r8_4
        int64_t rcx_15 = sx.q(divs.dp.d(sx.q(*(arg1 + 0x11e4) * r8_4), rcx_12 * 0x3e8)) * 2
        int64_t rax_32 = rcx_15 + 0xf
        
        if (rax_32 u<= rcx_15)
            rax_32 = 0xffffffffffffff0
        
        int64_t rax_33 = rax_32 & 0xfffffffffffffff0
        __chkstk(rax_33)
        void var_e8
        void* rsp_1 = &var_e8 - rax_33
        void* r15_3 = rsp_1 + 0x60
        void* var_38_1 = r15_3
        int32_t* rbx_2
        
        while (true)
            uint32_t rsi_1 = r8_4
            uint32_t rax_35 = arg1[0x240].d - *(arg1 + 0x169c)
            
            if (rax_35 s< r8_4)
                rsi_1 = rax_35
            
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x11e4) * rsi_1), arg1[0x23f].d * 0x3e8)
            int64_t r14_2 = sx.q(temp0_3)
            void* r12_1
            
            if (*r12 != 2)
            label_1403de5b9:
                r12_1 = var_58
                memcpy(r15_3, r12_1, r14_2.d * 2)
                sub_1403df180(&arg1[0x2d8], arg1 + ((sx.q(*(arg1 + 0x169c) + 2) + 0xa0c) << 1), 
                    r15_3, r14_2.d)
                *(arg1 + 0x169c) += rsi_1
                result_2 = result_1
            else
                int32_t rcx_18 = r12[1]
                
                if (rcx_18 != 2)
                    if (rcx_18 != 1)
                        goto label_1403de5b9
                    
                    r12_1 = var_58
                    int64_t rdx_17 = 0
                    
                    if (temp0_3 s> 0)
                        do
                            int32_t rax_55 = sx.d(*(r12_1 + (rdx_17 << 2)))
                            int32_t rcx_26 = sx.d(*(r12_1 + (rdx_17 << 2) + 2))
                            rdx_17 += 1
                            int32_t rcx_27 = rcx_26 + rax_55
                            int32_t rax_56 = rcx_27
                            rcx_27.w &= 1
                            *(r15_3 + (rdx_17 << 1) - 2) = (rax_56 s>> 1).w + rcx_27.w
                        while (rdx_17 s< r14_2)
                    
                    sub_1403df180(&arg1[0x2d8], arg1 + ((sx.q(*(arg1 + 0x169c) + 2) + 0xa0c) << 1), 
                        r15_3, r14_2.d)
                    bool cond:5_1 = *(arg1 + 0x6014) != 2
                    result_2 = result_1
                    
                    if (not(cond:5_1) && *(arg1 + 0x16a4) == 0)
                        sub_1403df180(&arg1[0x8d5], 
                            arg1 + ((sx.q(*(arg1 + 0x4684) + 2) + 0x2200) << 1), r15_3, r14_2.d)
                        int64_t r8_9 = 0
                        int32_t i_4 = 0
                        result_2 = result_1
                        
                        if (arg1[0x240].d s> 0)
                            do
                                i_4 += 1
                                void* rdx_20 = arg1 + ((sx.q(*(arg1 + 0x169c)) + r8_9) << 1)
                                int64_t rax_69 = sx.q(*(arg1 + 0x4684)) + r8_9
                                r8_9 += 1
                                *(rdx_20 + 0x141c) = ((sx.d(*(arg1 + (rax_69 << 1) + 0x4404))
                                    + sx.d(*(rdx_20 + 0x141c))) s>> 1).w
                            while (i_4 s< arg1[0x240].d)
                    
                    *(arg1 + 0x169c) += rsi_1
                else
                    int32_t rdx_12 = *(arg1 + 0x16a4)
                    r12_1 = var_58
                    int64_t rcx_19 = 0
                    
                    if (temp0_3 s> 0)
                        do
                            int16_t rax_40 = *(r12_1 + (rcx_19 << 2))
                            rcx_19 += 1
                            *(r15_3 + (rcx_19 << 1) - 2) = rax_40
                        while (rcx_19 s< r14_2)
                    
                    if (*(arg1 + 0x6014) == 1 && rdx_12 == 0)
                        void* rdx_13 = &arg1[0x2d8]
                        void* rcx_20 = &arg1[0x8d5]
                        
                        if (((rdx_13.d | rcx_20.d) & 0xf) != 0)
                            memcpy(rcx_20, rdx_13, 0x130)
                        else
                            int64_t i_13 = 2
                            int64_t i_5
                            
                            do
                                zmm0 = *rdx_13
                                zmm1 = *(rdx_13 + 0x10)
                                rcx_20 += 0x80
                                rdx_13 += 0x80
                                *(rcx_20 - 0x80) = zmm0
                                zmm0 = *(rdx_13 - 0x60)
                                *(rcx_20 - 0x70) = zmm1
                                zmm1 = *(rdx_13 - 0x50)
                                *(rcx_20 - 0x60) = zmm0
                                zmm0 = *(rdx_13 - 0x40)
                                *(rcx_20 - 0x50) = zmm1
                                zmm1 = *(rdx_13 - 0x30)
                                *(rcx_20 - 0x40) = zmm0
                                zmm0 = *(rdx_13 - 0x20)
                                *(rcx_20 - 0x30) = zmm1
                                zmm1 = *(rdx_13 - 0x10)
                                *(rcx_20 - 0x20) = zmm0
                                *(rcx_20 - 0x10) = zmm1
                                i_5 = i_13
                                i_13 -= 1
                            while (i_5 != 1)
                            zmm1 = *(rdx_13 + 0x10)
                            *rcx_20 = *rdx_13
                            zmm0 = *(rdx_13 + 0x20)
                            *(rcx_20 + 0x10) = zmm1
                            *(rcx_20 + 0x20) = zmm0
                    
                    sub_1403df180(&arg1[0x2d8], arg1 + ((sx.q(*(arg1 + 0x169c) + 2) + 0xa0c) << 1), 
                        r15_3, r14_2.d)
                    *(arg1 + 0x169c) += rsi_1
                    uint32_t rsi_3 = arg1[0x83d].d - *(arg1 + 0x4684)
                    uint32_t rcx_23 = arg1[0x83c].d * temp0_1 * 0xa
                    
                    if (rsi_3 s>= rcx_23)
                        rsi_3 = rcx_23
                    
                    int64_t rcx_24 = 0
                    
                    if (r14_2.d s> 0)
                        int16_t* rdx_15 = r12_1 + 2
                        
                        do
                            int16_t rax_50 = *rdx_15
                            rcx_24 += 1
                            rdx_15 = &rdx_15[2]
                            *(r15_3 + (rcx_24 << 1) - 2) = rax_50
                        while (rcx_24 s< r14_2)
                    
                    sub_1403df180(&arg1[0x8d5], 
                        arg1 + ((sx.q(*(arg1 + 0x4684) + 2) + 0x2200) << 1), r15_3, r14_2.d)
                    *(arg1 + 0x4684) += rsi_3
                    result_2 = result_1
            
            rbx_2 = arg2
            var_5c -= r14_2.d
            int32_t rax_75 = *rbx_2
            *(arg1 + 0x601c) = 0
            var_58 = r12_1 + (sx.q(rax_75 * r14_2.d) << 1)
            
            if (*(arg1 + 0x169c) s< arg1[0x240].d)
                break
            
            void* r13_1 = arg1 + 0x16a4
            int32_t var_68
            
            if (*r13_1 == 0 && arg7 == 0)
                char var_83_1 = 0
                void* r12_3 = &arg1[0x2d4]
                char var_84 = neg.b((0x100 s>> (((*r12_3).b + 1) * (rbx_2[1]).b)).b)
                sub_1403fe400(arg5, 0, &var_84, 8)
                int32_t i_6 = 0
                
                if (rbx_2[1] s> 0)
                    void* rbx_3 = r12_3
                    
                    do
                        int64_t r8_13 = sx.q(*rbx_3)
                        int32_t r9_7 = 0
                        int32_t j_1 = 0
                        int32_t rax_79
                        
                        if (r8_13.d s> 0)
                            void* rdx_24 = rbx_3 - 0x3fc
                            
                            do
                                int32_t rax_80 = *rdx_24
                                rdx_24 += 4
                                rax_79 = rax_80 << j_1.b
                                j_1 += 1
                                r9_7 |= rax_79
                            while (j_1 s< r8_13.d)
                        
                        rax_79.b = r9_7 s> 0
                        *(rbx_3 - 0x3fd) = rax_79.b
                        
                        if (r9_7 != 0 && r8_13.d s> 1)
                            sub_1403fe400(arg5, r9_7 - 1, *((r8_13 << 3) + 0x1436fc8b0), 8)
                        
                        i_6 += 1
                        rbx_3 += 0x2fe8
                    while (i_6 s< arg2[1])
                    
                    rbx_2 = arg2
                    r12_3 = &arg1[0x2d4]
                
                int64_t rax_81 = 0
                int32_t i_7 = 0
                int64_t var_70_1 = 0
                
                if (*r12_3 s> 0)
                    int64_t rcx_40 = 0
                    void* r13_2 = arg1 + 0x428c
                    var_68.q = 0
                    
                    do
                        int32_t j_2 = 0
                        
                        if (rbx_2[1] s> 0)
                            int64_t r12_4 = 0
                            void* r14_4 = r13_2 - 0x2fec
                            
                            do
                                if (*(r14_4 + 4) != 0)
                                    if (rbx_2[1] == 2 && j_2 == 0)
                                        sub_1403e0fd0(arg5, arg1 + ((sx.q(i_7) * 3 + 0x2ff9) << 1))
                                        
                                        if (*r13_2 == j_2)
                                            sub_1403e0fb0(arg5, *(var_70_1 + arg1 + 0x6004))
                                    
                                    int32_t rax_84
                                    
                                    if (i_7 s> 0)
                                        rax_84 = 2
                                    
                                    if (i_7 s<= 0 || *r14_4 == 0)
                                        rax_84 = 0
                                    
                                    *(rsp_1 + 0x20) = rax_84
                                    void* rbx_6 = sx.q(j_2) * 0x2fe8
                                    sub_1403e1840(rbx_6 + arg1, arg5, zx.q(i_7), 1)
                                    int64_t rdx_30 = var_68.q + r12_4
                                    uint64_t r8_16 = zx.q(sx.d(*(rdx_30 + arg1 + 0x1826)))
                                    uint64_t rdx_31 = zx.q(sx.d(*(rdx_30 + arg1 + 0x1825)))
                                    *(rsp_1 + 0x20) = *(r12_4 + arg1 + 0x1200)
                                    sub_1403e12b0(arg5, rdx_31, r8_16, 
                                        arg1 + 0x1874 + sx.q(i_7) * 0x140 + rbx_6)
                                    rbx_2 = arg2
                                
                                j_2 += 1
                                r14_4 += 0x2fe8
                                r12_4 += 0x2fe8
                            while (j_2 s< rbx_2[1])
                            
                            rax_81 = var_70_1
                            rcx_40 = var_68.q
                            r12_3 = &arg1[0x2d4]
                        
                        rax_81 += 1
                        rcx_40 += 0x24
                        i_7 += 1
                        r13_2 += 4
                        var_70_1 = rax_81
                        var_68.q = rcx_40
                    while (i_7 s< *r12_3)
                    
                    r13_1 = arg1 + 0x16a4
                
                int32_t i_8 = 0
                
                if (rbx_2[1] s> 0)
                    do
                        int64_t i_14 = sx.q(i_8)
                        i_8 += 1
                        *(&arg1[i_14 * 0x5fd] + 0x12a4) = 0
                        *(&arg1[i_14 * 0x5fd] + 0x12ac) = 0
                    while (i_8 s< rbx_2[1])
            
            sub_1403e1c20(arg1)
            int32_t rsi_4 = rbx_2[7]
            int32_t r9_11 = rbx_2[6]
            int64_t* r14_5 = arg5
            var_68 = rsi_4
            int32_t r8_19 = rsi_4 * r9_11 s/ 0x3e8
            
            if (arg7 == 0)
                uint64_t rflags_1
                int32_t temp0_4
                temp0_4, rflags_1 = __bsr_gprv_memv(r14_5[4].d)
                r8_19 -= (r14_5[3].d - temp0_4 - 1) s>> 1
            
            int64_t r10_1 = sx.q(*r13_1)
            int32_t r8_20 = sx.d((divs.dp.d(sx.q(r8_19), arg1[0x2d4].d - r10_1.d)).w)
            int32_t r8_21
            
            if (r9_11 != 0xa)
                r8_21 = r8_20 * 0x32
            else
                r8_21 = r8_20 * 0x64
            
            int32_t temp30_1
            int32_t temp31_1
            temp30_1:temp31_1 = muls.dp.d(0x10624dd3, arg1[0xc01].d * 0xfffffc18)
            int32_t rdx_40 = temp30_1 s>> 5
            int32_t r8_22 = r8_21 + rdx_40 + (rdx_40 u>> 0x1f)
            
            if (rsi_4 s<= 0x1388)
                if (r8_22 s<= 0x1388)
                    if (r8_22 s< rsi_4)
                        r8_22 = rsi_4
                    
                    rsi_4 = r8_22
                    var_68 = r8_22
                else
                    rsi_4 = 0x1388
                    var_68 = 0x1388
            else if (r8_22 s<= rsi_4)
                rsi_4 = r8_22
                
                if (r8_22 s< 0x1388)
                    rsi_4 = 0x1388
                
                var_68 = rsi_4
            
            void var_40
            
            if (rbx_2[1] != 2)
                arg1[0x283].d = *(arg1 + 0x5fd4)
                *(arg1 + 0x5fd4) = *(arg1 + (sx.q(arg1[0x240].d) << 1) + 0x1418)
            else
                *(rsp_1 + 0x50) = arg1[0x240].d
                *(rsp_1 + 0x48) = arg1[0x23f].d
                *(rsp_1 + 0x40) = rbx_2[0xe]
                *(rsp_1 + 0x38) = *(arg1 + 0x11cc)
                *(rsp_1 + 0x30) = rsi_4
                *(rsp_1 + 0x28) = &var_40
                *(rsp_1 + 0x20) = arg1 + 0x6004 + r10_1
                sub_1403e06d0(&arg1[0xbfa], arg1 + 0x141c, arg1 + 0x4404, 
                    arg1 + ((r10_1 * 3 + 0x2ff9) << 1))
                int64_t rcx_59 = sx.q(*r13_1)
                
                if (*(rcx_59 + arg1 + 0x6004) != 0)
                    *(rcx_59 + arg1 + 0x4288) = 0
                else
                    if (arg1[0xc04].d == 1)
                        arg1[0x984] = 0
                        arg1[0x985] = 0
                        memset(&arg1[0x986], 0, 0x85c)
                        memset(&arg1[0x60f], 0, 0x111c)
                        __builtin_memset(arg1 + 0x4194, 0, 0x20)
                        arg1[0x5ff] = 0
                        arg1[0x838].d = 0x64
                        *(arg1 + 0x417c) = 0x64
                        arg1[0x984].b = 0xa
                        *(arg1 + 0x41bd) = 0
                        *(arg1 + 0x418c) = 0x10000
                        arg1[0x848].d = 1
                    
                    sub_1403e91b0(&arg1[0x5fd])
                
                if (arg7 == 0)
                    sub_1403e0fd0(r14_5, arg1 + ((sx.q(*r13_1) * 3 + 0x2ff9) << 1))
                    int64_t rax_101 = sx.q(*r13_1)
                    
                    if (*(rax_101 + arg1 + 0x4288) == 0)
                        sub_1403e0fb0(r14_5, *(rax_101 + arg1 + 0x6004))
            
            sub_1403e91b0(arg1)
            int64_t r8_24 = sx.q(var_78_1)
            int32_t r9_15 = 0
            int32_t i_9 = 0
            int64_t r12_5 = r8_24
            
            if (rbx_2[1] s> 0)
                int32_t r10_4 = var_60_1
                void* rax_104 = &var_40
                void* var_70_2 = &var_40
                
                do
                    uint64_t r9_16 = zx.q(rbx_2[0xd])
                    int32_t rbx_7 = r9_16.d
                    uint32_t rcx_69
                    
                    if (r10_4 != 2)
                        if (r10_4 == 3)
                            if (r12_5 == 0)
                                rcx_69 = (r9_16 * 2).d
                                goto label_1403deb8b
                            
                            if (r12_5 == 1)
                                int32_t temp35_1
                                int32_t temp36_1
                                temp35_1:temp36_1 = sx.q((r9_16 * 3).d)
                                rbx_7 = ((temp35_1 & 3) + temp36_1) s>> 2
                                rax_104 = var_70_2
                    else if (r12_5 == 0)
                        rcx_69 = (r9_16 * 3).d
                    label_1403deb8b:
                        rbx_7 = rcx_69 s/ 5
                        rax_104 = var_70_2
                    int32_t r14_6
                    
                    if (arg2[0xc] == 0 || r8_24.d != r10_4 - 1)
                        r14_6 = 0
                    else
                        r14_6 = 1
                    
                    int32_t r8_25
                    
                    if (arg2[1] != 1)
                        r8_25 = *rax_104
                        int32_t var_3c
                        
                        if (i_9 == 0 && var_3c s> i_9)
                            r14_6 = 0
                            rbx_7 += divs.dp.d(sx.q(r9_16.d), neg.d(r10_4) * 2)
                    else
                        r8_25 = rsi_4
                    
                    if (r8_25 s<= 0)
                        r14_5 = arg5
                    else
                        void* rsi_7 = sx.q(i_9) * 0x2fe8 + arg1
                        sub_1403e11a0(rsi_7, r8_25)
                        int64_t r9_17
                        
                        if (*(arg1 + 0x16a4) - i_9 s> 0)
                            if (i_9 s> 0)
                                r9_17 = 1
                            
                            if (i_9 s<= 0 || arg1[0xc04].d == 0)
                                r9_17 = 2
                        else
                            r9_17 = 0
                        
                        *(rsp_1 + 0x28) = r14_6
                        r14_5 = arg5
                        *(rsp_1 + 0x20) = rbx_7
                        sub_1403e9240(rsi_7, arg6, r14_5, r9_17)
                        r10_4 = var_60_1
                        result_2 = 0
                    
                    *r13_1 += 1
                    rbx_2 = arg2
                    rsi_4 = var_68
                    r8_24 = zx.q(var_78_1)
                    r9_15 = 0
                    rax_104 = var_70_2 + 4
                    *(r13_1 - 0x448) = 0
                    *(r13_1 - 8) = 0
                    i_9 += 1
                    r13_1 += 0x2fe8
                    var_70_2 = rax_104
                while (i_9 s< rbx_2[1])
                
                r13_1 = arg1 + 0x16a4
            
            int64_t rdx_53 = sx.q(*r13_1)
            arg1[0xc04].d = sx.d(*(rdx_53 + arg1 + 0x6003))
            
            if (*arg6 s> 0)
                int32_t rsi_8 = arg1[0x2d4].d
                
                if (rdx_53.d == rsi_8)
                    int32_t i_16 = rbx_2[1]
                    
                    if (i_16 s> 0)
                        void* r8_27 = &arg1[0x254]
                        uint64_t i_15 = zx.q(i_16)
                        uint64_t i_10
                        
                        do
                            int64_t r10_5 = sx.q(*(r8_27 + 0x400))
                            void* rdx_54 = nullptr
                            
                            if (r10_5 s> 0)
                                do
                                    int32_t rcx_77 = sx.d(*(rdx_54 + r8_27))
                                    rdx_54 += 1
                                    r9_15 = (r9_15 * 2) | rcx_77
                                while (rdx_54 s< r10_5)
                            
                            int32_t rax_115 = sx.d(*(r8_27 + 3))
                            r8_27 += 0x2fe8
                            r9_15 = (r9_15 * 2) | rax_115
                            i_10 = i_15
                            i_15 -= 1
                        while (i_10 != 1)
                    
                    if (arg7 == 0)
                        sub_1403fe570(r14_5, r9_15, (rsi_8.b + 1) * i_16.b)
                    
                    rbx_2 = arg2
                    
                    if (*(arg1 + 0x17f4) != 0 && (rbx_2[1] == 1 || *(arg1 + 0x47dc) != 0))
                        *arg6 = 0
                    
                    arg1[0xc01].d += *arg6 << 3
                    int32_t temp37_1
                    int32_t temp38_1
                    temp37_1:temp38_1 = muls.dp.d(0x10624dd3, rbx_2[7] * rbx_2[6])
                    int32_t rdx_57 = temp37_1 s>> 6
                    int32_t r8_31 = arg1[0xc01].d - (rdx_57 + (rdx_57 u>> 0x1f))
                    arg1[0xc01].d = r8_31
                    
                    if (r8_31 s> 0x2710)
                        r8_31 = 0x2710
                    else if (r8_31 s< 0)
                        r8_31 = 0
                    
                    arg1[0xc01].d = r8_31
                    
                    if (*(arg1 + 0x11cc) s>= ((sx.d(arg1[0xc03].w) * 0xc74) s>> 0x10) + 0xd)
                        *(arg1 + 0x601c) = 0
                        arg1[0xc03].d += rbx_2[6]
                    else
                        *(arg1 + 0x601c) = 1
                        arg1[0xc03].d = 0
            
            result_1 = result_2
            
            if (var_5c == 0)
                break
            
            var_78_1 += 1
            r12 = arg2
            r15_3 = var_38_1
            r8_4 = var_44_1
        
        *(arg1 + 0x6014) = rbx_2[1]
        rbx_2[0x12] = *(arg1 + 0x601c)
        int32_t rax_127
        
        if (arg1[0x23f].d == 0x10)
            rax_127 = 1
        
        if (arg1[0x23f].d != 0x10 || *(arg1 + 0x1c) != 0)
            rax_127 = 0
        
        rbx_2[0x13] = rax_127
        bool cond:4_1 = rbx_2[0xe] != 0
        rbx_2[0x11] = sx.d(arg1[0x23f].w) * 0x3e8
        int32_t rax_130 = 0
        
        if (not(cond:4_1))
            rax_130 = sx.d(*(arg1 + 0x5fec))
        
        rbx_2[0x14] = rax_130
        
        if (arg7 != 0)
            bool cond:6_1 = rbx_2[1] s<= 0
            rbx_2[6] = var_50
            rbx_2[9] = var_48
            int32_t i_11 = 0
            
            if (not(cond:6_1))
                void* rdi_1 = &arg1[0x24d]
                
                do
                    *(rdi_1 - 0xc) = 0
                    *rdi_1 = 0
                    i_11 += 1
                    rdi_1 += 0x2fe8
                while (i_11 s< rbx_2[1])
        
        result = result_1

label_1403deee6:
__security_check_cookie(rax_1 ^ &result_2)
return result
