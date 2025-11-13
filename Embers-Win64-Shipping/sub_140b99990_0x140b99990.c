// 函数: sub_140b99990
// 地址: 0x140b99990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
void* rbx = arg1[2]
void*** (* var_28)() = *arg1
int32_t rdi = var_28.d
int64_t result = sub_140b5b8a0(rdi, 0)
int32_t rbp = var_28:4.d
bool rdx = result.b == 0
result.b = rbp != 0

if ((rdx | result.b) != 0 && rsi != 0)
    result = zx.q(*(rbx + 0x1c0))
    
    if (result.d != *(rbx + 0x1ec))
        int32_t rax = sub_140b5ead0(rdi)
        void* r8_1 = rbx + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx + 0x200)) - 1) & sx.q(rax + rbp)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(rbx + 0x1b8)
            
            do
                int64_t rdx_4 = sx.q(result.d)
                int64_t r8_2 = rdx_4 * 3
                
                if (*(r9_1 + (r8_2 << 3)) == var_28)
                    if (result.d != 0xffffffff)
                        result = rdx_4 * 3
                        void* rdi_1 = r9_1 + (result << 3)
                        
                        if (rdi_1 != 0)
                            void*** (* rdi_2)() = *(rdi_1 + 8)
                            
                            if (rdi_2 != 0 && *(rdi_2 + 0x23c) == rsi)
                                char arg_8 = 0
                                arg2[1] = u"Setup Imports"
                                arg2[2] = *(rdi_2 + 0x58)
                                *(rdi_2 + 0xd0) = *arg2
                                *(rdi_2 + 0xd8) = *(rdi_2 + 0x58)
                                *(rdi_2 + 0xe0) = u"Setup Imports"
                                *(rdi_2 + 0xc4) = arg2[3].d
                                *(rdi_2 + 0xc8) = *(arg2 + 0x1c)
                                *(rdi_2 + 0xc9) = *(arg2 + 0x1d)
                                char* var_20_1 = &arg_8
                                var_28 = sub_140884c50
                                void* rax_9 = sub_140a756e0(&var_28, &data_14397f5f0)
                                int64_t rbx_1 = *(rax_9 + 0x40)
                                *(rax_9 + 0x40) = rdi_2
                                sub_140b9bd30(rdi_2)
                                sub_140bbab90(rdi_2)
                                sub_140ba2960(rdi_2)
                                var_28 = sub_140884c50
                                *(rdi_2 + 0xd8) = 0
                                char* var_20_2 = &arg_8
                                *(rdi_2 + 0xe0) = 0
                                arg_8 = 0
                                *(sub_140a756e0(&var_28, &data_14397f5f0) + 0x40) = rbx_1
                                int64_t* rcx_10 = *(rdi_2 + 0x1d8) + 0x340
                                *(rdi_2 + 0x238) = 5
                                var_28 = rdi_2
                                var_20_2.d = 0
                                var_20_2:4.d = 1
                                sub_140bb6ac0(rcx_10, &var_28)
                                return sub_140bb3ae0(*(rdi_2 + 0x1d8), rdi_2)
                    
                    break
                
                result = zx.q(*(r9_1 + (r8_2 << 3) + 0x10))
            while (result.d != 0xffffffff)

return result
