// 函数: sub_142441df0
// 地址: 0x142441df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t r10 = zx.q(arg6)
void* var_d0 = arg3
int32_t rbx = -1
int32_t* r14 = *(arg3 + 8)
char var_f8 = r10.b
int64_t rcx = *(r14 + 0x48)
int32_t rdx = *r14
int32_t r15_2 = rdx * arg7 + *(rcx + (r10 << 2))

if (r15_2 u>= *(rcx + (r10 << 2) + 4))
    r15_2 = -1

int32_t i_1 = 0

if (r15_2 u< r14[0x18] && r14[0x10] s> 0)
    void* r8_1 = *(r14 + 0x38)
    int32_t* rax_2 = r8_1 + 4
    int32_t i
    
    do
        i = i_1 + 1
        
        if (r15_2 u< *rax_2)
            int32_t rdx_1 = rdx + r15_2
            int64_t rcx_5
            int32_t rdx_2
            
            if (rdx_1 u>= *(r8_1 + (sx.q(i) << 2)))
                rdx_2 = *((sx.q(i_1) << 6) + *(r14 + 0x28) + 0x20)
                rcx_5 = *(r14 + 0x58)
            else
                rcx_5 = *(r14 + 0x58)
                rdx_2 = *(rcx_5 + (sx.q(rdx_1) << 2))
            
            if (*(rcx_5 + (sx.q(r15_2) << 2)) == rdx_2)
                goto label_142441eb1
            
            if (i_1 == 0xffffffff)
                goto label_142441eb1
            
            int32_t j_3 = *arg4
            uint32_t r13_1 = zx.d(arg5)
            int32_t var_e4_1 = ((zx.d(r10.b) & 0xf) | r13_1 << 4) << 0x18 | (arg7 & 0xffffff)
            int64_t r10_1 = j_3.q
            int64_t rax_19 = (r10_1 u>> 0x21 ^ r10_1) * -0xae502812aa7333
            int64_t rcx_15 = (rax_19 u>> 0x21 ^ rax_19) * -0x3b314601e57a13ad
            uint64_t rdx_3 = zx.q((rcx_15 u>> 0x21).w) ^ zx.q(rcx_15.w)
            int64_t rax_22 = *(arg1 + 0x70)
            uint64_t rcx_17 = zx.q(*(arg1 + 0x64)) & rdx_3
            int16_t var_e0_1 = rdx_3.w
            int128_t var_88 = j_3.o
            int32_t j = *(rax_22 + (rcx_17 << 2))
            
            if (j != 0xffffffff)
                int64_t r9 = *(arg1 + 0x50)
                
                do
                    int64_t j_6 = sx.q(j)
                    int64_t rax_24 = j_6 << 6
                    
                    if (*(rax_24 + r9) == r10_1)
                        uint32_t var_e4_2 = zx.d(*(rax_24 + r9 + 0x34))
                        j_3 = j
                        int64_t rcx_19 = j_3.q
                        
                        if (rcx_19 == 0)
                            goto label_142441ff4
                        
                        int64_t rax_28 = 0
                        void* r8_3 = *((j_6 << 6) + r9 + 8)
                        
                        if (0 == *(r8_3 + 8))
                            *(r8_3 + 8) = 0
                        else
                            rax_28 = *(r8_3 + 8)
                        
                        *arg2 = rcx_19
                        arg2[1].d = ((rax_28 u>> 0x1a).d & 1) | 2
                        goto label_142441ecd
                    
                    j = *(*(arg1 + 0x78) + (zx.q(j) << 2))
                while (j != 0xffffffff)
            
        label_142441ff4:
            
            if (*(arg1 + 0x48) u< data_143a3055c)
                int32_t var_4c_1 = 4
                void* var_58_1 = nullptr
                int32_t j_7 = 0
                int64_t var_a0
                void var_78
                sub_1424360c0(arg3, &var_a0, &var_78, i_1, arg8)
                int32_t var_98
                
                if (var_98 - 2 u<= 1)
                    int32_t r10_2 = *r14
                    int32_t r9_2 = 0
                    int32_t rcx_23 = 0
                    
                    if (r10_2 != 0)
                        int32_t rdx_5 = 1
                        
                        do
                            int32_t r8_6 = rdx_5 & r13_1
                            
                            if (r8_6 != 0)
                                int32_t rax_34 = rcx_23
                                
                                if (rbx u<= rcx_23)
                                    rax_34 = rbx
                                
                                rbx = rax_34
                            
                            int32_t rax_35 = rcx_23
                            
                            if (r8_6 == 0)
                                rax_35 = r9_2
                            
                            rcx_23 += 1
                            rdx_5 = rol.d(rdx_5, 1)
                            r9_2 = rax_35
                        while (rcx_23 u< r10_2)
                    
                    int32_t rcx_24 = rbx + r15_2
                    int64_t i_3 = sx.q(i_1)
                    int32_t r10_3 = *(*(r14 + 0x38) + (i_3 << 2) + 4)
                    int32_t r8_7
                    
                    if (rcx_24 u>= r10_3)
                        r8_7 = *((i_3 << 6) + *(r14 + 0x28) + 0x20)
                    else
                        r8_7 = *(*(r14 + 0x58) + (sx.q(rcx_24) << 2))
                    
                    int32_t rcx_28 = r9_2 + r15_2
                    int32_t rdx_6
                    
                    if (rcx_28 + 1 u>= r10_3)
                        rdx_6 = *((i_3 << 6) + *(r14 + 0x28) + 0x20)
                    else
                        rdx_6 = *(*(r14 + 0x58) + (sx.q(rcx_28) << 2) + 4)
                    
                    int32_t var_118_1
                    var_118_1.q = zx.q(r8_7)
                    sub_14243f910(var_d0, &j_3, &var_78, i_1, var_118_1, zx.q(rdx_6 - r8_7), arg8)
                    int32_t rcx_31 = var_e0_1.d
                    void* rcx_41
                    
                    if (rcx_31 - 2 u<= 1)
                        int64_t* rbx_2 = j_3.q
                        int64_t* var_c8 = rbx_2
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                            rbx_2 = j_3.q
                        
                        int32_t var_ac_1 = arg7
                        char var_a8_1 = var_f8
                        char var_a7_1 = arg5
                        int64_t var_c0_1 = var_a0
                        var_118_1.q = &var_c8
                        int32_t* var_b8_1 = r14
                        int32_t i_2 = i_1
                        *arg2 = *sub_142446f40(arg1 + 0x50, &var_d0, arg1 + 0x10, &var_88, 
                            var_118_1, &var_78)
                        int64_t* rcx_37 = var_c8
                        arg2[1].d = 2
                        
                        if (rcx_37 != 0)
                            rcx_37[1].d -= 1
                            
                            if (rcx_37[1].d == 1)
                                int64_t* rcx_38 = var_c8
                                (*(*rcx_38 + 0x18))(rcx_38, 1)
                            
                            rbx_2 = j_3.q
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                int64_t* rcx_39 = j_3.q
                                (*(*rcx_39 + 0x18))(rcx_39, 1)
                        
                        rcx_41 = var_58_1
                        void* rbx_3 = &var_78
                        int32_t j_5 = j_7
                        
                        if (rcx_41 != 0)
                            rbx_3 = rcx_41
                        
                        if (j_5 != 0)
                            int32_t j_1
                            
                            do
                                int64_t* rcx_40 = *rbx_3
                                
                                if (rcx_40 != 0)
                                    rcx_40[9].d -= 1
                                    
                                    if (rcx_40[9].d == 1)
                                        sub_140a2f6e0(rcx_40)
                                
                                rbx_3 += 8
                                j_1 = j_5
                                j_5 -= 1
                            while (j_1 != 1)
                            rcx_41 = var_58_1
                    else
                        arg2[1].d = rcx_31
                        void* rcx_32 = j_3.q
                        *arg2 = 0
                        
                        if (rcx_32 != 0)
                            int32_t rax_44 = *(rcx_32 + 8)
                            *(rcx_32 + 8) -= 1
                            
                            if (rax_44 == 1)
                                int64_t* rcx_33 = j_3.q
                                (*(*rcx_33 + 0x18))(rcx_33, 1)
                        
                        rcx_41 = var_58_1
                        void* rbx_1 = &var_78
                        int32_t j_4 = j_7
                        
                        if (rcx_41 != 0)
                            rbx_1 = rcx_41
                        
                        if (j_4 != 0)
                            int32_t j_2
                            
                            do
                                int64_t* rcx_34 = *rbx_1
                                
                                if (rcx_34 != 0)
                                    rcx_34[9].d -= 1
                                    
                                    if (rcx_34[9].d == 1)
                                        sub_140a2f6e0(rcx_34)
                                
                                rbx_1 += 8
                                j_2 = j_4
                                j_4 -= 1
                            while (j_2 != 1)
                            rcx_41 = var_58_1
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                else
                    arg2[1].d = var_98
                    *arg2 = 0
                    sub_1408466d0(&var_78)
            else
                arg2[1].d = 1
                *arg2 = 0
            
            goto label_142441ecd
        
        rax_2 = &rax_2[1]
        i_1 = i
    while (i s< r14[0x10])

label_142441eb1:
TEB* gsbase

if (data_143f5ec48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5ec48)
    
    if (data_143f5ec48 == 0xffffffff)
        int64_t* rcx_42 = data_143db18d0
        
        if (rcx_42 == 0)
            sub_140a53c40()
            rcx_42 = data_143db18d0
        
        int64_t r8_11
        r8_11.b = 1
        int64_t* rax_59 = (*(*rcx_42 + 0xb0))(rcx_42, u"r.VT.Verbose", r8_11)
        int64_t rax_57
        
        if (rax_59 == 0)
            rax_57 = 0
        else
            int64_t rdx_12 = *rax_59
            rax_57 = (*(rdx_12 + 0x58))(rax_59, rdx_12)
        
        data_143f5ec40 = rax_57
        _Init_thread_footer(&data_143f5ec48)

*arg2 = 0
arg2[1].d = 0
label_142441ecd:
__security_check_cookie(rax_1 ^ &var_138)
return arg2
