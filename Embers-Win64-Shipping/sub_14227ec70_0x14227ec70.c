// 函数: sub_14227ec70
// 地址: 0x14227ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Physics")
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
data_143f52700 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (arg1[0xd].b == 0)
    float temp0_1[0x4] = __minss_xmmss_memss(arg1[0xf].d[0], *(arg1 + 0x74))
    int128_t zmm7 = zx.o(0)
    
    if (not(temp0_1[0] <= 0f))
        int64_t zmm0 = arg1[0xe].d
        float zmm1_1 = 1f f- zmm0.d
        zmm0.d = zmm0.d f* *(arg1 + 0x6c)
        arg1[0xd].b = 1
        *(arg1 + 0x6c) = zmm1_1 * temp0_1[0] f+ zmm0.d
        int64_t* arg_20
        int64_t** rax_1
        int512_t zmm1_2
        int128_t zmm6_1
        rax_1, zmm1_2, zmm6_1 = sub_140a228d0(&arg_20)
        void*** r14_1 = nullptr
        
        if (arg2 != rax_1)
            int64_t* rcx_2 = *arg2
            *arg2 = *rax_1
            *rax_1 = nullptr
            
            if (rcx_2 != 0)
                rcx_2[9].d -= 1
                
                if (rcx_2[9].d == 1)
                    zmm1_2, zmm6_1 = sub_140a2f6e0(rcx_2)
        
        int64_t* rcx_3 = arg_20
        
        if (rcx_3 != 0)
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                zmm1_2, zmm6_1 = sub_140a2f6e0(rcx_3)
        
        int64_t* i = arg1[0x39]
        int32_t var_78
        
        for (void* rbp_3 = &i[sx.q(arg1[0x3a].d) * 2]; i != rbp_3; i = &i[2])
            int64_t* rbx_2 = *i
            var_78 = 1
            zmm1_2, zmm6_1, zmm7 = sub_142255900(rbx_2, 
                &rbx_2[(sx.q(*(rbx_2 + 0x494)) + 0x45) * 2], i[1].b, *(i + 9), 1)
            *(rbx_2 + 0x719) &= 0xdf
        
        arg1[0x3a].d = 0
        
        if (*(arg1 + 0x1d4) s<= 0xffffffff)
            sub_1405a5410(&arg1[0x39], 0)
        
        int64_t* rbx_3 = arg1[0xc]
        
        if (rbx_3 == 0 || zmm6_1.d f<= zmm7.d)
            i.b = 0
        else
            int64_t* rcx_6 = arg1[0xb]
            i.b = 1
            
            if (rcx_6 != 0)
                zmm1_2.o = *(arg1 + 0x6c)
                (*(*rcx_6 + 0x18))(rcx_6, zmm1_2, &rcx_6[1])
        
        void* rcx_7 = arg1[0xa]
        char rax_4
        
        if (rcx_7 != 0)
            rax_4 = sub_14243ade0(rcx_7)
        
        if (rcx_7 == 0 || rax_4 == 0 || arg1[9].b == 0)
            zmm6_1 = *(arg1 + 0x6c)
        
        float zmm1_3
        int128_t zmm6_2
        zmm1_3, zmm6_2 = sub_142261470(arg1, arg1, zmm6_1)
        void* rcx_9 = arg1[0xa]
        char rax_5
        
        if (rcx_9 != 0)
            rax_5 = sub_14243ade0(rcx_9)
        
        if (rcx_9 == 0 || rax_5 == 0 || arg1[9].b == 0)
            zmm1_3 = sub_142261470(&arg1[3], arg1, zmm6_2)
        else
            void* rdx_6 = arg1[0x22]
            bool z_1
            
            if (0 == *(rdx_6 + 0xac))
                *(rdx_6 + 0xac) = 0
                z_1 = true
            else
                *(rdx_6 + 0xac)
                z_1 = false
            
            int32_t rcx_10
            rcx_10.b = z_1
            *(rdx_6 + 0xac)
            *(rdx_6 + 0xac) = rcx_10
        
        arg1[0x16].b = 1
        
        if (i.b == 0)
        label_14227eef6:
            int64_t* rcx_15 = *arg2
            int64_t var_68 = 0
            int64_t var_60_1 = 0
            sub_140a22e70(rcx_15, &var_68, 0xff)
            int64_t rcx_16 = var_68
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        else
            void* rcx_13 = arg1[0xa]
            char rax_7
            
            if (rcx_13 != 0)
                rax_7 = sub_14243ade0(rcx_13)
            
            if (rcx_13 == 0 || rax_7 == 0 || arg1[9].b == 0)
                void*** rax_13
                int64_t r8_4
                rax_13, r8_4 = j_sub_140a82f30(0x38)
                
                if (rax_13 != 0)
                    int64_t rdx_12 = *rbx_3
                    r14_1 = sub_14225aae0(rax_13, arg2, (*(rdx_12 + 0xd0))(rbx_3, rdx_12), 0)
                
                int64_t rdx_14 = *rbx_3
                r8_4.b = 1
                var_78.q = arg1[0x14]
                (*(rdx_14 + 0x40))(rbx_3, rdx_14, r8_4, r14_1, var_78, arg1[0x15].d)
                (*r14_1)[4](r14_1)
            else if (sub_14227c830(arg1, arg2, zmm1_3) == 0)
                goto label_14227eef6
        
        int64_t* rax_9 = sub_142565030()
        void* rax_10 = rax_9[0x23]
        
        if (rax_10 == 0)
            int64_t rdx_10 = *rax_9
            (*(rdx_10 + 0x390))(rax_9, rdx_10)
            rax_10 = rax_9[0x23]
        
        arg1[9].b = *(rax_10 + 0xc4)

return sub_140b37f60("Physics") __tailcall
