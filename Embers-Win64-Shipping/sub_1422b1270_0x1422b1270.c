// 函数: sub_1422b1270
// 地址: 0x1422b1270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t* r15 = arg4
int64_t* r14 = arg3
uint64_t result

if (data_143a2fda0 == 0)
    result = zx.q(*(arg1 + 0x58))
    int32_t i = 0
    *arg4 = result.d
    
    while (i s>= 0)
        if (i s>= arg2[1].d)
            break
        
        uint64_t* rdx_19 = sx.q(i) * 0x30 + *arg2
        i += 1
        result = *rdx_19
        rdx_19[3].d = *(result + 0x4c)
    
    while (i_1 s>= 0)
        if (i_1 s>= r14[1].d)
            break
        
        void* rcx_28 = (sx.q(i_1) << 5) + *r14
        i_1 += 1
        result = zx.q(*(rcx_28 + 0xc))
        *(rcx_28 + 0x10) = result.d
else
    *arg4 = 0
    result = zx.q(arg2[1].d)
    int32_t temp0_1 = result.d
    
    if (temp0_1 != 0)
        int32_t rdx = 0
        int32_t var_60_1 = 0
        uint64_t result_1 = 0
        int32_t var_5c_1 = 0
        
        if (temp0_1 s> 0)
            sub_141d26590(&result_1, result.d)
            result = zx.q(arg2[1].d)
            rdx = var_60_1
        
        int32_t i_2 = 0
        
        if (result.d s> 0)
            int32_t r15_1 = var_60_1
            int64_t rsi_1 = 0
            uint64_t result_4 = result_1
            
            do
                int64_t* r14_1 = *arg2
                int64_t rbx_1 = sx.q(r15_1)
                r15_1 = (rbx_1 + 1).d
                var_60_1 = r15_1
                
                if (r15_1 s> var_5c_1)
                    sub_1409da2a0(&result_1)
                    r15_1 = var_60_1
                    result_4 = result_1
                
                *(result_4 + (rbx_1 << 3)) = i_2
                int64_t* rcx_2 = *(r14_1 + rsi_1)
                i_2 += 1
                rsi_1 += 0x30
                *(result_4 + (rbx_1 << 3) + 4) = (*(*rcx_2 + 0x108))(rcx_2)
            while (i_2 s< arg2[1].d)
            
            r15 = arg4
            rdx = var_60_1
            r14 = arg3
        
        void* result_2 = result_1
        void var_88
        void* var_78 = &var_88
        sub_140dd5790(result_2, rdx)
        int32_t r8 = var_60_1
        int32_t rsi_2 = 0
        
        if (r8 s> 0)
            uint64_t result_3 = result_1
            int64_t rdi_1 = 0
            
            do
                int64_t* rbx_5 = sx.q(*(result_3 + (rdi_1 << 3))) * 0x30 + *arg2
                void* rcx_3 = *rbx_5
                
                if (*(rcx_3 + 0x38) s> 1 || ((*(rbx_5 + 0x2c) u>> 5).b & 1) != 0)
                    int32_t r14_2 = *(rcx_3 + 0x4c)
                    int32_t i_3 = 0
                    int32_t rcx_9 = *(result_3 + (rdi_1 << 3) + 4)
                    int32_t rdx_6 = (rcx_9 - 1 + *r15) & neg.d(rcx_9)
                    *r15 = rdx_6
                    void* rcx_11 = *rbx_5
                    
                    if (*(rcx_11 + 0x38) s> 0)
                        do
                            int32_t var_40_1 = 0
                            int64_t* r10_3 = sx.q(*(result_3 + (rdi_1 << 3))) * 0x30 + *arg2
                            var_78.o = arg3.o
                            r10_3[3].d = *(*r10_3 + 0x4c) - r14_2 + *r15
                            uint32_t j_2 = zx.d(*(r10_3 + 0x1c))
                            uint32_t j_1 = j_2
                            var_78.o = var_78.o
                            
                            if (j_2 s< zx.d(*(r10_3 + 0x1e)))
                                uint32_t j = j_1
                                void* r8_1 = var_78
                                
                                do
                                    void* rdx_9 = (sx.q(j) << 5) + *r8_1
                                    *(rdx_9 + 0x10) = *(rdx_9 + 0xc) - r14_2 + *r15
                                    r8_1 = var_78
                                    int64_t j_3 = sx.q(j_1)
                                    int64_t rcx_16 = j_3 << 5
                                    int64_t rax_15 = *r8_1
                                    char r9 = *(rcx_16 + rax_15 + 0x1c)
                                    
                                    if (r9 == 0)
                                    label_1422b14ef:
                                        j_3 = zx.q(j_3.d + 1)
                                        int32_t var_70_1 = j_3.d
                                        int64_t rax_16 = *r8_1
                                        
                                        while (*((sx.q(j_3.d) << 5) + rax_16 + 0x1c) != 1)
                                            void* rdx_12 = (sx.q(j_3.d) << 5) + rax_16
                                            *(rdx_12 + 0x10) = *(rdx_12 + 0xc)
                                            *var_78
                                            r10_3, i_3 = sub_1422b1640(&var_78)
                                            r8_1 = var_78
                                            j_3 = zx.q(var_70_1 + 1)
                                            var_70_1 = j_3.d
                                            rax_16 = *r8_1
                                    else if ((*(rcx_16 + rax_15 + 0x1d) & 2) != 0 && r9 == 0)
                                        goto label_1422b14ef
                                    
                                    j = j_3.d + 1
                                    j_1 = j
                                while (j s< zx.d(*(r10_3 + 0x1e)))
                                
                                result_3 = result_1
                            
                            rcx_11 = *rbx_5
                            i_3 += 1
                            rsi_2 += 1
                            rdi_1 += 1
                        while (i_3 s< *(rcx_11 + 0x38))
                        
                        rdx_6 = *r15
                        r8 = var_60_1
                    
                    rsi_2 -= 1
                    rdi_1 -= 1
                    r14 = arg3
                    *r15 = *(rcx_11 + 0x3c) * *(rcx_11 + 0x38) + rdx_6
                else
                    uint32_t i_6 = zx.d(*(rbx_5 + 0x1c))
                    int32_t var_50_1 = 0
                    var_78.o = r14.o
                    uint32_t i_5 = i_6
                    var_78.o = var_78.o
                    
                    if (i_6 s< zx.d(*(rbx_5 + 0x1e)))
                        uint32_t i_4
                        
                        do
                            sub_1422b16e0(&var_78, r15)
                            i_4 = i_5 + 1
                            i_5 = i_4
                        while (i_4 s< zx.d(*(rbx_5 + 0x1e)))
                        r8 = var_60_1
                        result_3 = result_1
                    
                    rbx_5[3].d = *((zx.q(*(rbx_5 + 0x1c)) << 5) + *r14 + 0x10)
                
                rsi_2 += 1
                rdi_1 += 1
            while (rsi_2 s< r8)
        
        result = result_1
        
        if (result != 0)
            return sub_140a74f90(result)

return result
