// 函数: sub_1408c9bf0
// 地址: 0x1408c9bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t j_2 = 0
int64_t rdi = arg2

if (*(arg1 + 0x50) != *(arg1 + 0x28) * *(arg1 + 0x2c))
    *(arg1 + 0x68) = 0
    int32_t rbx_1 = 0
    
    if (arg4 == 0)
        rbx_1 = *(*(*(arg1 + 0x38) + 0x30) + (zx.q(*(arg1 + 0x30)) << 2))
    
    void* rdi_1 = arg1 + 0x54
    int64_t i_4 = 2
    int64_t i
    
    do
        int32_t j_4 = *(arg1 + 0x28) * *(arg1 + 0x2c)
        *(rdi_1 - 4) = j_2.d
        
        if (*rdi_1 != j_4)
            sub_140679c00(rdi_1 - 0xc, j_4)
        
        if (j_4 s> 0)
            j_2 = zx.q(j_4)
            uint64_t j
            
            do
                int64_t rsi_2 = sx.q(*(rdi_1 - 4))
                int32_t rax_3 = (rsi_2 + 1).d
                *(rdi_1 - 4) = rax_3
                
                if (rax_3 s> *rdi_1)
                    sub_1406105e0(rdi_1 - 0xc)
                
                int32_t* rdx_3 = *(rdi_1 - 0xc) + (rsi_2 << 2)
                
                if (rdx_3 != 0)
                    *rdx_3 = rbx_1
                
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        rdi_1 += 0x10
        i = i_4
        i_4 -= 1
    while (i != 1)
    rdi = arg2

uint64_t j_3 = j_sub_140a82f30(0x30)

if (j_3 == 0)
    j_3 = j_2
else
    *(j_3 + 8) = 1
    *(j_3 + 0xc) = 1
    *j_3 = &data_142e096f0
    __builtin_memset(j_3 + 0x10, 0, 0x20)

if (j_3 != 0)
    *(j_3 + 8) += 1
    
    if (j_3 != 0)
        int32_t rax_5 = *(j_3 + 8)
        *(j_3 + 8) -= 1
        
        if (rax_5 == 1)
            (**j_3)(j_3)
            int32_t rax_7 = *(j_3 + 0xc)
            *(j_3 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*j_3 + 8))(j_3, 1)

*(j_3 + 0x18) = (sx.q(*arg3) << 6) + *(arg1 + 0x38)
*(j_3 + 0x10) = rdi
*(j_3 + 0x20) = arg1
bool cond:0 = *arg3 == 0
int64_t* var_78 = j_3 + 0x10
int64_t rax_11
rax_11.b = cond:0
uint64_t j_5 = j_3
*(j_3 + 0x28) = rax_11.b
*(j_3 + 0x29) = arg4

if (j_3 != 0)
    *(j_3 + 8) += 1

int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_13
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_13.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_13.b != 0))
        result = sub_1419a2d00()
        void* rcx_6 = *(j_3 + 0x10)
        
        if (rcx_6 != 0)
            int64_t* rcx_7 = *(rcx_6 + 0x10)
            
            if (rcx_7 != 0)
                void* rax_15 = (*(*rcx_7 + 8))(rcx_7)
                void* var_a0 = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 8) += 1
                    void* rcx_8 = *(j_3 + 0x20)
                    void* rdi_2 = *(j_3 + 0x18)
                    int32_t i_1 = 4
                    int32_t r10_1 = 0
                    void* rbx_3 = var_a0
                    int64_t arg_10
                    arg_10.b = *(j_3 + 0x29)
                    uint64_t r15_2 = zx.q(*(rbx_3 + 0x60))
                    int64_t r13_1 = *(rcx_8 + zx.q(*(rcx_8 + 0x68)) * 0x10 + 0x48)
                    char rax_19 = *(rcx_8 + 0x30)
                    int32_t i_5 = *(rbx_3 + 0x64)
                    int32_t r12_3 = r15_2.d * *(rdi_2 + 0x14) + *(rdi_2 + 0x10)
                    uint32_t rax_20 = zx.d(*(rdi_2 + 0x18))
                    
                    if (rax_20.b != 0)
                        i_1 = 0
                    
                    char temp3_1 = rax_20.b
                    rax_20.b = neg.b(rax_20.b)
                    
                    if (i_1 u< sbb.d(rax_20, rax_20, temp3_1 != 0) + 5)
                        do
                            char rcx_9 = 1
                            
                            if (i_1 u> 1)
                                rcx_9 = i_1.b
                            
                            for (int32_t j_1 = 8 s>> i_1.b & 7; j_1 u< *(rdi_2 + 0xc); 
                                    j_1 += 0x10 u>> rcx_9)
                                int32_t k = 0
                                
                                if (*(rdi_2 + 8) u> 0)
                                    do
                                        uint32_t rdx_6 = zx.d(*(sx.q(r10_1) + *(rdi_2 + 0x20)))
                                        
                                        if (rdx_6.w != *(rdi_2 + 0x1a))
                                            *(r13_1 + (zx.q(j_1 * r15_2.d + r12_3 + k) << 2)) =
                                                *(*(rdi_2 + 0x30) + (zx.q(rdx_6) << 2))
                                        
                                        r10_1 += 1
                                        k += 1
                                    while (k u< *(rdi_2 + 8))
                            
                            i_1 += 1
                        while (i_1 u< sbb.d(rax_20, rax_20, temp3_1 != 0) + 5)
                        
                        rbx_3 = var_a0
                    
                    int64_t* rcx_13 = data_143f0f180
                    int32_t arg_8 = 0
                    int64_t rbp_1 = r13_1
                    int64_t rax_26 = (*(*rcx_13 + 0x510))(rcx_13, &data_143f02b98, rbx_3, 0, 1, 
                        &arg_8, 0, 1, j_3)
                    int64_t rsi_7 = rax_26
                    
                    if (rax_26 != 0)
                        uint64_t rax_27 = zx.q(arg_8)
                        
                        if (rax_27 != r15_2 << 2)
                            uint32_t count_1 = (r15_2 << 2).d
                            uint32_t count = count_1
                            
                            if (rax_27.d u<= count_1)
                                count = rax_27.d
                            
                            if (i_5 != 0)
                                uint64_t i_3 = zx.q(i_5)
                                uint64_t i_2
                                
                                do
                                    memcpy(rsi_7, rbp_1, count)
                                    rbp_1 += zx.q(count_1)
                                    rsi_7 += zx.q(arg_8)
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
                                r15_2 = zx.q(r15_2.d)
                        else
                            memcpy(rsi_7, r13_1, rax_27.d * i_5)
                        
                        int64_t* rcx_16 = data_143f0f180
                        int32_t* var_d0_1
                        var_d0_1.b = 1
                        (*(*rcx_16 + 0x518))(rcx_16, &data_143f02b98, rbx_3, 0, 0, var_d0_1)
                    
                    uint32_t rcx_17 = zx.d(*(rdi_2 + 0x19))
                    
                    if (rcx_17 == 3 && *(j_3 + 0x28) != 0)
                    label_1408ca08c:
                        int32_t rax_36
                        
                        if (arg_10.b == 0)
                            rax_36 = *(*(rdi_2 + 0x30) + (zx.q(rax_19) << 2))
                        else
                            int64_t rax_35 = sx.q(*(rdi_2 + 0x1a))
                            
                            if (rax_35.w == 0xffff)
                                rax_35 = zx.q(rax_19)
                            
                            char arg_20
                            arg_20.d = *(*(rdi_2 + 0x30) + (rax_35 << 2))
                            char arg_23 = 0
                            rax_36 = arg_20.d
                        
                        char rcx_24 = *(j_3 + 0x28)
                        int32_t r10_2 = 0
                        int32_t i_6 = i_5
                        int32_t r9 = r15_2.d
                        
                        if (rcx_24 == 0)
                            i_6 = *(rdi_2 + 0xc)
                        
                        if (rcx_24 == 0)
                            r10_2 = r12_3
                        
                        if (rcx_24 == 0)
                            r9 = *(rdi_2 + 8)
                        
                        int32_t r11_2 = 0
                        
                        if (i_6 != 0)
                            do
                                int32_t rdx_13 = 0
                                
                                if (r9 != 0)
                                    do
                                        int32_t rcx_25 = rdx_13 + r11_2 * r15_2.d
                                        rdx_13 += 1
                                        *(r13_1 + (zx.q(rcx_25 + r10_2) << 2)) = rax_36
                                    while (rdx_13 u< r9)
                                
                                r11_2 += 1
                            while (r11_2 u< i_6)
                    else if (rcx_17 != 0 && rcx_17 != 1)
                        if (rcx_17 == 2)
                            goto label_1408ca08c
                        
                        if (rcx_17 == 3)
                            *(rcx_8 + 0x68) = (*(rcx_8 + 0x68) - 1) & 1
                
                result = sub_1405d1550(&var_a0)
        
        goto label_1408ca13f
    
    void var_68
    void** rax_42 = DBI1::DBI1(&var_68, nullptr, 0xff)
    char r9_1 = 1
    void* rcx_31 = *rax_42
    *(rcx_31 + 0x10) = j_3 + 0x10
    *(rcx_31 + 0x18) = j_3
    void* rcx_32 = *rax_42
    int32_t r8_7 = rax_42[2].d
    int64_t* rdx_14 = rax_42[1]
    int64_t* rbx_5 = *(rcx_32 + 0x28)
    
    if (rbx_5 == 0)
        result = sub_1408ca9f0(rcx_32, rdx_14, r8_7, r9_1)
    else
        rbx_5[9].d += 1
        sub_1408ca9f0(rcx_32, rdx_14, r8_7, r9_1)
        result = rbx_5[9].d
        rbx_5[9].d -= 1
        
        if (result == 1)
            result = sub_140a2f6e0(rbx_5)
    
    if (j_3 != 0)
    label_1408ca1de:
        result = *(j_3 + 8)
        *(j_3 + 8) -= 1
        
        if (result == 1)
            result = (**j_3)(j_3)
            int32_t rbp_2 = *(j_3 + 0xc)
            *(j_3 + 0xc) -= 1
            
            if (rbp_2 == 1)
                return (*(*j_3 + 8))(j_3, zx.q(rbp_2))
else
    result = sub_1408c9440(&var_78)
label_1408ca13f:
    
    if (j_3 != 0)
        int32_t rax_38 = *(j_3 + 8)
        *(j_3 + 8) -= 1
        
        if (rax_38 == 1)
            (**j_3)(j_3)
            int32_t rax_40 = *(j_3 + 0xc)
            *(j_3 + 0xc) -= 1
            
            if (rax_40 == 1)
                (*(*j_3 + 8))(j_3, 1)
        
        goto label_1408ca1de

return result
