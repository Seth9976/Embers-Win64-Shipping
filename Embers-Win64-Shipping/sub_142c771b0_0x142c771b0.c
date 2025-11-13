// 函数: sub_142c771b0
// 地址: 0x142c771b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = nullptr
int32_t rdi = 7
int32_t* r14 = *(*arg1 + 0x250)

if (*r14 != 0)
    goto label_142c77227

int32_t rax_1
rax_1, arg4 = sub_142c78180(arg1)
int32_t rsi_1 = rax_1

if (rax_1 == 0)
    **(*arg1 + 0x250) = 1
label_142c77227:
    int32_t rax_4
    int64_t r8_1
    int512_t zmm0
    int512_t zmm2
    rax_4, r8_1, zmm0, zmm2 = sub_142c77a00(arg1, &arg_8, arg3, arg4)
    rsi_1 = rax_4
    
    if (rax_4 == 0 || rax_4 == 0x51)
        void* rbp = arg_8
        
        if (rbp == 0)
            return 0
        
        int32_t rax_7 = *r14 - 1
        
        if (rax_7 u> 5)
            arg1[0xdc] = 0
        else
            switch (rax_7)
                case 0
                    if (*(rbp + 9) == 0)
                        rdi = 2
                        r14[6].w = *(rbp + 0x1c)
                    else
                        r14[7] = 0x4e
                        
                        if (*(rbp + 9) == 0x50001)
                            r14[7] = 9
                case 1
                    if (*(rbp + 9) != 0 || arg1[0xdc] u< 0x64)
                        r14[7] = 0x4e
                        rdi = 6
                    else
                        *(r14 + 0x1a) = *(rbp + 0x2a)
                        *(*arg1 + 0x178) = 0
                        void* rcx_3 = *arg1
                        
                        if (*(rcx_3 + 0x5e9) == 0)
                            *(rcx_3 + 0xd8) = *(rbp + 0x5c)
                            void* rcx_5 = *arg1
                            sub_142c6f180(rcx_5, *(rcx_5 + 0xd8))
                            void* r8_2 = *arg1
                            
                            if (*(r8_2 + 0x5d9) != 0)
                                *(r8_2 + 0x4efc) =
                                    ((*(rbp + 0x48) + -0x19db1ded53e8000) s/ 0x989680).d
                            
                            rdi = 3
                        else
                            *(rcx_3 + 0xd8) = *(rcx_3 + 0x4e68)
                            void* rcx_4 = *arg1
                            sub_142c6f270(rcx_4, *(rcx_4 + 0xd8))
                            rdi = 4
                case 2
                    if (*(rbp + 9) != 0 || arg1[0xdc] u< 0x32)
                        r14[7] = 0x38
                        rdi = 5
                    else
                        uint16_t rax_21 = sub_142c8ebc0(rbp + 0x2f)
                        uint16_t rax_22 = sub_142c8ebc0(rbp + 0x31)
                        
                        if (rax_21 == 0)
                        label_142c7743a:
                            void* rax_25 = *arg1
                            uint64_t rcx_16 = zx.q(rax_21)
                            *(rax_25 + 0xf8) += rcx_16
                            void* rax_26 = *arg1
                            *(rax_26 + 0x178) += rcx_16
                            void* rcx_17 = *arg1
                            zmm0 = sub_142c6f0c0(rcx_17, *(rcx_17 + 0xf8))
                            int32_t rax_27 = 3
                            
                            if (rax_21 u< 0x8000)
                                rax_27 = 5
                            
                            rdi = rax_27
                        else
                            uint64_t rax_23 = zx.q(rax_22)
                            uint64_t r9_1 = zx.q(rax_21)
                            
                            if (rax_23 + 4 + r9_1 u<= arg1[0xdc])
                                int32_t rax_24
                                rax_24, zmm0 = sub_142c645e0(arg1, 1, rbp + 4 + rax_23, r9_1, zmm2)
                                rsi_1 = rax_24
                                
                                if (rax_24 == 0)
                                    goto label_142c7743a
                                
                                r14[7] = rsi_1
                                rdi = 5
                            else
                                zmm0 = sub_142c64760(*arg1, "Invalid input packet", r8_1, zmm2)
                                rsi_1 = 0x38
                                r14[7] = rsi_1
                                rdi = 5
                case 3
                    if (*(rbp + 9) != 0 || arg1[0xdc] u< 0x2a)
                        r14[7] = 0x19
                        rdi = 5
                    else
                        uint16_t rax_28 = sub_142c8ebc0(rbp + 0x29)
                        void* rcx_19 = *arg1
                        uint64_t rdx_8 = zx.q(rax_28)
                        *(rcx_19 + 0xf8) += rdx_8
                        void* rax_29 = *arg1
                        *(rax_29 + 0x178) += rdx_8
                        void* rcx_20 = *arg1
                        zmm0 = sub_142c6f1b0(rcx_20, *(rcx_20 + 0xf8))
                        void* rcx_21 = *arg1
                        int32_t rdi_1
                        rdi_1.b = *(rcx_21 + 0xf8) s>= *(rcx_21 + 0xd8)
                        rdi = rdi_1 + 4
                case 4
                    rdi = 6
            
            arg1[0xdc] = 0
            
            if (rdi - 2 u<= 5)
                switch (rdi)
                    case 2
                        rsi_1 = sub_142c77c40(arg1)
                    case 3
                        rsi_1 = sub_142c77dd0(arg1)
                    case 4
                        rsi_1 = sub_142c78410(arg1, zmm0)
                    case 5
                        rsi_1 = sub_142c77af0(arg1)
                    case 6
                        rsi_1 = sub_142c78380(arg1, zmm0)
                    case 7
                        rsi_1 = r14[7]
                        *arg2 = 1
            
            if (rsi_1 != 0)
                sub_142c65340(arg1, 1)
                return zx.q(rsi_1)
            
            **(*arg1 + 0x250) = rdi
        
        return 0

sub_142c65340(arg1, 1)
return zx.q(rsi_1)
