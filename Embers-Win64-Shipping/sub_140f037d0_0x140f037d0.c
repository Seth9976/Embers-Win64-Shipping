// 函数: sub_140f037d0
// 地址: 0x140f037d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rax_2 = *(arg3 + 0x20)
int64_t* var_128 = nullptr
int64_t var_120 = 0

if (rax_2 s> 0)
    sub_1405a5410(&var_128, rax_2)
    rax_2 = *(arg3 + 0x20)

void* r15 = *(arg3 + 0x18)
void* var_e8 = r15
void* r12_1 = sx.q(rax_2) * 0x70 + r15
void* var_d0 = r12_1

while (r15 != r12_1)
    int32_t rax_4 = *(r15 + 0x30)
    int64_t* rsi_1 = nullptr
    int64_t* var_118 = nullptr
    int32_t i_3 = 0
    int64_t var_110_1 = 0
    
    if (rax_4 s> 0)
        sub_1408e7380(&var_118, rax_4)
        rax_4 = *(r15 + 0x30)
        i_3 = var_110_1.d
        rsi_1 = var_118
    
    int64_t* rdi_1 = *(r15 + 0x28)
    void* rax_8 = &rdi_1[sx.q(rax_4) * 6]
    
    if (rdi_1 != rax_8)
        do
            int64_t* rcx_2 = *rdi_1
            int64_t var_f8 = 0
            int32_t var_f0_1 = 0
            (*(*rcx_2 + 0x78))(rcx_2, &var_f8)
            int64_t* rbx_1 = rdi_1[1]
            int64_t* rcx_3 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            uint64_t r12_2 = 0
            uint64_t var_108 = 0
            int64_t r13_1 = var_f8
            int32_t r13_2
            
            if (var_f0_1 != 0)
                sub_1405a4c70(&var_108, var_f0_1, 0)
                r12_2 = var_108
                memcpy(r12_2, r13_1, var_f0_1 * 2)
                int32_t var_fc
                r13_2 = var_fc
            else
                r13_2 = 0
            
            void var_b8
            sub_140ee2240(&var_b8, (*(*rcx_3 + 0x80))(rcx_3))
            int32_t var_50_1 = var_f0_1
            int64_t i_4 = sx.q(i_3)
            int32_t var_4c_1 = r13_2
            var_108 = 0
            i_3 = (i_4 + 1).d
            int32_t var_100_1
            var_100_1.q = 0
            var_110_1.d = i_3
            
            if (i_3 s> var_110_1:4.d)
                sub_1405fdd60(&var_118)
                i_3 = var_110_1.d
                rsi_1 = var_118
            
            sub_140ee2130(i_4 * 0x70 + rsi_1, &var_b8)
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            sub_140ee3ef0(&var_b8)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t rcx_14 = var_f8
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rdi_1 = &rdi_1[6]
        while (rdi_1 != rax_8)
        
        r15 = var_e8
        r12_1 = var_d0
    
    int64_t rbx_2 = sx.q(var_120.d)
    int32_t rax_14 = (rbx_2 + 1).d
    var_120.d = rax_14
    
    if (rax_14 s> var_120:4.d)
        sub_1405a4f90(&var_128)
    
    int64_t* rbx_4 = &var_128[rbx_2 * 2]
    *rbx_4 = 0
    rbx_4[1].d = i_3
    
    if (i_3 != 0)
        sub_140f15120(rbx_4, i_3, 0)
        void* rbx_5 = *rbx_4
        int32_t i
        
        do
            sub_140ee2240(rbx_5, rsi_1)
            sub_140596d10(rbx_5 + 0x60, &rsi_1[0xc])
            rbx_5 += 0x70
            rsi_1 = &rsi_1[0xe]
            i = i_3
            i_3 -= 1
        while (i != 1)
    else
        *(rbx_4 + 0xc) = 0
    
    sub_140ee3af0(&var_118)
    r15 += 0x70
    var_e8 = r15

int64_t* rcx_21 = *(arg1 + 0x20)
int64_t result = (*(*rcx_21 + 8))(rcx_21, &var_128, arg2)
int32_t i_2 = var_120.d
int64_t* rbx_6 = var_128

if (i_2 != 0)
    int32_t i_1
    
    do
        result = sub_140ee3af0(rbx_6)
        rbx_6 = &rbx_6[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_6 = var_128

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

__security_check_cookie(rax_1 ^ &var_148)
return result
