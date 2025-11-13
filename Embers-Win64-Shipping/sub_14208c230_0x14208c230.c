// 函数: sub_14208c230
// 地址: 0x14208c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t var_38
sub_140b63b70(&arg_10, &var_38)
int32_t var_30
int32_t rbx = var_30
int64_t rdi = var_38
int16_t* r10 = nullptr
int16_t* var_48 = nullptr
int32_t var_40 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rdi, rbx * 2)
    r10 = var_48
    rbx = var_40
else
    int32_t var_3c_1 = 0

int16_t* rcx_3 = r10
void* rdx_3 = &r10[sx.q(rbx)]

if (r10 != rdx_3)
    do
        if (*rcx_3 == 0x2e)
            int32_t rcx_5 = ((rcx_3 - r10) s>> 1).d
            
            if (rcx_5 != 0xffffffff)
                int32_t rax_1 = rbx - 1
                
                if (rbx == 0)
                    rax_1 = 0
                
                int32_t r9_1
                
                if (rcx_5 s>= 0)
                    r9_1 = rax_1
                    
                    if (rcx_5 s< rax_1)
                        r9_1 = rcx_5
                else
                    r9_1 = 0
                
                int32_t rax_2 = rax_1 - r9_1
                int32_t rdi_1 = rbx - 1
                
                if (rbx == 0)
                    rdi_1 = 0
                
                int32_t rdi_2 = rdi_1 - r9_1
                
                if (rax_2 s>= 0)
                    if (rax_2 s< rdi_2)
                        rdi_2 = rax_2
                    
                    if (rdi_2 != 0)
                        int32_t rax_4 = rbx - rdi_2
                        
                        if (rax_4 != r9_1)
                            memmove(&r10[sx.q(r9_1)], &r10[sx.q(rdi_2 + r9_1)], (rax_4 - r9_1) * 2)
                            rbx = var_40
                        
                        int32_t var_40_1 = rbx - rdi_2
            
            break
        
        rcx_3 = &rcx_3[1]
    while (rcx_3 != rdx_3)

__builtin_memset(arg1, 0, 0x18)
rdx_3.b = 1

if (sub_140bacf70(&var_48, rdx_3.b, nullptr) != 0 && sub_140ba1330(&var_48, 0, nullptr, 1) != 0)
    void var_18
    int128_t var_28 = *sub_140a1dfc0(&var_38, &var_18)
    sub_140d2c760(arg1, &var_28)

int16_t* rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg1
