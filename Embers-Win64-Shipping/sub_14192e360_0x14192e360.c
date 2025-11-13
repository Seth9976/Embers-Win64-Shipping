// 函数: sub_14192e360
// 地址: 0x14192e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t var_48 = 0
int64_t var_40 = 0
void* result = sub_14190d690(rcx, 1)
uint64_t* rcx_1 = arg1[1]
void* result_1 = result
rcx_1[1].d = 0

if (*(rcx_1 + 0xc) != 0)
    result = sub_140679c00(rcx_1, 0)

void* r10 = *arg1

if (result_1 != r10 + 0x14188)
    int128_t* rax = arg1[4]
    int64_t* r8_2 = *arg1[2]
    int32_t var_18_1 = rax[1].d
    int128_t* rax_2 = arg1[3]
    int128_t var_28 = *rax
    int128_t var_38 = *rax_2
    sub_141948d30(r10, result_1, r8_2, &var_38, &var_48, &var_28)
    int32_t* rcx_4 = arg1[3]
    int64_t* rcx_5 = arg1[1]
    int32_t rdi_2 = (rcx_4[3] - rcx_4[1]) * (rcx_4[2] - *rcx_4)
    int32_t rax_5 = rcx_5[1].d + rdi_2
    rcx_5[1].d = rax_5
    
    if (rax_5 s> *(rcx_5 + 0xc))
        sub_1406105e0(rcx_5)
    
    int64_t rbx_1 = var_48
    result = memcpy(*arg1[1], rbx_1, rdi_2 << 2)
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)

return result
