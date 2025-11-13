// 函数: sub_141036930
// 地址: 0x141036930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int32_t i_2 = arg1[4].d
    int32_t rdi_1
    
    if (i_2 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(i_2)
        rdi_1 = temp0_1
        int32_t arg_8 = rdi_1
    else
        rdi_1 = arg2 + 0x20
    
    if (i_2 != 0)
        int32_t i
        
        do
            void* rbx_1 = *(arg1[1] + (zx.q(rdi_1) << 3) + 0x9d8)
            void* r14_1 = **(rbx_1 + 0x6d8)
            sub_1410179a0(*(r14_1 + 0x1c8))
            int32_t rdx = *(r14_1 + 0x8a0)
            int32_t rcx_2 = *(r14_1 + 0x8a4)
            data_143f0f214 += *(r14_1 + 0x3b80)
            data_143f0f218
            data_143f0f218 += rcx_2 + rdx
            int64_t rbp_1 = sx.q(*(rbx_1 + 0x30))
            int32_t rax_4 = (rbp_1 + 1).d
            *(rbx_1 + 0x30) = rax_4
            
            if (rax_4 s> *(rbx_1 + 0x34))
                sub_1405a4f90(rbx_1 + 0x28)
            
            void* rcx_6 = *(r14_1 + 0x1c8)
            void*** rax_7 = (rbp_1 << 4) + *(rbx_1 + 0x28)
            *rax_7 = &data_142efcd90
            rax_7[1] = rcx_6
            
            if (rcx_6 != 0)
                *(rcx_6 + 0x14) += 1
            
            *rax_7 = &data_142efcd90
            i = not.d(1 << rdi_1.b) & i_2
            i_2 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_forward(i)
                rdi_1 = temp0_4
                int32_t arg_20 = rdi_1
            else
                rdi_1 = 0x20
        while (i != 0)

void* rbx_2 = arg1[5]
void* rbp_4 = (sx.q(arg1[6].d) << 4) + rbx_2

while (rbx_2 != rbp_4)
    void* rax_10 = *(rbx_2 + 8)
    uint64_t rcx_8
    
    if (rax_10 == 0)
        rcx_8 = 0
    else
        rcx_8 = zx.q(*(rax_10 + 0x10))
    
    void* rdi_2 = *(arg1[1] + (rcx_8 << 3) + 0x9d8)
    int64_t rsi_1 = sx.q(*(rdi_2 + 0x30))
    int32_t rax_12 = (rsi_1 + 1).d
    *(rdi_2 + 0x30) = rax_12
    
    if (rax_12 s> *(rdi_2 + 0x34))
        sub_1405a4f90(rdi_2 + 0x28)
    
    void* rdx_3 = *(rbx_2 + 8)
    void*** rax_15 = (rsi_1 << 4) + *(rdi_2 + 0x28)
    *rax_15 = &data_142efcd90
    rax_15[1] = rdx_3
    
    if (rdx_3 != 0)
        *(rdx_3 + 0x14) += 1
    
    rbx_2 += 0x10
    *rax_15 = &data_142efcd90

sub_141033c70(&arg1[5], 0)
int32_t i_3 = arg1[4].d
int32_t rbp_5

if (i_3 != 0)
    uint64_t rflags_3
    int32_t temp0_5
    temp0_5, rflags_3 = _bit_scan_forward(i_3)
    rbp_5 = temp0_5
    int32_t var_48_1 = rbp_5
else
    rbp_5 = i_3 + 0x20

if (i_3 != 0)
    int32_t i_1
    
    do
        void* r14_2 = *(arg1[1] + (zx.q(rbp_5) << 3) + 0x9d8)
        
        if (arg2 == arg3 - 1)
            if (data_1439b4ae4 == 1)
            label_141036b25:
                
                if (*(r14_2 + 0x30) s> 0)
                    int64_t* rcx_13 = *(r14_2 + 0x38)
                    (*(*rcx_13 + 8))(rcx_13, r14_2 + 0x28, 0)
                    int32_t rax_20 = *(r14_2 + 0x34)
                    void*** rbx_4 = *(r14_2 + 0x28)
                    int32_t j_2 = *(r14_2 + 0x30)
                    
                    if (rax_20 s< 0)
                        if (j_2 != 0)
                            int32_t j
                            
                            do
                                void* rcx_16 = rbx_4[1]
                                *rbx_4 = &data_142efcd90
                                
                                if (rcx_16 != 0)
                                    int32_t rax_22 = *(rcx_16 + 0x14)
                                    *(rcx_16 + 0x14) -= 1
                                    
                                    if (rax_22 == 1)
                                        int64_t* rcx_17 = rbx_4[1]
                                        
                                        if (rcx_17 != 0)
                                            sub_141011360(rcx_17, rax_22.b)
                                
                                rbx_4 = &rbx_4[2]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            rax_20 = *(r14_2 + 0x34)
                        
                        *(r14_2 + 0x30) = 0
                        
                        if (rax_20 != 0)
                            sub_1405a5410(r14_2 + 0x28, 0)
                    else
                        if (j_2 != 0)
                            int32_t j_1
                            
                            do
                                void* rcx_14 = rbx_4[1]
                                *rbx_4 = &data_142efcd90
                                
                                if (rcx_14 != 0)
                                    int32_t rax_21 = *(rcx_14 + 0x14)
                                    *(rcx_14 + 0x14) -= 1
                                    
                                    if (rax_21 == 1)
                                        int64_t* rcx_15 = rbx_4[1]
                                        
                                        if (rcx_15 != 0)
                                            sub_141011360(rcx_15, rax_21.b)
                                
                                rbx_4 = &rbx_4[2]
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        *(r14_2 + 0x30) = 0
            else
                void* rcx_12 = *(*(r14_2 + 0x38) + 0xe8)
                int64_t rbx_3 = *(rcx_12 + 0x40)
                
                if (rbx_3 u<= *(rcx_12 + 0x48))
                    goto label_141036b25
                
                if (rbx_3 u<= sub_141037da0(rcx_12))
                    goto label_141036b25
            
            sub_141027b40(**(r14_2 + 0x6d8))
        
        i_1 = not.d(1 << rbp_5.b) & i_3
        i_3 = i_1
        
        if (i_1 != 0)
            uint64_t rflags_4
            int32_t temp0_8
            temp0_8, rflags_4 = _bit_scan_forward(i_1)
            rbp_5 = temp0_8
            int32_t var_40_1 = rbp_5
        else
            rbp_5 = 0x20
    while (i_1 != 0)

jump(**arg1)
