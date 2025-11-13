// 函数: sub_141d4c2e0
// 地址: 0x141d4c2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
int64_t rbx = *sub_140b58170(&arg_20, "Media", 1)
j_sub_140b3db50()
int64_t* result = sub_140b407e0(&data_143de7d78, rbx)

if (result == 0)
    return result

int16_t* var_48 = nullptr
int32_t var_40 = 0
sub_1405947f0(&var_48, 8)
int32_t rbp = var_40 + 8

if (rbp s> 0)
    sub_140594770(&var_48)

int16_t* r14 = var_48
int16_t var_58 = 0x3f
sub_1405a7220(r14, 8, "Windows", 8, 0x3f)
int64_t* rax_2 = (*(*result + 0x58))(result)
int64_t* rsi = *rax_2
void* r12 = &rsi[sx.q(rax_2[1].d)]
int64_t* rbx_1

if (rsi == r12)
label_141d4c44f:
    rbx_1.b = 0
else
    while (true)
        int64_t* r15_1 = *rsi
        int64_t** rax_5 = (*(*r15_1 + 0x20))(r15_1)
        rbx_1 = *rax_5
        void* rdi_3 = &rbx_1[sx.q(rax_5[1].d) * 2]
        
        if (rbx_1 != rdi_3)
            while (true)
                int16_t* const rdx_2 = &data_142d40450
                
                if (rbp != 0)
                    rdx_2 = r14
                
                int16_t* const rcx_6
                
                if (rbx_1[1].d == 0)
                    rcx_6 = &data_142d40450
                else
                    rcx_6 = *rbx_1
                
                if (sub_140a54510(rcx_6, rdx_2) == 0)
                    break
                
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rdi_3)
                    goto label_141d4c446
            
            var_58.q = 0
            
            if ((**r15_1)(r15_1, arg2, arg3, 0, 0) != 0)
                rbx_1.b = 1
                break
        
    label_141d4c446:
        rsi = &rsi[1]
        
        if (rsi == r12)
            goto label_141d4c44f

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(rbx_1.b)
