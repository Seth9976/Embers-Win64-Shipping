// 函数: sub_14102cc40
// 地址: 0x14102cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* rax_2 = sub_141021a40(arg4, arg2, *(arg1 + 0x138))

if (rax_2[0x18].b != 0)
    sub_141018b50(rax_2, *(arg1 + 0x138))

sub_141037e50(arg4, arg1)
int128_t zmm0 = *(arg3 + 0x18)
int32_t rbx_1 = 0
int64_t rax_3 = sx.q(*(arg2 + 0x20))

if (rax_3.d s> 0)
    int64_t* rdx_2 = *(arg2 + 0x18)
    int64_t r10_1 = zmm0:8.q
    int64_t rcx_3 = 0
    int64_t rdi_1 = zmm0.q
    
    do
        void* rax_4 = *rdx_2
        zmm0 = *(rax_4 + 0x18)
        
        if (rdi_1 == zmm0.q && r10_1 == zmm0:8.q && *(arg3 + 0x28) == *(rax_4 + 0x28))
            goto label_14102cd28
        
        rbx_1 += 1
        rcx_3 += 1
        rdx_2 = &rdx_2[1]
    while (rcx_3 s< rax_3)

rbx_1 = -1
label_14102cd28:
char var_d8 = *(arg2 + 0x790)
void var_a8
sub_141022cf0(rax_2, &var_a8, rbx_1, 0)
int32_t var_50 = arg6
int32_t var_4c = arg7
int32_t var_48 = 1
void* var_d0 = &var_a8
var_d8.q = rax_2
int64_t result = sub_14101cf50(arg1, arg5, arg2, rbx_1, var_d8)
__security_check_cookie(rax_1 ^ &var_f8)
return result
