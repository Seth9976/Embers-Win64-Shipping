// 函数: sub_1403710e0
// 地址: 0x1403710e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int32_t rdi_7

while (true)
    int32_t rax_7
    
    if (*(rsi + 0x9c) u> 0x105)
    label_14037115e:
        arg1.b = rsi[0x10].b
        int32_t rcx_1 = *(rsi + 0x94)
        uint64_t rdx_3 =
            (zx.q(*(rsi[0xa] + zx.q(rcx_1 + 2))) ^ zx.q(rsi[0xe].d << arg1.b)) & zx.q(*(rsi + 0x7c))
        rsi[0xe].d = rdx_3.d
        uint32_t rdx_4 = zx.d(*(rsi[0xd] + (rdx_3 << 1)))
        *(rsi[0xc] + ((zx.q(rcx_1) & zx.q(*(rsi + 0x4c))) << 1)) = rdx_4.w
        *(rsi[0xd] + (zx.q(rsi[0xe].d) << 1)) = *(rsi + 0x94)
        arg1 = zx.q(rsi[0x11].d)
        rsi[0x14].d = arg1.d
        *(rsi + 0x8c) = rsi[0x13].d
        rsi[0x11].d = 2
        rax_7 = 2
        
        if (rdx_4 == 0)
            goto label_140371267
        
        if (arg1.d u< rsi[0x15].d && *(rsi + 0x94) - rdx_4 u<= *(rsi + 0x44) - 0x106)
            rax_7 = sub_140371760(rsi, rdx_4)
            rsi[0x11].d = rax_7
            
            if (rax_7 u<= 5)
                if (rsi[0x16].d == 1)
                    rsi[0x11].d = 2
                    rax_7 = 2
                else if (rax_7 == 3)
                    rax_7 = 3
                    
                    if (*(rsi + 0x94) - rsi[0x13].d u>= 0x1001)
                        rsi[0x11].d = 2
                        rax_7 = 2
        
        arg1 = zx.q(rsi[0x14].d)
        
        if (arg1.d u>= 3 && rax_7 u<= arg1.d)
            goto label_14037127e
        
        goto label_14037148f
    
    sub_14036f140(rsi)
    int32_t rax_1 = *(rsi + 0x9c)
    
    if (arg2 != 0 || rax_1 u>= 0x106)
        if (rax_1 == 0)
            if (rsi[0x12].d != 0)
                uint64_t rax_34 = zx.q(*(rsi[0xa] + zx.q(*(rsi + 0x94) - 1)))
                *(rsi[0x2df] + (zx.q(*(rsi + 0x16f4)) << 1)) = 0
                int64_t rcx_32 = rsi[0x2dd]
                uint64_t rdx_19 = zx.q(*(rsi + 0x16f4))
                *(rsi + 0x16f4) = (rdx_19 + 1).d
                *(rcx_32 + rdx_19) = rax_34.b
                *(rsi + (rax_34 << 2) + 0xbc) += 1
                rsi[0x12].d = 0
            
            int32_t r8_9 = *(rsi + 0x94)
            int32_t rax_35 = 2
            
            if (r8_9 u< 2)
                rax_35 = r8_9
            
            *(rsi + 0x170c) = rax_35
            
            if (arg2 != 4)
                if (*(rsi + 0x16f4) != 0)
                    uint64_t rdx_22 = zx.q(*(rsi + 0x84))
                    char* rdx_23
                    
                    if (rdx_22.d s< 0)
                        rdx_23 = nullptr
                    else
                        rdx_23 = rdx_22 + rsi[0xa]
                    
                    rdi_7 = 0
                    sub_140375130(rsi, rdx_23, r8_9 - rdx_22.d, 0)
                    *(rsi + 0x84) = *(rsi + 0x94)
                    void* rbp_17 = *rsi
                    void* r15_1 = *(rbp_17 + 0x28)
                    sub_140374f60(r15_1)
                    int32_t rbx_8 = *(r15_1 + 0x28)
                    int32_t rax_41 = *(rbp_17 + 0x18)
                    
                    if (rbx_8 u> rax_41)
                        rbx_8 = rax_41
                    
                    if (rbx_8 != 0)
                        uint64_t r14_4 = zx.q(rbx_8)
                        memcpy(*(rbp_17 + 0x10), *(r15_1 + 0x20), r14_4.d)
                        *(rbp_17 + 0x10) += r14_4
                        *(r15_1 + 0x20) += r14_4
                        *(rbp_17 + 0x1c) += rbx_8
                        *(rbp_17 + 0x18) -= rbx_8
                        int32_t temp4_1 = *(r15_1 + 0x28)
                        *(r15_1 + 0x28) -= rbx_8
                        
                        if (temp4_1 == rbx_8)
                            *(r15_1 + 0x20) = *(r15_1 + 0x10)
                
                if (*(rsi + 0x16f4) == 0 || *(*rsi + 0x18) != 0)
                    rdi_7 = 1
            else
                uint64_t rdx_20 = zx.q(*(rsi + 0x84))
                char* rdx_21
                
                if (rdx_20.d s< 0)
                    rdx_21 = nullptr
                else
                    rdx_21 = rdx_20 + rsi[0xa]
                
                sub_140375130(rsi, rdx_21, r8_9 - rdx_20.d, 1)
                *(rsi + 0x84) = *(rsi + 0x94)
                void* rbp_16 = *rsi
                void* rdi_8 = *(rbp_16 + 0x28)
                sub_140374f60(rdi_8)
                int32_t rbx_7 = *(rdi_8 + 0x28)
                int32_t rax_37 = *(rbp_16 + 0x18)
                
                if (rbx_7 u> rax_37)
                    rbx_7 = rax_37
                
                if (rbx_7 != 0)
                    uint64_t r14_3 = zx.q(rbx_7)
                    memcpy(*(rbp_16 + 0x10), *(rdi_8 + 0x20), r14_3.d)
                    *(rbp_16 + 0x10) += r14_3
                    *(rdi_8 + 0x20) += r14_3
                    *(rbp_16 + 0x1c) += rbx_7
                    *(rbp_16 + 0x18) -= rbx_7
                    int32_t temp3_1 = *(rdi_8 + 0x28)
                    *(rdi_8 + 0x28) -= rbx_7
                    
                    if (temp3_1 == rbx_7)
                        *(rdi_8 + 0x20) = *(rdi_8 + 0x10)
                
                rdi_7 = sbb.d(3, 0, *(*rsi + 0x18) u< 1)
            
            break
        
        if (rax_1 u> 2)
            goto label_14037115e
        
        arg1 = zx.q(rsi[0x11].d)
        rsi[0x14].d = arg1.d
        *(rsi + 0x8c) = rsi[0x13].d
        rsi[0x11].d = 2
        rax_7 = 2
    label_140371267:
        
        if (arg1.d u< 3 || rax_7 u> arg1.d)
        label_14037148f:
            
            if (rsi[0x12].d == 0)
                rsi[0x12].d = 1
                *(rsi + 0x94) += 1
                *(rsi + 0x9c) -= 1
                continue
            else
                uint64_t rax_25 = zx.q(*(rsi[0xa] + zx.q(*(rsi + 0x94) - 1)))
                *(rsi[0x2df] + (zx.q(*(rsi + 0x16f4)) << 1)) = 0
                arg1 = rsi[0x2dd]
                uint64_t rdx_14 = zx.q(*(rsi + 0x16f4))
                *(rsi + 0x16f4) = (rdx_14 + 1).d
                *(arg1 + rdx_14) = rax_25.b
                *(rsi + (rax_25 << 2) + 0xbc) += 1
                
                if (*(rsi + 0x16f4) == rsi[0x2de].d - 1)
                    uint64_t rdx_15 = zx.q(*(rsi + 0x84))
                    char* rdx_16
                    
                    if (rdx_15.d s< 0)
                        rdx_16 = nullptr
                    else
                        rdx_16 = rdx_15 + rsi[0xa]
                    
                    sub_140375130(rsi, rdx_16, *(rsi + 0x94) - rdx_15.d, 0)
                    *(rsi + 0x84) = *(rsi + 0x94)
                    void* rbp_14 = *rsi
                    uint64_t rbx_6 = *(rbp_14 + 0x28)
                    sub_140374f60(rbx_6)
                    int32_t rdi_6 = *(rbx_6 + 0x28)
                    int32_t rax_29 = *(rbp_14 + 0x18)
                    
                    if (rdi_6 u> rax_29)
                        rdi_6 = rax_29
                    
                    if (rdi_6 != 0)
                        uint64_t r14_2 = zx.q(rdi_6)
                        memcpy(*(rbp_14 + 0x10), *(rbx_6 + 0x20), r14_2.d)
                        *(rbp_14 + 0x10) += r14_2
                        *(rbx_6 + 0x20) += r14_2
                        *(rbp_14 + 0x1c) += rdi_6
                        *(rbp_14 + 0x18) -= rdi_6
                        int32_t temp1_1 = *(rbx_6 + 0x28)
                        *(rbx_6 + 0x28) -= rdi_6
                        
                        if (temp1_1 == rdi_6)
                            *(rbx_6 + 0x20) = *(rbx_6 + 0x10)
                
                *(rsi + 0x94) += 1
                *(rsi + 0x9c) -= 1
                
                if (*(*rsi + 0x18) != 0)
                    continue
        else
        label_14037127e:
            int32_t rbx_2 = *(rsi + 0x94)
            int32_t r8_1 = *(rsi + 0x9c)
            arg1.b -= 3
            int16_t rax_10 = (not.d(*(rsi + 0x8c))).w
            *(rsi[0x2df] + (zx.q(*(rsi + 0x16f4)) << 1)) = rbx_2.w + rax_10
            char* rdx_7 = rsi[0x2dd]
            uint64_t rbp_6 = zx.q(*(rsi + 0x16f4))
            *(rsi + 0x16f4) = (rbp_6 + 1).d
            rdx_7[rbp_6] = arg1.b
            uint64_t rcx_8 = zx.q(*(zx.q(arg1.b) + &data_1435fb8f0))
            *(rsi + (rcx_8 << 2) + 0x4c0) += 1
            uint32_t rax_13 = zx.d(rax_10 + rbx_2.w - 1)
            uint32_t rcx_11 = (rax_13 u>> 7) + 0x100
            
            if (rax_13 u< 0x100)
                rcx_11 = rax_13
            
            uint64_t rax_15 = zx.q((&data_1435fb6f0)[zx.q(rcx_11)])
            *(rsi + (rax_15 << 2) + 0x9b0) += 1
            int32_t r9_1 = *(rsi + 0x16f4)
            int32_t rdx_8 = rsi[0x2de].d
            int32_t rcx_12 = rsi[0x14].d
            *(rsi + 0x9c) += 1 - rcx_12
            arg1 = zx.q(rcx_12 - 2)
            rsi[0x14].d = arg1.d
            int32_t i
            
            do
                int32_t rbp_8 = *(rsi + 0x94)
                *(rsi + 0x94) = rbp_8 + 1
                
                if (rbp_8 + 1 u<= rbx_2 + r8_1 - 3)
                    uint64_t rcx_17 = (zx.q(*(rsi[0xa] + zx.q(rbp_8 + 3)))
                        ^ zx.q(rsi[0xe].d << rsi[0x10].b)) & zx.q(*(rsi + 0x7c))
                    rsi[0xe].d = rcx_17.d
                    *(rsi[0xc] + ((zx.q(rbp_8 + 1) & zx.q(*(rsi + 0x4c))) << 1)) =
                        *(rsi[0xd] + (rcx_17 << 1))
                    *(rsi[0xd] + (zx.q(rsi[0xe].d) << 1)) = *(rsi + 0x94)
                    arg1 = zx.q(rsi[0x14].d)
                
                i = arg1.d
                arg1 = zx.q(arg1.d - 1)
                rsi[0x14].d = arg1.d
            while (i != 1)
            int32_t r8_3 = *(rsi + 0x94) + 1
            rsi[0x12].d = 0
            rsi[0x11].d = 2
            *(rsi + 0x94) = r8_3
            
            if (r9_1 != rdx_8 - 1)
                continue
            else
                uint64_t rdx_10 = zx.q(*(rsi + 0x84))
                char* rdx_11
                
                if (rdx_10.d s< 0)
                    rdx_11 = nullptr
                else
                    rdx_11 = rdx_10 + rsi[0xa]
                
                sub_140375130(rsi, rdx_11, r8_3 - rdx_10.d, 0)
                *(rsi + 0x84) = *(rsi + 0x94)
                void* rbp_12 = *rsi
                uint64_t rbx_5 = *(rbp_12 + 0x28)
                sub_140374f60(rbx_5)
                int32_t r14_1 = *(rbx_5 + 0x28)
                int32_t rax_21 = *(rbp_12 + 0x18)
                
                if (r14_1 u> rax_21)
                    r14_1 = rax_21
                
                if (r14_1 != 0)
                    uint64_t rdi_5 = zx.q(r14_1)
                    memcpy(*(rbp_12 + 0x10), *(rbx_5 + 0x20), rdi_5.d)
                    *(rbp_12 + 0x10) += rdi_5
                    *(rbx_5 + 0x20) += rdi_5
                    *(rbp_12 + 0x1c) += r14_1
                    *(rbp_12 + 0x18) -= r14_1
                    int32_t temp5_1 = *(rbx_5 + 0x28)
                    *(rbx_5 + 0x28) -= r14_1
                    
                    if (temp5_1 == r14_1)
                        *(rbx_5 + 0x20) = *(rbx_5 + 0x10)
                
                if (*(*rsi + 0x18) != 0)
                    continue
    
    rdi_7 = 0
    break

return zx.q(rdi_7)
