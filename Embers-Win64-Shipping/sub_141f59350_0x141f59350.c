// 函数: sub_141f59350
// 地址: 0x141f59350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ede5c0(arg1)
uint8_t result = sub_141f4ac00(arg1)
char rcx_1 = 0

if (result == 0)
    rcx_1 = 1

if ((*(arg1 + 0x14c) & 0x20) != 0 && rcx_1 == 0)
    result = sub_141f4ac00(arg1)
    
    if (result != 0)
        result = sub_141f4ac80(arg1)
        
        if (result != 0 && (arg1[0x11].b & 1) != 0)
            void* rax = arg1[4]
            
            if (rax != 0)
                result = (*(rax + 8) u>> 4).b
            
            if (rax == 0 || (result & 1) == 0)
                char* rax_2 = j_sub_140a82f30(0xf0)
                int64_t rbp_1 = 0
                char* rsi_1 = rax_2
                int64_t var_28
                
                if (rax_2 == 0)
                    rsi_1 = nullptr
                else
                    *rax_2 = 0
                    float zmm3_1 = sub_14244ba40(&rax_2[0x10], arg1)
                    int128_t zmm0_1 = *(arg1 + 0x26c)
                    var_28 = 0
                    *(rsi_1 + 0xbc) = zmm0_1
                    *(rsi_1 + 0xcc) = *(arg1 + 0x27c)
                    *(rsi_1 + 0xd0) = arg1[0x50].d
                    *(rsi_1 + 0xd4) = arg1[0x52].w
                    *(rsi_1 + 0xd8) = *(arg1 + 0x294)
                    *(rsi_1 + 0xe8) = *(arg1 + 0x2a4)
                    int32_t var_20_1 = 0x3f800000
                    int32_t var_18[0x4]
                    *(rsi_1 + 0xac) = *sub_14244e470(rsi_1 + 0x10, &var_18, &var_28, zmm3_1)
                
                void* rax_6 = arg1[0x15]
                arg1[0x51] = rsi_1
                
                if (rax_6 == 0)
                    rax_6 = sub_141ee69e0(arg1)
                
                void* rcx_8 = arg1[0x14]
                int64_t* rsi_2 = *(rax_6 + 0x1b0)
                
                if (rcx_8 != 0)
                    void* rax_7 = sub_141dc9840(rcx_8)
                    
                    if (rax_7 != 0)
                        void* rcx_9 = *(rax_7 + 0xb8)
                        
                        if (rcx_9 != 0)
                            void* rax_8 = sub_1420f98f0(rcx_9)
                            void* rcx_10
                            
                            if (rax_8 != 0)
                                rcx_10 = *(rax_8 + 0x1e0)
                            
                            if (rax_8 != 0 && rcx_10 != 0)
                                var_28.o = *(arg1 + 0x2ac)
                                rbp_1 = sub_1420fc030(rcx_10, &var_28)
                            else
                                rcx_10 = *(rax_7 + 0x1e0)
                                
                                if (rcx_10 != 0)
                                    var_28.o = *(arg1 + 0x2ac)
                                    rbp_1 = sub_1420fc030(rcx_10, &var_28)
                
                void* rax_11
                int64_t r8_2
                
                if (arg1[0x15] == 0)
                    rax_11, r8_2 = sub_141ee69e0(arg1)
                
                char rax_14
                
                if (arg1[0x15] != 0 || rax_11 != 0)
                    void* rax_12 = arg1[0x15]
                    
                    if (rax_12 == 0)
                        rax_12 = sub_141ee69e0(arg1)
                    
                    int64_t* rbx_2 = *(rax_12 + 0x1b0)
                    rax_14, r8_2 = (*(*rbx_2 + 0x78))(rbx_2)
                    
                    if (rax_14 != 0)
                        rax_14 = 1
                    else
                        rax_14, r8_2 = (*(*rbx_2 + 0x80))(rbx_2)
                        
                        if (rax_14 != 0)
                            rax_14 = 1
                
                if ((arg1[0x15] == 0 && rax_11 == 0) || rbp_1 != 0 || rax_14 == 0)
                    r8_2.b = 1
                else
                    r8_2.b = 0
                
                return (*(*rsi_2 + 0x1b8))(rsi_2, arg1[0x51], r8_2)

return result
