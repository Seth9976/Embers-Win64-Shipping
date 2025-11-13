// 函数: sub_140bb4af0
// 地址: 0x140bb4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5452 != 0)
    return &__return_addr

sub_140d11cb0()
int32_t var_90_1 = 1
int64_t* var_98 = nullptr
char var_78_1 = 0
void* var_88_1 = &data_143e1c060
char var_80_1 = 1
int32_t var_7c_1 = 1
sub_1407c3b60(&var_98)
int64_t* rbx_1 = var_98
sub_140b93ce0(rbx_1, arg1, 1, 1, 0)
rbx_1[3] = arg2
__builtin_memset(&rbx_1[4], 0, 0x14)

while (true)
    sub_140d23ed0(&var_98)
    
    if (var_90_1 s<= 0)
        break
    
    void* rax_3 = &var_98[sx.q(var_90_1 - 1) * 7]
    int64_t rcx_4 = sx.q(*(rax_3 + 0x30))
    int64_t rdx_2 = *(rax_3 + 0x20)
    int64_t* rsi_1 = *(rdx_2 + rcx_4 * 0x10 + 8)
    int64_t rax_6 = *(rdx_2 + rcx_4 * 0x10)
    int64_t* var_70_1 = rsi_1
    void* r13_1 = *rsi_1
    void* const rdi_1
    
    if (r13_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_7 = sub_140cddbd0()
        void* rdx_3 = *(r13_1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s> *(rdx_3 + 0x38))
            rdi_1 = nullptr
        else
            rdi_1 = r13_1
            
            if (*(*(rdx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                rdi_1 = nullptr
    
    void* rax_10
    int64_t rax_11
    void* rdx_4
    
    if (r13_1 != 0)
        rax_10 = sub_140cddb10()
        rdx_4 = *(r13_1 + 0x10)
        rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (r13_1 == 0 || rax_11.d s> *(rdx_4 + 0x38)
            || *(*(rdx_4 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
        r13_1 = nullptr
    
    if (rdi_1 == 0 && r13_1 == 0)
        continue
    
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    sub_140d22040(&var_98, &var_b8)
    int64_t* r14_1 = nullptr
    int64_t* var_c8 = nullptr
    int32_t i_1 = 0
    int32_t var_bc_1 = 0
    int32_t r12_1 = 0
    int64_t r15_1 = sx.q(var_b0_1 - 1)
    int128_t var_a8
    
    if (var_b0_1 - 1 s>= 0)
        int64_t temp1_1
        
        do
            void* rsi_2 = *(var_b8 + (r15_1 << 3))
            
            if (rsi_2 != 0 && ((zx.q(*(*(rsi_2 + 8) + 0x10)) u>> 0x14).b & 1) != 0)
                bool* rax_17 = j_sub_140a82f30(0x18)
                bool* rdi_2 = rax_17
                
                if (rax_17 == 0)
                    rdi_2 = nullptr
                else
                    bool cond:2_1 = data_143de5452 == 0
                    char var_60_1 = 0
                    *rax_17 = cond:2_1
                    rax_17[0x10] = 0
                    *(rax_17 + 8) = 0
                    
                    if (cond:2_1 != 0)
                        var_a8 = rsi_2.o
                        sub_140ce3410(rax_17, &var_a8)
                
                int64_t i_2 = sx.q(i_1)
                i_1 = (i_2 + 1).d
                
                if (i_1 s> r12_1)
                    sub_140638870(&var_c8)
                    r12_1 = var_bc_1
                    r14_1 = var_c8
                
                r14_1[i_2] = rdi_2
            
            temp1_1 = r15_1
            r15_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    void* rcx_14
    int128_t zmm0_1
    
    if (rdi_1 == 0)
        char var_40_1 = 0
        rcx_14 = r13_1 + 0x230
        zmm0_1 = rax_6.o
    else
        char var_50_1 = 0
        rcx_14 = rdi_1 + 0x28
        zmm0_1 = rax_6.o
    
    var_a8 = zmm0_1
    sub_140cd75b0(rcx_14, &var_a8)
    int32_t rdi_3 = i_1 - 1
    
    if (rdi_3 s>= 0)
        int64_t r15_3 = sx.q(rdi_3) << 3
        int64_t r12_3 = sx.q(rdi_3 + 1) << 3
        int32_t temp4_1
        
        do
            char* rsi_3 = *(r14_1 + r15_3)
            
            if (rsi_3 != 0)
                if (*rsi_3 != 0)
                    sub_140ce30e0(rsi_3)
                
                j_sub_140a74f90(rsi_3)
            
            int32_t rax_21 = i_1 - rdi_3
            
            if (rax_21 != 1)
                memmove(r14_1 + r15_3, r14_1 + r12_3, (rax_21 - 1) << 3)
            
            sub_1405c53d0(&var_c8)
            i_1 -= 1
            r12_3 -= 8
            r14_1 = var_c8
            r15_3 -= 8
            temp4_1 = rdi_3
            rdi_3 -= 1
        while (temp4_1 - 1 s>= 0)
        r12_1 = var_bc_1
    
    int64_t* rsi_4 = r14_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            char* rdi_4 = *rsi_4
            
            if (rdi_4 != 0)
                if (*rdi_4 != 0)
                    sub_140ce30e0(rdi_4)
                
                j_sub_140a74f90(rdi_4)
            
            rsi_4 = &rsi_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_c0_3 = 0
    
    if (r12_1 != 0)
        sub_140638c50(&var_c8, 0)
        r14_1 = var_c8
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int64_t rcx_23 = var_b8
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

return sub_1408d45e0(&var_98)
