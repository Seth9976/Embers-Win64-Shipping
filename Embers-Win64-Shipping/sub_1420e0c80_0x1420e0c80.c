// 函数: sub_1420e0c80
// 地址: 0x1420e0c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1
void* i_2 = i_1
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint64_t r14 = arg1
uint64_t var_170 = arg1
char var_178 = arg4
sub_140b33630("ActorDestroying")
(*(*arg2 + 0x150))(arg2)

if ((*(arg2 + 0x5c) & 8) != 0)
    i_1.b = 1
else
    int32_t rax_3 = *(arg2 + 0xc)
    void* r13_1 = nullptr
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1d).b & 1) != 0)
        i_1.b = 1
    else if (sub_142437e30(r14, 0, 1) != arg2)
        if (sub_14243ade0(r14) == 0)
        label_1420e0df9:
            *(arg2 + 0x5c) |= 8
            void*** rax_20 = sub_141f88540()
            void** r8_1 = *rax_20
            r8_1[0xc](rax_20, arg2, r8_1)
            (*(*arg2 + 0x530))(arg2)
            uint64_t var_160 = 0
            int32_t var_158_1 = 0
            sub_141dc5a60(arg2, &var_160, 1)
            
            if (var_158_1 s> 0)
                void* i_4 = nullptr
                int32_t var_4c_1 = 0x18
                int32_t var_50_1 = 0
                void* rax_22 = sub_1425881f0()
                void* rsi_2
                
                if (rax_22 == 0)
                    rsi_2 = nullptr
                else
                    void* rax_23 = sub_142459c10()
                    
                    if (rax_23 == 0)
                        rsi_2 = nullptr
                    else
                        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                        
                        if (rax_24.d s> *(rax_22 + 0x38))
                            rsi_2 = nullptr
                        else
                            rsi_2 = rax_22
                            
                            if (*(*(rax_22 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                                rsi_2 = nullptr
                
                void var_118
                void* r8_3 = &var_118
                
                if (rsi_2 != sub_142459c10())
                    sub_1419f71f0(arg2, rax_22, r8_3)
                else
                    sub_1419f6fe0(arg2, rax_22, r8_3)
                
                void* i_3 = i_4
                
                for (int32_t i = 0; i s>= 0; i += 1)
                    if (i s>= var_158_1)
                        break
                    
                    void* r15_1 = *(var_160 + (sx.q(i) << 3))
                    
                    if (r15_1 != 0)
                        i_1 = &var_118
                        int64_t rsi_3 = 0
                        
                        if (i_3 != 0)
                            i_1 = i_3
                        
                        int64_t r12_1 = sx.q(var_50_1) << 3
                        uint64_t r12_2 = r12_1 u>> 3
                        
                        if (i_1 u> i_1 + r12_1)
                            r12_2 = 0
                        
                        if (r12_2 != 0)
                            do
                                sub_141dbebd0(r15_1, *i_1, &data_143a2de54)
                                i_1 += 8
                                rsi_3 += 1
                            while (rsi_3 != r12_2)
                            
                            i_3 = i_4
                
                if (i_3 != 0)
                    sub_140a74f90(i_3)
                
                r14 = var_170
            
            void* rax_30 = arg2[0x26]
            
            if (rax_30 != 0 && *(rax_30 + 0xc0) != 0)
                sub_141dbed20(arg2, &data_143a2de54)
            
            sub_141dbcc60(arg2)
            
            if (arg2[0x1c] != 0)
                (*(*arg2 + 0x440))(arg2, 0)
            
            void* rax_32 = sub_141dc9840(arg2)
            
            if (rax_32 != 0)
                int64_t rdx_8 = *arg2
                
                if ((*(rdx_8 + 0x1c0))(arg2, rdx_8) != 0)
                    int64_t rdx_9 = *arg2
                    
                    if ((*(rdx_9 + 0x1c8))(arg2, rdx_9) != 0 && *(arg2 + 0x5f) != 0)
                        int64_t rax_35 = arg2[3]
                        int64_t var_148 = 0
                        int64_t var_140_1 = 0
                        int32_t var_12c = 0xffffffff
                        int32_t var_128_1 = 0
                        int64_t* rax_36 = sub_140d21830(arg2, &var_170, 0, 0)
                        
                        if (&var_148 != rax_36)
                            int64_t rcx_27 = var_148
                            
                            if (rcx_27 != 0)
                                sub_140a74f90(rcx_27)
                            
                            var_148 = *rax_36
                            *rax_36 = 0
                            var_140_1.d = rax_36[1].d
                            var_140_1:4.d = *(rax_36 + 0xc)
                            rax_36[1] = 0
                        
                        uint64_t rcx_29 = var_170
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                        
                        void* rax_39 = arg2[0x26]
                        float var_168_1
                        
                        if (rax_39 == 0)
                            float rax_40 = data_143dbb200
                            var_170 = data_143dbb1f8.q
                            var_168_1 = rax_40
                        else
                            float zmm1_1[0x4] = *(rax_39 + 0x1d0)
                            var_170.d = zmm1_1[0]
                            uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                            var_168_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                            var_170:4.d = zmm0_1.d
                        
                        uint64_t var_138_1 = var_170
                        sub_140d3a3a0(&var_12c, arg2[4])
                        int64_t rax_42 = arg2[2]
                        int64_t rbx_2 = sx.q(*(rax_32 + 0x278))
                        int32_t rax_43 = (rbx_2 + 1).d
                        *(rax_32 + 0x278) = rax_43
                        
                        if (rax_43 s> *(rax_32 + 0x27c))
                            sub_1407c3b60(rax_32 + 0x270)
                        
                        i_1 = rbx_2 * 0x38 + *(rax_32 + 0x270)
                        *i_1 = rax_35
                        sub_140596d10(i_1 + 8, &var_148)
                        *(i_1 + 0x18) = var_138_1
                        *(i_1 + 0x20) = var_168_1
                        *(i_1 + 0x24) = var_12c.q
                        *(i_1 + 0x30) = rax_42
                        int64_t rcx_33 = var_148
                        
                        if (rcx_33 != 0)
                            sub_140a74f90(rcx_33)
            
            void* rax_48 = sub_1423de4b0(data_143f5b298, r14)
            
            if (rax_48 != 0)
                i_1 = *(rax_48 + 0x220)
                
                for (void* rsi_7 = (sx.q(*(rax_48 + 0x228)) << 4) + i_1; i_1 != rsi_7; i_1 += 0x10)
                    int64_t* rcx_35 = *i_1
                    
                    if (rcx_35 != 0 && (*(*rcx_35 + 0x3e0))(rcx_35, arg2) != 0)
                        int64_t* rcx_36 = *i_1
                        (*(*rcx_36 + 0x338))(rcx_36, arg2, 0)
            
            sub_1424408c0(r14, arg2)
            (*(*arg2 + 0x4c8))(arg2, 0)
            int32_t rax_53 = *(arg2 + 0xc)
            
            if (rax_53 s< data_143e1d9b4)
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_53)
                uint32_t rdx_19 = zx.d(temp2_1)
                int32_t rax_55 = temp3_1 + rdx_19
                r13_1 = *(data_143e1d9a0 + (sx.q(rax_55 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_55.w) - rdx_19) * 0x18
            
            *(r13_1 + 8) |= 0x20000000
            sub_140d25500(arg2)
            (*(*arg2 + 0x4e0))(arg2)
            sub_141dd3860(arg2, 0, 1)
            uint64_t rcx_46 = var_160
            i_1.b = 1
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
        else
            i_1 = zx.q(arg2[0x1e].b)
            char rax_14
            
            if (i_1.b == 3 || arg3 != 0 || (arg2[0xb].b & 1) != 0)
                rax_14 = 1
            else
                rax_14 = 0
            
            if (i_1.b == 0 || rax_14 != 0)
                int64_t rsi_1 = data_143f48238
                int64_t rcx_7
                
                if (data_143de5480 == 0)
                    rcx_7 = 0
                else
                    rcx_7.b = GetCurrentThreadId() != data_143de5470
                
                if (i_1.b != 0 || *(rsi_1 + (rcx_7 << 2)) != 0)
                    if ((*(*arg2 + 0x4a8))(arg2) != 0)
                        i_1.b = 0
                    else
                        char rcx_9 = *(arg2 + 0x5c)
                        
                        if ((rcx_9 & 0x60) != 0x20)
                            goto label_1420e0df9
                        
                        *(arg2 + 0x5c) = rcx_9 | 0x10
                        i_1.b = 1
                else
                    i_1.b = 0
            else
                i_1.b = 0
    else
        i_1.b = 0

sub_140b37f60("ActorDestroying")
__security_check_cookie(rax_1 ^ &var_198)
return zx.q(i_1.b)
