// 函数: sub_140d348b0
// 地址: 0x140d348b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
void* const rdi = arg1
int32_t zmm0 = (*rax).d
int32_t rbx = rax[1].d
*(arg2 + 0x20) = rax + 0xc
int32_t arg_c = rbx
int32_t rcx
rcx.b = rbx == 0

if ((rcx.b & sub_140b5b8a0(zmm0, 0)) != 0)
    rdi = nullptr

sub_140d3a3a0(arg3, rdi)
int64_t result = zmm0.q
*(arg3 + 8) = result
return result
