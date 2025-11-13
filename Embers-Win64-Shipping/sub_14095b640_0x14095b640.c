// 函数: sub_14095b640
// 地址: 0x14095b640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
char result = -0x20
uint128_t zmm1 = zx.o(0)
int32_t var_6c = 0
int32_t r12 = 0
void** const var_58 = &data_142e259e0
int64_t var_40 = 0
int64_t var_38 = 0
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x41)
void** const var_b8 = &data_142e259e0

if (*(arg1 + 0x60) s> 0)
    int64_t rsi_1 = 0
    void* rdi_1 = *(arg1 + 0x58)
    uint64_t var_90
    uint64_t var_80
    uint128_t var_50_1
    
    while (true)
        int64_t rax = *(rsi_1 + rdi_1 + 0x10)
        void* rax_1 = *(rsi_1 + rdi_1 + 0x18)
        void* var_60_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        int64_t var_68_1
        var_68_1.o = zmm1
        int64_t* rbx_1 = _mm_bsrli_si128(zmm1, 8).q
        var_50_1 = rax.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        result = sub_14081d8c0(&var_40, rdi_1 + 0x20 + rsi_1)
        rdi_1 = *(arg1 + 0x58)
        int32_t i = 0
        
        if (*(rdi_1 + rsi_1 + 0x38) s> 0)
            do
                void* rbx_3 = *(rdi_1 + rsi_1 + 0x30) + r14
                sub_14094ded0(&var_b8, rbx_3)
                sub_140597df0(&var_90, rbx_3 + 0x28)
                sub_140597df0(&var_80, rbx_3 + 0x38)
                rdi_1 = *(arg1 + 0x58)
                i += 1
                result = *(rbx_3 + 0x48)
                r14 += 0x50
                int32_t var_6c_1 = (*(rbx_3 + 0x4c)).d
                char result_1 = result
            while (i s< *(rdi_1 + rsi_1 + 0x38))
            
            r14 = 0
        
        r12 += 1
        rsi_1 += 0x50
        
        if (r12 s>= *(arg1 + 0x60))
            break
        
        zmm1 = var_50_1
    
    uint64_t rcx_6 = var_80
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    uint64_t rcx_7 = var_90
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int64_t var_a0
    
    if (var_a0 != 0)
        result = sub_140a74f90(var_a0)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            result = (**var_a8)(var_a8)
            int32_t temp3_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_a8 + 8))(var_a8, 1)
    
    int64_t rcx_11 = var_40
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t* rbx_5 = var_50_1:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t temp5_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rbx_5 + 8))(rbx_5, 1)

return result
