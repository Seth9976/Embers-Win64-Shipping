// 函数: sub_141f434c0
// 地址: 0x141f434c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f435c0(arg1)
void* rax = sub_140d209c0(arg1)

if (rax != 0)
    void* rax_1 = sub_142588130()
    void* rcx_1 = *(rax + 0x10)
    int64_t rdx_1 = sx.q(*(rax_1 + 0x38))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_1 + 0x30)
        arg1[0x4b] = *(rax + 0x258)

int64_t* i = arg1[0x49]
int64_t result = sx.q(arg1[0x4a].d)

for (void* rbp = &i[result * 3]; i != rbp; i = &i[3])
    int16_t* var_28
    sub_140596d10(&var_28, i)
    int16_t* rcx_5 = &data_142d40450
    int16_t* rdi_1 = var_28
    char r14_1 = i[2].b
    int32_t var_20
    
    if (var_20 != 0)
        rcx_5 = rdi_1
    
    result = sub_14230f1e0(rcx_5, nullptr)
    
    if (result.d != 0xffffffff)
        result = sub_14231dd00(&arg1[0x4b], result.d, r14_1)
    
    if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)

return result
