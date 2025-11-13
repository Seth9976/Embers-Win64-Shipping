// 函数: sub_140979830
// 地址: 0x140979830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

int32_t rax_6

if (rcx == 0 || rax_2 == 0)
    rax_6 = -1
else
    int64_t* rdi_1 = *(arg2 + 8)
    int32_t rax_4 = (*(*rdi_1 + 0x20))(rdi_1)
    int64_t rdx = *rdi_1
    rax_6 = sub_140a6af60((*(rdx + 0x18))(rdi_1, rdx), rax_4)

void* rax_7 = sub_1409470a0(&arg1[0x1e], rax_6, arg2)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(rax_7 + 0x10) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
int32_t arg_8 = sub_1424370f0()
int32_t rax_9 = sub_1424370f0()
int64_t* rbx_2 = nullptr
arg1[0x29].d = 0

if (*(arg1 + 0x14c) != rax_9)
    sub_1405c5510(&arg1[0x28], rax_9)

int32_t rax_10
int128_t zmm6
rax_10, zmm6 = sub_1424370f0()
int32_t rax_11 = rax_10 + arg1[0x29].d
arg1[0x29].d = rax_11

if (rax_11 s> *(arg1 + 0x14c))
    sub_1405daba0(&arg1[0x28])

int64_t* rcx_8 = *(rax_7 + 0x70)
int32_t* var_108 = &arg_8
(*(*rcx_8 + 0x10))(rcx_8, arg3, zx.q(*arg4), arg1[0x28], var_108)

if (arg_8 u> 0)
    void* r8_2 = *(rax_7 + 0x20)
    int128_t var_48_1 = zmm6
    void* const rax_20
    
    if (r8_2 != 0)
        int32_t rax_13 = *(r8_2 + 0xc)
        
        if (rax_13 s>= data_143e1d9b4)
            rax_20 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_13)
            uint32_t rdx_7 = zx.d(temp1_1)
            int32_t rax_15 = temp2_1 + rdx_7
            rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                + sx.q(zx.d(rax_15.w) - rdx_7) * 0x18
    
    int64_t (* var_b8)(void* arg1, int64_t, int32_t arg3 @ zmm2)
    int64_t* r14_2
    
    if (r8_2 != 0 && ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
        r14_2 = arg5
    else
        (*(*arg1 + 0x168))(arg1)
        
        if ((*(*arg1 + 0x118))(arg1) != 0)
            int64_t* rax_27 = (*(*arg1 + 0x118))(arg1)
            int64_t r8_3 = *rax_27
            *(*(r8_3 + 0x18))(rax_27, &var_b8, r8_3)
            void* rax_29 = sub_140964730()
            
            if (rax_29 != 0)
                int32_t rax_30 = sub_1424378d0()
                void var_78
                sub_142435ed0(rax_29, &var_78)
                
                if (sub_141e80b60(&var_78) != 0)
                    void* rax_33 = sub_140947b40(sub_140cde0b0())
                    rbx_2 = rax_33
                    
                    if (rax_33 != 0)
                        int64_t* rax_34 = sub_142475900()
                        void* rdx_11 = rax_34[0x23]
                        
                        if (rdx_11 == 0)
                            int64_t rdx_12 = *rax_34
                            (*(rdx_12 + 0x390))(rax_34, rdx_12)
                            rdx_11 = rax_34[0x23]
                        
                        int64_t var_a8 = *(rdx_11 + 0x98)
                        int64_t var_a0
                        sub_140596d10(&var_a0, rdx_11 + 0xa0)
                        
                        if (var_a8 != 0)
                            int64_t var_88
                            int64_t* rax_36 = sub_140d30800(&var_a8, &var_88)
                            int16_t* rdx_15
                            
                            if (rax_36[1].d == 0)
                                rdx_15 = &data_142d40450
                            else
                                rdx_15 = *rax_36
                            
                            var_108 = nullptr
                            void* rax_37 = sub_140947a30(0, rdx_15, 0, 0, 0)
                            int64_t rcx_24 = var_88
                            rbx_2[0xbf] = rax_37
                            
                            if (rcx_24 != 0)
                                sub_140a74f90(rcx_24)
                        
                        rbx_2[0xca].b ^= (data_143989b18 << 2 ^ rbx_2[0xca].b) & 4
                        sub_141ef14c0(rbx_2, rax_29, 0)
                        sub_141c62ac0(rbx_2, rax_30)
                        int64_t rcx_27 = var_a0
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                
                sub_141e71cd0(&var_78)
                *(rax_7 + 0x20) = rbx_2
        
        r8_2 = *(rax_7 + 0x20)
        
        if (r8_2 == 0)
            r14_2 = arg5
        else
            *(rax_7 + 0x31) = 0
            sub_142436010()
            int32_t rax_39
            int128_t zmm6_1
            rax_39, zmm6_1 = sub_142437210()
            r14_2 = arg5
            sub_14096f410(r8_2, *r14_2, rax_39, zmm6_1)
            void* rbx_4 = *(rax_7 + 0x20)
            *(rax_7 + 0x30) = 0
            void var_60
            sub_141c32790(rbx_4 + 0x6d0, 
                sub_141c33390(&arg1[0x35], &var_60, data_143989b00, data_143989b04))
            sub_141c32310(&var_60)
            r8_2 = *(rax_7 + 0x20)
    
    if (r8_2 != 0)
        if (*(rax_7 + 0x31) == 0)
            *(rax_7 + 0x31) = 1
            int128_t var_e0
            __builtin_memset(&var_e0, 0, 0x18)
            int64_t* rax_41 = sub_1424377d0(arg2, &var_e0, nullptr, nullptr)
            int64_t r9_1 = *arg1
            (*(r9_1 + 0x110))(arg1, arg2, &var_e0, r9_1, var_108)
            int64_t* rsi_1 = *(rax_7 + 0x20)
            sub_141c59ee0(rsi_1)
            rsi_1[0x3e].b |= 4
            int64_t* rax_42 = sub_141c5d640(rsi_1)
            int64_t* rdx_23 = var_e0.q
            
            if (rdx_23 != 0)
                if (rax_42[0x18] != 0)
                    int32_t var_c8_1 = 0
                    int64_t var_e8_1 = 0
                    sub_141f32b40(rax_42, rdx_23, &data_143a2de4c, 0)
                else
                    int32_t var_f8_2 = 0
                    int64_t var_f0_1 = 0
                    sub_141f4a650(rax_42, rdx_23, 0)
                
                if ((rax_42[0x11].b & 1) == 0)
                    void* rcx_38 = var_e0.q
                    void* rax_43 = *(rcx_38 + 0xa8)
                    
                    if (rax_43 == 0)
                        rax_43 = sub_141ee69e0(rcx_38)
                    
                    sub_141ef14c0(rax_42, rax_43, 0)
                    *(rax_42 + 0x214) = 0xffffffff
            
            int64_t rax_44 = var_e0:8.q
            
            if (rax_44 != 0)
                rsi_1[0x3f] = rax_44
            
            int64_t var_d0
            
            if (var_d0 != 0)
                rsi_1[0xc0] = var_d0
            
            float zmm0_2 = sub_142436010()
            int64_t* r15_2 = *(rax_7 + 0x20)
            void* arg_10
            arg_10.d = *r14_2
            int64_t* rbx_6 = r15_2[0xdd]
            
            if (rbx_6 != 0)
                while (true)
                    void* rdx_25 = *rbx_6[7]
                    
                    if (rdx_25 == 0)
                        break
                    
                    int64_t rcx_40 = rbx_6[7]
                    rbx_6[7] = rdx_25
                    *(rdx_25 + 8) = 0
                    j_sub_140a74f90(rcx_40)
                
                int32_t i = 0
                
                if (rbx_6[5].d s> 0)
                    int64_t r14_3 = 0
                    
                    do
                        *(rbx_6[4] + r14_3 + 0x18) = 0
                        int64_t* rax_49 = j_sub_140a82f30(0x10)
                        
                        if (rax_49 != 0)
                            *rax_49 = 0
                            rax_49[1].d = i
                            int64_t** rcx_41 = rbx_6[6]
                            rbx_6[6] = rax_49
                            *rcx_41 = rax_49
                        
                        i += 1
                        r14_3 += 0x30
                    while (i s< rbx_6[5].d)
                
                *rbx_6 = 0
                rbx_6[2].d = 0
                *(rbx_6 + 0x14) = 0
                rbx_6[1] = sx.q(arg_10.d)
                *(r15_2 + 0x71c) = int.d(zmm0_2 f* r15_2[0xe3].d)
                r15_2 = *(rax_7 + 0x20)
            
            sub_141c6fff0(r15_2)
            *(rax_7 + 0x28) = rax_41
            
            if (rax_41 != 0)
                if (*(rax_7 + 0x30) == 0)
                    void* rsi_2 = *(rax_7 + 0x20)
                    var_b8 = sub_14243de90
                    int32_t var_b0_1 = 0
                    int64_t* rax_51 = sub_140a84c80(0, 0x30, 0)
                    
                    if (rax_51 != 0)
                        *rax_51 = &data_142e34808
                        sub_140d3a3a0(&rax_51[1], rax_41)
                        *(rax_51 + 0x10) = var_b8.o
                        rax_51[5] = sub_140a387b0()
                        *rax_51 = &data_142e34860
                    
                    if (rax_51 != 0)
                        sub_140599630(rsi_2 + 0x670, 1)
                        void var_90
                        (*(*rax_51 + 0x30))(rax_51, &var_90)
                        int64_t r14_4 = sx.q(*(rsi_2 + 0x678))
                        int32_t rax_54 = (r14_4 + 1).d
                        *(rsi_2 + 0x678) = rax_54
                        
                        if (rax_54 s> *(rsi_2 + 0x67c))
                            sub_1405a4f90(rsi_2 + 0x670)
                        
                        void** rax_57 = (r14_4 << 4) + *(rsi_2 + 0x670)
                        *rax_57 = rax_51
                        rax_57[1].d = 3
                    
                    *(rax_7 + 0x30) = 1
                
                (*(*rax_41 + 0x3f8))(rax_41, sub_141c5d640(*(rax_7 + 0x20)))
        
        void* rcx_50 = *(rax_7 + 0x20)
        int64_t* r10_1 = *(rcx_50 + 0x6e8)
        
        if (r10_1 != 0)
            int64_t r8_7 = sx.q(arg_8)
            int16_t* rdx_33 = arg1[0x28]
            int64_t r9_3 = data_143ced3d0 + (r8_7 u>> 1)
            data_143ced3d0 = r9_3
            sub_140971990(r10_1, rdx_33, r8_7.d, r9_3, 1)
            rcx_50 = *(rax_7 + 0x20)
        
        if (sub_141c63bf0(rcx_50) == 0)
            sub_141c6fff0(*(rax_7 + 0x20))
else
    *arg4 = 0

return 0
