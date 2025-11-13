// 函数: sub_140d334f0
// 地址: 0x140d334f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
int64_t* rax = *(entry_rdx + 0x20)
int32_t rcx = rax[1].d
int32_t zmm0 = (*rax).d
*(entry_rdx + 0x20) = rax + 0xc
int32_t arg_24 = rcx
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx_1 = zx.d(*(rax + 0xc))
*(entry_rdx + 0x20) = rax + 0xd
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx_1)](*(entry_rdx + 0x18), entry_zmm1, 0)
char* rax_4 = *(entry_rdx + 0x20)
int32_t* rdi = *(entry_rdx + 0x38)
void* arg_10 = nullptr
uint32_t rcx_3 = zx.d(*rax_4)
*(entry_rdx + 0x20) = &rax_4[1]
int64_t result = (&data_143e1cd60)[zx.q(rcx_3)](*(entry_rdx + 0x18), entry_rdx, &arg_10)

if (rdi != 0)
    sub_140d3a3a0(rdi, arg_10)
    result = zmm0.q
    *(rdi + 8) = result

return result
