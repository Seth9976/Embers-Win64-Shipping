// 函数: sub_141e92a10
// 地址: 0x141e92a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if (arg2 != 0)
    void* rax_1 = sub_142484770()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdi[7].d && *(rdi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            int64_t* rcx_1 = *(arg1 + 0x30)
            void* r12 = *(arg3 + 0x18)
            int128_t zmm6 = *arg3
            
            if (rcx_1 != 0)
                int64_t rbx_1 = *data_143f5b298
                int64_t rax_6 = (*(*rcx_1 + 0x150))(rcx_1)
                
                if ((*(rbx_1 + 0x348))(data_143f5b298, rax_6) != 0)
                    zmm6.d = zmm6.d f* *(arg1 + 0xa8)
            
            void* rax_8 = sub_142484770()
            int64_t* rbx_2
            
            if (rax_8 == 0)
                rbx_2 = nullptr
            else
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> rdi[7].d)
                    rbx_2 = nullptr
                else
                    rbx_2 = rdi
                    
                    if (*(rdi[6] + (rax_9 << 3)) != rax_8 + 0x30)
                        rbx_2 = nullptr
            
            void* rax_12 = rbx_2[0x23]
            
            if (rax_12 == 0)
                (*(*rbx_2 + 0x390))(rbx_2)
                rax_12 = rbx_2[0x23]
            
            void** rbx_3
            void* r14_3
            
            if (rax_12 != 0 && (*(rax_12 + 0x28) & 1) != 0)
                rbx_3 = *(arg1 + 0x48)
                r14_3 = &rbx_3[sx.q(*(arg1 + 0x50)) * 2]
            
            void* result
            void* result_1
            int32_t var_50
            
            if (rax_12 == 0 || (*(rax_12 + 0x28) & 1) == 0 || rbx_3 == r14_3)
            label_141e92b79:
                int64_t* arg_20 = rdi
                int32_t arg_10
                sub_141e9f5f0(arg1 + 0x58, &arg_10, &arg_20)
                int64_t rax_17 = sx.q(arg_10)
                void* const rcx_9
                
                if (rax_17.d == 0xffffffff)
                    rcx_9 = nullptr
                else
                    rcx_9 = (rax_17 << 5) + *(arg1 + 0x58)
                
                int64_t* r8_2 = rcx_9 + 8
                
                if (rcx_9 == 0)
                    r8_2 = nullptr
                
                int512_t zmm2_1
                int128_t zmm6_1
                
                if (r8_2 != 0)
                    int64_t rcx_13 = sx.q(r8_2[1].d)
                    
                    if (rcx_13.d s<= 0)
                        goto label_141e92ca3
                    
                    void* rbx_4 = *(*r8_2 + (rcx_13 << 3) - 8)
                    r8_2[1].d = (rcx_13 - 1).d
                    sub_1405c53d0(r8_2)
                    uint64_t rbx_5 = *(rbx_4 + 0x18)
                    void* rax_21 = sub_142484770()
                    int64_t* rdx_8
                    
                    if (rax_21 == 0)
                        rdx_8 = nullptr
                    else
                        int64_t rax_22 = sx.q(*(rax_21 + 0x38))
                        
                        if (rax_22.d s> rdi[7].d)
                            rdx_8 = nullptr
                        else
                            rdx_8 = rdi
                            
                            if (*(rdi[6] + (rax_22 << 3)) != rax_21 + 0x30)
                                rdx_8 = nullptr
                    
                    void* result_2
                    result_2, zmm2_1, zmm6_1 = sub_140596910(arg1, rdx_8, rbx_5, 0, 0, 0, 0)
                    result = result_2
                    
                    if (result_2 != 0)
                        goto label_141e92d0c
                    
                    goto label_141e92ca3
                
            label_141e92ca3:
                arg_10.q = 0
                void* rax_24 = sub_142484770()
                int64_t rax_25
                
                if (rax_24 != 0)
                    rax_25 = sx.q(*(rax_24 + 0x38))
                
                if (rax_24 == 0 || rax_25.d s> rdi[7].d
                        || *(rdi[6] + (rax_25 << 3)) != rax_24 + 0x30)
                    rdi = nullptr
                
                void* result_3
                result_3, zmm2_1, zmm6_1 = sub_140596910(arg1, rdi, arg_10.q, 0, 0, 0, 0)
                result = result_3
                
                if (result_3 != 0)
                label_141e92d0c:
                    void* result_5 = *(arg3 + 8)
                    zmm2_1.o = zmm6_1
                    uint64_t r9_2 = zx.q(*(arg3 + 4))
                    int64_t rdx_11 = *(arg1 + 0x30)
                    var_50 = arg3[1].d
                    int64_t rax_28 = *result
                    result_1 = result_5
                    (*(rax_28 + 0x270))(result, rdx_11, zmm2_1, r9_2, &result_1, 0, 0)
                    char rcx_20 = 0
                    int32_t i = 0
                    
                    if (*(arg1 + 0x50) s> 0)
                        void** rbx_6 = nullptr
                        
                        do
                            void* rax_29 = *(arg1 + 0x48)
                            
                            if (*(rbx_6 + rax_29) == 0)
                                *(rbx_6 + rax_29) = result
                                sub_140d3a3a0(rax_29 + 8 + rbx_6, r12)
                                rcx_20 = 1
                            
                            i += 1
                            rbx_6 = &rbx_6[2]
                        while (i s< *(arg1 + 0x50))
                    
                    if (*(arg1 + 0x50) s<= 0 || rcx_20 == 0)
                        result_1 = nullptr
                        sub_140d3a3a0(&var_50, nullptr)
                        result_1 = result
                        sub_140d3a3a0(&var_50, r12)
                        int64_t rbx_7 = sx.q(*(arg1 + 0x50))
                        int32_t rax_30 = (rbx_7 + 1).d
                        *(arg1 + 0x50) = rax_30
                        
                        if (rax_30 s> *(arg1 + 0x54))
                            sub_1405a4f90(arg1 + 0x48)
                        
                        *(*(arg1 + 0x48) + rbx_7 * 0x10) = result_1.o
            else
                while (true)
                    result = *rbx_3
                    
                    if (result != 0)
                        void* rax_13 = sub_142484770()
                        int64_t* rax_16
                        
                        if (rax_13 == 0)
                            rax_16 = nullptr
                        else
                            int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                            
                            if (rax_14.d s> rdi[7].d)
                                rax_16 = nullptr
                            else
                                rax_16 = rdi
                                
                                if (*(rdi[6] + (rax_14 << 3)) != rax_13 + 0x30)
                                    rax_16 = nullptr
                        
                        if (rax_16 == *(result + 0x10))
                            sub_140d3a3a0(&rbx_3[1], r12)
                            void* result_4 = *(arg3 + 8)
                            int512_t zmm2
                            zmm2.o = zmm6
                            int64_t r8_1 = *result
                            uint64_t r9_1 = zx.q(*(arg3 + 4))
                            int64_t rdx_6 = *(arg1 + 0x30)
                            var_50 = arg3[1].d
                            result_1 = result_4
                            (*(r8_1 + 0x270))(result, rdx_6, r8_1, r9_1, &result_1)
                            break
                    
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == r14_3)
                        goto label_141e92b79
            return result

return 0
