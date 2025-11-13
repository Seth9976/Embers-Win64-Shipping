// 函数: sub_140b98470
// 地址: 0x140b98470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
void* rbx = arg1[2]
void*** (* var_18)() = *arg1
int32_t rdi = var_18.d
bool rdx = sub_140b5b8a0(rdi, 0).b == 0
int64_t result
result.b = var_18:4.d != 0

if ((rdx | result.b) != 0 && rbp != 0)
    result = zx.q(*(rbx + 0x1c0))
    
    if (result.d != *(rbx + 0x1ec))
        int32_t rax_1 = sub_140b5ead0(rdi) + var_18:4.d
        void* r8_1 = rbx + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx + 0x200)) - 1) & sx.q(rax_1)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(rbx + 0x1b8)
            
            do
                int64_t rdx_4 = sx.q(result.d)
                int64_t r8_2 = rdx_4 * 3
                
                if (*(r9_1 + (r8_2 << 3)) == var_18)
                    if (result.d != 0xffffffff)
                        result = rdx_4 * 3
                        void* rdi_1 = r9_1 + (result << 3)
                        
                        if (rdi_1 != 0)
                            int32_t* rdi_2 = *(rdi_1 + 8)
                            
                            if (rdi_2 != 0 && rdi_2[0x8f] == rbp)
                                arg2[1] = u"ProcessImportsAndExports"
                                arg2[2] = *(rdi_2 + 0x58)
                                bool cond:0_1 = *(rdi_2 + 0x4fa) != 0
                                *(rdi_2 + 0xd0) = *arg2
                                *(rdi_2 + 0xd8) = *(rdi_2 + 0x58)
                                *(rdi_2 + 0xe0) = u"ProcessImportsAndExports"
                                rdi_2[0x31] = arg2[3].d
                                rdi_2[0x32].b = *(arg2 + 0x1c)
                                result = zx.q(*(arg2 + 0x1d))
                                *(rdi_2 + 0xc9) = result.b
                                
                                if (not(cond:0_1))
                                    char arg_8 = 0
                                    char* var_10_1 = &arg_8
                                    var_18 = sub_140884c50
                                    void* rax_8 = sub_140a756e0(&var_18, &data_14397f5f0)
                                    int64_t rbx_1 = *(rax_8 + 0x40)
                                    *(rax_8 + 0x40) = rdi_2
                                    sub_140b9bd30(rdi_2)
                                    sub_140bb2250(rdi_2)
                                    int64_t rdx_5
                                    rdx_5.b = 1
                                    rdi_2[0x13e].b = 0
                                    sub_140b9d980(rdi_2)
                                    sub_140ba2960(rdi_2)
                                    var_18 = sub_140884c50
                                    *(rdi_2 + 0xd8) = 0
                                    *(rdi_2 + 0xe0) = 0
                                    arg_8 = 0
                                    char* var_10_2 = &arg_8
                                    result = sub_140a756e0(&var_18, &data_14397f5f0)
                                    *(result + 0x40) = rbx_1
                    
                    break
                
                result = zx.q(*(r9_1 + (r8_2 << 3) + 0x10))
            while (result.d != 0xffffffff)

return result
