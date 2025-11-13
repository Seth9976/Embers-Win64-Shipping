// 函数: sub_141028480
// 地址: 0x141028480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(*(arg1 + 0x28))
void* result = arg1
int64_t i_2 = i_1

if (i_1 s> 0)
    int64_t* r15_1 = nullptr
    int64_t i
    
    do
        int32_t r14_1 = 1 << (data_1439c7a34).b
        int64_t r12_1 = *(r15_1 + *(result + 0x20))
        int32_t j_1 = r14_1 - 1
        
        if (r14_1 != 1)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(j_1)
            int32_t rbp_1 = temp0_1
            int32_t arg_10 = rbp_1
            int32_t j
            
            do
                void* rbx_2 = *(r12_1 + (zx.q(rbp_1) << 3) + 0x9d8)
                void** var_70
                sub_141022330(**(rbx_2 + 0x6d8), &var_70, 0)
                var_70 = &data_142efcd90
                int64_t* var_68
                
                if (var_68 != 0)
                    int32_t rax_1 = *(var_68 + 0x14)
                    *(var_68 + 0x14) -= 1
                    
                    if (rax_1 == 1)
                        sub_141011360(var_68, rax_1.b)
                
                if (data_1439c79e0 != 0)
                    void** var_60
                    sub_141022330(**(rbx_2 + 0x720), &var_60, 0)
                    var_60 = &data_142efcd90
                    int64_t* var_58
                    
                    if (var_58 != 0)
                        int32_t rax_2 = *(var_58 + 0x14)
                        *(var_58 + 0x14) -= 1
                        
                        if (rax_2 == 1)
                            sub_141011360(var_58, rax_2.b)
                
                void* rsi_1 = *(rbx_2 + 0x38)
                
                if (*(rsi_1 + 0x28) != 0)
                    void* rdi_1 = *(rsi_1 + 0xe8)
                    sub_1410644f0(rdi_1, *(rsi_1 + 0xf4), *(rdi_1 + 0x38))
                    sub_141037da0(rdi_1)
                    *(rdi_1 + 0x38) += 1
                    sub_14106a230(*(rsi_1 + 0xe8), *(rdi_1 + 0x40))
                
                void* rsi_2 = *(rbx_2 + 0x40)
                
                if (*(rsi_2 + 0x28) != 0)
                    void* rdi_2 = *(rsi_2 + 0xe8)
                    sub_1410644f0(rdi_2, *(rsi_2 + 0xf4), *(rdi_2 + 0x38))
                    sub_141037da0(rdi_2)
                    *(rdi_2 + 0x38) += 1
                    sub_14106a230(*(rsi_2 + 0xe8), *(rdi_2 + 0x40))
                
                void* rdi_3 = *(rbx_2 + 0x48)
                
                if (*(rdi_3 + 0x28) != 0)
                    void* rbx_3 = *(rdi_3 + 0xe8)
                    sub_1410644f0(rbx_3, *(rdi_3 + 0xf4), *(rbx_3 + 0x38))
                    sub_141037da0(rbx_3)
                    *(rbx_3 + 0x38) += 1
                    sub_14106a230(*(rdi_3 + 0xe8), *(rbx_3 + 0x40))
                
                j = not.d(1 << rbp_1.b) & j_1
                j_1 = j
                
                if (j != 0)
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_forward(j)
                    rbp_1 = temp0_4
                    int32_t arg_20 = rbp_1
                else
                    rbp_1 = 0x20
            while (j != 0)
            i_1 = i_2
        
        result = arg1
        r15_1 = &r15_1[2]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
