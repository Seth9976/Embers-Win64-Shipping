// 函数: sub_1425e89a0
// 地址: 0x1425e89a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x28)) ^ zx.q(*(arg1 + 0x78))

if (((*(arg2 + 0x34) ^ *(arg1 + 0x84)) | (*(arg2 + 0x30) ^ *(arg1 + 0x80))
        | (*(arg2 + 0x2c) ^ *(arg1 + 0x7c)) | result.d) == 0)
    if (*(arg1 + 0xc0) != 0)
        int64_t* rcx = *arg3
        int64_t rax_6 = (*(*rcx + 0x48))(rcx)
        int32_t r8_4 = (*(arg1 + 0x24) ^ *(rax_6 + 0xc)) | (*(arg1 + 0x20) ^ *(rax_6 + 8))
            | (*(arg1 + 0x1c) ^ *(rax_6 + 4)) | (*(arg1 + 0x18) ^ *rax_6)
        
        if (r8_4 != 0)
            int64_t rax_9 = j_sub_140a82f30(1)
            int64_t* rcx_5 = *arg3
            void* r12_1 = *(arg1 + 0xc0)
            int64_t rdx_1 = *rcx_5
            int128_t* rax_10 = (*(rdx_1 + 0x48))(rcx_5, rdx_1)
            int32_t var_60_1 = 1
            int128_t* var_68 = nullptr
            sub_1405a4f90(&var_68)
            int64_t rbx_2 = sx.q(var_60_1)
            int128_t* rsi_1 = var_68
            *rsi_1 = *rax_10
            uint64_t var_58 = 0
            int32_t var_50_1 = rbx_2.d
            int32_t var_4c
            
            if (rbx_2.d != 0)
                sub_1405a4be0(&var_58, rbx_2.d, 0)
                memcpy(var_58, rsi_1, (rbx_2 << 4).d)
            else
                __builtin_memset(&var_4c, 0, 0x14)
            int64_t arg_10 = 0
            int64_t arg_8 = 0x2bca2875f4373fff
            int64_t* var_70_1 = &arg_8
            int64_t* var_78_1 = &arg_10
            int128_t var_48
            sub_14200dcd0(r12_1, rax_9, sub_1425e1c40(), 0, &var_48, &var_58)
            int64_t* rbx_3 = var_48:8.q
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rsi_2 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_2))
                
                rsi_1 = var_68
            
            uint64_t rcx_12 = var_58
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            sub_140a74f90(rsi_1)
    
    *(arg1 + 0x28) = *arg2
    int64_t* rcx_14 = *arg3
    *(arg1 + 0x18) = *(*(*rcx_14 + 0x48))(rcx_14)
    sub_140597df0(arg1 + 0x30, &arg2[8])
    sub_140597df0(arg1 + 0x50, &arg2[0x18])
    sub_140597df0(arg1 + 0x88, &arg2[0x38])
    sub_140597df0(arg1 + 0xe0, &arg2[0x48])
    void arg_20
    result = sub_140b29d90(&arg_20)
    *(arg1 + 0xa8) = *result

return result
