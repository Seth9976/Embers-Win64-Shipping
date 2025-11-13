// 函数: sub_1421ab800
// 地址: 0x1421ab800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *arg1 + 0x1d0
(*(*rcx_1 + 0x30))(rcx_1)
int64_t* rcx_2 = *arg1
(*(*rcx_2 + 0x30))(rcx_2)
void* rdi = *arg1
*(rdi + 0x1f0) = arg1[2].d << 4
(*(*(rdi + 0x1d0) + 0x28))(rdi + 0x1d0)
int32_t rax_5 = arg1[2].d

if (rax_5 != 0)
    sub_1421aeb90(*(rdi + 0x1e0), &arg1[1])
    rax_5 = arg1[2].d

int64_t* rdi_1 = *arg1
rdi_1[4].d = rax_5
*(rdi_1 + 0x24) = (rax_5 + 7) & 0xfffffff8
(*(*rdi_1 + 0x28))(rdi_1)
int32_t r8 = arg1[2].d

if (r8 != 0)
    uint64_t r9_1
    
    if (data_1439c7a08 s> 1)
        r9_1 = zx.q(*(rdi_1 + 0x24))
    else
        r9_1 = zx.q(rdi_1[4].d)
    
    sub_1421aefc0(rdi_1[2], arg1[1], r8, r9_1)

void* rax_9 = *arg1
void* rdx_3 = arg1[3]
int64_t* rcx_7 = *(rax_9 + 0x28)
*(rax_9 + 0x28) = rdx_3

if (rdx_3 != 0)
    *(rdx_3 + 0x210) += 1

if (rcx_7 != 0)
    sub_1421beba0(rcx_7)

*(*arg1 + 0x30) = arg1[3] + 0x18
void* result = *arg1
int64_t* rcx_10 = *(result + 0x1f8)

if (rcx_10 == 0)
    return result

return (*(*rcx_10 + 0x28))(rcx_10)
