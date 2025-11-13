// 函数: sub_1406b9b00
// 地址: 0x1406b9b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
int64_t rax = av_gettime_relative()
int64_t rdi = rax
int64_t arg_18 = rax

while (*(arg1 + 0x69a) != 0)
    if (*(arg1 + 0x1e1) != 0)
        *(arg1 + 0x788) = av_gettime_relative()
        int64_t var_88 = 0
        int64_t arg_20 = 0
        uint32_t count_1
        count_1, zmm6 = sub_1406b93e0(arg1, &var_88, &arg_20)
        uint32_t count = count_1
        
        if (count_1 s< 0)
            *(arg1 + 0x760) = 0
            count = 0x200 - modu.dp.d(0:0x200, *(arg1 + 0x738))
        
        *(arg1 + 0x770) = count
        int32_t rax_3 = *(arg1 + 0x1c0)
        uint128_t zmm0_1
        
        if (rax_3 != 2 && rax_3 != 5 && *(arg1 + 0x760) != 0)
            EnterCriticalSection(arg1 + 0xa0)
            void*** var_78
            sub_1406b7f30(*(arg1 + 0x18), &var_78)
            void*** r13_1 = var_78
            int64_t rbx_1 = arg_20
            int64_t rdi_1 = var_88
            int32_t rax_4 = *(arg1 + 0x740)
            rax_3 = *(arg1 + 0x73c)
            int64_t r12_1 = *(arg1 + 0x760)
            
            if (r12_1 != 0 && count != 0)
                int32_t rcx_3 = *(r13_1 + 0x1c)
                r13_1[3].d = 0
                
                if (count s> rcx_3)
                    sub_1405c5510(&r13_1[2], count)
                    rcx_3 = *(r13_1 + 0x1c)
                
                int64_t r15_1 = sx.q(r13_1[3].d)
                int32_t rax_5 = r15_1.d + count
                r13_1[3].d = rax_5
                
                if (rax_5 s> rcx_3)
                    sub_1405daba0(&r13_1[2])
                
                memcpy(r15_1 + r13_1[2], r12_1, count)
                r13_1[4].d = rax_3
                r13_1[5] = rbx_1
                r13_1[6].d = rax_4
                r13_1[7] = rdi_1
                int64_t r8_3 = **(arg1 + 0x20)
                zmm0_1 = var_78.o
                uint128_t var_68 = zmm0_1
                void* rax_9 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rax_9 != 0)
                    *(rax_9 + 8) += 1
                
                r8_3(arg1 + 0x20, &var_68)
                int64_t* rbx_2 = var_68:8.q
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        rax_3 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_3 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    rax_3 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rax_3 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            if (arg1 != -0xa0)
                LeaveCriticalSection(arg1 + 0xa0)
            
            rdi = arg_18
        
        double zmm3_1 = *(arg1 + 0x780)
        rax_3.b = is_unordered.q(zmm3_1, zmm3_1)
        
        if (rax_3.b != 1)
            double zmm2_1 = float.d(*(arg1 + 0x788)) f* zmm6.q
            zmm0_1.q = float.d(zx.q(*(arg1 + 0x754)))
            zmm3_1 = zmm3_1 - float.d(zx.q(*(arg1 + 0x770) + (*(arg1 + 0x758) << 1))) f/ zmm0_1.q
            *(arg1 + 0x5c8) = zmm3_1
            *(arg1 + 0x5d8) = zmm2_1
            *(arg1 + 0x5d0) = zmm3_1 - zmm2_1
            *(arg1 + 0x5e8) = *(arg1 + 0x778)
            sub_1406c1cf0(arg1 + 0x628, arg1 + 0x5c8)
        
        int64_t rax_18 = av_gettime_relative()
        int64_t rdx_10 = rax_18 - rdi
        
        if (rdx_10 s< 0x8235)
            av_usleep(zx.q(0x8235 - rdx_10.d), rdx_10)
        
        rdi = rax_18
        arg_18 = rax_18

return 0
