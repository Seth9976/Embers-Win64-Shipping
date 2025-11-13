// 函数: sub_14095b880
// 地址: 0x14095b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char result = -0x20
uint128_t zmm1 = zx.o(0)
int32_t var_5c = 0
void** const var_48 = &data_142e259e0
int64_t var_30 = 0
int64_t var_28 = 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x41)
void** const var_a8 = &data_142e259e0

if (*(arg1 + 0x48) s> 0)
    int64_t rsi_1 = 0
    uint64_t var_80
    uint64_t var_70
    uint128_t var_40_1
    
    while (true)
        void* r14_1 = *(arg1 + 0x40)
        int64_t rax = *(rsi_1 + r14_1 + 8)
        void* rax_1 = *(rsi_1 + r14_1 + 0x10)
        void* var_50_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        int64_t var_58_1
        var_58_1.o = zmm1
        int64_t* rbx_1 = _mm_bsrli_si128(zmm1, 8).q
        var_40_1 = rax.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_14081d8c0(&var_30, r14_1 + 0x18 + rsi_1)
        void* rbx_3 = *(arg1 + 0x40) + rsi_1
        sub_14094ded0(&var_a8, rbx_3 + 0x28)
        sub_140597df0(&var_80, rbx_3 + 0x50)
        sub_140597df0(&var_70, rbx_3 + 0x60)
        result = *(rbx_3 + 0x70)
        rdi += 1
        rsi_1 += 0x78
        int32_t var_5c_1 = (*(rbx_3 + 0x74)).d
        char result_1 = result
        
        if (rdi s>= *(arg1 + 0x48))
            break
        
        zmm1 = var_40_1
    
    uint64_t rcx_6 = var_70
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    uint64_t rcx_7 = var_80
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int64_t var_90
    
    if (var_90 != 0)
        result = sub_140a74f90(var_90)
    
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            result = (**var_98)(var_98)
            int32_t temp3_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_98 + 8))(var_98, 1)
    
    int64_t rcx_11 = var_30
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t* rbx_5 = var_40_1:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t temp5_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rbx_5 + 8))(rbx_5, 1)

return result
