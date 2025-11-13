// 函数: sub_141826400
// 地址: 0x141826400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = *arg1
char* result = arg2
uint64_t rdi
rdi.b = 1
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int64_t* rdx = arg1[1]
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_f0 = 0
int64_t* rcx = *(rax_2 + 0x50)
int16_t* const rdx_1

if (rdx[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rdx

char rax_4 = (*(*rcx + 0x18))(rcx, rdx_1, &var_f0)
arg1[1][1].d
(*(**(*arg1 + 0x50) + 0x80))()

if (rax_4 == 0)
    var_f0 = 0
else
    int64_t* rax_7 = arg1[1]
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x21)
    
    if (&var_e8 != rax_7)
        int32_t rbx_1 = rax_7[1].d
        int64_t rdi_1 = *rax_7
        int64_t var_e0
        var_e0.d = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_e8, rbx_1, 0)
            memcpy(var_e8, rdi_1, rbx_1 * 2)
    
    void*** rax_8 = sub_14187ccd0(&var_e8)
    void*** rdi_2 = rax_8
    void* var_100 = nullptr
    int32_t i_2 = 0
    char rax_10 = (*rax_8)[1](rdi_2, &var_100)
    void* rsi_1
    
    if (rax_10 == 0)
        rsi_1 = var_100
    else
        void* rbx_2 = *arg1
        rsi_1 = var_100
        void* r13_3 = (sx.q(i_2) << 4) + rsi_1
        
        if (rsi_1 != r13_3)
            do
                int32_t r15_1 = *(rsi_1 + 8)
                int32_t r15_2
                
                if (r15_1 == 0)
                    r15_2 = 0
                else
                    r15_2 = r15_1 - 1
                
                int32_t r14 = *(rbx_2 + 0x10)
                int32_t rax_12
                
                if (r14 == 0)
                    rax_12 = r14 + 2
                
                if (r14 != 0 || r15_2 == 0xffffffff)
                    rax_12 = 1
                
                int64_t r12_1 = *(rbx_2 + 8)
                int32_t rcx_6 = rax_12 + r15_2
                int64_t var_110 = 0
                int32_t var_104
                
                if (r14 != 0 || rcx_6 != 0)
                    sub_1405a4c70(&var_110, r14 + rcx_6, 0)
                    memcpy(var_110, r12_1, r14 * 2)
                else
                    var_104 = 0
                
                sub_140a2cf70(&var_110, *rsi_1, r15_2)
                int32_t var_a8
                sub_140598750(&var_98, &var_a8)
                int64_t* var_a0
                *var_a0 = 0
                *var_a0 = var_110
                var_110 = 0
                var_a0[1].d = r14
                *(var_a0 + 0xc) = var_104
                int32_t var_108_1
                var_108_1.q = 0
                var_a0[2].d = 0xffffffff
                int32_t rax_16 = var_a0[1].d
                int16_t* rdx_10
                
                if (rax_16 == 0)
                    rdx_10 = &data_142d40450
                else
                    rdx_10 = *var_a0
                
                int32_t rcx_11 = rax_16 - 1
                
                if (rax_16 == 0)
                    rcx_11 = 0
                
                void var_c0
                sub_14059a6d0(&var_98, &var_c0, sub_1405969c0(rcx_11, rdx_10), var_a0, var_a8, 
                    nullptr)
                int64_t rcx_13 = var_110
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                rsi_1 += 0x10
            while (rsi_1 != r13_3)
            
            rdi_2 = rax_8
            result = arg2
            rsi_1 = var_100
    
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_14 = *rsi_1
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rsi_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi_1 = var_100
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    (**rdi_2)(rdi_2, 1)
    int64_t var_d8
    
    if (var_d8 != 0)
        sub_140a74f90(var_d8)
    
    int64_t rcx_18 = var_e8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    rdi = zx.q(rax_10)

*(result + 8) = var_f0
*result = rdi.b
sub_1409f5d90(&result[0x10], &var_98)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_23 = var_98

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_148)
return result
