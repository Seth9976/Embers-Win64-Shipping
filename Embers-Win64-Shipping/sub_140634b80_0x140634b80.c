// 函数: sub_140634b80
// 地址: 0x140634b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
*arg2 = 0
int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rsi = &data_142d40450
arg1[1].d

if ((*(*rax + 0x70))() == 0)
    return nullptr

int64_t var_68 = 0
int32_t var_60_1 = 0

if (arg1[1].d != 0)
    rsi = *arg1

if (sub_140b1ef70(&var_68, rsi, 0) != 0)
    int64_t* var_78
    int64_t var_58
    sub_14062fa40(&var_78, sub_140596d10(&var_58, arg1))
    int64_t* rcx_3 = var_78
    
    if (rcx_3 != 0 && (**rcx_3)(rcx_3, var_68, sx.q(var_60_1)) != 0)
        int64_t* rcx_4 = var_78
        int512_t zmm0_1
        zmm0_1.o = zx.o(0)
        var_58 = 0
        int64_t r14_1 = 0
        int32_t var_4c
        __builtin_memset(&var_4c, 0, 0x1c)
        int128_t var_48
        char rax_9 = (*(*rcx_4 + 0x20))(zmm0_1, 0, 8, &var_48)
        uint64_t rsi_1
        
        if (rax_9 != 0)
            rsi_1 = var_48:8.q
        
        if (rax_9 == 0 || rsi_1 != sx.q(rsi_1.d))
            int64_t rcx_20 = var_48.q
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        else
            int64_t rdi_1 = var_48.q
            int32_t var_50_1 = rsi_1.d
            
            if (rsi_1 != 0)
                sub_1405da9e0(&var_58, rsi_1.d, 0)
                r14_1 = var_58
                memcpy(r14_1, rdi_1, rsi_1.d)
                rsi_1 = zx.q(var_50_1)
                rdi_1 = var_48.q
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            int64_t* rdi_2 = var_78
            int32_t rax_12 = (*(*rdi_2 + 0x30))(rdi_2)
            int64_t rdx_6 = *rdi_2
            void* result_1 = sub_1423bea40((*(rdx_6 + 0x28))(rdi_2, rdx_6), rax_12, 0x25, 0)
            result = result_1
            
            if (result_1 != 0)
                int64_t* rcx_11 = var_78
                *arg2 = 1
                int32_t rax_15 = (*(*rcx_11 + 0x28))(rcx_11)
                int64_t* rcx_12 = var_78
                *arg3 = rax_15
                *arg4 = (*(*rcx_12 + 0x30))(rcx_12)
                memcpy(sub_140bcb6b0(**(*(result + 0xd0) + 0x18) + 0x10, 2), r14_1, rsi_1.d)
                sub_140bd1d40(**(*(result + 0xd0) + 0x18) + 0x10)
                (*(*result + 0x2f8))(result)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
    
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp1_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_3 = *var_70
                (*(r8_3 + 8))(var_70, 1, r8_3)

int64_t rcx_23 = var_68

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

return result
