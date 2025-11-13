// 函数: sub_142160790
// 地址: 0x142160790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* rbx = arg1
int32_t var_210 = *(arg3 + 8) - *(arg3 + 0x34)
int32_t result = (*(*arg2 + 0x168))(arg2, &var_210)
int32_t rdx_1 = var_210

if (rdx_1 != 0)
    void* r15_1 = nullptr
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0x40
    void var_158
    
    if (rdx_1 s> 0x40)
        sub_1419834a0(&var_158, rdx_1)
        r15_1 = var_58_1
    
    int32_t r10_1 = *(arg3 + 0x28)
    void* r12_1 = arg3 + 0x10
    int64_t var_1dc_1 = 0
    int32_t rcx_2 = 0
    int32_t var_1f0_1 = 0
    int32_t r8 = 0
    int32_t var_1ec_1 = 1
    void* var_1e8_1 = r12_1
    int32_t var_1e0_1 = 0xffffffff
    
    if (r10_1 != 0)
        void* rax_5 = *(r12_1 + 0x10)
        void* r9 = r12_1
        
        if (rax_5 != 0)
            r9 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9
        
        if (rdx_4 != 0)
        label_1421608cc:
            int32_t rax_12 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_1ec_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_1dc_1.d = r8 - rax_13 + 0x1f
            
            if (r8 - rax_13 + 0x1f s> r10_1)
                var_1dc_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8 += 0x20
                rcx_2 += 1
                var_1dc_1:4.d = r8
                var_1f0_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                var_1e0_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1421608cc
            
            var_1dc_1.d = r10_1
    
    int32_t rdx_6 = *(arg3 + 0x28)
    int512_t zmm0
    zmm0.o = var_1f0_1.o
    void* var_1d0 = arg3
    double zmm2[0x2] = var_1e0_1.o
    int128_t var_1c8_1 = zmm0.o
    zmm0.o = var_1d0.o
    int32_t r14_1 = 0xffffffff << (rdx_6 & 0x1f).b
    int32_t r9_2 = rdx_6 & 0xffffffe0
    double var_1b8_1[0x2] = zmm2
    int32_t r8_3 = rdx_6 s>> 5
    int64_t var_160_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int512_t zmm1
    zmm1.o = var_1c8_1
    var_1c8_1:8.d = r14_1
    var_1c8_1:0xc.d = rdx_6
    int128_t var_180 = zmm0.o
    int128_t var_170_1 = zmm1.o
    
    if (rdx_6 != r10_1)
        void* rax_16 = *(r12_1 + 0x10)
        void* r11_1 = r12_1
        
        if (rax_16 != 0)
            r11_1 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(r11_1 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rdx_10 != 0)
        label_1421609a6:
            int32_t rax_22 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rsi_1
            
            if (rax_22 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_4
            
            var_1c8_1:0xc.d = r9_2 - rsi_1 + 0x1f
            
            if (r9_2 - rsi_1 + 0x1f s> r10_1)
                var_1c8_1:0xc.d = r10_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r11_1 + (rcx_6 << 2) + 4)
                var_1c8_1:8.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_1421609a6
            
            var_1c8_1:0xc.d = r10_1
        
        rbx = arg1
    
    while (true)
        int64_t rdx_11 = sx.q(var_170_1:0xc.d)
        
        if (rdx_11.d != (var_1c8_1:8.q u>> 0x20).d || var_170_1.q != r12_1)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rcx_8 = var_180.q
        
        if (result.b == 0 || rcx_8 != arg3)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            break
        
        void* r10_2 = *(rbx + 0x310)
        int64_t r12_2 = *(*rcx_8 + rdx_11 * 0x10)
        int64_t var_188 = r12_2
        uint32_t i = (r12_2 u>> 0x20).d
        uint32_t i_1 = i
        void* const rcx_12
        
        if (*(r10_2 + 0x250) == *(r10_2 + 0x27c))
        label_142160a90:
            rcx_12 = nullptr
        else
            void* r8_4 = r10_2 + 0x280
            void* rcx_10 = *(r8_4 + 8)
            
            if (rcx_10 != 0)
                r8_4 = rcx_10
            
            int32_t rax_27 = *(r8_4 + (((sx.q(*(r10_2 + 0x290)) - 1) & sx.q(i)) << 2))
            
            if (rax_27 == 0xffffffff)
            label_142160a90_1:
                rcx_12 = nullptr
            else
                int64_t r8_5 = *(r10_2 + 0x248)
                
                while (true)
                    int64_t rdx_15 = sx.q(rax_27) * 3
                    rcx_12 = r8_5 + (rdx_15 << 3)
                    
                    if (*(r8_5 + (rdx_15 << 3)) == i)
                        break
                    
                    rax_27 = *(rcx_12 + 0x10)
                    
                    if (rax_27 == 0xffffffff)
                        goto label_142160a90_2
                
                if (rax_27 == 0xffffffff)
                label_142160a90_2:
                    rcx_12 = nullptr
        
        uint64_t* rsi_2 = *(rcx_12 + 8)
        int32_t rax_32
        
        if ((arg4 & 1) == 0 || rsi_2[5].b == 0)
            void* r10_3 = *(rbx + 0x2e8)
            r14_1.b = 0
            
            if (*(r10_3 + 0x58) == *(r10_3 + 0x84))
                goto label_142160b19
            
            void* r8_6 = r10_3 + 0x88
            void* rcx_13 = *(r8_6 + 8)
            
            if (rcx_13 != 0)
                r8_6 = rcx_13
            
            int32_t rax_30 = *(r8_6 + (((sx.q(*(r10_3 + 0x98)) - 1) & sx.q(i)) << 2))
            
            if (rax_30 == 0xffffffff)
                goto label_142160b19
            
            int64_t r8_7 = *(r10_3 + 0x50)
            
            while (true)
                int64_t rdx_19 = sx.q(rax_30) * 3
                
                if (*(r8_7 + (rdx_19 << 2)) == i)
                    break
                
                rax_30 = *(r8_7 + (rdx_19 << 2) + 4)
                
                if (rax_30 == 0xffffffff)
                    goto label_142160b19
            
            if (rax_30 == 0xffffffff)
                goto label_142160b19
            
            rax_32 = 0
        else
            r14_1.b = 1
        label_142160b19:
            void* rax_31 = &var_158
            
            if (r15_1 != 0)
                rax_31 = r15_1
            
            void* rdx_20 = rax_31 + (sx.q(var_50_1) << 2)
            
            if (rax_31 == rdx_20)
            label_142160b42:
                rax_32 = 1
            else
                while (*rax_31 != i)
                    rax_31 += 4
                    
                    if (rax_31 == rdx_20)
                        goto label_142160b42
                
                rax_32 = 0
        
        int32_t var_20c = rax_32
        (*(*arg2 + 0x168))(arg2, &i_1)
        (*(*arg2 + 0x168))(arg2, &var_20c)
        
        if (var_20c != 0)
            int32_t var_1fc = rsi_2[4].d
            zmm0, zmm1 = sub_140a1d9d0(arg2, rsi_2, zmm1)
            (*(*arg2 + 0x168))(arg2, &var_1fc)
            int64_t rbx_2 = sx.q(var_50_1)
            int32_t rax_37 = (rbx_2 + 1).d
            var_50_1 = rax_37
            
            if (rax_37 s> var_4c_1)
                zmm0 = sub_1408091d0(&var_158, rbx_2.d)
            
            void* rcx_21 = &var_158
            
            if (var_58_1 != 0)
                rcx_21 = var_58_1
            
            *(rcx_21 + (rbx_2 << 2)) = i_1
            
            if (r14_1.b != 0)
                rsi_2[5].b = 0
        
        int64_t rdx_26 = rsi_2[3]
        int64_t rcx_23 = sx.q(r12_2.d) * 5
        void* rbx_3 = rdx_26 + (rcx_23 << 2)
        int64_t* rcx_24 = arg2[1]
        bool var_218 = *(rdx_26 + (rcx_23 << 2) + 0x10) != 0
        bool* rdx_27 = *rcx_24
        
        if (&rdx_27[1] u> rcx_24[1])
            (*(*arg2 + 0x150))(arg2, &var_218, 1)
        else
            var_218 = *rdx_27
            *rcx_24 += 1
        
        bool rax_42
        
        if ((arg2[5].b & 1) == 0)
            rax_42 = *(rbx_3 + 0x10)
        else
            rax_42 = var_218 == 1
            *(rbx_3 + 0x10) = rax_42
        
        if (rax_42 != 0)
            (*(*arg2 + 0x168))(arg2, rbx_3)
            int64_t* rcx_27 = arg2[1]
            int32_t* r8_8 = *rcx_27
            
            if (&r8_8[1] u<= rcx_27[1])
                *(rbx_3 + 4) = *r8_8
                int64_t* rax_47 = arg2[1]
                *rax_47 += 4
            else if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rbx_3 + 4, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rbx_3 + 4, 4)
            
            char rax_49 = arg2[5].b & 1
            
            if (rax_49 != 0 && *(arg2 + 0x54) u< 9)
                int64_t rax_50 = *arg2
                int64_t var_1f8 = 0
                uint64_t var_1a8 = 0
                int64_t var_1a0_1 = 0
                (*(rax_50 + 0x140))(arg2, &var_1f8)
                sub_140a1d9d0(arg2, &var_1a8, zmm1)
                uint64_t rcx_31 = var_1a8
                *(rbx_3 + 8) = var_1f8
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
            else if (rax_49 == 0 || *(arg2 + 0x54) u>= 0xa)
                sub_140ca89d0(arg2, rbx_3 + 8, zmm0, zmm1)
            else
                (*(*arg2 + 0x140))(arg2, rbx_3 + 8)
        
        void* rbx_5 = *(arg1 + 0x2e8)
        sub_1409afd50(rbx_5 + 0x50, &var_1d0)
        uint32_t* rdx_36 = var_1c8_1.q
        char* var_220_1 = nullptr
        *rdx_36 = i_1
        int32_t rax_54 = var_1d0.d
        rdx_36[1] = 0xffffffff
        void var_198
        sub_140752f60(rbx_5 + 0x50, &var_198, *rdx_36, rdx_36, rax_54, var_220_1)
        rbx = arg1
        void var_194
        zmm0, zmm1 = sub_1407d1070(*(rbx + 0x2e8) + 0xa0, &var_194, &var_188, nullptr)
        var_170_1:8.d &= not.d(var_180:0xc.d)
        sub_14059bdd0(&var_180:8)
        r15_1 = var_58_1
        r12_1 = var_1e8_1
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)

__security_check_cookie(rax_1 ^ &var_248)
return result
