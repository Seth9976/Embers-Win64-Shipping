// 函数: sub_140370bf0
// 地址: 0x140370bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int32_t rdi_5

while (true)
    if (*(rsi + 0x9c) u> 0x105)
    label_140370c5a:
        arg1.b = rsi[0x10].b
        int32_t rcx_1 = *(rsi + 0x94)
        uint64_t rdx_3 =
            (zx.q(*(rsi[0xa] + zx.q(rcx_1 + 2))) ^ zx.q(rsi[0xe].d << arg1.b)) & zx.q(*(rsi + 0x7c))
        rsi[0xe].d = rdx_3.d
        uint32_t rdx_4 = zx.d(*(rsi[0xd] + (rdx_3 << 1)))
        *(rsi[0xc] + ((zx.q(rcx_1) & zx.q(*(rsi + 0x4c))) << 1)) = rdx_4.w
        *(rsi[0xd] + (zx.q(rsi[0xe].d) << 1)) = *(rsi + 0x94)
        int32_t rax_8
        
        if (rdx_4 != 0 && *(rsi + 0x94) - rdx_4 u<= *(rsi + 0x44) - 0x106)
            rax_8 = sub_140371760(rsi, rdx_4)
            rsi[0x11].d = rax_8
            
            if (rax_8 u>= 3)
                goto label_140370ccf
            
            goto label_140370e71
        
    label_140370cc0:
        rax_8 = rsi[0x11].d
        uint64_t r8_1
        int32_t rax_14
        
        if (rax_8 u< 3)
        label_140370e71:
            uint64_t rax_16 = zx.q(*(rsi[0xa] + zx.q(*(rsi + 0x94))))
            *(rsi[0x2df] + (zx.q(*(rsi + 0x16f4)) << 1)) = 0
            int64_t rcx_29 = rsi[0x2dd]
            uint64_t rdx_14 = zx.q(*(rsi + 0x16f4))
            *(rsi + 0x16f4) = (rdx_14 + 1).d
            *(rcx_29 + rdx_14) = rax_16.b
            *(rsi + (rax_16 << 2) + 0xbc) += 1
            rax_14.b = *(rsi + 0x16f4) == rsi[0x2de].d - 1
            *(rsi + 0x9c) -= 1
        label_140370ecc:
            r8_1 = zx.q(*(rsi + 0x94) + 1)
            *(rsi + 0x94) = r8_1.d
            
            if (rax_14 == 0)
                continue
        else
        label_140370ccf:
            rax_8.b -= 3
            int16_t rcx_7 = (*(rsi + 0x94)).w - (rsi[0x13].d).w
            *(rsi[0x2df] + (zx.q(*(rsi + 0x16f4)) << 1)) = rcx_7
            int64_t rdx_6 = rsi[0x2dd]
            uint64_t rbp_5 = zx.q(*(rsi + 0x16f4))
            *(rsi + 0x16f4) = (rbp_5 + 1).d
            *(rdx_6 + rbp_5) = rax_8.b
            uint64_t rax_10 = zx.q(*(zx.q(rax_8.b) + &data_1435fb8f0))
            *(rsi + (rax_10 << 2) + 0x4c0) += 1
            uint32_t rax_11 = zx.d(rcx_7 - 1)
            uint32_t rcx_11 = (rax_11 u>> 7) + 0x100
            
            if (rax_11 u< 0x100)
                rcx_11 = rax_11
            
            uint64_t rax_13 = zx.q((&data_1435fb6f0)[zx.q(rcx_11)])
            *(rsi + (rax_13 << 2) + 0x9b0) += 1
            rax_14.b = *(rsi + 0x16f4) == rsi[0x2de].d - 1
            int32_t rdx_7 = rsi[0x11].d
            int32_t rcx_15 = *(rsi + 0x9c) - rdx_7
            *(rsi + 0x9c) = rcx_15
            
            if (rcx_15 u>= 3 && rdx_7 u<= rsi[0x15].d)
                rsi[0x11].d = rdx_7 - 1
                
                do
                    int32_t rdx_9 = *(rsi + 0x94)
                    *(rsi + 0x94) = rdx_9 + 1
                    uint64_t rcx_20 = (zx.q(*(rsi[0xa] + zx.q(rdx_9 + 3)))
                        ^ zx.q(rsi[0xe].d << rsi[0x10].b)) & zx.q(*(rsi + 0x7c))
                    rsi[0xe].d = rcx_20.d
                    *(rsi[0xc] + ((zx.q(rdx_9 + 1) & zx.q(*(rsi + 0x4c))) << 1)) =
                        *(rsi[0xd] + (rcx_20 << 1))
                    *(rsi[0xd] + (zx.q(rsi[0xe].d) << 1)) = *(rsi + 0x94)
                    rsi[0x11].d -= 1
                while (rsi[0x11].d != 1)
                
                goto label_140370ecc
            
            int32_t rbp_9 = *(rsi + 0x94)
            r8_1 = zx.q(rdx_7 + rbp_9)
            *(rsi + 0x94) = r8_1.d
            rsi[0x11].d = 0
            int64_t rbx_4 = rsi[0xa]
            uint32_t rdi_2 = zx.d(*(rbx_4 + r8_1))
            rsi[0xe].d = rdi_2
            rcx_15.b = rsi[0x10].b
            rsi[0xe].d =
                (zx.d(*(rbx_4 + zx.q(rdx_7 + rbp_9 + 1))) ^ rdi_2 << rcx_15.b) & *(rsi + 0x7c)
            
            if (rax_14 == 0)
                continue
        uint64_t rdx_15 = zx.q(*(rsi + 0x84))
        char* rdx_16
        
        if (rdx_15.d s< 0)
            rdx_16 = nullptr
        else
            rdx_16 = rdx_15 + rsi[0xa]
        
        sub_140375130(rsi, rdx_16, r8_1.d - rdx_15.d, 0)
        *(rsi + 0x84) = *(rsi + 0x94)
        void* rbp_11 = *rsi
        uint64_t rbx_5 = *(rbp_11 + 0x28)
        sub_140374f60(rbx_5)
        int32_t r14_1 = *(rbx_5 + 0x28)
        int32_t rax_18 = *(rbp_11 + 0x18)
        
        if (r14_1 u> rax_18)
            r14_1 = rax_18
        
        if (r14_1 != 0)
            uint64_t rdi_4 = zx.q(r14_1)
            memcpy(*(rbp_11 + 0x10), *(rbx_5 + 0x20), rdi_4.d)
            *(rbp_11 + 0x10) += rdi_4
            *(rbx_5 + 0x20) += rdi_4
            *(rbp_11 + 0x1c) += r14_1
            *(rbp_11 + 0x18) -= r14_1
            int32_t temp1_1 = *(rbx_5 + 0x28)
            *(rbx_5 + 0x28) -= r14_1
            
            if (temp1_1 == r14_1)
                *(rbx_5 + 0x20) = *(rbx_5 + 0x10)
        
        if (*(*rsi + 0x18) != 0)
            continue
    else
        sub_14036f140(rsi)
        int32_t rax_1 = *(rsi + 0x9c)
        
        if (arg2 != 0 || rax_1 u>= 0x106)
            if (rax_1 != 0)
                if (rax_1 u< 3)
                    goto label_140370cc0
                
                goto label_140370c5a
            
            int32_t r8_5 = *(rsi + 0x94)
            int32_t rax_22 = 2
            
            if (r8_5 u< 2)
                rax_22 = r8_5
            
            *(rsi + 0x170c) = rax_22
            
            if (arg2 != 4)
                if (*(rsi + 0x16f4) != 0)
                    uint64_t rdx_20 = zx.q(*(rsi + 0x84))
                    char* rdx_21
                    
                    if (rdx_20.d s< 0)
                        rdx_21 = nullptr
                    else
                        rdx_21 = rdx_20 + rsi[0xa]
                    
                    rdi_5 = 0
                    sub_140375130(rsi, rdx_21, r8_5 - rdx_20.d, 0)
                    *(rsi + 0x84) = *(rsi + 0x94)
                    void* rbp_13 = *rsi
                    void* r15_1 = *(rbp_13 + 0x28)
                    sub_140374f60(r15_1)
                    int32_t rbx_7 = *(r15_1 + 0x28)
                    int32_t rax_28 = *(rbp_13 + 0x18)
                    
                    if (rbx_7 u> rax_28)
                        rbx_7 = rax_28
                    
                    if (rbx_7 != 0)
                        uint64_t r14_3 = zx.q(rbx_7)
                        memcpy(*(rbp_13 + 0x10), *(r15_1 + 0x20), r14_3.d)
                        *(rbp_13 + 0x10) += r14_3
                        *(r15_1 + 0x20) += r14_3
                        *(rbp_13 + 0x1c) += rbx_7
                        *(rbp_13 + 0x18) -= rbx_7
                        int32_t temp4_1 = *(r15_1 + 0x28)
                        *(r15_1 + 0x28) -= rbx_7
                        
                        if (temp4_1 == rbx_7)
                            *(r15_1 + 0x20) = *(r15_1 + 0x10)
                
                if (*(rsi + 0x16f4) == 0 || *(*rsi + 0x18) != 0)
                    rdi_5 = 1
            else
                uint64_t rdx_18 = zx.q(*(rsi + 0x84))
                char* rdx_19
                
                if (rdx_18.d s< 0)
                    rdx_19 = nullptr
                else
                    rdx_19 = rdx_18 + rsi[0xa]
                
                sub_140375130(rsi, rdx_19, r8_5 - rdx_18.d, 1)
                *(rsi + 0x84) = *(rsi + 0x94)
                void* rbp_12 = *rsi
                void* rdi_6 = *(rbp_12 + 0x28)
                sub_140374f60(rdi_6)
                int32_t rbx_6 = *(rdi_6 + 0x28)
                int32_t rax_24 = *(rbp_12 + 0x18)
                
                if (rbx_6 u> rax_24)
                    rbx_6 = rax_24
                
                if (rbx_6 != 0)
                    uint64_t r14_2 = zx.q(rbx_6)
                    memcpy(*(rbp_12 + 0x10), *(rdi_6 + 0x20), r14_2.d)
                    *(rbp_12 + 0x10) += r14_2
                    *(rdi_6 + 0x20) += r14_2
                    *(rbp_12 + 0x1c) += rbx_6
                    *(rbp_12 + 0x18) -= rbx_6
                    int32_t temp3_1 = *(rdi_6 + 0x28)
                    *(rdi_6 + 0x28) -= rbx_6
                    
                    if (temp3_1 == rbx_6)
                        *(rdi_6 + 0x20) = *(rdi_6 + 0x10)
                
                rdi_5 = sbb.d(3, 0, *(*rsi + 0x18) u< 1)
            
            break
    
    rdi_5 = 0
    break

return zx.q(rdi_5)
